// Credits : @knoxy_dev
#pragma once

#include "SDK.hpp"
#include <limits>
#include <algorithm>

namespace knoxy {
    inline bool BulletTrack = true;
    inline float BTRange = 600.0f;
    inline bool TrueDamageFix = true;
    inline bool SkyShoot = true;
}

inline const char* TargetBones[] = {"Head", "neck_01", "upperarm_r", "upperarm_l", "spine_03", "spine_01", "pelvis", "thigh_l", "thigh_r"};

inline SDK::ASTExtraPlayerCharacter* GetKnoxyHyperTarget(SDK::FVector& outTargetPos) {
    SDK::ASTExtraPlayerCharacter* bestTarget = nullptr;
    float minCrosshairDist = std::numeric_limits<float>::max();

    auto character = (SDK::ASTExtraBaseCharacter*)g_LocalPlayer;
    auto controller = (SDK::ASTExtraPlayerController*)g_PlayerController;
    if (!character || !controller || SDK::isObjectInvalid(character)) return nullptr;

    auto actors = getActors();
    SDK::FVector2D crosshair(screenWidth / 2.0f, screenHeight / 2.0f);

    for (auto actor : actors) {
        if (!actor || actor == (SDK::AActor*)character || SDK::isObjectInvalid(actor)) continue;
        if (!actor->IsA(SDK::ASTExtraPlayerCharacter::StaticClass())) continue;

        auto enemy = (SDK::ASTExtraPlayerCharacter*)actor;
        if (enemy->bDying || enemy->TeamID == character->TeamID) continue;

        float worldDist = character->GetDistanceTo(enemy) / 100.0f;
        if (worldDist > knoxy::BTRange) continue;

        bool isVisible = false;
        SDK::FVector foundPos;

        for (const char* bone : TargetBones) {
            SDK::FVector currentBone = enemy->GetBonePos(bone, {0, 0, 0});
            if (controller->LineOfSightTo(enemy, currentBone, true)) {
                foundPos = currentBone;
                isVisible = true;
                break;
            }
        }

        if (!isVisible) continue;

        SDK::FVector2D screenPos;
        if (controller->ProjectWorldLocationToScreen(foundPos, true, &screenPos)) {
            float screenDist = SDK::FVector2D::Distance(crosshair, screenPos);
            if (screenDist < minCrosshairDist) {
                minCrosshairDist = screenDist;
                bestTarget = enemy;
                outTargetPos = foundPos;
            }
        }
    }
    return bestTarget;
}

namespace Hacks {
    inline void ApplyNuclearTrueDamage(SDK::ASTExtraBaseCharacter* character) {
        if (!character || SDK::isObjectInvalid(character) || !character->LagCompensationComponent) return;
        auto lagComp = character->LagCompensationComponent;

        lagComp->bVerifyClientMuzzle = false;
        lagComp->bVerifyShootRange = false;
        lagComp->bVerifyShootDir = false;
        lagComp->bVerifyMuzzleImpactDir = false;
        lagComp->bVerifyMuzzleLocus = false;
        lagComp->bVerifyShootPoint = false;
        lagComp->bVerifyBulletImpactOffset = false;
        lagComp->bVerifyClientHitAndBullet = false;
        lagComp->bVerifyCharacterImpactOffset = false;
        lagComp->bVerifyClientHitCheck = false;

        lagComp->ShootCornerMaxDotValue = -1.0f;
        lagComp->GrayWeaponAndShootAngle = 180.0f;

        lagComp->TolerateMuzzleAndCharacterDisSquare = 999999.0f;
        lagComp->TolerateShootPointDistanceSqured = 999999.0f;
        lagComp->TolerateMuzzleDistanceSqured = 999999.0f;
        lagComp->TolerateBulletImpactOffsetDistSqured = 999999.0f;
        lagComp->TolerateOwnerAndBulletDist = 999999.0f;
        lagComp->TolerateBulletDirCheckDistance = 999999.0f;
        lagComp->TolerateBulletDirOffsetSquared = 999999.0f;
        lagComp->TolerateShootRange = 999999.0f;

        lagComp->VictimShootVerify.ClientMuzzleHeightMax = 99999.0f;
        lagComp->VictimShootVerify.ClientPureMuzzleHeightMax = 99999.0f;

        if (character->WeaponManagerComponent) {
            auto weapon = (SDK::ASTExtraShootWeapon*)character->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && !SDK::isObjectInvalid(weapon) && weapon->ShootWeaponComponent) {
                auto normComp = (SDK::UNormalProjectileComponent*)weapon->ShootWeaponComponent;
                normComp->VerifyConfig.bVerifyBlockVerify = false;
                normComp->VerifyConfig.bVerifyShootDir2D = false;
                normComp->VerifyConfig.bVerifyClientFlySpeed = false;
                normComp->VerifyConfig.MaxShootPointTolerateDistanceOffset = 99999.0f;
                normComp->VerifyConfig.MaxImpactPointTolerateDistanceOffset = 99999.0f;
            }
        }
    }
}

inline void (*ShootBulletInner_Orig)(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID);

inline void xShootBulletInner(uintptr_t Weapon, SDK::FVector StartLoc, SDK::FRotator StartRot, int ShootID) {
    auto localCharacter = (SDK::ASTExtraBaseCharacter*)g_LocalPlayer;
    if (!localCharacter || SDK::isObjectInvalid(localCharacter)) return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);

    if (knoxy::TrueDamageFix) Hacks::ApplyNuclearTrueDamage(localCharacter);

    if (knoxy::BulletTrack) {
        SDK::FVector targetedPos;
        auto target = GetKnoxyHyperTarget(targetedPos);
        if (target) {
            float bulletSpeed = 80000.0f;
            auto weapon = (SDK::ASTExtraShootWeapon*)localCharacter->WeaponManagerComponent->CurrentWeaponReplicated;
            if (weapon && weapon->ShootWeaponComponent && weapon->ShootWeaponComponent->ShootWeaponEntityComponent) {
                bulletSpeed = weapon->ShootWeaponComponent->ShootWeaponEntityComponent->BulletFireSpeed;
            }

            float dist = localCharacter->GetDistanceTo(target);
            float time = dist / bulletSpeed;
            float leadFactor = (target->ParachuteState > 0) ? 0.05f : 0.03f;
            SDK::FVector predictedPos = targetedPos + (target->GetVelocity() * (time + leadFactor));
            SDK::FRotator aimRot = SDK::UKismetMathLibrary::FindLookAtRotation(StartLoc, predictedPos);

            return ShootBulletInner_Orig(Weapon, StartLoc, aimRot, ShootID);
        }
    }
    return ShootBulletInner_Orig(Weapon, StartLoc, StartRot, ShootID);
}
