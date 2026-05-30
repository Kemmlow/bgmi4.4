// Credits : @knoxy_dev
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
    static SDK::FVector Predict(SDK::ASTExtraBaseCharacter* local, SDK::ASTExtraPlayerCharacter* target, SDK::FVector targetPos)
    {
        SDK::FVector tVel = target->GetVelocity();
        SDK::FVector lVel = local->GetVelocity();
        SDK::FVector rVel = tVel - lVel;

        float dist = local->GetDistanceTo(target);
        float tof = dist / knoxy::CustomBulletSpeed;

        uint8_t ps = (uint8_t)target->ParachuteState;
        bool isP = (ps == 1 || ps == 2);

        float td = 0.033f;
        if (isP) {
            td = 0.045f + (dist / 100000.0f);
        } else {
            float speedFactor = tVel.Size() / 1000.0f;
            td = 0.030f + (speedFactor * 0.015f) + (dist / 150000.0f);
        }

        SDK::FVector pPos = targetPos + (rVel * (tof + td));

        if (isP) {
            pPos.Z += (tVel.Z * 0.065f);
            float dropComp = 0.5f * 981.0f * (tof * tof);
            pPos.Z += dropComp;
        }

        return pPos;
    }
};

struct RotatorEngine
{
    static SDK::FRotator Solve(SDK::FVector start, SDK::FVector target)
    {
        SDK::FVector dir = target - start;
        float dist3D = std::sqrt(dir.X * dir.X + dir.Y * dir.Y + dir.Z * dir.Z);

        SDK::FRotator rot;
        rot.Pitch = std::asin(dir.Z / dist3D) * (180.0f / 3.14159265358979323846f);
        rot.Yaw = std::atan2(dir.Y, dir.X) * (180.0f / 3.14159265358979323846f);
        rot.Roll = 0;

        rot.Pitch = std::clamp(rot.Pitch, -89.0f, 89.0f);
        while (rot.Yaw > 180.0f) rot.Yaw -= 360.0f;
        while (rot.Yaw < -180.0f) rot.Yaw += 360.0f;

        return rot;
    }
};

inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller || !controller->PlayerCameraManager)
        return nullptr;

    SDK::ASTExtraPlayerCharacter *bf = nullptr;
    SDK::ASTExtraPlayerCharacter *bt = nullptr;

    float ms = knoxy::MaxFOVRadius;
    float mw = std::numeric_limits<float>::max();

    SDK::FVector bp(0, 0, 0);
    SDK::FVector tp(0, 0, 0);
    SDK::FVector2D ch(screenWidth / 2.0f, screenHeight / 2.0f);

    auto actors = getActors();
    SDK::FVector vp = controller->PlayerCameraManager->GetCameraLocation();

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor *)character || isObjectInvalid(actor))
            continue;
        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass()))
            continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;
        if (enemy->bDying || enemy->Health <= 0.0f || enemy->TeamID == character->TeamID)
            continue;

        float d = character->GetDistanceTo(enemy) / 100.0f;
        if (d > knoxy::BTRange)
            continue;

        bool v = false;
        SDK::FVector fp(0, 0, 0);

        for (const char *bn : TargetBonesFallback)
        {
            SDK::FVector b = enemy->GetBonePos(bn, {0, 0, 0});
            if (controller->LineOfSightTo(enemy, vp, false))
            {
                fp = b;
                v = true;
                break;
            }
        }

        if (!v)
            continue;

        uint8_t ps = (uint8_t)enemy->ParachuteState;
        bool isP = (ps == 1 || ps == 2);

        SDK::FVector2D s;
        if (controller->ProjectWorldLocationToScreen(fp, true, &s))
        {
            float sd = SDK::FVector2D::Distance(ch, s);
            if (sd < ms)
            {
                ms = sd;
                bf = enemy;
                bp = fp;
            }
        }

        float tw = isP ? (d * 0.35f) : d;
        if (tw < mw)
        {
            mw = tw;
            bt = enemy;
            tp = fp;
        }
    }

    if (bf) { outTargetPos = bp; return bf; }
    if (knoxy::Hyper360 && bt) { outTargetPos = tp; return bt; }

    return nullptr;
}

namespace Hacks
{
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *character)
    {
        if (!character || !character->LagCompensationComponent)
            return;

        auto lc = character->LagCompensationComponent;

        lc->ShootCornerMaxDotValue = -1.0f;
        lc->GrayWeaponAndShootAngle = 180.0f;

        lc->bVerifyClientMuzzle = false;
        lc->bVerifyShootRange = false;
        lc->bVerifyShootDir = false;
        lc->bVerifyMuzzleImpactDir = false;
        lc->bVerifyMuzzleLocus = false;
        lc->bVerifyShootPoint = false;
        lc->bVerifyBulletImpactOffset = false;
        lc->bVerifyClientHitAndBullet = false;
        lc->bVerifyCharacterImpactOffset = false;
        lc->bVerifyClientHitCheck = false;

        float f = 999999.0f;
        lc->TolerateMuzzleAndCharacterDisSquare = 999999;
        lc->TolerateShootPointDistanceSqured = f;
        lc->TolerateMuzzleDistanceSqured = f;
        lc->TolerateBulletImpactOffsetDistSqured = f;
        lc->TolerateOwnerAndBulletDist = f;
        lc->TolerateBulletDirCheckDistance = f;
        lc->TolerateBulletDirOffsetSquared = f;
        lc->TolerateShootRange = f;
        lc->VictimShootVerify.ClientMuzzleHeightMax = f;
        lc->VictimShootVerify.ClientPureMuzzleHeightMax = f;

        if (character->WeaponManagerComponent)
        {
            auto w = (SDK::ASTExtraShootWeapon *)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (w && w->ShootWeaponComponent)
            {
                auto nc = (SDK::UNormalProjectileComponent *)w->ShootWeaponComponent;
                nc->VerifyConfig.MaxShootPointTolerateDistanceOffset = f;
                nc->VerifyConfig.MaxImpactPointTolerateDistanceOffset = f;
                nc->VerifyConfig.bVerifyBlockVerify = false;
                nc->VerifyConfig.bVerifyShootDir2D = false;
                nc->VerifyConfig.bVerifyClientFlySpeed = false;
                nc->VerifyConfig.bVerifyBulletScDiff = false;
                nc->VerifyConfig.bVerifyImpactPointDiff = false;
            }
        }
    }
}

inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID)
{
    auto lc = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    if (!lc)
        return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    if (knoxy::TrueDamageFix)
    {
        Hacks::ApplyNuclearTrueDamage(lc);
    }

    if (knoxy::BulletTrack)
    {
        SDK::FVector tp(0, 0, 0);
        SDK::ASTExtraPlayerCharacter *t = GetKnoxyHyperTarget(tp);

        if (t)
        {
            SDK::FVector pp = PredictionEngine::Predict(lc, t, tp);
            SDK::FRotator hr = RotatorEngine::Solve(StartLoc, pp);
            return ShootBulletInner_Orig(Weapon, StartLoc, hr, ShootID);
        }
    }

    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
