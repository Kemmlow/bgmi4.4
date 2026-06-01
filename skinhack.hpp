// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

inline void ApplySkinHack(SDK::ASTExtraBaseCharacter* character)
{
    if (!character || SDK::isObjectInvalid(character)) return;

    auto weaponManager = character->WeaponManagerComponent;
    if (!weaponManager || SDK::isObjectInvalid(weaponManager)) return;

    auto currentWeapon = (SDK::ASTExtraShootWeapon*)weaponManager->CurrentWeaponReplicated;
    if (!currentWeapon || SDK::isObjectInvalid(currentWeapon)) return;

    auto avatarComp = currentWeapon->WeaponAvatarComponent;
    if (avatarComp && !SDK::isObjectInvalid(avatarComp))
    {
        avatarComp->WeaponSkinID = 101001;
    }
}
