// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace knoxy
{
    /**
     * @brief Godly 165 FPS Universal Unlocker.
     * Force-overwrites engine frame rate limits for liquid-smooth dominance.
     */
    inline void UnlockGodlyFPS(float targetFPS = 165.0f)
    {
        auto settings = SDK::UGameUserSettings::GetGameUserSettings();
        if (settings)
        {
            // Force member variable update
            settings->FrameRateLimit = targetFPS;

            // Execute engine-level application
            settings->SetFrameRateLimit(targetFPS);
            settings->ApplySettings(false);
            settings->SaveSettings();
        }
    }
}
