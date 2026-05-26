#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:47 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class LuaHotReload.LuaHotReloadHelper
// 0x0010 (0x0038 - 0x0028)
class ULuaHotReloadHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScriptChangedDelegate;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LuaHotReload.LuaHotReloadHelper");
		return pStaticClass;
	}


	void OnLuaFileHotUpdate(const struct FString& NotifyMessage);
};


}

