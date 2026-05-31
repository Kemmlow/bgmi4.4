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
                // Force all damage coefficients to match the Head multiplier
                float headCoff = character->WeaponHitPartCoff.Head; // Offset 0x0698

                character->WeaponHitPartCoff.Body = headCoff;  // Offset 0x069C
                character->WeaponHitPartCoff.Limbs = headCoff; // Offset 0x06A0
                character->WeaponHitPartCoff.Hand = headCoff;  // Offset 0x06A4
                character->WeaponHitPartCoff.Foot = headCoff;  // Offset 0x06A8

                // Target Zombie-specific coefficients as well
                character->WeaponHitPartCoffZombie.Body = headCoff;  // Offset 0x06B0
                character->WeaponHitPartCoffZombie.Limbs = headCoff; // Offset 0x06B4
                character->WeaponHitPartCoffZombie.Hand = headCoff;  // Offset 0x06B8
                character->WeaponHitPartCoffZombie.Foot = headCoff;  // Offset 0x06BC

                // Force Hit Bone Judgement for pinpoint accuracy
                character->HitPartJudgment = SDK::EHitPartJugementType::HitBone; // Offset 0x1760
            }
        }
    }
}
