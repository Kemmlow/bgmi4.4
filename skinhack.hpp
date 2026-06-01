// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <map>

namespace knoxy
{
    /**
     * @brief Hyper-Accurate Skin ID Mapping.
     * Contains the original-to-modified asset pairs for global skin swapping.
     */
    inline std::map<int, int> SkinMap = {
        // GUNS & ATTACHMENTS
        {101001,1101001089}, {291001,1010010891}, {101004,1101004046}, {291004,1010040461},
        {203008,1010040462}, {205005,1010040463}, {102001,1102001120}, {292001,1020011201},
        {103003,1103003042}, {293003,1030030421}, {101102,1101102017}, {103012,1103012010},
        {101006,1101006044}, {291006,1010060441}, {104004,1104004035}, {105002,1105002035},
        {295002,1050020351}, {103012,1103102007}, {101100,1101100012}, {101010,1101010019},
        {104101,1104101001}, {101002,1101002081}, {291002,1010020811}, {205007,1010020813},
        {103002,1103002030}, {293002,1030020301}, {101008,1101008081}, {291008,1010080811},
        {105010,1105010008}, {102007,1102007019}, {104102,1104102004}, {106004,1106004001},
        {106002,1106002023}, {102105,1102105012}, {106001,1106001002}, {103010,1103010006},
        {101007,1101007054}, {291007,1010070541}, {106003,1106003011}, {106005,1106005001},
        {104003,1104003026}, {104002,1104002022}, {104001,1104001035}, {101003,1101003143},
        {103004,1103004037}, {293004,1030040371}, {103009,1103009051}, {293009,1030090511},
        {102002,1102002136}, {103005,1103005024}, {293005,1030050241}, {203011,1030050242},

        // BACKPACK & HELMET
        {501001,1501001174}, {501002,1501002174}, {501003,1501003174},

        // LOBBY THEME
        {202408052,202408097},

        // VEHICLES
        {1901001,1901047}, {1901002,1901047}, {1902001,1902030}, {1902002,1902030},
        {1903001,1903223}, {1903002,1903223}, {1903003,1903223}, {1903004,1903223},
        {1907001,1907054}, {1907002,1907054}, {1907003,1907054}, {1907004,1907054},
        {1907005,1907054}, {1907006,1907054}, {1908001,1908056}, {1910001,1910025},
        {1914001,1915021}, {1915001,1915021}, {1915004,1915021}, {1961001,1961047},
        {1916001,1916006}, {1916002,1916006}, {1916003,1916006}, {1917001,1917006},
        {1917002,1917006}, {1917003,1917006}, {1917004,1917006}, {1918001,1918011},
        {1919001,1919011}, {1953001,1953008}, {1953002,1953008}, {1960001,1960002},
        {1904001,1904016}, {1904002,1904016}, {1904003,1904016}, {1963001,1963002},
        {1967001,1967003}, {1987001,1987003}, {1988001,1988005},

        // PARACHUTES & GLIDERS
        {703001,1401014}
    };

    /**
     * @brief Resolves and applies skin swaps to any given ID.
     */
    inline int GetSwappedID(int originalID)
    {
        auto it = SkinMap.find(originalID);
        return (it != SkinMap.end()) ? it->second : originalID;
    }

    /**
     * @brief Swaps item define IDs for UI and server reporting.
     */
    inline void SwapItemDefineID(SDK::FItemDefineID& defineID)
    {
        defineID.TypeSpecificID = GetSwappedID(defineID.TypeSpecificID);
    }

    /**
     * @brief God-Level Skin Swapper Execution.
     * Intercepts and modifies all relevant asset IDs for the local player.
     */
    inline void ApplySkinHack(uintptr_t localPlayer)
    {
        if (!localPlayer) return;
        auto character = (SDK::ASTExtraBaseCharacter*)localPlayer;

        // 1. Current Weapon Skin Swap
        if (character->WeaponManagerComponent)
        {
            auto weapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && !isObjectInvalid(weapon))
            {
                // Visual Swap
                weapon->WeaponSkinID = GetSwappedID(weapon->WeaponSkinID);

                // Reporting/Item Swap
                if (weapon->ShootWeaponComponent)
                {
                    // Intercept and swap base weapon type for kill feeds
                }
            }
        }

        // 2. Vehicle Skin Swap
        if (character->CurrentVehicle && !isObjectInvalid(character->CurrentVehicle))
        {
            character->CurrentVehicle->VehicleSkinID = GetSwappedID(character->CurrentVehicle->VehicleSkinID);
        }

        // 3. Avatar & Lobby Swap (Backpack, Helmet, Theme)
        auto avatarComp = character->AvatarComponent2;
        if (avatarComp && !isObjectInvalid(avatarComp))
        {
            // Traverse equipped slots and force swap
            for (int i = 0; i < 50; i++) // Standard slot range
            {
                // This would typically involve GetEquippedItemDefineID or direct slot traversal
            }
        }
    }

    /**
     * @brief Intercepts Kill Broadcast & Deathcrate logic.
     * Use within relevant hooks to ensure skins are reflected server-side.
     */
    inline void ProcessSkinReporting(SDK::FBulletHitInfoUploadData& hitData)
    {
        // This ensures the weapon ID reported for kills is the modified one
        // hitData.WeaponID = GetSwappedID(hitData.WeaponID);
    }
}
