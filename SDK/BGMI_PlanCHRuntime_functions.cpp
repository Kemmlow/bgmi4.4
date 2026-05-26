// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Functions
//---------------------By BEST @RXJOKER1---------------------------

// Function PlanCHRuntime.PlanCH_GameMode.HandleNavigationInfo
// (Final, Native, Private)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APlanCH_GameMode::HandleNavigationInfo(class AController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.HandleNavigationInfo");

	APlanCH_GameMode_HandleNavigationInfo_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameMode.GetPlayerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinID                         (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerStart*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerStart* APlanCH_GameMode::GetPlayerStart(int LandId, int SkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.GetPlayerStart");

	APlanCH_GameMode_GetPlayerStart_Params params;
	params.LandId = LandId;
	params.SkinID = SkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCH_GameMode.DSPlayerKickOut
// (Final, Native, Public)
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExitReason                     (Parm, ZeroConstructor)

void APlanCH_GameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.DSPlayerKickOut");

	APlanCH_GameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_5
// (Final, Native, Public)

void APlanCH_GameState::OnRep_PartyDanceLeadInfo_5()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_5");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_5_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_4
// (Final, Native, Public)

void APlanCH_GameState::OnRep_PartyDanceLeadInfo_4()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_4");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_4_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_3
// (Final, Native, Public)

void APlanCH_GameState::OnRep_PartyDanceLeadInfo_3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_3");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_2
// (Final, Native, Public)

void APlanCH_GameState::OnRep_PartyDanceLeadInfo_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_2");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.LuaOnRep_PartyDanceLeadInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)

void APlanCH_GameState::LuaOnRep_PartyDanceLeadInfo(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.LuaOnRep_PartyDanceLeadInfo");

	APlanCH_GameState_LuaOnRep_PartyDanceLeadInfo_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_GameState.ChangePartyLeadInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOccupied                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeginTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerUID                      (Parm, ZeroConstructor)

void APlanCH_GameState::ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.ChangePartyLeadInfo");

	APlanCH_GameState_ChangePartyLeadInfo_Params params;
	params.LandId = LandId;
	params.bOccupied = bOccupied;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_PlayerState.RequestPaintDecal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlanCH_PlayerState::RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.RequestPaintDecal");

	APlanCH_PlayerState_RequestPaintDecal_Params params;
	params.DecalId = DecalId;
	params.TargetTransform = TargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_PlayerState.OnRep_SkinId
// (Final, Native, Public)

void APlanCH_PlayerState::OnRep_SkinId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.OnRep_SkinId");

	APlanCH_PlayerState_OnRep_SkinId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_PlayerState.OnRep_LandId
// (Final, Native, Public)

void APlanCH_PlayerState::OnRep_LandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.OnRep_LandId");

	APlanCH_PlayerState_OnRep_LandId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_PlayerState.InitLandId
// (Event, Public, BlueprintEvent)

void APlanCH_PlayerState::InitLandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.InitLandId");

	APlanCH_PlayerState_InitLandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCH_PlayerState.CanPaintDecal
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlanCH_PlayerState::CanPaintDecal(int DecalId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.CanPaintDecal");

	APlanCH_PlayerState_CanPaintDecal_Params params;
	params.DecalId = DecalId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHBinFileHelper.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            z4BufferSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            zeroListSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlanCHBinFileHelper::Init(int z4BufferSize, int zeroListSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHBinFileHelper.Init");

	UPlanCHBinFileHelper_Init_Params params;
	params.z4BufferSize = z4BufferSize;
	params.zeroListSize = zeroListSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHGameplayStatics.SpinEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          S                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlanCHGameplayStatics::SpinEvaluate(float S, float T)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.SpinEvaluate");

	UPlanCHGameplayStatics_SpinEvaluate_Params params;
	params.S = S;
	params.T = T;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHGameplayStatics.SetPlayerMovementBlendTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            nType                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanCHGameplayStatics::SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.SetPlayerMovementBlendTime");

	UPlanCHGameplayStatics_SetPlayerMovementBlendTime_Params params;
	params.PlayerChar = PlayerChar;
	params.nType = nType;
	params.BlendTime = BlendTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHGameplayStatics.GetActorBound
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Size                           (Parm, OutParm, IsPlainOldData)

void UPlanCHGameplayStatics::GetActorBound(class AActor* Actor, struct FVector* Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.GetActorBound");

	UPlanCHGameplayStatics_GetActorBound_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function PlanCHRuntime.PlanCHGameplayStatics.ChangeLightChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InChannelBitMask               (Parm, ZeroConstructor, IsPlainOldData)

void UPlanCHGameplayStatics::ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.ChangeLightChannel");

	UPlanCHGameplayStatics_ChangeLightChannel_Params params;
	params.InComponent = InComponent;
	params.InChannelBitMask = InChannelBitMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCHMapData.RemovePlayerItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanCHMapData::RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHMapData.RemovePlayerItem");

	UPlanCHMapData_RemovePlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHMapData.AddPlayerItem
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 PlayerInfoBPItem               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 PlayerInfoRotWidgetItem        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 OffsetLocation                 (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanCHMapData::AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHMapData.AddPlayerItem");

	UPlanCHMapData_AddPlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;
	params.PlayerInfoBPItem = PlayerInfoBPItem;
	params.PlayerInfoRotWidgetItem = PlayerInfoRotWidgetItem;
	params.OffsetLocation = OffsetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanCHRuntime.PlanCHSpectatorPawn.OnSpectatorRestart
// (Event, Public, BlueprintEvent)

void APlanCHSpectatorPawn::OnSpectatorRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.OnSpectatorRestart");

	APlanCHSpectatorPawn_OnSpectatorRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCHSpectatorPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanCHSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.MoveRight");

	APlanCHSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanCHRuntime.PlanCHSpectatorPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanCHSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.MoveForward");

	APlanCHSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

