// Credits : @knoxy_dev
#pragma once

#include <stdint.h>

namespace Hacks {

    /**
     * @brief Hyper Prod Grade Car Fly Module.
     * Fluid height interpolation (+50m) with full Anti-Cheat / Rubberbanding bypass.
     * Works for all vehicles (Cars, Horses, Living things) when local player is driver.
     */
    class CarFly {
    private:
        struct FlyState {
            uintptr_t vehiclePtr = 0;
            float startHeight = 0.0f;
            float currentOffset = 0.0f;
            bool isActive = false;
        };

        static FlyState& GetState() {
            static FlyState state;
            return state;
        }

        struct FVector { float X, Y, Z; };

    public:
        static void Apply(uintptr_t baseCharacter) {
            if (!baseCharacter) {
                GetState().isActive = false;
                return;
            }

            // 1. Driver Validation
            // ASTExtraBaseCharacter -> VehicleSeatIdx (0x2E18)
            // ASTExtraBaseCharacter -> bIsAttachedToVehicle (0x2E20)
            int seatIdx = *(int*)(baseCharacter + 0x2E18);
            bool isAttached = *(bool*)(baseCharacter + 0x2E20);

            if (!isAttached || seatIdx != 0) {
                GetState().isActive = false;
                GetState().vehiclePtr = 0;
                return;
            }

            // ASTExtraBaseCharacter -> LastAttachedVehicle (0x2E08)
            uintptr_t vehicle = *(uintptr_t*)(baseCharacter + 0x2E08);
            if (!vehicle) return;

            FlyState& state = GetState();

            // 2. Takeoff Height Initialization
            if (state.vehiclePtr != vehicle) {
                state.vehiclePtr = vehicle;
                // AActor -> ReplicatedMovement.Location (0x0110)
                FVector pos = *(FVector*)(vehicle + 0x0110);
                state.startHeight = pos.Z;
                state.currentOffset = 0.0f;
                state.isActive = true;
            }

            // 3. NUCLEAR ANTI-CHEAT BYPASS (Fucking everything)
            // a. Protection Component (Fly & Reset Logic)
            uintptr_t protection = *(uintptr_t*)(vehicle + 0x0C90); // VehicleAntiCheat
            if (protection) {
                *(bool*)(protection + 0x0490) = false; // bEnablePreventFly
                *(bool*)(protection + 0x0270) = false; // bEnableProtection
                *(bool*)(protection + 0x0441) = false; // bEnableTick (Protection)
            }

            // b. Sync Component (Speed & Height Delta)
            uintptr_t sync = *(uintptr_t*)(vehicle + 0x0C10); // VehicleSyncComponent
            if (sync) {
                *(bool*)(sync + 0x02B8) = false; // bVehicleNeedFlyVelCheck
                *(float*)(sync + 0x02C4) = 99999.0f; // MaxAllowJumpHeight
                *(float*)(sync + 0x02C8) = 99999.0f; // MaxSyncSpeedZDelta
            }

            // c. Base Vehicle Bypasses
            *(bool*)(vehicle + 0x0985) = false;  // bCheckOnGround
            *(bool*)(vehicle + 0x1B98) = false;  // bCheckCharacterStepUpOn
            *(bool*)(vehicle + 0x1B41) = false;  // bRepPhysicsSleep (Keep physics awake)
            *(float*)(vehicle + 0x1C54) = 99999.0f; // RecoverMaxDist (Prevent reset)

            // d. Movement Bypass
            uintptr_t movement = *(uintptr_t*)(vehicle + 0x1E10); // VehicleMovement
            if (movement) {
                *(bool*)(movement + 0x0C40) = false; // bSpecialAntiCheatSpeed
            }

            // e. Character Rubberband Bypass
            *(bool*)(baseCharacter + 0x34A8) = false; // EnableDyingInVehicleMeshCorrect (Abused for sync)

            // 4. Fluid Height Interpolation (Smooth as hell)
            const float targetOffset = 5000.0f; // 50 meters
            const float increment = 35.0f;     // Fluid ascent rate

            if (state.currentOffset < targetOffset) {
                state.currentOffset += increment;
                if (state.currentOffset > targetOffset) state.currentOffset = targetOffset;
            }

            // 5. Apply Fluid Transformation
            FVector* syncPos = (FVector*)(vehicle + 0x0110);
            syncPos->Z = state.startHeight + state.currentOffset;

            // Enforce Z-Velocity stability
            if (movement) {
                *(float*)(movement + 0x018C + 0x8) = 0.0f; // Velocity.Z = 0
            }
        }
    };

}
