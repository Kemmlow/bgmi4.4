// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <map>

namespace knoxy
{
    /**
     * @brief Hyper-Perfected Gun Skin Mapping.
     */
    inline std::map<int, int> GunSkinMap = {
        {101001,1101001089}, {291001,1010010891}, {101004,1101004046}, {291004,1010040461},
        {203008,1010040462}, {205005,1010040463}, {102001,1102001120}, {292001,1020011201},
        {103003,1103003042}, {293003,1030030421}, {101102,1101102017}, {103012,1103102007},
        {101006,1101006044}, {291006,1010060441}, {104004,1104004035}, {105002,1105002035},
        {295002,1050020351}, {103102,1103102007}, {101100,1101100012}, {101010,1101010019},
        {104101,1104101001}, {101002,1101002081}, {291002,1010020811}, {205007,1010020813},
        {103002,1103002030}, {293002,1030020301}, {101008,1101008081}, {291008,1010080811},
        {105010,1105010008}, {102007,1102007019}, {104102,1104102004}, {106004,1106004001},
        {106002,1106002023}, {102105,1102105012}, {106001,1106001002}, {103010,1103010006},
        {101007,1101007054}, {291007,1010070541}, {106003,1106003011}, {106005,1106005001},
        {104003,1104003026}, {104002,1104002022}, {104001,1104001035}, {101003,1101003143},
        {103004,1103004037}, {293004,1030040371}, {103009,1103009051}, {293009,1030090511},
        {102002,1102002136}, {103005,1103005024}, {293005,1030050241}, {203011,1030050242}
    };

    /**
     * @brief God-Level Gun Skin Swapper.
     * Force-patches the weapon skin ID via raw memory offset to bypass SDK discrepancies.
     */
    inline void ApplyGunSkinHack(uintptr_t localPlayer)
    {
        if (!localPlayer) return;
        auto character = (SDK::ASTExtraBaseCharacter*)localPlayer;

        auto weaponMgr = character->WeaponManagerComponent;
        if (weaponMgr && !isObjectInvalid(weaponMgr))
        {
            auto currentWeapon = (SDK::ASTExtraShootWeapon*)weaponMgr->CurrentWeaponReplicated;
            if (currentWeapon && !isObjectInvalid(currentWeapon))
            {
                // Access WeaponSkinID via Raw Offset 0x07E0
                int* pSkinID = (int*)((uintptr_t)currentWeapon + 0x07E0);
                int originalID = *pSkinID;

                auto it = GunSkinMap.find(originalID);
                if (it != GunSkinMap.end())
                {
                    // Force the skin swap in memory
                    *pSkinID = it->second;
                }
            }
        }
    }
}
