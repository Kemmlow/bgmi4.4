// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <limits>
#include <algorithm>
#include <vector>

namespace knoxy
{
    inline bool Hyper360 = true;
    inline bool BulletTrack = true;
    inline float BTRange = 600.0f; // 600 meters
    inline bool VisCheckPriority = true;
    inline bool TrueDamageFix = true;
    inline float CustomBulletSpeed = 80000.0f;
}

// Global target bones fallback
inline const char *TargetBonesFallback[] = {
    "Head", "neck_01", "upperarm_r", "upperarm_l", "lowerarm_r", "lowerarm_l",
    "spine_03", "spine_02", "spine_01", "pelvis", "thigh_l", "thigh_r", "calf_l", "calf_r"};

/**
 * @brief Hyper-Advanced Targeting Scanner.
 * Priorities:
 * 1. Visible FOV Targets (Closest to crosshair)
 * 2. Parachuting Players (PS_FreeFall, PS_Opening)
 * 3. Nearest Valid Ground Targets
 */
inline SDK::ASTExtraPlayerCharacter *GetKnoxyHyperTarget(SDK::FVector &outTargetPos)
{
    auto character = (SDK::ASTExtraBaseCharacter *)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController *)g_PlayerController;

    if (!character || !controller || !g_World)
        return nullptr;

    SDK::ASTExtraPlayerCharacter *bestFOVTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *bestParachuteTarget = nullptr;
    SDK::ASTExtraPlayerCharacter *bestDistanceTarget = nullptr;

    float minScreenDist = std::numeric_limits<float>::max();
    float minParachuteDist = std::numeric_limits<float>::max();
    float minWorldDist = std::numeric_limits<float>::max();

    SDK::FVector bestFOVPos, bestParachutePos, bestDistancePos;
    SDK::FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    auto actors = getActors();

    for (auto actor : actors)
    {
        if (!actor || actor == (SDK::AActor *)character || isObjectInvalid(actor))
            continue;

        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass()))
            continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter *)actor;

        // Basic health and team checks
        if (enemy->bDying || enemy->Health <= 0.0f || enemy->TeamID == character->TeamID)
            continue;

        float worldDist = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDist > knoxy::BTRange)
            continue;

        bool isVisible = false;
        SDK::FVector foundBonePos;

        // Visibility Check on multiple bones
        SDK::FVector viewPos = character->GetGunOwnerHeadLocation();
        for (const char *boneName : TargetBonesFallback)
        {
            SDK::FVector bonePos = enemy->GetBonePos(boneName, {0, 0, 0});
            // LineOfSightTo: Checks if Target is visible from viewPos
            if (controller->LineOfSightTo(enemy, viewPos, false))
            {
                foundBonePos = bonePos;
                isVisible = true;
                break;
            }
        }

        // Strict visibility requirement
        if (!isVisible)
            continue;

        // Priority 1: FOV Scanning
        SDK::FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(foundBonePos, true, &screenPos))
        {
            float screenDist = SDK::FVector2D::Distance(crosshair, screenPos);
            if (screenDist < minScreenDist)
            {
                minScreenDist = screenDist;
                bestFOVTarget = enemy;
                bestFOVPos = foundBonePos;
            }
        }

        // Priority 2: Parachute Targeting
        // PS_FreeFall = 1, PS_Opening = 2
        uint8_t pState = (uint8_t)enemy->ParachuteState;
        if (pState == 1 || pState == 2)
        {
            if (worldDist < minParachuteDist)
            {
                minParachuteDist = worldDist;
                bestParachuteTarget = enemy;
                bestParachutePos = foundBonePos;
            }
        }

        // Priority 3: Distance Targeting
        if (worldDist < minWorldDist)
        {
            minWorldDist = worldDist;
            bestDistanceTarget = enemy;
            bestDistancePos = foundBonePos;
        }
    }

    // Return targets based on priority hierarchy
    if (bestFOVTarget)
    {
        outTargetPos = bestFOVPos;
        return bestFOVTarget;
    }
    if (bestParachuteTarget)
    {
        outTargetPos = bestParachutePos;
        return bestParachuteTarget;
    }
    if (bestDistanceTarget)
    {
        outTargetPos = bestDistancePos;
        return bestDistanceTarget;
    }

    return nullptr;
}
