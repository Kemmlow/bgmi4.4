// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <cmath>

inline void ApplyVisualHacks(SDK::ASTExtraPlayerController* localController, SDK::ASTExtraBaseCharacter* localPlayer) {
    if (localController && !SDK::isObjectInvalid(localController)) {
        static float cnt = 0.0f;
        const float RainbowSpeed = 8.0f;
        const int RainbowColorCount = 7;
        const float FullCircle = 360.0f;
        const float IncrementValue = 0.02f;
        SDK::FLinearColor rainbowColors[RainbowColorCount] = {
            SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), SDK::FLinearColor(1.0f, 0.5f, 0.0f, 1.0f),
            SDK::FLinearColor(1.0f, 1.0f, 0.0f, 1.0f), SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f),
            SDK::FLinearColor(0.0f, 0.0f, 1.0f, 1.0f), SDK::FLinearColor(0.5f, 0.0f, 1.0f, 1.0f),
            SDK::FLinearColor(1.0f, 0.0f, 1.0f, 1.0f)
        };
        int rainbowColorIndex = static_cast<int>(std::fmod(cnt * RainbowSpeed, (float)RainbowColorCount));
        SDK::FLinearColor color1 = rainbowColors[rainbowColorIndex];
        SDK::FLinearColor color2 = rainbowColors[(rainbowColorIndex + 1) % RainbowColorCount];
        float rainbowPhase = std::fmod(cnt * RainbowSpeed, 1.0f);
        SDK::FLinearColor interpolatedColor;
        interpolatedColor.R = color1.R + (color2.R - color1.R) * rainbowPhase;
        interpolatedColor.G = color1.G + (color2.G - color1.G) * rainbowPhase;
        interpolatedColor.B = color1.B + (color2.B - color1.B) * rainbowPhase;
        interpolatedColor.A = 1.0f;
        localController->CrossHairColor = interpolatedColor;
        if (cnt >= FullCircle) cnt = 0.0f; else cnt += IncrementValue;

        auto FloatingTextComp = localController->FloatingTextComp;
        if (FloatingTextComp) {
            FloatingTextComp->BigDamage = 0.0f;
            FloatingTextComp->BigDamageTextColor.R = 25.0f;
            FloatingTextComp->BigDamageTextColor.G = 0.0f;
            FloatingTextComp->BigDamageTextColor.B = 0.0f;
            FloatingTextComp->BigDamageTextColor.A = 1.0f;
        }
    }

    if (localPlayer && !SDK::isObjectInvalid(localPlayer)) {
        auto weaponManager = localPlayer->WeaponManagerComponent;
        if (weaponManager && !SDK::isObjectInvalid(weaponManager)) {
            auto currentWeapon = (SDK::ASTExtraShootWeapon*)weaponManager->CurrentWeaponReplicated;
            if (currentWeapon && !SDK::isObjectInvalid(currentWeapon)) {
                auto avatarComp = currentWeapon->WeaponAvatarComponent;
                if (avatarComp && !SDK::isObjectInvalid(avatarComp)) avatarComp->WeaponSkinID = 101001;
            }
        }
    }
}
