// Credits : @knoxy_dev
#pragma once

#include "knoxy_targeting.hpp"
#include "knoxy_truedamage.hpp"

namespace knoxy
{
    // Original function pointer for hooking
    inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID) = nullptr;

    /**
     * @brief Fixed ShootBulletInner Hook with True Damage & Hyper Tracking.
     * Incorporates Skyshoot logic for parachuting players and prediction.
     */
    inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID)
    {
        auto localCharacter = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
        if (!localCharacter)
            return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

        // Apply Nuclear Damage Fix before every shot
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
                // Prediction Logic
                SDK::FVector targetVelocity = target->GetVelocity();
                float distanceCm = localCharacter->GetDistanceTo(target);

                // Use user-defined bullet speed (80,000)
                float travelTime = distanceCm / knoxy::CustomBulletSpeed;

                // Base prediction
                SDK::FVector predictedAimPos = targetedBonePosition + (targetVelocity * travelTime);

                // Skyshoot Enhancement: Apply additional lead for parachuting players
                // PS_FreeFall = 1, PS_Opening = 2
                uint8_t pState = (uint8_t)target->ParachuteState;
                if (pState == 1 || pState == 2)
                {
                    // Add slight vertical compensation for parachute drag/descent
                    predictedAimPos.Z += (targetVelocity.Z * 0.05f);
                }

                // Calculate final rotation
                SDK::FRotator hyperRotator = SDK::UKismetMathLibrary::FindLookAtRotation(StartLoc, predictedAimPos);

                // Hyper-Advanced Boundary Check & Clamping
                hyperRotator.Pitch = std::clamp(hyperRotator.Pitch, -89.9f, 89.9f);
                while (hyperRotator.Yaw > 180.0f) hyperRotator.Yaw -= 360.0f;
                while (hyperRotator.Yaw < -180.0f) hyperRotator.Yaw += 360.0f;

                // Return with the hyper-optimized trajectory
                return ShootBulletInner_Orig(Weapon, StartLoc, hyperRotator, ShootID);
            }
        }

        // Fallback to original trajectory if no target or BT disabled
        return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
    }
}
