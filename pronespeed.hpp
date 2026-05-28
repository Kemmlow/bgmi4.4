// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Refactored ProneSpeed Hack module.
     * Fixed logic and ensured zero non-existent SDK members.
     */
    inline void ApplyProneSpeed(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character)) return;

        // 1. Posture speed synchronization
        // Capture sprint speed or fallback to 1100.0f
        float sprintVel = (character->MaxSprintSpeed > 0.0f) ? character->MaxSprintSpeed : 1100.0f;

        character->MaxProneSpeed = sprintVel; // Offset 0x2B48
        character->MaxCrouchSpeed = sprintVel; // Offset 0x2B44

        // 2. State-based ratio neutralization (0x17D0-0x17D8)
        character->IdleWalkSpeedRatio = 1.0f;
        character->AttackWalkSpeedRatio = 1.0f;
        character->SprintRunSpeedRatio = 1.0f;

        // 3. Server-side tolerance neutralization
        if (character->LagCompensationComponent && !SDK::isObjectInvalid(character->LagCompensationComponent)) {
            character->LagCompensationComponent->MaxCharacterSpeed = 99999.0f;
            character->LagCompensationComponent->MaxTolerateCharacterDis = 99999.0f;
        }
    }
}
