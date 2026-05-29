// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief NoFallDamage Hack Module.
     * Renders the player immune to all forms of falling and landing damage.
     * Uses a multi-layered bypass of internal SDK damage thresholds and coefficients.
     */
    inline void ApplyNoFallDamage(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character)) return;

        // --- FALLING DAMAGE COEFFICIENTS (0x2CD8 - 0x2CEC) ---
        // Neutralize the multiplier used for vertical speed impact calculations
        character->VerticalFallingDamageCoefficient = 0.0f; // Offset 0x2CDC

        // Increase the speed threshold required to trigger damage to an unreachable value
        character->VerticalSpeedFallingDamageThrehod = 999999.0f; // Offset 0x2CD8
        character->HorizontalSpeedFallingDamageThrehod = 999999.0f; // Offset 0x2CEC

        // --- LANDING DAMAGE THRESHOLDS ---
        // Maximize the minimum height required to trigger landing damage
        character->LandingDamageMinHeight = 999999.0f; // Offset 0x2014

        // Neutralize parachute-specific landing damage
        character->PrachuteLandedFallingDamageMax = 0.0f; // Offset 0x2CE4
        character->EnablePrachuteLandedFallingDamageMax = false; // Offset 0x2CE8
    }
}
