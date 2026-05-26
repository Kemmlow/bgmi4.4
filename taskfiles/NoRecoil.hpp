// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

static void ApplyNoRecoil(ASTExtraBaseCharacter* localPlayer) {
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
                            ShootWeaponEntityComponent->RecoilKickADS = 0.0f;
                            ShootWeaponEntityComponent->ShotGunCenterPerc = 0.0f;
                            ShootWeaponEntityComponent->ShotGunVerticalSpread = 0.0f;
                            ShootWeaponEntityComponent->ShotGunHorizontalSpread = 0.0f;
                            ShootWeaponEntityComponent->AccessoriesVRecoilFactor = 0.0f;
                            ShootWeaponEntityComponent->AccessoriesHRecoilFactor = 0.0f;
                            ShootWeaponEntityComponent->AccessoriesRecoveryFactor = 0.0f;
                        }
                    }
                }
            }
        }
    }
}
