#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Parameters
//---------------------By BEST @RXJOKER1---------------------------

// Function PlanCHRuntime.PlanCH_GameMode.HandleNavigationInfo
struct APlanCH_GameMode_HandleNavigationInfo_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCH_GameMode.GetPlayerStart
struct APlanCH_GameMode_GetPlayerStart_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerStart*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCH_GameMode.DSPlayerKickOut
struct APlanCH_GameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExitReason;                                               // (Parm, ZeroConstructor)
};

// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_5
struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_5_Params
{
};

// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_4
struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_4_Params
{
};

// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_3
struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_3_Params
{
};

// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_2
struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_2_Params
{
};

// Function PlanCHRuntime.PlanCH_GameState.LuaOnRep_PartyDanceLeadInfo
struct APlanCH_GameState_LuaOnRep_PartyDanceLeadInfo_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCH_GameState.ChangePartyLeadInfo
struct APlanCH_GameState_ChangePartyLeadInfo_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOccupied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeginTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerUID;                                                // (Parm, ZeroConstructor)
};

// Function PlanCHRuntime.PlanCH_PlayerState.RequestPaintDecal
struct APlanCH_PlayerState_RequestPaintDecal_Params
{
	int                                                DecalId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCH_PlayerState.OnRep_SkinId
struct APlanCH_PlayerState_OnRep_SkinId_Params
{
};

// Function PlanCHRuntime.PlanCH_PlayerState.OnRep_LandId
struct APlanCH_PlayerState_OnRep_LandId_Params
{
};

// Function PlanCHRuntime.PlanCH_PlayerState.InitLandId
struct APlanCH_PlayerState_InitLandId_Params
{
};

// Function PlanCHRuntime.PlanCH_PlayerState.CanPaintDecal
struct APlanCH_PlayerState_CanPaintDecal_Params
{
	int                                                DecalId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHBinFileHelper.Init
struct UPlanCHBinFileHelper_Init_Params
{
	int                                                z4BufferSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                zeroListSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHGameplayStatics.SpinEvaluate
struct UPlanCHGameplayStatics_SpinEvaluate_Params
{
	float                                              S;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHGameplayStatics.SetPlayerMovementBlendTime
struct UPlanCHGameplayStatics_SetPlayerMovementBlendTime_Params
{
	class ASTExtraPlayerCharacter*                     PlayerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHGameplayStatics.GetActorBound
struct UPlanCHGameplayStatics_GetActorBound_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHGameplayStatics.ChangeLightChannel
struct UPlanCHGameplayStatics_ChangeLightChannel_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InChannelBitMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHMapData.RemovePlayerItem
struct UPlanCHMapData_RemovePlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHMapData.AddPlayerItem
struct UPlanCHMapData_AddPlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     PlayerInfoBPItem;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PlayerInfoRotWidgetItem;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHSpectatorPawn.OnSpectatorRestart
struct APlanCHSpectatorPawn_OnSpectatorRestart_Params
{
};

// Function PlanCHRuntime.PlanCHSpectatorPawn.MoveRight
struct APlanCHSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlanCHRuntime.PlanCHSpectatorPawn.MoveForward
struct APlanCHSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

