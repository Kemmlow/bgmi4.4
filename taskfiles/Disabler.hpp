// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

bool GlobalDisabler(ASTExtraBaseCharacter* localPlayer) {
    if (localPlayer) {
        localPlayer->bEnableSecurity = false;
        localPlayer->bEnableSecurityCheck = false;
        return true;
    }
    return false;
}
