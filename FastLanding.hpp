// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief 3x Fast Landing Hack.
     * Fixed logic based on user snippet:
     * Speed-up phase: 0.050f
     * Normal/Reset phase: 0.0005f
     */
    inline void ApplyFastLanding(SDK::ASTExtraBaseCharacter* character) {
        if (!character) return;

        SDK::UWorld* world = SDK::UCommonLuaLibrary::GetGWorld();
        if (world && world->PersistentLevel && world->PersistentLevel->WorldSettings) {
            auto worldSettings = world->PersistentLevel->WorldSettings;

            // ParachuteState enum check
            if (character->ParachuteState >= 1 && character->ParachuteState <= 3) {
                worldSettings->MinUndilatedFrameTime = 0.050f;
            } else {
                worldSettings->MinUndilatedFrameTime = 0.0005f;
            }
        }
    }
}
