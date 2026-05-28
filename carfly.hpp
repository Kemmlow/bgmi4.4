// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <math.h>

/**
 * @brief Updated CarFly module based on provided old logic.
 * Adapted for the latest SDK structures.
 */
inline void ApplyCarFly(SDK::ASTExtraBaseCharacter* localPlayer, SDK::ASTExtraPlayerController* localPlayerController) {
    if (!localPlayer || !localPlayerController || SDK::isObjectInvalid(localPlayer) || SDK::isObjectInvalid(localPlayerController)) return;

    // Use CurrentVehicle at offset 0x1A60
    if (localPlayer->CurrentVehicle && !SDK::isObjectInvalid(localPlayer->CurrentVehicle)) {
        auto currentVehicle = localPlayer->CurrentVehicle;

        // Retrieve RootComponent via K2_GetRootComponent() and cast to UPrimitiveComponent
        auto rootComponent = (SDK::UPrimitiveComponent*)currentVehicle->K2_GetRootComponent();

        if (rootComponent && !SDK::isObjectInvalid(rootComponent)) {
            // Check if vehicle is moving forward
            if (currentVehicle->GetMoveForwardRate() > 0) {
                if (localPlayerController->PlayerCameraManager && !SDK::isObjectInvalid(localPlayerController->PlayerCameraManager)) {

                    SDK::FVector velocity;
                    // Extract Yaw from CameraCache.POV.Rotation (POV @ 0x10, Rotation @ 0x18 within entries)
                    float yaw = localPlayerController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw;

                    // Standard M_PI is approx 3.1415926535f
                    const float PI = 3.1415926535f;
                    float radians = 2.0f * (yaw / 360.0f) * PI;

                    // Velocity calculation from provided logic
                    velocity.X = (130.0f * cosf(radians));
                    velocity.Y = (130.0f * sinf(radians));

                    float flightForce = 200.0f;
                    velocity.Z = flightForce;

                    // Apply velocity to RootComponent physics
                    rootComponent->SetAllPhysicsLinearVelocity(velocity, true);
                }
            }
        }
    }
}
