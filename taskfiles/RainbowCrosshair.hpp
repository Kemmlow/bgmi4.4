// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <cmath>

void ApplyRainbowCrosshair(ASTExtraPlayerController* localController) {
    if (localController) {
        static float cnt = 0.0f;
        const float RainbowSpeed = 8.0f;
        const int RainbowColorCount = 7;
        const float FullCircle = 360.0f;
        const float IncrementValue = 0.02f;

        static const FLinearColor rainbowColors[RainbowColorCount] = {
            FLinearColor(1.0f, 0.0f, 0.0f, 1.0f),
            FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
            FLinearColor(1.0f, 1.0f, 0.0f, 1.0f),
            FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
            FLinearColor(0.0f, 0.0f, 1.0f, 1.0f),
            FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
            FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)
        };

        int rainbowColorIndex = static_cast<int>(std::fmod(cnt * RainbowSpeed, (float)RainbowColorCount));
        const FLinearColor& color1 = rainbowColors[rainbowColorIndex];
        const FLinearColor& color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];
        float rainbowPhase = std::fmod(cnt * RainbowSpeed, 1.0f);

        FLinearColor interpolatedColor;
        interpolatedColor.R = color1.R + (color2.R - color1.R) * rainbowPhase;
        interpolatedColor.G = color1.G + (color2.G - color1.G) * rainbowPhase;
        interpolatedColor.B = color1.B + (color2.B - color1.B) * rainbowPhase;
        interpolatedColor.A = 1.0f;

        localController->CrossHairColor = interpolatedColor;

        if (cnt >= FullCircle) {
            cnt = 0.0f;
        } else {
            cnt += IncrementValue;
        }
    }
}
