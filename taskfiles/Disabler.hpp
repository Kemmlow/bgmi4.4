// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"

static bool GlobalDisabler(ASTExtraBaseCharacter* localPlayer) {
    if (localPlayer) {
        localPlayer->bEnableSecurity = false;
        localPlayer->bEnableSecurityCheck = false;

        if (localPlayer->PlayerSecurityInfoCollector) {
            localPlayer->PlayerSecurityInfoCollector = nullptr;
        }

        auto HiggsBosonComponent = (UHiggsBosonComponent*)localPlayer->GetComponentByClass(UHiggsBosonComponent::StaticClass());
        if (HiggsBosonComponent) {
            HiggsBosonComponent->bEnableBandCount = false;
            HiggsBosonComponent->bOfflineMoveReady = false;
            HiggsBosonComponent->bMHActive = false;
            HiggsBosonComponent->bEnglish = false;
        }
        return true;
    }
    return false;
}
