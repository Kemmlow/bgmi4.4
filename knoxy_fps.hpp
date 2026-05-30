// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace knoxy
{
    /**
     * @brief Godly 165 FPS Universal Unlocker.
     * Force-patches the GameInstance and UserSettings to unlock high-frequency frames.
     */
    inline void UnlockGodlyFPS()
    {
        // 1. Force Engine-Level Limit Overwrite
        auto settings = SDK::UGameUserSettings::GetGameUserSettings();
        if (settings)
        {
            settings->FrameRateLimit = 165.0f;
            settings->bUseVSync = false;
            settings->ApplySettings(false);
            settings->SaveSettings();
        }

        // 2. Force GameInstance State Override
        auto world = SDK::UCommonLuaLibrary::GetGWorld();
        if (world && world->OwningGameInstance)
        {
            // The actual MaxFPS logic resides in the GameInstance for mobile variants
            uintptr_t instance = (uintptr_t)world->OwningGameInstance;

            // Force Patch CurrentMaxFPS (Offset 0x1598)
            *(int*)(instance + 0x1598) = 165;
        }
    }
}
