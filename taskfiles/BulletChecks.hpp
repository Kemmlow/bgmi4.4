// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

static bool DisableBulletChecks(ASTExtraBaseCharacter* localPlayer) {
    if (localPlayer && localPlayer->WeaponManagerComponent) {
        auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated && CurrentWeaponReplicated->ShootWeaponComponent) {
            auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
            auto ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
            if (ShootWeaponEntityComponent) {
                ShootWeaponEntityComponent->GM_VerifyProjectileBulletShootPos = false;
                ShootWeaponEntityComponent->GM_VerifyProjectileBulletShootPosByNetDelay = false;
                ShootWeaponEntityComponent->GM_VerifyProjectileBulletPosBlock = false;
                ShootWeaponEntityComponent->bVerifyBulletImpactOffset = false;
                ShootWeaponEntityComponent->bVerifyClientHitAndBullet = false;
                return true;
            }
        }
    }
    return false;
}
