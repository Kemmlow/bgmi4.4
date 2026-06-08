// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

inline void ApplyVehicleHacks(SDK::ASTExtraBaseCharacter* character, bool carfly, bool instantbrake, bool vehicleflash)
{
    if (character && !SDK::isObjectInvalid(character) && character->bIsAttachedToVehicle && character->VehicleSeatIdx == 0)
    {
        auto vehicle = (SDK::ASTExtraVehicleBase*)character->CurrentVehicle;
        if (vehicle && !SDK::isObjectInvalid(vehicle))
        {
            if (carfly)
            {
                SDK::FVector velocity = vehicle->GetVelocity();
                velocity.Z = 150.0f;
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
            if (vehicleflash)
            {
                vehicle->TorqueMultiplierforBoosting = 100.0f;
                vehicle->ExtraBoostFactor = 10.0f;
            }
        }
    }
}
