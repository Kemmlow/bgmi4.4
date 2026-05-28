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
                // Using user-specified values from interaction history for precision
                worldSettings->MinUndilatedFrameTime = 0.0005f;
            } else {
                worldSettings->MinUndilatedFrameTime = 0.016f; // Reset to normal
            }
        }
    }
}
