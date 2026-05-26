#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:39 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 2
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x0028
struct FGameModeName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSoftClassPath                              GameMode;                                                 // 0x0010(0x0018) (Edit)
};

}

