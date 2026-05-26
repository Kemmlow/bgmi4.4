#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:42 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0028 - 0x0028)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return pStaticClass;
	}


	static bool IsRunningOnBattery();
	static bool IsBatteryStateCharging();
	static int GetVolumeState();
	static struct FString GetDeviceName();
	static float GetBatteryTemperature();
	static int GetBatteryLevel();
	static bool AreHeadphonesPluggedIn();
};


}

