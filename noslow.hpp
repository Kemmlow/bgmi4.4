// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Refactored NoSlow Hack Module.
     * Enforces uniform sprinting velocity regardless of reloading, crouching, or leaning.
     * Fixed 'WalkSpeedScale' compilation error and added Crouch speed support.
     */
    inline void ApplyNoSlow(SDK::ASTExtraBaseCharacter* localPlayer) {
        if (!localPlayer || SDK::isObjectInvalid(localPlayer)) return;

        // --- MOVEMENT COMPONENT SPEEDS ---
        auto moveComp = localPlayer->CharacterMovement;
        if (moveComp && !SDK::isObjectInvalid(moveComp)) {
            moveComp->MaxWalkSpeed = 1100.0f;
            moveComp->MaxWalkSpeedCrouched = 1100.0f;
            moveComp->MaxSwimSpeed = 1100.0f;
            moveComp->MaxFlySpeed = 1100.0f;
        }

        // --- CHARACTER ATTRIBUTE RATIOS (0x17D0 - 0x17DC) ---
        // Neutralize speed penalties for state-based movement
        localPlayer->IdleWalkSpeedRatio = 1.0f;
        localPlayer->AttackWalkSpeedRatio = 1.0f;
        localPlayer->SprintRunSpeedRatio = 1.0f;
        localPlayer->SidewaysSpeedRatio = 1.0f;

        // Fixed from previous error: Using PeekSpeedScale at 0x2C00
        localPlayer->PeekSpeedScale = 1.0f;

        // --- POSTURE SPEED LIMITS (0x2B44 - 0x2B50) ---
        // Force all postures to match sprinting speed
        localPlayer->MaxCrouchSpeed = 1100.0f;
        localPlayer->MaxProneSpeed = 1100.0f;
        localPlayer->MaxSprintSpeed = 1100.0f;
        localPlayer->MaxSprintCrouchSpeed = 1100.0f;

        // --- ANTI-CHEAT TOLERANCE ---
        if (localPlayer->LagCompensationComponent && !SDK::isObjectInvalid(localPlayer->LagCompensationComponent)) {
            auto lagComp = localPlayer->LagCompensationComponent;
            lagComp->MaxCharacterSpeed = 99999.0f;
            lagComp->MaxTolerateCharacterDis = 99999.0f;
        }
    }
}
