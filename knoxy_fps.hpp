// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

inline void ApplyFPSUnlock(SDK::UGameUserSettings* settings)
{
    if (settings && !SDK::isObjectInvalid(settings))
    {
        settings->FrameRateLimit = 165.0f;
        settings->SetFrameRateLimit(165.0f);
        settings->ApplySettings(false);
    }
}
