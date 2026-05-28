// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief 3x Fast Landing Hack.
     * Speeds up world simulation during parachute phase.
     */
    inline void ApplyFastLanding(SDK::ASTExtraBaseCharacter* character) {
        if (!character) return;

        SDK::UWorld* world = SDK::UCommonLuaLibrary::GetGWorld();
        if (world && world->PersistentLevel && world->PersistentLevel->WorldSettings) {
            auto worldSettings = world->PersistentLevel->WorldSettings;

            // ParachuteState enum check
            if (character->ParachuteState >= 1 && character->ParachuteState <= 3) {
                worldSettings->MinUndilatedFrameTime = 0.001f; // 3x speed-up logic
            } else {
                worldSettings->MinUndilatedFrameTime = 0.016f; // Reset to normal (approx 60fps delta)
            }
        }
    }
}
