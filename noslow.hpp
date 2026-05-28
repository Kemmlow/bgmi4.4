// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief NoSlow Hack module.
     * Forces sprinting speed regardless of character state (reloading, crouching, prone).
     * Strictly uses direct SDK member access with no raw offsets.
     */
    inline void ApplyNoSlow(SDK::ASTExtraBaseCharacter* localPlayer) {
        // --- STABILITY & INITIALIZATION ---
        // Verify character and components are initialized before access to prevent loading screen crashes
        if (!localPlayer || SDK::isObjectInvalid(localPlayer)) return;

        // --- CHARACTER MOVEMENT COMPONENT ---
        auto moveComp = localPlayer->CharacterMovement;
        if (moveComp && !SDK::isObjectInvalid(moveComp)) {
            // Force high base movement speeds across all SDK modes
            moveComp->MaxWalkSpeed = 1100.0f;
            moveComp->MaxWalkSpeedCrouched = 1100.0f;
            moveComp->MaxSwimSpeed = 1100.0f;
            moveComp->MaxFlySpeed = 1100.0f;
        }

        // --- CHARACTER ATTRIBUTES ---
        // Neutralize speed penalties for various character states
        localPlayer->IdleWalkSpeedRatio = 1.0f;
        localPlayer->AttackWalkSpeedRatio = 1.0f;
        localPlayer->SprintRunSpeedRatio = 1.0f;
        localPlayer->WalkSpeedScale = 1.0f;

        // Override specific posture speed limits to match sprinting velocity
        localPlayer->MaxCrouchSpeed = 1100.0f;
        localPlayer->MaxProneSpeed = 1100.0f;
        localPlayer->MaxSprintSpeed = 1100.0f;
        localPlayer->MaxSprintCrouchSpeed = 1100.0f;

        // --- ANTI-CHEAT SPEED LIMITERS ---
        if (localPlayer->LagCompensationComponent && !SDK::isObjectInvalid(localPlayer->LagCompensationComponent)) {
            auto lagComp = localPlayer->LagCompensationComponent;
            // Neutralize server-side movement distance tolerances
            lagComp->MaxCharacterSpeed = 99999.0f;
            lagComp->MaxTolerateCharacterDis = 99999.0f;
        }
    }
}
