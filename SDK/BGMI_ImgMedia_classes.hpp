#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:48 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class ImgMedia.ImgMediaSource
// 0x0028 (0x0060 - 0x0038)
class UImgMediaSource : public UBaseMediaSource
{
public:
	float                                              FramesPerSecondOverride;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ProxyOverride;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDirectoryPath                              SequencePath;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return pStaticClass;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

