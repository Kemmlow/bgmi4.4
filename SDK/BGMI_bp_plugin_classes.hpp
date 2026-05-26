#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:45 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class bp_plugin.bp_pluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class Ubp_pluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class bp_plugin.bp_pluginBPLibrary");
		return pStaticClass;
	}


	static void bp_pluginSendEvent(const struct FString& jsonEventCmd);
	static int bp_pluginRequestInstallWidget(int wigetType, const struct FString& authInfo);
	static float bp_pluginLaunchMeemoFunction(const struct FString& Param);
	static bool bp_pluginIsInForeground();
	static int bp_pluginGetInstalledWidgetType();
};


}

