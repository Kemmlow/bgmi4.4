#pragma once

#include "SDK.hpp"
#include <limits>
#include <algorithm>
#include <vector>
#include <cmath>

namespace knoxy
{
    inline bool Hyper360 = true;
    inline bool BulletTrack = true;
    inline float BTRange = 600.0f;
    inline float MaxFOVRadius = 350.0f;
    inline bool TrueDamageFix = true;
}

inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"};

inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &otp)
{
    auto c = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto ct = (SDK::ASTExtraPlayerController *)g_PlayerController;
    if (!c || !ct || !c->WeaponManagerComponent) return nullptr;

    auto w = (SDK::ASTExtraShootWeapon *)c->WeaponManagerComponent->CurrentWeaponReplicated;
    if (!w) return nullptr;

    SDK::FVector ml = w->GetMuzzleTransform().Translation;
    SDK::ASTExtraPlayerCharacter *bf = nullptr, *bt = nullptr;
    float ms = knoxy::MaxFOVRadius, mw = std::numeric_limits<float>::max();
    SDK::FVector bp(0, 0, 0), tp(0, 0, 0);
    SDK::FVector2D sc(screenWidth / 2.0f, screenHeight / 2.0f);
    auto as = getActors();

    for (auto a : as) {
        if (!a || a == (SDK::AActor *)c || isObjectInvalid(a)) continue;
        if (!a->IsA(SDK::ASTExtraPlayerCharacter::StaticClass())) continue;

        auto e = (SDK::ASTExtraPlayerCharacter *)a;
        if (e->bDying || e->Health <= 0.0f || e->TeamID == c->TeamID) continue;

        float wd = c->GetDistanceTo(e) / 100.0f;
        if (wd > knoxy::BTRange) continue;

        // Visibility Check from Muzzle
        bool v = false; SDK::FVector vbp(0, 0, 0);
        for (const char *bn : TargetBonesFallback) {
            SDK::FVector b = e->GetBonePos(bn, {0, 0, 0});
            if (ct->LineOfSightTo(e, ml, false)) {
                vbp = b; v = true; break;
            }
        }
        if (!v) continue;

        bool isP = ((uint8_t)e->ParachuteState == 1 || (uint8_t)e->ParachuteState == 2);
        SDK::FVector2D sp;
        if (ct->ProjectWorldLocationToScreen(vbp, true, &sp)) {
            float sd = SDK::FVector2D::Distance(sc, sp);
            if (sd < ms) { ms = sd; bf = e; bp = vbp; }
        }
        float tw = isP ? (wd * 0.25f) : (wd * 0.85f);
        if (tw < mw) { mw = tw; bt = e; tp = vbp; }
    }
    if (bf) { otp = bp; return bf; }
    if (knoxy::Hyper360 && bt) { otp = tp; return bt; }
    return nullptr;
}

