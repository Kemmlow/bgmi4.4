// Credits : @knoxy_dev
#pragma once

#include <stdint.h>

namespace Hacks {

    /**
     * @brief Bullet Hack module (Proper Implementation).
     * Sets bullet speed to "light speed" and enforces zero gravity.
     *
     * Target Classes:
     * - UShootWeaponEntity (BulletFireSpeed @ 0x0560, BulletTemplate @ 0x0550)
     * - ASTExtraShootWeaponBulletBase (bLaunchWithGravity @ 0x05D0, MaxNoGravityRange @ 0x05D4, LaunchGravityScale @ 0x05D8)
     * - UProjectileMovementComponent (ProjectileGravityScale @ 0x01D4) via PMComp (0x05C8)
     */
    class BulletHack {
    public:
        static void Apply(uintptr_t baseCharacter) {
            if (!baseCharacter) return;

            // ASTExtraBaseCharacter -> WeaponManagerComponent (0x25C8)
            uintptr_t weaponManager = *(uintptr_t*)(baseCharacter + 0x25C8);
            if (!weaponManager) return;

            // UWeaponManagerComponent -> CurrentWeaponReplicated (0x05C8)
            uintptr_t currentWeapon = *(uintptr_t*)(weaponManager + 0x05C8);
            if (!currentWeapon) return;

            // ASTExtraShootWeapon -> ShootWeaponEntityComponent (0x0398)
            uintptr_t shootEntity = *(uintptr_t*)(currentWeapon + 0x0398);
            if (!shootEntity) return;

            // 1. Set Bullet Speed (Light Speed)
            // UShootWeaponEntity -> BulletFireSpeed (0x0560)
            *(float*)(shootEntity + 0x0560) = 500000.0f;

            // 2. Set Gravity to Zero (Proper Multi-layered Implementation)
            uintptr_t bulletTemplateClass = *(uintptr_t*)(shootEntity + 0x0550);
            if (bulletTemplateClass) {
                // Get Class Default Object (CDO)
                uintptr_t bulletCDO = *(uintptr_t*)(bulletTemplateClass + 0x48);
                if (bulletCDO) {
                    // a. Disable gravity toggle
                    // ASTExtraShootWeaponBulletBase -> bLaunchWithGravity (0x05D0)
                    *(bool*)(bulletCDO + 0x05D0) = false;

                    // b. Set launch gravity scale to 0
                    // ASTExtraShootWeaponBulletBase -> LaunchGravityScale (0x05D8)
                    *(float*)(bulletCDO + 0x05D8) = 0.0f;

                    // c. Maximize no-gravity range
                    // ASTExtraShootWeaponBulletBase -> MaxNoGravityRange (0x05D4)
                    *(int*)(bulletCDO + 0x05D4) = 9999999;

                    // d. Target the Movement Component within the Bullet
                    // ASTExtraShootWeaponBulletBase -> PMComp (0x05C8)
                    uintptr_t pmComp = *(uintptr_t*)(bulletCDO + 0x05C8);
                    if (pmComp) {
                        // UProjectileMovementComponent -> ProjectileGravityScale (0x01D4)
                        *(float*)(pmComp + 0x01D4) = 0.0f;
                    }
                }
            }
        }
    };

}
