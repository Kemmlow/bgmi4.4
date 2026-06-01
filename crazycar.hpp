#pragma once

#include "SDK.hpp"

inline void ApplyCrazyCar(uintptr_t localPlayer, bool crazycar, bool instantbrake)
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
                        // Direct member velocity zeroing (Works for all physics-based vehicles)
                        // This bypasses standard deceleration curves for an immediate stop
                        SDK::FVector zero(0, 0, 0);

                        // Set Actor Level Velocity
                        vehicle->K2_SetActorLocation(vehicle->K2_GetActorLocation(), false, nullptr, false);

                        // Stop all component-level physics movement
                        auto root = vehicle->RootComponent;
                        if (root && !isObjectInvalid(root))
                        {
                            // Some vehicles use SceneComponent/PrimitiveComponent for physics
                            auto prim = (SDK::UPrimitiveComponent*)root;
                            if (prim)
                            {
                                prim->SetPhysicsLinearVelocity(zero, false, SDK::FName("None"));
                                prim->SetPhysicsAngularVelocity(zero, false, SDK::FName("None"));
                            }
                        }

                        // Stop movement component cycles
                        auto movement = vehicle->VehicleMovement;
                        if (movement && !isObjectInvalid(movement))
                        {
                            movement->StopMovementImmediately();
                        }
                    }
                }
            }
        }
    }
}
