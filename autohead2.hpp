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
                // 1. Force AutoAim Component to target only the Head
                auto autoComp = character->AutoAimComp; // Offset 0x4640
                if (autoComp && !isObjectInvalid(autoComp))
                {
                    // Redirect all target bones to the Head
                    for (int i = 0; i < autoComp->Bones.Num(); i++)
                    {
                        autoComp->Bones[i] = SDK::FName("Head"); // Offset 0x02A8 (within AutoAimComp)
                    }
                }

                // 2. Force Global Hit Body Type to BigHead (1)
                // Override the HitPartJudgment state to ensure bone-level precision
                character->HitPartJudgment = SDK::EHitPartJugementType::HitBone; // Offset 0x1760

                // 3. Brutalize the HitBodyPosMap to redirect all regions to Headshot
                // This ensures any part of the mesh hit is re-mapped to BigHead
                for (auto& pair : character->NewHitBodyPosMap) // Offset 0x1768
                {
                    pair.Value = SDK::EAvatarDamagePosition::BigHead;
                }
            }
        }
    }
}
