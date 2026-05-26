#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:47 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class IGH5CachePlugin.IGH5CachePluginSettings
// 0x0010 (0x0038 - 0x0028)
class UIGH5CachePluginSettings : public UObject
{
public:
	struct FString                                     Html5Url;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IGH5CachePlugin.IGH5CachePluginSettings");
		return pStaticClass;
	}

};


}

