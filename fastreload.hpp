// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Refactored Fast Reload Module.
     * Enforces instant reload speed and neutralizes SDK-level reload anti-cheat.
     * Includes stability checks to prevent crashes during loading screens.
     */
    inline void ApplyFastReload(SDK::ASTExtraBaseCharacter* character) {
        // --- STABILITY CHECK ---
        if (!character || SDK::isObjectInvalid(character)) return;

        // 1. NEUTRALIZE PLAYER ANTI-CHEAT MANAGER
        if (character->AntiCheatManagerComp && !SDK::isObjectInvalid(character->AntiCheatManagerComp)) {
            auto acm = character->AntiCheatManagerComp;

            // Neutralize ClientWeaponFastReload VerifySwitch (0x1B50)
            uintptr_t fastReloadVerify = (uintptr_t)acm + 0x1B50;
            *(bool*)(fastReloadVerify + 0x000D) = false; // bShouldPunish
            *(int*)(fastReloadVerify + 0x0008) = 999999; // PunishThresHold
        }

        // 2. APPLY LIGHT-SPEED RELOAD
        if (character->WeaponManagerComponent && !SDK::isObjectInvalid(character->WeaponManagerComponent)) {
            auto weapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;

            if (weapon && !SDK::isObjectInvalid(weapon) && weapon->ShootWeaponComponent) {
                auto entity = weapon->ShootWeaponComponent->ShootWeaponEntityComponent;

                if (entity && !SDK::isObjectInvalid(entity)) {
                    // Maximize local animation rate
                    entity->ReloadRate = 100.0f;

                    // Minimize all timing-based duration variables
                    entity->ReloadDurationStart = 0.001f;
                    entity->ReloadDurationLoop = 0.001f;
                    entity->ReloadDurationEnd = 0.001f;
                    entity->ReloadTime = 0.001f;
                    entity->ReloadTimeTactical = 0.001f;
                    entity->ReloadTimeMagOut = 0.001f;
                    entity->ReloadTimeMagIn = 0.001f;
                    entity->PostReloadTime = 0.001f;

                    // Global Bypass: Allow reload with no cost if supported
                    entity->ReloadWithNoCost = true;
                }
            }
        }
    }
}
