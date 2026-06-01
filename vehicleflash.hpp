#pragma once

#include "SDK.hpp"

inline void ApplyVehicleFlash(uintptr_t localPlayer, bool vehicleflash)
{
    if (localPlayer)
    {
        auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
        if (vehicleflash && character && !SDK::isObjectInvalid(character))
        {
            if (character->VehicleSeatIdx == 0 && character->bIsAttachedToVehicle)
            {
                auto vehicle = character->CurrentVehicle;
                if (vehicle && !SDK::isObjectInvalid(vehicle))
                {
                    auto movement = (SDK::USTExtraVehicleMovementComponent4W*)vehicle->VehicleMovement;
                    if (movement && !SDK::isObjectInvalid(movement))
                    {
                        float flashSpeed = 11111.0f; // 400 km/h approx in engine units
                        movement->MaxSpeed = flashSpeed;
                        movement->InitialMaxSpeed = flashSpeed;
                        movement->SpecialStateMaxSpeed = flashSpeed;

                        movement->TorqueRate = 999.0f;
                        movement->TorqueMultiplierforBoosting = 999.0f;
                        movement->SpeedUpImpulse = 99999.0f;

                        movement->bSpecialAntiCheatSpeed = false;
                        movement->EnableSpecialAntiCheatSpeed(false, 0.0f);
                    }

                    auto sync = vehicle->VehicleSyncComponent;
                    if (sync && !SDK::isObjectInvalid(sync))
                    {
                        sync->bVehicleNeedFlyVelCheck = false;
                    }

                    auto protection = (SDK::UWheeledVehicleProtectionComponent*)vehicle->VehicleAntiCheat;
                    if (protection && !SDK::isObjectInvalid(protection))
                    {
                        protection->bEnableProtection = false;
                        protection->bEnablePreventFly = false;
                    }
                }
            }
        }
    }
}
