// Credits : @knoxy_dev
#pragma once

#include "../SDK.hpp"
#include <string>

static void hProcessEvent(UObject* pObj, UFunction* pFunc, void* pArgs) {
    if (pFunc) {
        std::string fnName = pFunc->GetFullName();
        if (fnName.find("RPC_ClientCoronaLab") != std::string::npos ||
            fnName.find("RPC_Server_SendLog") != std::string::npos ||
            fnName.find("RPC_ServerGlueHiaPark") != std::string::npos ||
            fnName.find("RPC_ServerCapbo") != std::string::npos ||
            fnName.find("OnRecoilCurveCheckFailed") != std::string::npos ||
            fnName.find("RPC_Server_SynShootMissData") != std::string::npos ||
            fnName.find("RPC_Server_ShootVertifyFailAlarm") != std::string::npos) {
            return;
        }
    }
}
