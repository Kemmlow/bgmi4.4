// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Refactored ProneSpeed (ProneFlash) module.
     * Enforces uniform sprinting velocity regardless of posture (Prone, Crouch, Stand).
     * Fixes the transition animation slowdown by synchronizing all state-based speeds.
     */
    inline void ApplyProneSpeed(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character)) return;

        // --- UNIFORM VELOCITY ENFORCEMENT (0x2B44 - 0x2B4C) ---
        // Capture base sprint speed or fallback to standard 1100.0f
        float targetVel = (character->MaxSprintSpeed > 0.0f) ? character->MaxSprintSpeed : 1100.0f;

        // Force all posture-specific speed limits to match the maximum sprint velocity
        // This ensures no speed drop during the stand-up/prone-down transition animations
        character->MaxProneSpeed = targetVel;        // Offset 0x2B48
        character->MaxCrouchSpeed = targetVel;       // Offset 0x2B44
        character->MaxSprintCrouchSpeed = targetVel; // Offset 0x2B50
        character->MaxSprintSpeed = targetVel;       // Offset 0x2B4C

        // --- SPEED RATIO NEUTRALIZATION (0x17D0 - 0x17DC) ---
        // Ensure every state-based multiplier is at 100% throughput
        character->IdleWalkSpeedRatio = 1.0f;
        character->AttackWalkSpeedRatio = 1.0f;
        character->SprintRunSpeedRatio = 1.0f;
        character->SidewaysSpeedRatio = 1.0f;

        // --- ANTI-CHEAT TOLERANCE (0x17E8) ---
        if (character->LagCompensationComponent && !SDK::isObjectInvalid(character->LagCompensationComponent)) {
            auto lagComp = character->LagCompensationComponent;

            // Expand server-side acceptance windows for high-speed prone movement
            lagComp->MaxCharacterSpeed = 99999.0f;
            lagComp->MaxTolerateCharacterDis = 99999.0f;
        }
    }
}
