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
    inline bool VisCheckPriority = true;
    inline bool TrueDamageFix = true;
    inline float CustomBulletSpeed = 500000.0f;
}

inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"};

inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller || !controller->PlayerCameraManager)
        return nullptr;

    SDK::ASTExtraPlayerCharacter *bestFOVTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *best360Target = nullptr;

    float minScreenDist = knoxy::MaxFOVRadius;
    float minWeightDist = std::numeric_limits<float>::max();

    SDK::FVector bestFOVPos(0, 0, 0);
    SDK::FVector best360Pos(0, 0, 0);
    SDK::FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    auto actors = getActors();

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
        SDK::FVector foundBonePos(0, 0, 0);

        for (const char *boneName : TargetBonesFallback)
        {
            SDK::FVector bonePos = enemy->GetBonePos(boneName, {0, 0, 0});
            if (controller->LineOfSightTo(controller->PlayerCameraManager, bonePos, false))
            {
                foundBonePos = bonePos;
                isVisible = true;
                break;
            }
        }

        if (!isVisible)
            continue;

        uint8_t pState = (uint8_t)enemy->ParachuteState;
        bool isParachuting = (pState == 1 || pState == 2);

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

        float trackingWeight = isParachuting ? (worldDist * 0.45f) : worldDist;
        if (trackingWeight < minWeightDist)
        {
            minWeightDist = trackingWeight;
            best360Target = enemy;
            best360Pos = foundBonePos;
        }
    }

    if (bestFOVTarget)
    {
        outTargetPos = bestFOVPos;
        return bestFOVTarget;
    }

    if (knoxy::Hyper360 && best360Target)
    {
        outTargetPos = best360Pos;
        return best360Target;
    }

    return nullptr;
}

namespace Hacks
{
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *character)
    {
        if (!character || !character->LagCompensationComponent)
            return;

        auto lagComp = character->LagCompensationComponent;

        lagComp->ShootCornerMaxDotValue = -1.0f;
        lagComp->GrayWeaponAndShootAngle = 180.0f;

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

        float inf = 999999.0f;
        lagComp->TolerateMuzzleAndCharacterDisSquare = 999999;
        lagComp->TolerateShootPointDistanceSqured = inf;
        lagComp->TolerateMuzzleDistanceSqured = inf;
        lagComp->TolerateBulletImpactOffsetDistSqured = inf;
        lagComp->TolerateOwnerAndBulletDist = inf;
        lagComp->TolerateBulletDirCheckDistance = inf;
        lagComp->TolerateBulletDirOffsetSquared = inf;
        lagComp->TolerateShootRange = inf;
        lagComp->VictimShootVerify.ClientMuzzleHeightMax = inf;
        lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = inf;

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
            }
        }
    }
}

inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

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
        SDK::FVector targetedBonePosition(0, 0, 0);
        SDK::ASTExtraPlayerCharacter *target = GetKnoxyHyperTarget(targetedBonePosition);

        if (target)
        {
            SDK::FVector targetVel = target->GetVelocity();
            SDK::FVector localVel = localCharacter->GetVelocity();
            SDK::FVector relativeVel = targetVel - localVel;

            float distanceCm = localCharacter->GetDistanceTo(target);
            float timeOfFlight = distanceCm / knoxy::CustomBulletSpeed;

            uint8_t pState = (uint8_t)target->ParachuteState;
            bool isParachuting = (pState == 1 || pState == 2);
            float replicationDelay = isParachuting ? 0.048f : 0.033f;

            float totalPredictionTime = timeOfFlight + replicationDelay;
            SDK::FVector predictedAimPos = targetedBonePosition + (relativeVel * totalPredictionTime);

            if (isParachuting)
            {
                predictedAimPos.Z += (targetVel.Z * 0.065f);
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
