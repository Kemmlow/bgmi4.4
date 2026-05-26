// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <string>

// Target: libUE4.so
// Hook Point (ProcessEvent): 0x8402184

bool hProcessEvent(UObject* pObj, UFunction* pFunc, void* pArgs) {
    if (pFunc) {
        std::string fnName = pFunc->GetFullName();
        if (fnName.find("RPC_ClientCoronaLab") != std::string::npos) {
            return false;
        }
    }
    return true;
}
