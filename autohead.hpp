// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

namespace knoxy
{
    /**
     * @brief Godly AutoHead Logic.
     * Force-overwrites hit part data to always register as a headshot.
     */
    inline void ApplyGodlyAutoHead(SDK::FBulletHitInfoUploadData& hitData)
    {
        // Force HitBodyType to Head (EAvatarDamagePosition::BigHead = 1)
        hitData.HitBodyType = 1;
    }
}
