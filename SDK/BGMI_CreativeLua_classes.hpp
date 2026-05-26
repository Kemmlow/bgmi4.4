#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:44 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class CreativeLua.CreativeBridgeLuaVM
// 0x0030 (0x0390 - 0x0360)
class UCreativeBridgeLuaVM : public UCreativeLuaVM
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	class UObject*                                     LuaVMManager;                                             // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RegisterUGCVMFunctionHandlerName;                         // 0x0370(0x0010) (ZeroConstructor)
	struct FString                                     UGCVMPostInitFunctionHandlerName;                         // 0x0380(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CreativeLua.CreativeBridgeLuaVM");
		return pStaticClass;
	}


	void UGCLuaError(int ErrCode);
	void SetUGCSuspendStateFix(bool bEnable);
	void RegisterSluaCallUgcluaEventHandler();
	void PostInit();
	bool GetUGCSuspendStateFix();
};


// Class CreativeLua.CreativeEnvLuaVM
// 0x0058 (0x0080 - 0x0028)
class UCreativeEnvLuaVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CreativeLua.CreativeEnvLuaVM");
		return pStaticClass;
	}

};


// Class CreativeLua.CreativeEnvLuaVMFactory
// 0x0000 (0x0028 - 0x0028)
class UCreativeEnvLuaVMFactory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CreativeLua.CreativeEnvLuaVMFactory");
		return pStaticClass;
	}


	static class UCreativeEnvLuaVM* CreateCreativeEnvLuaVM(const struct FString& InLuaFilePath, class UObject* WorldContextObject);
};


}

