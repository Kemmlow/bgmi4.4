#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:41 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum CommonLib.DownloadResult
enum class EDownloadResult : uint8_t
{
	SuccessDownloading             = 0,
	DownloadFailed                 = 1,
	SaveFailed                     = 2,
	DirectoryCreationFailed        = 3,
	DownloadResult_MAX             = 4
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct CommonLib.ServiceCollection
// 0x0050
struct FServiceCollection
{
	TMap<struct FString, class UObject*>               ServiceMap;                                               // 0x0000(0x0050) (ZeroConstructor)
};

}

