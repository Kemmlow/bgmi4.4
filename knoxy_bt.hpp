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
    static SDK::FVector Predict(SDK::ASTExtraBaseCharacter* localPlayer, SDK::ASTExtraPlayerCharacter* targetCharacter, SDK::FVector targetBonePos)
    {
        SDK::FVector targetVelocity = targetCharacter->GetVelocity();
        SDK::FVector localVelocity = localPlayer->GetVelocity();
        SDK::FVector relativeVelocity = targetVelocity - localVelocity;

        float distance = localPlayer->GetDistanceTo(targetCharacter);
        float timeOfFlight = distance / knoxy::CustomBulletSpeed;

        uint8_t parachuteState = (uint8_t)targetCharacter->ParachuteState;
        bool isParachuting = (parachuteState == 1 || parachuteState == 2);

        float latencyDelay = 0.033f;
        if (isParachuting) {
            latencyDelay = 0.045f + (distance / 100000.0f);
        } else {
            float speedMagnitude = targetVelocity.Size();
            latencyDelay = 0.030f + (speedMagnitude / 1000.0f * 0.015f) + (distance / 150000.0f);
        }

        float totalExtrapolationTime = timeOfFlight + latencyDelay;
        SDK::FVector finalPredictedPos = targetBonePos + (relativeVelocity * totalExtrapolationTime);

        if (isParachuting) {
            finalPredictedPos.Z += (targetVelocity.Z * 0.065f);
            float gravityCompensation = 0.5f * 981.0f * (timeOfFlight * timeOfFlight);
            finalPredictedPos.Z += gravityCompensation;
        }

        return finalPredictedPos;
    }
};

struct RotatorEngine
{
    static SDK::FRotator Solve(SDK::FVector muzzleLocation, SDK::FVector targetLocation)
    {
        SDK::FVector aimDirection = targetLocation - muzzleLocation;
        float distance3D = std::sqrt(aimDirection.X * aimDirection.X + aimDirection.Y * aimDirection.Y + aimDirection.Z * aimDirection.Z);

        if (distance3D < 0.1f) return {0, 0, 0};

        SDK::FRotator finalRotation;
        float pitchRatio = aimDirection.Z / distance3D;
        pitchRatio = std::clamp(pitchRatio, -1.0f, 1.0f);

        finalRotation.Pitch = std::asin(pitchRatio) * (180.0f / 3.14159265358979323846f);
        finalRotation.Yaw = std::atan2(aimDirection.Y, aimDirection.X) * (180.0f / 3.14159265358979323846f);
        finalRotation.Roll = 0;

        finalRotation.Pitch = std::clamp(finalRotation.Pitch, -89.0f, 89.0f);
        while (finalRotation.Yaw > 180.0f) finalRotation.Yaw -= 360.0f;
        while (finalRotation.Yaw < -180.0f) finalRotation.Yaw += 360.0f;

        return finalRotation;
    }
};

inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller || !controller->PlayerCameraManager)
        return nullptr;

    SDK::ASTExtraPlayerCharacter *bestFOVTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *best360Target = nullptr;

    float minScreenDistance = knoxy::MaxFOVRadius;
    float minWeightedDistance = std::numeric_limits<float>::max();

    SDK::FVector bestFOVPosition(0, 0, 0);
    SDK::FVector best360Position(0, 0, 0);
    SDK::FVector2D screenCenter(screenWidth / 2.0f, screenHeight / 2.0f);

    auto actors = getActors();
    SDK::FVector cameraLocation = controller->PlayerCameraManager->GetCameraLocation();

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor *)character || isObjectInvalid(actor))
            continue;
        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass()))
            continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;
        if (enemy->bDying || enemy->Health <= 0.0f || enemy->TeamID == character->TeamID)
            continue;

        float worldDistance = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDistance > knoxy::BTRange)
            continue;

        bool isVisible = false;
        SDK::FVector visibleBonePos(0, 0, 0);

        for (const char *boneName : TargetBonesFallback)
        {
            SDK::FVector bonePos = enemy->GetBonePos(boneName, {0, 0, 0});
            if (controller->LineOfSightTo(enemy, cameraLocation, false))
            {
                visibleBonePos = bonePos;
                isVisible = true;
                break;
            }
        }

        if (!isVisible)
            continue;

        uint8_t parachuteState = (uint8_t)enemy->ParachuteState;
        bool isParachuting = (parachuteState == 1 || parachuteState == 2);

        SDK::FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(visibleBonePos, true, &screenPos))
        {
            float screenDist = SDK::FVector2D::Distance(screenCenter, screenPos);
            if (screenDist < minScreenDistance)
            {
                minScreenDistance = screenDist;
                bestFOVTarget = enemy;
                bestFOVPosition = visibleBonePos;
            }
        }

        float trackingWeight = isParachuting ? (worldDistance * 0.35f) : worldDistance;
        if (trackingWeight < minWeightedDistance)
        {
            minWeightedDistance = trackingWeight;
            best360Target = enemy;
            best360Position = visibleBonePos;
        }
    }

    if (bestFOVTarget) { outTargetPos = bestFOVPosition; return bestFOVTarget; }
    if (knoxy::Hyper360 && best360Target) { outTargetPos = best360Position; return best360Target; }

    return nullptr;
}

