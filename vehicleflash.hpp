// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

inline void ApplyVehicleFlash(SDK::ASTExtraBaseCharacter* character, bool vehicleflash)
{
    if (vehicleflash && character && !SDK::isObjectInvalid(character))
    {
        if (character->VehicleSeatIdx == 0 && character->bIsAttachedToVehicle)
        {
            auto vehicle = (SDK::ASTExtraVehicleBase*)character->CurrentVehicle;
            if (vehicle && !SDK::isObjectInvalid(vehicle))
            {
                vehicle->TorqueMultiplierforBoosting = 100.0f;
                vehicle->ExtraBoostFactor = 10.0f;

                auto protection = (SDK::UWheeledVehicleProtectionComponent*)vehicle->VehicleAntiCheat;
                if (protection && !SDK::isObjectInvalid(protection))
                {
                    protection->bEnablePreventFly = false;
                }
            }
        }
    }
}
