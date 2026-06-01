// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

inline void ApplyCrazyCar(SDK::ASTExtraBaseCharacter* character, bool carfly, bool instantbrake)
{
    if (character && !SDK::isObjectInvalid(character) && character->bIsAttachedToVehicle && character->VehicleSeatIdx == 0)
    {
        auto vehicle = (SDK::ASTExtraVehicleBase*)character->CurrentVehicle;
        if (vehicle && !SDK::isObjectInvalid(vehicle))
        {
            if (carfly)
            {
                SDK::FVector velocity = vehicle->GetVelocity();
                velocity.Z = 150.0f; // More aggressive lift
                vehicle->K2_SetActorLocation(vehicle->K2_GetActorLocation() + SDK::FVector(0, 0, 15.0f), false, nullptr, true);
            }

            if (instantbrake)
            {
                auto mesh = vehicle->Mesh;
                if (mesh && !SDK::isObjectInvalid(mesh))
                {
                    mesh->SetPhysicsLinearVelocity(SDK::FVector(0, 0, 0), false, "None");
                    mesh->SetPhysicsAngularVelocity(SDK::FVector(0, 0, 0), false, "None");
                }
            }
        }
    }
}
