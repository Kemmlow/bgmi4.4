#pragma once

#include "SDK.hpp"

inline void ApplyCrazyCar(uintptr_t localPlayer, bool crazycar)
{
    if (localPlayer)
    {
        auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
        if (crazycar && character && !isObjectInvalid(character))
        {
            // Only apply when LO is the Driver (Index 0) and actually in the vehicle
            if (character->VehicleSeatIdx == 0 && character->bIsAttachedToVehicle) // Offset 0x2E18, 0x2E20
            {
                auto vehicle = character->CurrentVehicle; // Offset 0x1A60
                if (vehicle && !isObjectInvalid(vehicle))
                {
                    // 1. God-Level Speed Injection
                    auto movement = (SDK::USTExtraVehicleMovementComponent4W*)vehicle->VehicleMovement; // Offset 0x1E10
                    if (movement && !isObjectInvalid(movement))
                    {
                        // Overwrite all speed ceilings to allow 2x+ velocity
                        movement->MaxSpeed = 99999.0f;        // Offset 0x01BC
                        movement->InitialMaxSpeed = 99999.0f; // Offset 0x0854
                        movement->SpecialStateMaxSpeed = 99999.0f; // Offset 0x0C44
                    }

                    // 2. Gag Vehicle Verification
                    auto sync = vehicle->VehicleSyncComponent; // Offset 0x0C10
                    if (sync && !isObjectInvalid(sync))
                    {
                        sync->bVehicleNeedFlyVelCheck = false; // Offset 0x02B8
                    }

                    // 3. Absolute Anti-Cheat Neutralization
                    uintptr_t ac = *(uintptr_t*)((uintptr_t)vehicle + 0x0C90); // VehicleAntiCheat offset
                    if (ac)
                    {
                        *(bool*)(ac + 0x0270) = false; // bEnableProtection
                        *(bool*)(ac + 0x0490) = false; // bEnablePreventFly
                    }

                    // 4. Force Rep-Physics Sleep to prevent rubberbanding
                    *(bool*)((uintptr_t)vehicle + 0x1B41) = true; // bRepPhysicsSleep
                }
            }
        }
    }
}
