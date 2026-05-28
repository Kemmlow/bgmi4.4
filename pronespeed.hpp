// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief ProneSpeed Hack module.
     * Increases proning movement speed to match vanilla sprinting velocity.
     * Includes exhaustive validation to ensure stability and accuracy.
     */
    inline void ApplyProneSpeed(SDK::ASTExtraBaseCharacter* character) {
        // --- MULTI-LAYER VALIDATION ---
        // Ensure character instance is valid and not pending destruction
        if (!character || SDK::isObjectInvalid(character)) return;

        // Ensure movement component is fully initialized to prevent memory access violations
        if (!character->CharacterMovement || SDK::isObjectInvalid(character->CharacterMovement)) return;

        // --- SPEED ENFORCEMENT ---
        // Capture the current base sprint velocity to maintain vanilla proportions
        float vanillaSprintVelocity = character->MaxSprintSpeed; // Offset 0x2B4C

        // Safety fallback: If sprint speed is not yet initialized or zero, use standard 1100.0f
        if (vanillaSprintVelocity <= 0.0f) {
            vanillaSprintVelocity = 1100.0f;
        }

        // Elevate Prone Speed (Crawl Speed) to Sprinting speed
        character->MaxProneSpeed = vanillaSprintVelocity; // Offset 0x2B48

        // Override internal scale factors that might throttle the final velocity
        // Ensuring 1.0f (100%) speed throughput
        character->WalkSpeedScale = 1.0f; // Offset 0x0538

        // --- SERVER-SIDE SYNC & ANTI-CHEAT NEUTRALIZATION ---
        // Neutralize speed verification in LagCompensationComponent (0x17E8)
        if (character->LagCompensationComponent && !SDK::isObjectInvalid(character->LagCompensationComponent)) {
            auto lagComp = character->LagCompensationComponent;

            // Expand tolerance windows to accommodate the high-speed prone movement
            lagComp->MaxCharacterSpeed = 99999.0f;     // 0x0294
            lagComp->MaxTolerateCharacterDis = 99999.0f; // 0x029C
        }
    }
}
