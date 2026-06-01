// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"

inline void ApplyAutoHead2(uintptr_t localPlayer, bool autohead2)
{
    if (localPlayer)
    {
        if (autohead2)
        {
            auto character = (SDK::ASTExtraBaseCharacter *)localPlayer;
            if (character && !isObjectInvalid(character))
            {
                // 1. Mimic lua: local autoComp = self.AutoAimComp
                auto autoComp = character->AutoAimComp; // Offset 0x4640
                if (autoComp && !isObjectInvalid(autoComp))
                {
                    // autoComp.Bones = { "Head", "Head", "Head" }
                    // Force the bone array to prioritize only the head
                    for (int i = 0; i < autoComp->Bones.Num(); i++)
                    {
                        autoComp->Bones[i] = SDK::FName("Head");
                    }
                }

                // 2. Mimic lua: return EAvatarDamagePosition.BigHead
                // We brutalize the character's internal mapping to force BigHead registration
                for (auto& pair : character->NewHitBodyPosMap) // Offset 0x1768
                {
                    pair.Value = SDK::EAvatarDamagePosition::BigHead;
                }

                // Force bone-level judgment for absolute precision
                character->HitPartJudgment = SDK::EHitPartJugementType::HitBone; // Offset 0x1760
            }
        }
    }
}
