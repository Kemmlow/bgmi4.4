// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <limits>
#include <vector>

// External global dependencies
extern void* g_LocalPlayer;
extern void* g_PlayerController;
extern float screenWidth;
extern float screenHeight;
extern std::vector<class SDK::AActor*> getActors();
extern bool isObjectInvalid(void* obj);

namespace knoxy
{
    inline bool Hyper360 = true;
    inline bool BulletTrack = true;
    inline float BTRange = 600.0f;
    inline bool VisCheckPriority = true;
    inline bool TrueDamageFix = true;
}

// Global target bones fallback
inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"
};

/**
 * @brief Optimized Targeting Scanner with Visibility Prioritization.
 */
inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    SDK::ASTExtraPlayerCharacter *bestVisibleFOV = nullptr;
    SDK::ASTExtraPlayerCharacter *bestVisible360 = nullptr;

    float minScreenDistVisible = std::numeric_limits<float>::max();
    float minWorldDistVisible = std::numeric_limits<float>::max();

    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller || SDK::isObjectInvalid(character) || SDK::isObjectInvalid(controller)) return nullptr;

    auto actors = getActors();
    SDK::FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    SDK::FVector tempVisibleBonePosFOV;
    SDK::FVector tempVisibleBonePos360;

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor*)character || isObjectInvalid(actor)) continue;
        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass())) continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;
        if (enemy->bDying || enemy->TeamID == character->TeamID) continue;

        float worldDist = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDist > knoxy::BTRange) continue;

        bool hasVisibleBone = false;
        SDK::FVector foundBonePos;

        for (const char *boneName : TargetBonesFallback)
        {
            SDK::FVector currentBonePos = enemy->GetBonePos(boneName, {0, 0, 0});
            if (controller->LineOfSightTo(controller->PlayerCameraManager, currentBonePos, false))
            {
                foundBonePos = currentBonePos;
                hasVisibleBone = true;
                break;
            }
        }

        if (!hasVisibleBone) continue;

        if (worldDist < minWorldDistVisible) {
            minWorldDistVisible = worldDist;
            bestVisible360 = enemy;
            tempVisibleBonePos360 = foundBonePos;
        }

        SDK::FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(foundBonePos, true, &screenPos)) {
            float screenDist = SDK::FVector2D::Distance(crosshair, screenPos);
            if (screenDist < minScreenDistVisible) {
                minScreenDistVisible = screenDist;
                bestVisibleFOV = enemy;
                tempVisibleBonePosFOV = foundBonePos;
            }
        }
    }

    if (bestVisibleFOV) { outTargetPos = tempVisibleBonePosFOV; return bestVisibleFOV; }
    if (bestVisible360) { outTargetPos = tempVisibleBonePos360; return bestVisible360; }
    return nullptr;
}

namespace Hacks {
    /**
     * @brief Nuclear "True Damage" Fix.
     * Neutralizes all server-side verification flags and tolerances in the SDK.
     */
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character) || !character->LagCompensationComponent) return;

        auto lagComp = character->LagCompensationComponent;

        // FIX EXTREME ANGLES
        lagComp->ShootCornerMaxDotValue = -1.0f;
        lagComp->GrayWeaponAndShootAngle = 180.0f;

        // DISABLE VERIFICATION
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

        // MAXIMIZE TOLERANCE
        lagComp->TolerateMuzzleAndCharacterDisSquare = 999999;
        lagComp->TolerateShootPointDistanceSqured = 999999.0f;
        lagComp->TolerateMuzzleDistanceSqured = 999999.0f;
        lagComp->TolerateBulletImpactOffsetDistSqured = 999999.0f;
        lagComp->TolerateOwnerAndBulletDist = 999999.0f;
        lagComp->TolerateBulletDirCheckDistance = 999999.0f;
        lagComp->TolerateBulletDirOffsetSquared = 999999.0f;
        lagComp->TolerateShootRange = 999999.0f;

        lagComp->VictimShootVerify.ClientMuzzleHeightMax = 99999.0f;
        lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = 99999.0f;

        if (character->WeaponManagerComponent && !SDK::isObjectInvalid(character->WeaponManagerComponent)) {
            auto weapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && !SDK::isObjectInvalid(weapon) && weapon->ShootWeaponComponent) {
                auto normComp = (SDK::UNormalProjectileComponent*)weapon->ShootWeaponComponent;
                normComp->VerifyConfig.MaxShootPointTolerateDistanceOffset = 99999.0f;
                normComp->VerifyConfig.MaxImpactPointTolerateDistanceOffset = 99999.0f;
                normComp->VerifyConfig.bVerifyBlockVerify = false;
                normComp->VerifyConfig.bVerifyShootDir2D = false;
                normComp->VerifyConfig.bVerifyClientFlySpeed = false;

                if (normComp->ShootWeaponEntityComponent) {
                    normComp->ShootWeaponEntityComponent->BulletNumSingleShot = 0;
                }
            }
        }
    }
}

// Hook Declaration
inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

/**
 * @brief Fixed xShootBulletInner Hook with True Damage & Hyper Tracking.
 */
inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID)
{
    auto localCharacter = reinterpret_cast<SDK::ASTExtraBaseCharacter *>(g_LocalPlayer);
    if (!localCharacter || SDK::isObjectInvalid(localCharacter)) return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    if (knoxy::TrueDamageFix) {
        Hacks::ApplyNuclearTrueDamage(localCharacter);
    }

    const float activeBulletSpeed = 500000.0f;

    if (knoxy::BulletTrack)
    {
        SDK::FVector targetedBonePosition;
        SDK::ASTExtraPlayerCharacter *Target = GetKnoxyHyperTarget(targetedBonePosition);

        if (Target)
        {
            SDK::FVector targetVelocity = Target->GetVelocity();
            float distanceCm = localCharacter->GetDistanceTo(Target);
            float timeOfFlight = distanceCm / activeBulletSpeed;
            SDK::FVector predictedAimPos = targetedBonePosition + (targetVelocity * (timeOfFlight + 0.030f));
            SDK::FRotator hyperRotator = SDK::UKismetMathLibrary::FindLookAtRotation(StartLoc, predictedAimPos);

            return ShootBulletInner_Orig(Weapon, StartLoc, hyperRotator, ShootID);
        }
    }

    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
