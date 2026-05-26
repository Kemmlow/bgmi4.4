// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

namespace LocationMarkModule {
    inline bool bAimbotEnabled = false;
    inline bool bWasMarking = false;

    void DetectLocationMark(ASTExtraBaseCharacter* localPlayer) {
        if (localPlayer) {
            bool bIsMarking = localPlayer->bIsDrawLocation;

            if (bIsMarking && !bWasMarking) {
                bAimbotEnabled = !bAimbotEnabled;
            }

            bWasMarking = bIsMarking;
        }
    }
}
