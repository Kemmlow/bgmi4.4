// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <limits>
#include <algorithm>
#include <vector>

namespace knoxy
{
    inline bool Hyper360 = true;
    inline bool BulletTrack = true;
    inline float BTRange = 600.0f;
    inline bool VisCheckPriority = true;
    inline bool TrueDamageFix = true;
    inline float CustomBulletSpeed = 80000.0f;
}

// Global target bones fallback
inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"};

/**
 * @brief Optimized Targeting Scanner with Visibility Prioritization & Parachute Support.
 */
inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller)
        return nullptr;

    SDK::ASTExtraPlayerCharacter *bestFOVTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *bestParachuteTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *bestDistanceTarget = nullptr;

    float minScreenDist = std::numeric_limits<float>::max();
    float minParachuteDist = std::numeric_limits<float>::max();
    float minWorldDist = std::numeric_limits<float>::max();

    SDK::FVector bestFOVPos, bestParachutePos, bestDistancePos;
    SDK::FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    auto actors = getActors();
    SDK::FVector viewPos = character->GetGunOwnerHeadLocation();

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor *)character || isObjectInvalid(actor))
            continue;
        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass()))
            continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;
        if (enemy->bDying || enemy->Health <= 0.0f || enemy->TeamID == character->TeamID)
            continue;

        float worldDist = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDist > knoxy::BTRange)
            continue;

        bool isVisible = false;
        SDK::FVector foundBonePos;

        for (const char *boneName : TargetBonesFallback)
        {
            SDK::FVector bonePos = enemy->GetBonePos(boneName, {0, 0, 0});
            if (controller->LineOfSightTo(enemy, viewPos, false))
            {
                foundBonePos = bonePos;
                isVisible = true;
                break;
            }
        }

        if (!isVisible)
            continue;

        // FOV Priority
        SDK::FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(foundBonePos, true, &screenPos))
        {
            float screenDist = SDK::FVector2D::Distance(crosshair, screenPos);
            if (screenDist < minScreenDist)
            {
                minScreenDist = screenDist;
                bestFOVTarget = enemy;
                bestFOVPos = foundBonePos;
            }
        }

        // Parachute Priority
        uint8_t pState = (uint8_t)enemy->ParachuteState;
        if (pState == 1 || pState == 2) // PS_FreeFall, PS_Opening
        {
            if (worldDist < minParachuteDist)
            {
                minParachuteDist = worldDist;
                bestParachuteTarget = enemy;
                bestParachutePos = foundBonePos;
            }
        }

        // Distance Fallback
        if (worldDist < minWorldDist)
        {
            minWorldDist = worldDist;
            bestDistanceTarget = enemy;
            bestDistancePos = foundBonePos;
        }
    }

    if (bestFOVTarget) { outTargetPos = bestFOVPos; return bestFOVTarget; }
    if (bestParachuteTarget) { outTargetPos = bestParachutePos; return bestParachuteTarget; }
    if (bestDistanceTarget) { outTargetPos = bestDistancePos; return bestDistanceTarget; }

    return nullptr;
}