namespace Hacks
{
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *character)
    {
        if (!character) return;

        auto controller = (SDK::ASTExtraPlayerController*)g_PlayerController;

        if (character->LagCompensationComponent)
        {
            auto lagComp = character->LagCompensationComponent;
            lagComp->ShootCornerMaxDotValue = -1.0f;
            lagComp->GrayWeaponAndShootAngle = 180.0f;
            lagComp->bVerifyGunPos = false;
            lagComp->bVerifyClientMuzzle = false;
            lagComp->bVerifyShootRange = false;
            lagComp->bVerifyShootDir = false;
            lagComp->bVerifyMuzzleImpactDir = false;
            lagComp->bVerifyMuzzleImpactDirIgnoreCrawl = false;
            lagComp->bVerifyShootPosInHistory = false;
            lagComp->bVerifyMuzzleLocus = false;
            lagComp->bVerifyShootPoint = false;
            lagComp->bVerifyBulletImpactOffset = false;
            lagComp->bVerifyClientHitAndBullet = false;
            lagComp->bVerifyCharacterImpactOffset = false;
            lagComp->bVerifyInParachuteShootPoint = false;
            lagComp->bVerifyShooterHead2PosIsBlock = false;
            lagComp->bVerifyClientHitCheck = false;
            lagComp->bVerifyShootPointPassWall = false;

            float infinity = 999999.0f;
            lagComp->TolerateMuzzleAndCharacterDisSquare = 999999;
            lagComp->TolerateShootPointDistanceSqured = infinity;
            lagComp->TolerateMuzzleDistanceSqured = infinity;
            lagComp->TolerateBulletImpactOffsetDistSqured = infinity;
            lagComp->TolerateOwnerAndBulletDist = infinity;
            lagComp->TolerateBulletDirCheckDistance = infinity;
            lagComp->TolerateBulletDirOffsetSquared = infinity;
            lagComp->TolerateShootRange = infinity;
            lagComp->TolerateHitDataDelayTime = infinity;
            lagComp->TolerateHitDataDelayTimeShootCorner = infinity;
            lagComp->TolerateFlyDis = infinity;
            lagComp->VictimShootVerify.ClientMuzzleHeightMax = infinity;
            lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = infinity;
        }

        if (character->WeaponManagerComponent)
        {
            auto weapon = (SDK::ASTExtraShootWeapon *)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && weapon->ShootWeaponComponent)
            {
                auto normalProjectileComp = (SDK::UNormalProjectileComponent *)weapon->ShootWeaponComponent;
                normalProjectileComp->VerifyConfig.MaxShootPointTolerateDistanceOffset = 999999.0f;
                normalProjectileComp->VerifyConfig.MaxImpactPointTolerateDistanceOffset = 999999.0f;
                normalProjectileComp->VerifyConfig.bVerifyBlockVerify = false;
                normalProjectileComp->VerifyConfig.bVerifyShootDir2D = false;
                normalProjectileComp->VerifyConfig.bVerifyClientFlySpeed = false;
                normalProjectileComp->VerifyConfig.bVerifyBulletScDiff = false;
                normalProjectileComp->VerifyConfig.bVerifyImpactPointDiff = false;
                normalProjectileComp->VerifyConfig.bVerifyMuzzleBlockTail = false;
                normalProjectileComp->VerifyConfig.bVerifyBulletPosReverseDirBlock = false;
                normalProjectileComp->VerifyConfig.bVerifyLauchTimeWithServer = false;
            }
        }

        if (controller && controller->PlayerAntiCheatManager)
        {
            auto ac = controller->PlayerAntiCheatManager;
            ac->ClientWeaponFastReload.PunishThresHold = 999999.0f;
            ac->ClientWeaponFastReload.bShouldPunish = false;
        }
    }
}

inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID)
{
    auto localChar = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    if (!localChar)
        return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    if (knoxy::TrueDamageFix)
    {
        Hacks::ApplyNuclearTrueDamage(localChar);
    }

    if (knoxy::BulletTrack)
    {
        SDK::FVector targetPos(0, 0, 0);
        SDK::ASTExtraPlayerCharacter *target = GetKnoxyHyperTarget(targetPos);

        if (target)
        {
            SDK::FVector predictedPoint = PredictionEngine::Predict(localChar, target, targetPos);
            SDK::FRotator finalRotation = RotatorEngine::Solve(StartLoc, predictedPoint);
            return ShootBulletInner_Orig(Weapon, StartLoc, finalRotation, ShootID);
        }
    }

    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