namespace Hacks
{
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *c)
    {
        if (!c) return;
        auto ct = (SDK::ASTExtraPlayerController*)g_PlayerController;
        *(bool*)((uintptr_t)c + 0x01D4) = false; *(bool*)((uintptr_t)c + 0x50A0) = false;
        if (c->LagCompensationComponent) {
            auto lc = c->LagCompensationComponent;
            lc->ShootCornerMaxDotValue = -1.0f; lc->GrayWeaponAndShootAngle = 180.0f;
            lc->bVerifyGunPos = false; lc->bVerifyClientMuzzle = false; lc->bVerifyShootRange = false;
            lc->bVerifyShootDir = false; lc->bVerifyMuzzleImpactDir = false; lc->bVerifyMuzzleImpactDirIgnoreCrawl = false;
            lc->bVerifyShootPosInHistory = false; lc->bVerifyMuzzleLocus = false; lc->bVerifyShootPoint = false;
            lc->bVerifyBulletImpactOffset = false; lc->bVerifyClientHitAndBullet = false; lc->bVerifyCharacterImpactOffset = false;
            lc->bVerifyInParachuteShootPoint = false; lc->bVerifyShooterHead2PosIsBlock = false; lc->bVerifyClientHitCheck = false;
            lc->bVerifyShootPointPassWall = false;
            float inf = 999999.0f;
            lc->TolerateMuzzleAndCharacterDisSquare = 999999; lc->TolerateShootPointDistanceSqured = inf;
            lc->TolerateMuzzleDistanceSqured = inf; lc->TolerateBulletImpactOffsetDistSqured = inf;
            lc->TolerateOwnerAndBulletDist = inf; lc->TolerateOwnerAndBulletDist = inf;
            lc->TolerateBulletDirCheckDistance = inf; lc->TolerateBulletDirOffsetSquared = inf; lc->TolerateShootRange = inf;
            lc->TolerateHitDataDelayTime = inf; lc->TolerateHitDataDelayTimeShootCorner = inf;
            lc->TolerateFlyDis = inf; lc->VictimShootVerify.ClientMuzzleHeightMax = inf;
            lc->VictimShootVerify.ClientPureMuzzleHeightMax = inf;
        }
        if (c->WeaponManagerComponent) {
            auto w = (SDK::ASTExtraShootWeapon *)c->WeaponManagerComponent->CurrentWeaponReplicated;
            if (w) {
                *(bool*)((uintptr_t)w + 0x1638) = false;
                if (w->ShootWeaponComponent) {
                    auto nc = (SDK::UNormalProjectileComponent *)w->ShootWeaponComponent;
                    nc->VerifyConfig.MaxShootPointTolerateDistanceOffset = 999999.0f;
                    nc->VerifyConfig.MaxImpactPointTolerateDistanceOffset = 999999.0f;
                    nc->VerifyConfig.bVerifyBlockVerify = false; nc->VerifyConfig.bVerifyBulletScDiff = false;
                    nc->VerifyConfig.bVerifyShootDir2D = false; nc->VerifyConfig.bVerifyImpactPointDiff = false;
                    nc->VerifyConfig.bVerifyWeaponFireInfoTimeForcePunish = false; nc->VerifyConfig.bVerifyClientFlySpeed = false;
                    nc->VerifyConfig.bVerifyLauchTimeWithServer = false; nc->VerifyConfig.bVerifyMuzzleBlockTail = false;
                    nc->VerifyConfig.bVerifyBulletPosReverseDirBlock = false;
                }
                if (w->AntiCheatComp) { uintptr_t ac = (uintptr_t)w->AntiCheatComp; *(bool*)(ac + 0x8AC) = false; }
                if (w->CachedBulletHitInfoUploadComponent) { uintptr_t u = (uintptr_t)w->CachedBulletHitInfoUploadComponent; *(bool*)(u + 0x23F0) = false; }
            }
        }
        if (ct && ct->AntiCheatManagerComp) {
            auto ac = ct->AntiCheatManagerComp;
            ac->BulletDirError.PunishThresHold = 999999; ac->BulletDirError.bShouldPunish = false;
            ac->VsShootAngleInVaild.PunishThresHold = 999999; ac->VsShootAngleInVaild.bShouldPunish = false;
            ac->ShooterHead2PosBlock.PunishThresHold = 999999; ac->ShooterHead2PosBlock.bShouldPunish = false;
            ac->VsMuzzleAndTailPassWall.bShouldPunish = false; ac->VsMuzzleAndImpactPassWall.bShouldPunish = false;
            ac->ClientTimeSpeedAcc.bShouldPunish = false; ac->bOpenDetailDataCollect = false;
            *(bool*)((uintptr_t)ac + 0x23F0) = false;
        }
    }
}

inline void (*ShootBulletInner_Orig)(uintptr_t W, SDK::FVector SL, SDK::FRotator SR, int SID);

inline void xShootBulletInner(uintptr_t W, SDK::FVector SL, SDK::FRotator SR, int SID)
{
    auto lc = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    if (!lc) return ShootBulletInner_Orig(W, SL, SR, SID);
    if (knoxy::TrueDamageFix) Hacks::ApplyNuclearTrueDamage(lc);
    if (knoxy::BulletTrack) {
        SDK::FVector tp(0, 0, 0);
        SDK::ASTExtraPlayerCharacter *t = GetKnoxyHyperTarget(tp);
        if (t) {
            SDK::FVector dir = tp - SL;
            float d3 = std::sqrt(dir.X * dir.X + dir.Y * dir.Y + dir.Z * dir.Z);
            if (d3 > 0.1f) {
                SDK::FRotator hr;
                float pr = std::clamp(dir.Z / d3, -1.0f, 1.0f);
                hr.Pitch = std::asin(pr) * (180.0f / 3.14159265358979323846f);
                hr.Yaw = std::atan2(dir.Y, dir.X) * (180.0f / 3.14159265358979323846f);
                hr.Roll = 0;
                hr.Pitch = std::clamp(hr.Pitch, -89.9f, 89.9f);
                while (hr.Yaw > 180.0f) hr.Yaw -= 360.0f;
                while (hr.Yaw < -180.0f) hr.Yaw += 360.0f;
                return ShootBulletInner_Orig(W, SL, hr, SID);
            }
        }
    }
    return ShootBulletInner_Orig(W, SL, SR, SID);
}