namespace Hacks
{
    /**
     * @brief Nuclear "True Damage" Fix.
     * Neutralizes all server-side verification flags and tolerances in the SDK.
     */
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *character)
    {
        if (!character || !character->LagCompensationComponent)
            return;

        auto lagComp = character->LagCompensationComponent;

        // FIX EXTREME ANGLES (Silent Aim Trajectory Support)
        lagComp->ShootCornerMaxDotValue = -1.0f;
        lagComp->GrayWeaponAndShootAngle = 180.0f;

        // DISABLE ALL VERIFICATION TOGGLES
        lagComp->bVerifyClientMuzzle = false;
        lagComp->bVerifyShootRange = false;
        lagComp->bVerifyShootDir = false;
        lagComp->bVerifyMuzzleImpactDir = false;
        lagComp->bVerifyMuzzleLocus = false;
        lagComp->bVerifyShootPoint = false;
        lagComp->bVerifyBulletImpactOffset = false;
        lagComp->bVerifyClientHitAndBullet = false;
        lagComp->bVerifyCharacterImpactOffset = false;
        lagComp->bVerifyClientHitCheck = false;

        // MAXIMIZE TOLERANCE WINDOWS
        float inf = 999999.0f;
        lagComp->TolerateMuzzleAndCharacterDisSquare = (int)inf;
        lagComp->TolerateShootPointDistanceSqured = inf;
        lagComp->TolerateMuzzleDistanceSqured = inf;
        lagComp->TolerateBulletImpactOffsetDistSqured = inf;
        lagComp->TolerateOwnerAndBulletDist = inf;
        lagComp->TolerateBulletDirCheckDistance = inf;
        lagComp->TolerateBulletDirOffsetSquared = inf;
        lagComp->TolerateShootRange = inf;

        // BYPASS VictimShootVerifyConfig
        lagComp->VictimShootVerify.ClientMuzzleHeightMax = inf;
        lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = inf;

        // Weapon Level Fixes
        if (character->WeaponManagerComponent)
        {
            auto weapon = (SDK::ASTExtraShootWeapon *)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && weapon->ShootWeaponComponent)
            {
                auto normComp = (SDK::UNormalProjectileComponent *)weapon->ShootWeaponComponent;
                normComp->VerifyConfig.MaxShootPointTolerateDistanceOffset = inf;
                normComp->VerifyConfig.MaxImpactPointTolerateDistanceOffset = inf;
                normComp->VerifyConfig.bVerifyBlockVerify = false;
                normComp->VerifyConfig.bVerifyShootDir2D = false;
                normComp->VerifyConfig.bVerifyClientFlySpeed = false;
                normComp->VerifyConfig.bVerifyBulletScDiff = false;
                normComp->VerifyConfig.bVerifyImpactPointDiff = false;

                if (normComp->ShootWeaponEntityComponent)
                {
                    normComp->ShootWeaponEntityComponent->BulletNumSingleShot = 1;
                }
            }
        }
    }
}

// Hook Declaration
inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

/**
 * @brief Final Hyper ShootBulletInner Hook with True Damage & Predictive Skyshoot.
 */
inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID)
{
    auto localCharacter = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    if (!localCharacter)
        return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    if (knoxy::TrueDamageFix)
    {
        Hacks::ApplyNuclearTrueDamage(localCharacter);
    }

    if (knoxy::BulletTrack)
    {
        SDK::FVector targetedBonePosition;
        SDK::ASTExtraPlayerCharacter *target = GetKnoxyHyperTarget(targetedBonePosition);

        if (target)
        {
            SDK::FVector targetVelocity = target->GetVelocity();
            float distanceCm = localCharacter->GetDistanceTo(target);
            float timeOfFlight = distanceCm / knoxy::CustomBulletSpeed;

            SDK::FVector predictedAimPos = targetedBonePosition + (targetVelocity * timeOfFlight);

            // Skyshoot vertical lead
            uint8_t pState = (uint8_t)target->ParachuteState;
            if (pState == 1 || pState == 2)
            {
                predictedAimPos.Z += (targetVelocity.Z * 0.05f);
            }

            SDK::FRotator hyperRotator = SDK::UKismetMathLibrary::FindLookAtRotation(StartLoc, predictedAimPos);
            hyperRotator.Pitch = std::clamp(hyperRotator.Pitch, -89.9f, 89.9f);
            while (hyperRotator.Yaw > 180.0f) hyperRotator.Yaw -= 360.0f;
            while (hyperRotator.Yaw < -180.0f) hyperRotator.Yaw += 360.0f;

            return ShootBulletInner_Orig(Weapon, StartLoc, hyperRotator, ShootID);
        }
    }

    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
