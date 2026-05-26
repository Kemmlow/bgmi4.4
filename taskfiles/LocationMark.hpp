// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <chrono>

namespace LocationMarkModule {
    inline bool bAimbotEnabled = false;
    inline bool bWasMarking = false;
    inline std::chrono::steady_clock::time_point lastToggleTime = std::chrono::steady_clock::now();

    void DetectLocationMark(ASTExtraBaseCharacter* localPlayer) {
        if (localPlayer) {
            bool bIsMarking = localPlayer->bIsDrawLocation;
            auto currentTime = std::chrono::steady_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastToggleTime).count();

            if (bIsMarking && !bWasMarking) {
                if (elapsed > 500) {
                    bAimbotEnabled = !bAimbotEnabled;
                    lastToggleTime = currentTime;
                }
            }

            bWasMarking = bIsMarking;
        }
    }
}
