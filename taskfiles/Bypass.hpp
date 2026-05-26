// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <string>

void* hProcessEvent(UObject* pObj, UFunction* pFunc, void* pArgs) {
    if (pFunc) {
        std::string fnName = pFunc->GetFullName();
        if (fnName.find("RPC_ClientCoronaLab") != std::string::npos) {
            return nullptr;
        }
    }
    // Note: UObject::ProcessEvent index is 76 in this SDK.
    return nullptr;
}
