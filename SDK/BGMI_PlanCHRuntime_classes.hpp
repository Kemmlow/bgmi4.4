#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class PlanCHRuntime.PlanCH_GameMode
// 0x0008 (0x22B8 - 0x22B0)
class APlanCH_GameMode : public ABattleRoyaleGameMode
{
public:
	class ADynamicSublevelGenerator*                   LevelGenerator;                                           // 0x22B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId, int SkinID);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanCHRuntime.PlanCH_GameModeState_Active
// 0x0000 (0x00C8 - 0x00C8)
class UPlanCH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameModeState_Active");
		return pStaticClass;
	}

};


// Class PlanCHRuntime.PlanCH_GameModeState_Fighting
// 0x0000 (0x00D8 - 0x00D8)
class UPlanCH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameModeState_Fighting");
		return pStaticClass;
	}

};


// Class PlanCHRuntime.PlanCH_GameState
// 0x0090 (0x1660 - 0x15D0)
class APlanCH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             // 0x15D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_2;                                     // 0x15E0(0x0020) (Net)
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_3;                                     // 0x1600(0x0020) (Net)
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_4;                                     // 0x1620(0x0020) (Net)
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_5;                                     // 0x1640(0x0020) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameState");
		return pStaticClass;
	}


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID);
};


// Class PlanCHRuntime.PlanCH_PlayerState
// 0x0008 (0x1CD0 - 0x1CC8)
class APlanCH_PlayerState : public ASTExtraPlayerState
{
public:
	int                                                LandId;                                                   // 0x1CC8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                SkinID;                                                   // 0x1CCC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_PlayerState");
		return pStaticClass;
	}


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_SkinId();
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};


// Class PlanCHRuntime.PlanCHBinFileHelper
// 0x0000 (0x0028 - 0x0028)
class UPlanCHBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHBinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanCHRuntime.PlanCHGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UPlanCHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime);
	void GetActorBound(class AActor* Actor, struct FVector* Size);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanCHRuntime.PlanCHMapData
// 0x0020 (0x00B8 - 0x0098)
class UPlanCHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanCHRuntime.PlanCHSpectatorPawn
// 0x0070 (0x05A8 - 0x0538)
class APlanCHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0538(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0590(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


}

