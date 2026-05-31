#pragma once

#include "SDK.hpp"

inline void ApplyCrazyCar(uintptr_t localPlayer, bool crazycar)
{
    if (localPlayer)
    {
        auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
        if (crazycar && character && !isObjectInvalid(character))
        {
            // Smart State Handling: Only work when we are the Driver (SeatIdx 0)
            if (character->VehicleSeatIdx == 0 && character->bIsAttachedToVehicle)
            {
                auto vehicle = character->CurrentVehicle;
                if (vehicle && !isObjectInvalid(vehicle))
                {
                    // 1. Hyper-Speed Injection via Direct Member Access
                    auto movement = (SDK::USTExtraVehicleMovementComponent4W*)vehicle->VehicleMovement;
                    if (movement && !isObjectInvalid(movement))
                    {
                        // Double the speed by maximizing all speed limits directly
                        movement->MaxSpeed = 99999.0f;
                        movement->InitialMaxSpeed = 99999.0f;
                        movement->SpecialStateMaxSpeed = 99999.0f;
                    }

                    // 2. Disable Verification Checks directly
                    auto sync = vehicle->VehicleSyncComponent;
                    if (sync && !isObjectInvalid(sync))
                    {
                        sync->bVehicleNeedFlyVelCheck = false;
                    }

                    // 3. Neutralize Protection via SDK Component Access
                    auto protection = (SDK::UWheeledVehicleProtectionComponent*)vehicle->VehicleAntiCheat;
                    if (protection && !isObjectInvalid(protection))
                    {
                        protection->bEnableProtection = false;
                        protection->bEnablePreventFly = false;
                    }

                    // 4. Smooth State Sync
                    vehicle->bRepPhysicsSleep = true;
                }
            }
        }
    }
}
