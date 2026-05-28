// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Hyper-Fix Fast Reload Module.
     * Enforces instant reload speed and neutralizes all SDK-level reload anti-cheat.
     */
    inline void ApplyFastReload(SDK::ASTExtraBaseCharacter* character) {
        if (!character || !character->WeaponManagerComponent) return;

        // 1. NEUTRALIZE PLAYER ANTI-CHEAT MANAGER (0x23E0)
        // This component monitors timing discrepancies like "Fast Reload"
        if (character->AntiCheatManagerComp) {
            auto acm = character->AntiCheatManagerComp;

            // Neutralize ClientWeaponFastReload VerifySwitch (0x1B50)
            // Setting bShouldPunish to false and maximizing the threshold
            uintptr_t fastReloadVerify = (uintptr_t)acm + 0x1B50;
            *(bool*)(fastReloadVerify + 0x000D) = false; // bShouldPunish
            *(int*)(fastReloadVerify + 0x0008) = 999999; // PunishThresHold
            *(int*)(fastReloadVerify + 0x0010) = -999999; // VerifyFailedCnt reset
        }

        // 2. APPLY LIGHT-SPEED RELOAD TO CURRENT WEAPON
        auto currentWeapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
        if (currentWeapon && currentWeapon->ShootWeaponComponent && currentWeapon->ShootWeaponComponent->ShootWeaponEntityComponent) {
            auto entity = currentWeapon->ShootWeaponComponent->ShootWeaponEntityComponent;

            // Maximize Reload Rate (Animation Speed)
            entity->ReloadRate = 100.0f; // Light Speed

            // Minimize all timing-based duration variables to ensure instant logic
            entity->ReloadDurationStart = 0.0001f;
            entity->ReloadDurationLoop = 0.0001f;
            entity->ReloadDurationEnd = 0.0001f;
            entity->ReloadTime = 0.0001f;
            entity->ReloadTimeTactical = 0.0001f;
            entity->ReloadTimeMagOut = 0.0001f;
            entity->ReloadTimeMagIn = 0.0001f;
            entity->PostReloadTime = 0.0001f;

            // Global Bypass: Allow reload with no cost if enabled in SDK
            entity->ReloadWithNoCost = true;
        }
    }
}
