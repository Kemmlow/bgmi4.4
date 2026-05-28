// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

/**
 * @brief Singular Hyper-Fix Car Fly Function.
 * Completely neutralizes vehicle anti-cheat and enforces smooth +50m fly logic.
 * Fixed for all vehicle types using raw memory access to bypass SDK hierarchy errors.
 */
inline void ApplyHyperCarFly(SDK::ASTExtraBaseCharacter* localPlayer) {
    if (!localPlayer || SDK::isObjectInvalid(localPlayer)) return;

    // --- STATIC STATE MANAGEMENT ---
    static uintptr_t lastVehicle = 0;
    static int lastSeat = -1;
    static float startHeight = 0.0f;
    static float currentOffset = 0.0f;

    // --- RAW DATA VALIDATION (Offsets from ShadowTrackerExtra.ASTExtraBaseCharacter) ---
    int seatIdx = localPlayer->VehicleSeatIdx;           // 0x2E18
    bool isAttached = localPlayer->bIsAttachedToVehicle; // 0x2E20
    auto vehicle = localPlayer->LastAttachedVehicle;     // 0x2E08

    // Driver check (Seat 0) and validation
    if (!isAttached || seatIdx != 0 || !vehicle || SDK::isObjectInvalid(vehicle)) {
        lastVehicle = 0;
        lastSeat = -1;
        return;
    }

    // --- RESET LOGIC FOR SEAT SWITCHING / NEW VEHICLE ---
    if ((uintptr_t)vehicle != lastVehicle || seatIdx != lastSeat) {
        lastVehicle = (uintptr_t)vehicle;
        lastSeat = seatIdx;
        currentOffset = 0.0f;
        // AActor -> ReplicatedMovement (0x0110) -> Location (0x0) -> Z (0x8)
        startHeight = vehicle->ReplicatedMovement.Location.Z;
    }

    // --- NUCLEAR SDK ANTI-CHEAT DESTRUCTION (Using Raw Access) ---
    uintptr_t vehPtr = (uintptr_t)vehicle;

    // 1. Neutralize VehicleAntiCheat Component (vehicle + 0x0C90)
    uintptr_t acComp = *(uintptr_t*)(vehPtr + 0x0C90);
    if (acComp && !SDK::isObjectInvalid((void*)acComp)) {
        *(bool*)(acComp + 0x0490) = false; // bEnablePreventFly
        *(bool*)(acComp + 0x0270) = false; // bEnableProtection
        *(bool*)(acComp + 0x0441) = false; // bEnableTick (Protection)
    }

    // 2. Neutralize VehicleSyncComponent (vehicle + 0x0C10)
    uintptr_t syncComp = *(uintptr_t*)(vehPtr + 0x0C10);
    if (syncComp && !SDK::isObjectInvalid((void*)syncComp)) {
        *(bool*)(syncComp + 0x02B8) = false;      // bVehicleNeedFlyVelCheck
        *(float*)(syncComp + 0x02C4) = 999999.0f; // MaxAllowJumpHeight
        *(float*)(syncComp + 0x02C8) = 999999.0f; // MaxSyncSpeedZDelta
    }

    // 3. Movement Component Bypass (vehicle + 0x1E10)
    uintptr_t moveComp = *(uintptr_t*)(vehPtr + 0x1E10);
    if (moveComp && !SDK::isObjectInvalid((void*)moveComp)) {
        *(bool*)(moveComp + 0x0C40) = false; // bSpecialAntiCheatSpeed
    }

    // 4. Global character side AC bypass (0x34A8)
    localPlayer->EnableDyingInVehicleMeshCorrect = false;

    // --- FLUID HEIGHT INTERPOLATION (+50m / 5000 units) ---
    const float targetZ = 5000.0f;
    const float smoothRate = 40.0f; // fluid ascent rate

    if (currentOffset < targetZ) {
        currentOffset += smoothRate;
        if (currentOffset > targetZ) currentOffset = targetZ;
    }

    // --- POSITION ENFORCEMENT ---
    // a. Update ReplicatedMovement for Server Sync
    vehicle->ReplicatedMovement.Location.Z = startHeight + currentOffset;

    // b. Update RootComponent for Local Fluidity
    if (vehicle->RootComponent) {
        vehicle->RootComponent->RelativeLocation.Z = startHeight + currentOffset;
    }

    // c. Kill Z-Velocity to prevent physics desync
    if (moveComp) {
        *(float*)(moveComp + 0x018C + 0x8) = 0.0f; // Velocity.Z offset 0x18C
    }
}
