// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace Hacks {

    /**
     * @brief Modifies damage indicators to be large and emissive red.
     */
    inline void ApplyBigDamageMarkers(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character)) return;

        SDK::ASTExtraPlayerController* controller = (SDK::ASTExtraPlayerController*)character->Controller;
        if (controller && !SDK::isObjectInvalid(controller) && controller->FloatingTextComp) {
            auto ftc = controller->FloatingTextComp;

            // Force every hit to be "Big Damage"
            ftc->BigDamage = 0.0f;

            // Set Big Damage to glowing red (emissive R=25)
            ftc->BigDamageTextColor = {25.0f, 0.0f, 0.0f, 1.0f};
            ftc->BigDamageTextScale = 2.5f;

            // Optional: Headshot enhancement
            ftc->HeadShotTextColor = {25.0f, 25.0f, 0.0f, 1.0f}; // Glowing Yellow
            ftc->HeadShotTextScale = 3.0f;
        }
    }
}
