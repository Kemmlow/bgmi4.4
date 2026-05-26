#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:48 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// 0x0018 (0x0098 - 0x0080)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	int                                                DictionarySize;                                           // 0x0080(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionaryTrials;                                         // 0x0084(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialRandomness;                                          // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialGenerations;                                         // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoTrials;                                                // 0x0090(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
		return pStaticClass;
	}

};


}

