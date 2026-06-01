#pragma once

#include "SDK.hpp"

inline void ApplyCrazyCar(uintptr_t localPlayer, bool crazycar, bool instantbrake, bool carfly)
{
    if (localPlayer)
    {
        auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
        if (character && !isObjectInvalid(character))
        {
            // Only work when we are the Driver (SeatIdx 0)
            if (character->VehicleSeatIdx == 0 && character->bIsAttachedToVehicle)
            {
                auto vehicle = character->CurrentVehicle;
                if (vehicle && !isObjectInvalid(vehicle))
                {
                    auto root = vehicle->RootComponent;
                    auto prim = (SDK::UPrimitiveComponent*)root;

                    // 1. Crazy Car: Hyper-Speed Logic
                    if (crazycar)
                    {
                        auto movement = (SDK::USTExtraVehicleMovementComponent4W*)vehicle->VehicleMovement;
                        if (movement && !isObjectInvalid(movement))
                        {
                            movement->MaxSpeed = 99999.0f;
                            movement->InitialMaxSpeed = 99999.0f;
                            movement->SpecialStateMaxSpeed = 99999.0f;
                        }

                        auto sync = vehicle->VehicleSyncComponent;
                        if (sync && !isObjectInvalid(sync))
                        {
                            sync->bVehicleNeedFlyVelCheck = false;
                        }

                        auto protection = (SDK::UWheeledVehicleProtectionComponent*)vehicle->VehicleAntiCheat;
                        if (protection && !isObjectInvalid(protection))
                        {
                            protection->bEnableProtection = false;
                            protection->bEnablePreventFly = false;
                        }
                    }

                    // 2. God-Level Instant Brake
                    if (instantbrake)
                    {
                        SDK::FVector zero(0, 0, 0);
                        vehicle->K2_SetActorLocation(vehicle->K2_GetActorLocation(), false, nullptr, false);

                        if (prim && !isObjectInvalid(prim))
                        {
                            prim->SetPhysicsLinearVelocity(zero, false, SDK::FName("None"));
                            prim->SetPhysicsAngularVelocity(zero, false, SDK::FName("None"));
                        }

                        auto movement = vehicle->VehicleMovement;
                        if (movement && !isObjectInvalid(movement))
                        {
                            movement->StopMovementImmediately();
                        }
                    }

                    // 3. God-Level CarFly: Ascend 1m/s and Defy Gravity
                    if (carfly)
                    {
                        if (prim && !isObjectInvalid(prim))
                        {
                            // Ascend: 100.0f cm/s = 1m/s
                            // Preserve current XY momentum but force Z ascend
                            SDK::FVector currentVel = prim->GetPhysicsLinearVelocity(SDK::FName("None"));
                            SDK::FVector flyVel(currentVel.X, currentVel.Y, 100.0f);

                            // Force Injection
                            prim->SetPhysicsLinearVelocity(flyVel, false, SDK::FName("None"));

                            // Defy Gravity
                            prim->SetEnableGravity(false);

                            // Disable standard server-side velocity verification for flying
                            auto sync = vehicle->VehicleSyncComponent;
                            if (sync && !isObjectInvalid(sync))
                            {
                                sync->bVehicleNeedFlyVelCheck = false;
                            }
                        }
                    }
                    else if (prim && !isObjectInvalid(prim))
                    {
                        // Restore gravity if CarFly is disabled
                        prim->SetEnableGravity(true);
                    }
                }
            }
        }
    }
}
