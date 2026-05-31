#pragma once

#include "SDK.hpp"

inline void ApplyAutoHead(uintptr_t localPlayer, bool autohead)
{
    if (localPlayer)
    {
        if (autohead)
        {
            auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
            if (character && !isObjectInvalid(character))
            {
                // Correct Path: Character -> WeaponManager -> Current Weapon -> Shoot Component -> Weapon Entity
                auto weaponMgr = character->WeaponManagerComponent; // Offset 0x25C8
                if (weaponMgr && !isObjectInvalid(weaponMgr))
                {
                    auto currentWeapon = (SDK::ASTExtraShootWeapon*)weaponMgr->CurrentWeaponReplicated; // Offset 0x05C8 (in WeaponManager)
                    if (currentWeapon && !isObjectInvalid(currentWeapon))
                    {
                        auto shootComp = currentWeapon->ShootWeaponComponent; // Offset 0x0F80 (in ShootWeapon)
                        if (shootComp && !isObjectInvalid(shootComp))
                        {
                            auto entity = shootComp->ShootWeaponEntityComponent; // Offset 0x0398 (in ShootWeaponComponent)
                            if (entity && !isObjectInvalid(entity))
                            {
                                // Safe access to coefficients on the correct object
                                float headCoff = entity->WeaponHitPartCoff.Head; // Offset 0x0698
                                entity->WeaponHitPartCoff.Body = headCoff;       // Offset 0x069C
                                entity->WeaponHitPartCoff.Limbs = headCoff;      // Offset 0x06A0
                                entity->WeaponHitPartCoff.Hand = headCoff;       // Offset 0x06A4
                                entity->WeaponHitPartCoff.Foot = headCoff;       // Offset 0x06A8

                                entity->WeaponHitPartCoffZombie.Body = headCoff;  // Offset 0x06B0
                                entity->WeaponHitPartCoffZombie.Limbs = headCoff; // Offset 0x06B4
                                entity->WeaponHitPartCoffZombie.Hand = headCoff;  // Offset 0x06B8
                                entity->WeaponHitPartCoffZombie.Foot = headCoff;  // Offset 0x06BC
                            }
                        }
                    }
                }

                // Maintain the judgment override on the character itself
                auto charSimple = (SDK::ASTExtraSimpleCharacter *)character;
                charSimple->HitPartJudgment = SDK::EHitPartJugementType::HitBone; // Offset 0x1760
            }
        }
    }
}
