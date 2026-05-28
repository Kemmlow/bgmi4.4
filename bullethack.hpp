// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Bullet Hack (Speed & Gravity CDO modification).
     */
    inline void ApplyBulletHack(SDK::ASTExtraBaseCharacter* character) {
        if (!character || !character->WeaponManagerComponent) return;

        auto currentWeapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
        if (currentWeapon && currentWeapon->ShootWeaponComponent && currentWeapon->ShootWeaponComponent->ShootWeaponEntityComponent) {
            auto entity = currentWeapon->ShootWeaponComponent->ShootWeaponEntityComponent;

            // 1. Set Muzzle Velocity (Light Speed)
            entity->BulletFireSpeed = 500000.0f;

            // 2. Set Gravity to Zero via CDO
            if (entity->BulletTemplate) {
                auto bulletCDO = (SDK::ASTExtraShootWeaponBulletBase*)entity->BulletTemplate->ClassDefaultObject;
                if (bulletCDO) {
                    bulletCDO->bLaunchWithGravity = false;
                    bulletCDO->LaunchGravityScale = 0.0f;
                    bulletCDO->MaxNoGravityRange = 9999999;

                    if (bulletCDO->PMComp) {
                        bulletCDO->PMComp->ProjectileGravityScale = 0.0f;
                    }
                }
            }
        }
    }
}
