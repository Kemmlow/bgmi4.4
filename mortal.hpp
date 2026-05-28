// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Immortality (Mortal) Hack Module.
     * Renders the player impervious to bullets, grenades, falls, and vehicle impacts.
     * Uses a multi-layered bypass to neutralize server-side damage calculations.
     */
    inline void ApplyImmortality(SDK::ASTExtraBaseCharacter* localPlayer) {
        // --- STABILITY & VALIDATION ---
        if (!localPlayer || SDK::isObjectInvalid(localPlayer)) return;

        // --- 1. DAMAGE SCALE NEUTRALIZATION ---
        // Force all incoming damage multipliers to zero in the character logic
        localPlayer->TakeDamageScale = 0.0f;     // 0x1694
        localPlayer->DamageScale = 0.0f;         // 0x1698
        localPlayer->RadialDamageScale = 0.0f;   // 0x18C8 (Explosives/Grenades)

        // --- 2. ENVIRONMENTAL DAMAGE BYPASS ---
        // Fall damage neutralization
        localPlayer->VerticalFallingDamageCoefficient = 0.0f; // 0x2CDC
        localPlayer->LandingDamageMinHeight = 999999.0f;      // 0x2014
        localPlayer->PrachuteLandedFallingDamageMax = 0.0f;   // 0x2CE4

        // High velocity vehicle exit damage
        localPlayer->LastVehicleDamageCD = 99999.0f; // 0x2E10
        localPlayer->VehicleLandDamageInterval = 99999.0f; // 0x2F9C

        // --- 3. ACTOR LEVEL INVULNERABILITY ---
        // Neutralize the bCanBeDamaged bitfield in AActor (0x01DC)
        // Bit 1 is bCanBeDamaged in this SDK version
        uint8_t* actorFlags = (uint8_t*)((uintptr_t)localPlayer + 0x01DC);
        *actorFlags &= ~(1 << 1);

        // --- 4. SERVER-SIDE SYNC & HEALTH ENFORCEMENT ---
        // Force Health and HealthPredict to Max to bypass server-side health checks
        if (localPlayer->HealthMax > 0) {
            localPlayer->Health = localPlayer->HealthMax;       // 0x0E60
            localPlayer->HealthPredict = localPlayer->HealthMax; // 0x2B64
        }

        // Reset desync-inducing health change history
        localPlayer->LastSyncHealthChange = 0.0f; // 0x2320

        // Disable body hurt damage calculation
        localPlayer->bEnabledCalBodyhurtDamage = false; // 0x2353
    }
}
