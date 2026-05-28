// Credits : @knoxy_dev
#pragma once

#include <stdint.h>
#include <limits>
#include <vector>
#include <string>

// External dependencies assumed to be provided by the main hook environment
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

// Extracted bone hierarchy list ordered by targeting priority
inline const char *TargetBonesFallback[] = {
    "Head",
    "neck_01",
    "upperarm_r",
    "upperarm_l",
    "lowerarm_r",
    "lowerarm_l",
    "spine_03",
    "spine_02",
    "spine_01",
    "pelvis",
    "thigh_l",
    "thigh_r",
    "calf_l",
    "calf_r"};

/**
 * @brief Optimized Targeting Scanner with Visibility Prioritization.
 * @param outTargetPos Reference to store the world position of the winning bone.
 * @return Pointer to the best ASTExtraPlayerCharacter target.
 */
inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(FVector &outTargetPos)
{
    SDK::ASTExtraPlayerCharacter *bestVisibleFOV = nullptr;
    SDK::ASTExtraPlayerCharacter *bestVisible360 = nullptr;

    float minScreenDistVisible = std::numeric_limits<float>::max();
    float minWorldDistVisible = std::numeric_limits<float>::max();

    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller)
        return nullptr;

    auto actors = getActors();
    FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    FVector tempVisibleBonePosFOV;
    FVector tempVisibleBonePos360;

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor*)character || isObjectInvalid(actor))
            continue;

        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass()))
            continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;
        if (enemy->bDying || enemy->TeamID == character->TeamID)
            continue;

        float worldDist = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDist > knoxy::BTRange)
            continue;

        bool hasVisibleBone = false;
        FVector foundBonePos;

        // Perform dynamic bone scan for visibility
        for (const char *boneName : TargetBonesFallback)
        {
            FVector currentBonePos = enemy->GetBonePos(boneName, {0, 0, 0});

            // Evaluate line-of-sight against the camera manager
            if (controller->LineOfSightTo(controller->PlayerCameraManager, currentBonePos, false))
            {
                foundBonePos = currentBonePos;
                hasVisibleBone = true;
                break; // Stop at highest priority visible bone
            }
        }

        if (!hasVisibleBone)
            continue;

        // Priority 1: 360 Degree World Tracking (Distance based)
        if (worldDist < minWorldDistVisible)
        {
            minWorldDistVisible = worldDist;
            bestVisible360 = enemy;
            tempVisibleBonePos360 = foundBonePos;
        }

        // Priority 2: FOV Bias Tracking (Screen distance based)
        FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(foundBonePos, true, &screenPos))
        {
            float screenDist = FVector2D::Distance(crosshair, screenPos);
            if (screenDist < minScreenDistVisible)
            {
                minScreenDistVisible = screenDist;
                bestVisibleFOV = enemy;
                tempVisibleBonePosFOV = foundBonePos;
            }
        }
    }

    if (bestVisibleFOV)
    {
        outTargetPos = tempVisibleBonePosFOV;
        return bestVisibleFOV;
    }
    if (bestVisible360)
    {
        outTargetPos = tempVisibleBonePos360;
        return bestVisible360;
    }

    return nullptr;
}

namespace Hacks {
    /**
     * @brief Nuclear "True Damage" Fix.
     * Neutralizes all server-side verification flags and tolerances in the SDK.
     */
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter* character) {
        if (!character) return;

        // 1. Target ULagCompensationComponent (0x17E8)
        uintptr_t lagComp = *(uintptr_t*)((uintptr_t)character + 0x17E8);
        if (lagComp) {
            // FIX EXTREME ANGLES (Silent Aim Trajectory Support)
            *(float*)(lagComp + 0x0268) = -1.0f;  // ShootCornerMaxDotValue: Accept all dots (180deg)
            *(float*)(lagComp + 0x02C4) = 180.0f; // GrayWeaponAndShootAngle: Allow maximum snap

            // DISABLE ALL VERIFICATION TOGGLES
            *(bool*)(lagComp + 0x0187) = false; // bVerifyClientMuzzle
            *(bool*)(lagComp + 0x0188) = false; // bVerifyShootRange
            *(bool*)(lagComp + 0x0189) = false; // bVerifyShootDir
            *(bool*)(lagComp + 0x018A) = false; // bVerifyMuzzleImpactDir
            *(bool*)(lagComp + 0x018B) = false; // bVerifyMuzzleImpactDirIgnoreCrawl
            *(bool*)(lagComp + 0x018C) = false; // bVerifyShootPosInHistory
            *(bool*)(lagComp + 0x018D) = false; // bVerifyMuzzleLocus
            *(bool*)(lagComp + 0x018E) = false; // bVerifyShootPoint
            *(bool*)(lagComp + 0x018F) = false; // bVerifyBulletImpactOffset
            *(bool*)(lagComp + 0x0190) = false; // bVerifyClientHitAndBullet
            *(bool*)(lagComp + 0x0191) = false; // bVerifyCharacterImpactOffset
            *(bool*)(lagComp + 0x0192) = false; // bVerifyInParachuteShootPoint
            *(bool*)(lagComp + 0x0193) = false; // bVerifyShooterHead2PosIsBlock
            *(bool*)(lagComp + 0x0194) = false; // bVerifyClientHitCheck

            // MAXIMIZE TOLERANCE WINDOWS
            *(float*)(lagComp + 0x0198) = 999999.0f; // TolerateMuzzleAndCharacterDisSquare
            *(float*)(lagComp + 0x01A0) = 999999.0f; // TolerateShootPointDistanceSqured
            *(float*)(lagComp + 0x01B4) = 999999.0f; // TolerateMuzzleDistanceSqured
            *(float*)(lagComp + 0x01C4) = 999999.0f; // TolerateBulletImpactOffsetDistSqured
            *(float*)(lagComp + 0x01C8) = 999999.0f; // TolerateOwnerAndBulletDist
            *(float*)(lagComp + 0x01DC) = 999999.0f; // TolerateBulletDirCheckDistance
            *(float*)(lagComp + 0x01E0) = 999999.0f; // TolerateBulletDirOffsetSquared
            *(float*)(lagComp + 0x01EC) = 999999.0f; // TolerateShootRange

            // BYPASS VictimShootVerifyConfig
            uintptr_t victimVerify = lagComp + 0x01CC;
            *(float*)(victimVerify + 0x0000) = 99999.0f; // ClientMuzzleHeightMax
            *(float*)(victimVerify + 0x0004) = 99999.0f; // ClientPureMuzzleHeightMax
        }

        // 2. Target UNormalProjectileComponent -> VerifyConfig (0x0A40)
        if (character->WeaponManagerComponent) {
            auto weapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && weapon->ShootWeaponComponent) {
                uintptr_t shootComp = (uintptr_t)weapon->ShootWeaponComponent;
                uintptr_t verifyCfg = shootComp + 0x0A40;
                *(float*)(verifyCfg + 0x0000) = 99999.0f; // MaxShootPointTolerateDistanceOffset
                *(float*)(verifyCfg + 0x0008) = 99999.0f; // MaxImpactPointTolerateDistanceOffset
                *(bool*)(verifyCfg + 0x0010) = false;    // bVerifyBlockVerify
                *(bool*)(verifyCfg + 0x0018) = false;    // bVerifyBulletScDiff
                *(bool*)(verifyCfg + 0x0020) = false;    // bVerifyShootDir2D
                *(bool*)(verifyCfg + 0x0021) = false;    // bVerifyImpactPointDiff
                *(bool*)(verifyCfg + 0x0031) = false;    // bVerifyClientFlySpeed
                *(bool*)(verifyCfg + 0x0032) = false;    // bVerifyLauchTimeWithServer

                // Extra Entity level fix
                if (weapon->ShootWeaponComponent->ShootWeaponEntityComponent) {
                    weapon->ShootWeaponComponent->ShootWeaponEntityComponent->BulletNumSingleShot = 0; // Infinite per shot bypass
                }
            }
        }
    }
}

