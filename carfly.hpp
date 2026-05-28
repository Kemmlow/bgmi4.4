// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

/**
 * @brief Singular Hyper-Fix Car Fly Function.
 * Completely neutralizes vehicle anti-cheat and enforces smooth +50m fly logic.
 * Handles seat switching and driver validation.
 * @param localPlayer The pointer to ASTExtraBaseCharacter (local).
 */
inline void ApplyHyperCarFly(SDK::ASTExtraBaseCharacter* localPlayer) {
    if (!localPlayer) return;

    // --- STATIC STATE MANAGEMENT ---
    static uintptr_t lastVehicle = 0;
    static int lastSeat = -1;
    static float startHeight = 0.0f;
    static float currentOffset = 0.0f;

    // --- DRIVER VALIDATION (0x2E18: SeatIdx, 0x2E20: Attached) ---
    int seatIdx = localPlayer->VehicleSeatIdx;
    bool isAttached = localPlayer->bIsAttachedToVehicle;
    auto vehicle = localPlayer->LastAttachedVehicle;

    // If not driver or not in vehicle, reset and exit
    if (!isAttached || seatIdx != 0 || !vehicle) {
        lastVehicle = 0;
        lastSeat = -1;
        return;
    }

    // --- RESET LOGIC FOR SEAT SWITCHING / NEW VEHICLE ---
    if ((uintptr_t)vehicle != lastVehicle || seatIdx != lastSeat) {
        lastVehicle = (uintptr_t)vehicle;
        lastSeat = seatIdx;
        currentOffset = 0.0f;
        startHeight = vehicle->ReplicatedMovement.Location.Z;
    }

    // --- NUCLEAR SDK ANTI-CHEAT DESTRUCTION ---

    // 1. Neutralize VehicleAntiCheat Component
    if (vehicle->VehicleAntiCheat) {
        auto ac = (SDK::UWheeledVehicleProtectionComponent*)vehicle->VehicleAntiCheat;
        ac->bEnablePreventFly = false;
        ac->bEnableProtection = false;
        ac->bEnableTick = false;
        ac->MaxResetDistanceSq = 999999999.0f;
    }

    // 2. Neutralize VehicleSyncComponent
    if (vehicle->VehicleSyncComponent) {
        auto sync = vehicle->VehicleSyncComponent;
        sync->bVehicleNeedFlyVelCheck = false;
        sync->MaxAllowJumpHeight = 999999.0f;
        sync->MaxSyncSpeedZDelta = 999999.0f;
        sync->bEnableValidateVelNew = false;
    }

    // 3. Neutralize Movement Anti-Cheat
    if (vehicle->VehicleMovement) {
        auto move = vehicle->VehicleMovement;
        move->bSpecialAntiCheatSpeed = false;
        move->AntiCheatSetup.AntiSideswayCheat = false;
        move->AntiCheatSetup.MaxVelZ = 999999.0f;
    }

    // 4. Global Bypasses
    localPlayer->EnableDyingInVehicleMeshCorrect = false; // AC bypass
    vehicle->bCheckOnGround = false;
    vehicle->bRepPhysicsSleep = false;

    // --- FLUID HEIGHT INTERPOLATION (+50m / 5000 units) ---
    const float targetZ = 5000.0f;
    const float smoothRate = 40.0f;

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

    // c. Kill Z-Velocity to prevent physics jitter
    if (vehicle->VehicleMovement) {
        vehicle->VehicleMovement->Velocity.Z = 0.0f;
    }
}
