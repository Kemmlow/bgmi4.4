// Credits : @knoxy_dev
#pragma once

#include <stdint.h>

/**
 * @brief Singular Hyper-Fix Car Fly Function.
 * Refined to use raw offsets to bypass SDK inheritance errors.
 * Logic: Smooth +50m ascent with absolute anti-cheat destruction.
 */
inline void ApplyHyperCarFly(uintptr_t localPlayer) {
    if (!localPlayer) return;

    // --- STATIC STATE ---
    static uintptr_t lastVehicle = 0;
    static int lastSeat = -1;
    static float startHeight = 0.0f;
    static float currentOffset = 0.0f;

    // --- RAW DATA ACCESS ---
    // localPlayer + 0x2E18: VehicleSeatIdx (int)
    // localPlayer + 0x2E20: bIsAttachedToVehicle (bool)
    // localPlayer + 0x2E08: LastAttachedVehicle (uintptr_t)
    int seatIdx = *(int*)(localPlayer + 0x2E18);
    bool isAttached = *(bool*)(localPlayer + 0x2E20);
    uintptr_t vehicle = *(uintptr_t*)(localPlayer + 0x2E08);

    // RESET & EXIT LOGIC (Only fly when driver)
    if (!isAttached || seatIdx != 0 || !vehicle) {
        lastVehicle = 0;
        lastSeat = -1;
        return;
    }

    // STATE INITIALIZATION (Handles seat swaps and new vehicles)
    if (vehicle != lastVehicle || seatIdx != lastSeat) {
        lastVehicle = vehicle;
        lastSeat = seatIdx;
        currentOffset = 0.0f;
        // AActor -> ReplicatedMovement (0x0110) -> Location (0x0) -> Z (0x8)
        startHeight = *(float*)(vehicle + 0x0110 + 0x18 + 0x8);
    }

    // --- ANTI-CHEAT DESTRUCTION ---

    // 1. Neutralize VehicleAntiCheat Component (vehicle + 0x0C90)
    uintptr_t acComp = *(uintptr_t*)(vehicle + 0x0C90);
    if (acComp) {
        *(bool*)(acComp + 0x0490) = false; // bEnablePreventFly
        *(bool*)(acComp + 0x0270) = false; // bEnableProtection
        *(bool*)(acComp + 0x0441) = false; // bEnableTick
    }

    // 2. Neutralize VehicleSyncComponent (vehicle + 0x0C10)
    uintptr_t syncComp = *(uintptr_t*)(vehicle + 0x0C10);
    if (syncComp) {
        *(bool*)(syncComp + 0x02B8) = false;  // bVehicleNeedFlyVelCheck
        *(float*)(syncComp + 0x02C4) = 999999.0f; // MaxAllowJumpHeight
        *(float*)(syncComp + 0x02C8) = 999999.0f; // MaxSyncSpeedZDelta
    }

    // 3. Movement Component Bypass (vehicle + 0x1E10)
    uintptr_t moveComp = *(uintptr_t*)(vehicle + 0x1E10);
    if (moveComp) {
        *(bool*)(moveComp + 0x0C40) = false; // bSpecialAntiCheatSpeed
    }

    // --- FLUID INTERPOLATION (+50m) ---
    const float targetZ = 5000.0f; // 50 meters
    const float fluidRate = 45.0f;

    if (currentOffset < targetZ) {
        currentOffset += fluidRate;
        if (currentOffset > targetZ) currentOffset = targetZ;
    }

    // --- POSITION & VELOCITY ENFORCEMENT ---
    // Update ReplicatedMovement Location.Z
    *(float*)(vehicle + 0x0110 + 0x18 + 0x8) = startHeight + currentOffset;

    // Update RootComponent RelativeLocation.Z (vehicle + 0x0208 -> SceneComp + 0x118)
    uintptr_t root = *(uintptr_t*)(vehicle + 0x0208);
    if (root) {
        *(float*)(root + 0x118 + 0x8) = startHeight + currentOffset;
    }

    // Kill Z-Velocity jitter (moveComp + 0x018C -> Velocity + 0x8 -> Z)
    if (moveComp) {
        *(float*)(moveComp + 0x018C + 0x8) = 0.0f;
    }
}
