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
    inline float CustomBulletSpeed = 500000.0f;
}

inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"};

struct PredictionEngine
{
    static SDK::FVector Predict(SDK::ASTExtraBaseCharacter* lp, SDK::ASTExtraPlayerCharacter* tc, SDK::FVector bp)
    {
        SDK::FVector tv = tc->GetVelocity();
        SDK::FVector lv = lp->GetVelocity();
        SDK::FVector rv = tv - lv;
        float d = lp->GetDistanceTo(tc);
        float tof = d / knoxy::CustomBulletSpeed;
        uint8_t ps = (uint8_t)tc->ParachuteState;
        bool isP = (ps == 1 || ps == 2);
        float td = 0.033f;
        if (isP) td = 0.055f + (d / 80000.0f);
        else td = 0.033f + (tv.Size() / 1000.0f * 0.020f) + (d / 120000.0f);
        SDK::FVector pp = bp + (rv * (tof + td));
        if (isP) {
            pp.Z += (tv.Z * 0.085f);
            pp.Z += (0.5f * 981.0f * (tof * tof));
        }
        return pp;
    }
};

struct RotatorEngine
{
    static SDK::FRotator Solve(SDK::FVector ml, SDK::FVector tl)
    {
        SDK::FVector ad = tl - ml;
        float d3 = std::sqrt(ad.X * ad.X + ad.Y * ad.Y + ad.Z * ad.Z);
        if (d3 < 0.1f) return {0, 0, 0};
        SDK::FRotator fr;
        float pr = std::clamp(ad.Z / d3, -1.0f, 1.0f);
        fr.Pitch = std::asin(pr) * (180.0f / 3.14159265358979323846f);
        fr.Yaw = std::atan2(ad.Y, ad.X) * (180.0f / 3.14159265358979323846f);
        fr.Roll = 0;
        fr.Pitch = std::clamp(fr.Pitch, -89.0f, 89.0f);
        while (fr.Yaw > 180.0f) fr.Yaw -= 360.0f;
        while (fr.Yaw < -180.0f) fr.Yaw += 360.0f;
        return fr;
    }
};

inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &otp)
{
    auto c = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto ct = (SDK::ASTExtraPlayerController *)g_PlayerController;
    if (!c || !ct || !ct->PlayerCameraManager) return nullptr;
    SDK::ASTExtraPlayerCharacter *bf = nullptr, *bt = nullptr;
    float ms = knoxy::MaxFOVRadius, mw = std::numeric_limits<float>::max();
    SDK::FVector bp(0, 0, 0), tp(0, 0, 0);
    SDK::FVector2D sc(screenWidth / 2.0f, screenHeight / 2.0f);
    auto as = getActors();
    SDK::FVector cl = ct->PlayerCameraManager->GetCameraLocation();
    for (auto a : as) {
        if (!a || a == (SDK::AActor *)c || isObjectInvalid(a)) continue;
        if (!a->IsA(SDK::ASTExtraPlayerCharacter::StaticClass())) continue;
        auto e = (SDK::ASTExtraPlayerCharacter *)a;
        if (e->TeamID == c->TeamID) continue;
        float wd = c->GetDistanceTo(e) / 100.0f;
        if (wd > knoxy::BTRange) continue;
        bool v = false; SDK::FVector vbp(0, 0, 0);
        for (const char *bn : TargetBonesFallback) {
            SDK::FVector b = e->GetBonePos(bn, {0, 0, 0});
            if (ct->LineOfSightTo(e, cl, false)) { vbp = b; v = true; break; }
        }
        if (!v) continue;
        bool isP = ((uint8_t)e->ParachuteState == 1 || (uint8_t)e->ParachuteState == 2);
        SDK::FVector2D sp;
        if (ct->ProjectWorldLocationToScreen(vbp, true, &sp)) {
            float sd = SDK::FVector2D::Distance(sc, sp);
            if (sd < ms) { ms = sd; bf = e; bp = vbp; }
        }
        float tw = isP ? (wd * 0.25f) : (wd * 0.95f);
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
        c->bEnableSecurityCheck = false; c->bEnableSecurity = false;
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
            lc->TolerateOwnerAndBulletDist = inf; lc->TolerateBulletDirCheckDistance = inf;
            lc->TolerateBulletDirOffsetSquared = inf; lc->TolerateShootRange = inf;
            lc->TolerateHitDataDelayTime = inf; lc->TolerateHitDataDelayTimeShootCorner = inf;
            lc->TolerateFlyDis = inf; lc->VictimShootVerify.ClientMuzzleHeightMax = inf;
            lc->VictimShootVerify.ClientPureMuzzleHeightMax = inf;
        }
        if (c->WeaponManagerComponent) {
            auto w = (SDK::ASTExtraShootWeapon *)c->WeaponManagerComponent->CurrentWeaponReplicated;
            if (w) {
                w->bEnableAntiCheat = false;
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
        if (ct) {
            ct->bEnableSecurityCheck = false; ct->bEnableSecurity = false;
            if (ct->AntiCheatManagerComp) {
                auto ac = ct->AntiCheatManagerComp;
                ac->BulletDirError.PunishThresHold = 999999; ac->BulletDirError.bShouldPunish = false;
                ac->VsShootAngleInVaild.PunishThresHold = 999999; ac->VsShootAngleInVaild.bShouldPunish = false;
                ac->ShooterHead2PosBlock.PunishThresHold = 999999; ac->ShooterHead2PosBlock.bShouldPunish = false;
                ac->VsMuzzleAndTailPassWall.bShouldPunish = false; ac->VsMuzzleAndImpactPassWall.bShouldPunish = false;
                ac->ClientTimeSpeedAcc.bShouldPunish = false; ac->bOpenDetailDataCollect = false;
                ac->bShouldReportAntiCheat = false;
            }
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
            SDK::FVector pp = PredictionEngine::Predict(lc, t, tp);
            SDK::FRotator fr = RotatorEngine::Solve(SL, pp);
            return ShootBulletInner_Orig(W, SL, fr, SID);
        }
    }
    return ShootBulletInner_Orig(W, SL, SR, SID);
}