// Hook Declaration
inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, FVector StartLoc, FRotator StartRot, int ShootID);

/**
 * @brief Fixed xShootBulletInner Hook with True Damage & Hyper Tracking.
 */
inline void xShootBulletInner(uintptr_t Weapon, FVector StartLoc, FRotator StartRot, int ShootID)
{
    auto localCharacter = reinterpret_cast<SDK::ASTExtraBaseCharacter *>(g_LocalPlayer);
    if (!localCharacter) return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    // 1. APPLY NUCLEAR TRUE DAMAGE FIXES (Bypasses Extreme Angle / Fake Damage rejection)
    if (knoxy::TrueDamageFix) {
        Hacks::ApplyNuclearTrueDamage(localCharacter);
    }

    const float activeBulletSpeed = 500000.0f; // Light Speed

    // 2. ENFORCE BULLET MODS (Speed, Gravity)
    if (localCharacter->WeaponManagerComponent)
    {
        auto weapon = (SDK::ASTExtraShootWeapon*)localCharacter->WeaponManagerComponent->CurrentWeaponReplicated;
        if (weapon && weapon->ShootWeaponComponent && weapon->ShootWeaponComponent->ShootWeaponEntityComponent)
        {
            uintptr_t shootEntity = (uintptr_t)weapon->ShootWeaponComponent->ShootWeaponEntityComponent;
            *(float *)(shootEntity + 0x0560) = activeBulletSpeed;

            uintptr_t bulletTemplateClass = *(uintptr_t *)(shootEntity + 0x0550);
            if (bulletTemplateClass)
            {
                uintptr_t bulletCDO = *(uintptr_t *)(bulletTemplateClass + 0x48);
                if (bulletCDO)
                {
                    *(bool *)(bulletCDO + 0x05D0) = false;      // bLaunchWithGravity
                    *(float *)(bulletCDO + 0x05D8) = 0.0f;      // LaunchGravityScale
                    *(int *)(bulletCDO + 0x05D4) = 9999999;     // MaxNoGravityRange

                    uintptr_t pmComp = *(uintptr_t *)(bulletCDO + 0x05C8);
                    if (pmComp) *(float *)(pmComp + 0x01D4) = 0.0f; // ProjectileGravityScale
                }
            }
        }
    }

    // 3. SILENT BULLET TRACKING WITH PREDICTION
    if (knoxy::BulletTrack)
    {
        FVector targetedBonePosition;
        SDK::ASTExtraPlayerCharacter *Target = GetKnoxyHyperTarget(targetedBonePosition);

        if (Target)
        {
            FVector targetVelocity = Target->GetVelocity();
            float distanceCm = localCharacter->GetDistanceTo(Target);

            // Prediction Math for Instant Velocity
            float timeOfFlight = distanceCm / activeBulletSpeed;
            FVector predictedAimPos = targetedBonePosition + (targetVelocity * (timeOfFlight + 0.030f));

            // Calculate silent aim trajectory
            FRotator hyperRotator = SDK::UKismetMathLibrary::FindLookAtRotation(StartLoc, predictedAimPos);

            return ShootBulletInner_Orig(Weapon, StartLoc, hyperRotator, ShootID);
        }
    }

    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
