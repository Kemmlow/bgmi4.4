// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks
{
    /**
     * @brief Nuclear "True Damage" Fix.
     * Bypasses client-side and server-side verification by neutralizing all anti-cheat flags.
     * Effectively achieves zero fake damage by maximizing tolerances and disabling checks.
     */
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter *character)
    {
        if (!character)
            return;

        // 1. NEUTRALIZE LAG COMPENSATION & TRAJECTORY VERIFICATION
        if (character->LagCompensationComponent)
        {
            auto lagComp = character->LagCompensationComponent;

            // TRAJECTORY TOLERANCE (Silent Aim Trajectory Support)
            lagComp->ShootCornerMaxDotValue = -1.0f; // Allow 180 degree shots
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

            // MAXIMIZE TOLERANCE WINDOWS (Server-Side Bypass)
            float infinity = 999999.0f;
            lagComp->TolerateMuzzleAndCharacterDisSquare = (int)infinity;
            lagComp->TolerateShootPointDistanceSqured = infinity;
            lagComp->TolerateMuzzleDistanceSqured = infinity;
            lagComp->TolerateBulletImpactOffsetDistSqured = infinity;
            lagComp->TolerateOwnerAndBulletDist = infinity;
            lagComp->TolerateBulletDirCheckDistance = infinity;
            lagComp->TolerateBulletDirOffsetSquared = infinity;
            lagComp->TolerateShootRange = infinity;

            // BYPASS VictimShootVerifyConfig
            lagComp->VictimShootVerify.ClientMuzzleHeightMax = infinity;
            lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = infinity;
        }

        // 2. PROJECTILE & WEAPON LEVEL VERIFICATION BYPASS
        if (character->WeaponManagerComponent)
        {
            auto weapon = (SDK::ASTExtraShootWeapon *)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && weapon->ShootWeaponComponent)
            {
                auto normComp = (SDK::UNormalProjectileComponent *)weapon->ShootWeaponComponent;

                // Normal Projectile Verification Bypass
                normComp->VerifyConfig.MaxShootPointTolerateDistanceOffset = 99999.0f;
                normComp->VerifyConfig.MaxImpactPointTolerateDistanceOffset = 99999.0f;
                normComp->VerifyConfig.bVerifyBlockVerify = false;
                normComp->VerifyConfig.bVerifyShootDir2D = false;
                normComp->VerifyConfig.bVerifyClientFlySpeed = false;
                normComp->VerifyConfig.bVerifyBulletScDiff = false;
                normComp->VerifyConfig.bVerifyImpactPointDiff = false;

                // Sync Bullet Num to prevent mismatch
                if (normComp->ShootWeaponEntityComponent)
                {
                    // Force single shot data consistency
                    normComp->ShootWeaponEntityComponent->BulletNumSingleShot = 1;
                }
            }
        }
    }
}
