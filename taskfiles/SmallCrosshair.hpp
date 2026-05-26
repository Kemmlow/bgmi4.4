// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

static void ApplySmallCrosshair(ASTExtraBaseCharacter* localPlayer) {
    if (localPlayer) {
        auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
        if (WeaponManagerComponent) {
            auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
            if ((uint8_t)propSlot >= 1 && (uint8_t)propSlot <= 3) {
                auto CurrentWeaponReplicated = (ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
                if (CurrentWeaponReplicated) {
                    auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                    if (ShootWeaponComponent) {
                        UShootWeaponEntity* ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                        if (ShootWeaponEntityComponent) {
                            ShootWeaponEntityComponent->GameDeviationFactor = 0.0f;
                        }
                    }
                }
            }
        }
    }
}
