// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

namespace FastLandingModule {
    /**
     * @brief Implements Fast Landing / Fast Parachute by dilating world time during descent.
     *
     * @param localPlayer Pointer to the local ASTExtraBaseCharacter.
     * @param GWorld Pointer to the current UWorld instance.
     */
    void ApplyFastLanding(ASTExtraBaseCharacter* localPlayer, UWorld* GWorld) {
        if (!localPlayer || !GWorld || !GWorld->PersistentLevel) return;

        auto WorldSettings = GWorld->PersistentLevel->WorldSettings;
        if (!WorldSettings) return;

        // EParachuteState: PS_FreeFall = 1, PS_Opening = 2
        uint8_t currentState = static_cast<uint8_t>(localPlayer->ParachuteState);

        if (currentState == 1 || currentState == 2) {
            // Speed up world by decreasing minimum frame time threshold
            // This effectively makes landing 3x faster as per the user's logic.
            WorldSettings->MinUndilatedFrameTime = 0.050f;
        } else {
            // Reset to default game speed (0.0005f) when not in parachute states
            WorldSettings->MinUndilatedFrameTime = 0.0005f;
        }
    }
}
