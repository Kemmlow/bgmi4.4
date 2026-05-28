// Credits : @knoxy_dev
#pragma once

#include <stdint.h>

/**
 * @brief NoSlow Hack module.
 * Forces sprinting speed regardless of character state (reloading, crouching, prone, etc).
 */
inline void ApplyNoSlow(uintptr_t localPlayer) {
    if (!localPlayer) return;

    // 1. Target UCharacterMovementComponent (localPlayer + 0x0518)
    uintptr_t moveComp = *(uintptr_t*)(localPlayer + 0x0518);
    if (moveComp) {
        // Enforce high base speeds across all modes
        *(float*)(moveComp + 0x0254) = 1100.0f; // MaxWalkSpeed
        *(float*)(moveComp + 0x0258) = 1100.0f; // MaxWalkSpeedCrouched
        *(float*)(moveComp + 0x025C) = 1100.0f; // MaxSwimSpeed
        *(float*)(moveComp + 0x0260) = 1100.0f; // MaxFlySpeed
    }

    // 2. Override ASTExtraBaseCharacter Speed Ratios & Pose Speeds
    // These ratios are often used to multiply the movement component's base speed
    *(float*)(localPlayer + 0x17D0) = 1.0f; // IdleWalkSpeedRatio
    *(float*)(localPlayer + 0x17D4) = 1.0f; // AttackWalkSpeedRatio
    *(float*)(localPlayer + 0x17D8) = 1.0f; // SprintRunSpeedRatio
    *(float*)(localPlayer + 0x0538) = 1.0f; // WalkSpeedScale

    // Pose-specific Max Speeds (To ensure 100% no-slow in any posture)
    *(float*)(localPlayer + 0x2B44) = 1100.0f; // MaxCrouchSpeed
    *(float*)(localPlayer + 0x2B48) = 1100.0f; // MaxProneSpeed
    *(float*)(localPlayer + 0x2B4C) = 1100.0f; // MaxSprintSpeed
    *(float*)(localPlayer + 0x2B50) = 1100.0f; // MaxSprintCrouchSpeed

    // 3. Neutralize Velocity Anti-Cheat in LagCompensationComponent (localPlayer + 0x17E8)
    uintptr_t lagComp = *(uintptr_t*)(localPlayer + 0x17E8);
    if (lagComp) {
        *(float*)(lagComp + 0x0294) = 99999.0f; // MaxCharacterSpeed
        *(float*)(lagComp + 0x029C) = 99999.0f; // MaxTolerateCharacterDis
    }
}
