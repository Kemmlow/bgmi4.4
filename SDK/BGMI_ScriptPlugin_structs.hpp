#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:36 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct ScriptPlugin.SonInfo
// 0x0018
struct FSonInfo
{
	int                                                xlevel;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     xname;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ScriptPlugin.PlayerInfo
// 0x0038
struct FPlayerInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
	int                                                LocalPosition;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSonInfo                                    mySon;                                                    // 0x0020(0x0018)
};

// ScriptStruct ScriptPlugin.LuaStateGuard
// 0x0008
struct FLuaStateGuard
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ScriptPlugin.LuaStateWrapperInitParams
// 0x00C0
struct FLuaStateWrapperInitParams
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

}

