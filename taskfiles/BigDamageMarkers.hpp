// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

namespace BigDamageMarkersModule {
    /**
     * @brief Modifies the FloatingTextComponent to make all damage markers appear large and red.
     *
     * @param localPlayerController Pointer to the local ASTExtraPlayerController.
     */
    void ApplyBigDamageMarkers(ASTExtraPlayerController* localPlayerController) {
        if (!localPlayerController) return;

        // FloatingTextComp is at offset 0x3E58 in ASTExtraPlayerController
        auto FloatingTextComp = localPlayerController->FloatingTextComp;
        if (FloatingTextComp) {
            // 1. Set BigDamage threshold to 0.0f so every damage event is treated as 'Big Damage'
            FloatingTextComp->BigDamage = 0.0f;

            // 2. Set BigDamageTextColor to a vibrant Red.
            // Using a high value for R (25.0f) to achieve the glowing intensity seen in the reference image.
            FloatingTextComp->BigDamageTextColor.R = 25.0f;
            FloatingTextComp->BigDamageTextColor.G = 0.0f;
            FloatingTextComp->BigDamageTextColor.B = 0.0f;
            FloatingTextComp->BigDamageTextColor.A = 1.0f;

            // Note: BigDamageTextScale (offset 0x01DC) is left at its default 'Big' value as per user preference.
        }
    }
}
