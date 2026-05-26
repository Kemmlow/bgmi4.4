#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum EZUMG.EEzItemState
enum class EEzItemState : uint8_t
{
	EEzItemState__Normal           = 0,
	EEzItemState__Selected         = 1,
	EEzItemState__Disabled         = 2,
	EEzItemState__EEzItemState_MAX = 3
};


// Enum EZUMG.ESectorSizeRule
enum class ESectorSizeRule : uint8_t
{
	ESectorSizeRule__Fixed         = 0,
	ESectorSizeRule__Fill          = 1,
	ESectorSizeRule__ESectorSizeRule_MAX = 2
};


// Enum EZUMG.ERadialArrangement
enum class ERadialArrangement : uint8_t
{
	ERadialArrangement__Default    = 0,
	ERadialArrangement__AlignFirst = 1,
	ERadialArrangement__AlignCenter = 2,
	ERadialArrangement__ERadialArrangement_MAX = 3
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct EZUMG.SectorSize
// 0x0004
struct FSectorSize
{
	uint16_t                                           Value;                                                    // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESectorSizeRule>                  SizeRule;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
};

}

