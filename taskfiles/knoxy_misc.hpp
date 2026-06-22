// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

inline void ApplyMiscHacks(SDK::ASTExtraBaseCharacter* character, SDK::UGameUserSettings* settings, bool lootdist)
{
    if (settings && !SDK::isObjectInvalid(settings))
    {
        settings->FrameRateLimit = 165.0f;
        settings->SetFrameRateLimit(165.0f);
        settings->ApplySettings(false);
    }

    if (lootdist && character && !SDK::isObjectInvalid(character))
    {
        *(int*)((uintptr_t)character + 0x02D8) = 2000;
    }
}
