#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class TPlanGame.BackpackComponentTPlan
// 0x0000 (0x05F0 - 0x05F0)
class UBackpackComponentTPlan : public UBackpackComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackComponentTPlan");
		return pStaticClass;
	}


	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	bool ChangeItemStoreAreaNewInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
};


// Class TPlanGame.BackpackTPlanUtils
// 0x0000 (0x0028 - 0x0028)
class UBackpackTPlanUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackTPlanUtils");
		return pStaticClass;
	}


	static void UnRegisterInvokeClass();
	static void RegisterInvokeClass();
	static class UBackpackBlueprintTPlanUtils* RealGetBPUtils();
};


// Class TPlanGame.BackpackBlueprintTPlanUtils
// 0x0000 (0x0BA0 - 0x0BA0)
class UBackpackBlueprintTPlanUtils : public UBackpackBlueprintUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackBlueprintTPlanUtils");
		return pStaticClass;
	}

};


// Class TPlanGame.MetroStoreComponent
// 0x0048 (0x0280 - 0x0238)
class UMetroStoreComponent : public ULuaActorComponent
{
public:
	int                                                status;                                                   // 0x0238(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BuyFrequence;                                             // 0x023C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FCurrencyInfo>                       CurrencyList;                                             // 0x0240(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGoodsInfo>                          GoodsList;                                                // 0x0250(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsListNum;                                             // 0x0260(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsNum;                                                 // 0x0270(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.MetroStoreComponent");
		return pStaticClass;
	}


	void OnRep_StoreID();
	void OnRep_Status();
	void OnRep_GoodsNum();
	void OnRep_GoodsListNum();
	void OnRep_GoodsList();
	void OnRep_CurrencyList();
	void OnRep_BuyFrequence();
};


// Class TPlanGame.TPlanPickupItemUsefulProxy
// 0x0000 (0x0378 - 0x0378)
class UTPlanPickupItemUsefulProxy : public UPickupItemUsefulProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.TPlanPickupItemUsefulProxy");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameMode
// 0x0058 (0x2440 - 0x23E8)
class AXTGameMode : public ABattleRoyaleGameModeTeam
{
public:
	TArray<class AActor*>                              OccupiedPlayerStartGroupList;                             // 0x23E8(0x0010) (ZeroConstructor)
	TArray<class ASTExtraPlayerStartGroup*>            UnOccupiedPlayerStartGroupList;                           // 0x23F8(0x0010) (ZeroConstructor)
	bool                                               IsResetPlayerStart;                                       // 0x2408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2409(0x0003) MISSED OFFSET
	float                                              LastCheckAITime;                                          // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveInterval;                                    // 0x2410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveRange;                                       // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                DogTagID;                                                 // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropID;                                           // 0x241C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropDot;                                          // 0x2420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreSpawnPlayers;                                         // 0x2424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEcapedPlayerInTeam;                                // 0x2425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bZombiePVEMode;                                           // 0x2426(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMapLoaded;                                               // 0x2427(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                iRandomPolicestationIndex;                                // 0x2428(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x242C(0x0004) MISSED OFFSET
	TArray<struct FName>                               LoadingPlayerState;                                       // 0x2430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameMode");
		return pStaticClass;
	}


	void SetStateLeftTime(int LeftTime);
	void SetPlayerStartOccupied(class AActor* PlayerStart);
	void RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	void NotifyGameModeInit();
	void LoadMapFinished();
	bool IsNeedRestPlayerStart(class AController* Player);
	void GMShowSpawner();
	void GMShowEnterExit();
	void GMShowAssetBox();
	void GMSetPVEAIMax(int Num);
	TArray<class AActor*> GetOccupiedPlayerStartGroupList();
	bool CheckNoHumanExist();
	void CheckAIActive();
};


// Class TPlanGame.XTGameModeStateFightingTeam
// 0x0000 (0x00D8 - 0x00D8)
class UXTGameModeStateFightingTeam : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateFightingTeam");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameModeStateFinished
// 0x0000 (0x00C0 - 0x00C0)
class UXTGameModeStateFinished : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateFinished");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameModeStateReady
// 0x0000 (0x0118 - 0x0118)
class UXTGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateReady");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameState
// 0x0058 (0x1628 - 0x15D0)
class AXTGameState : public ASTExtraGameStateBase
{
public:
	float                                              LastLeaveTime;                                            // 0x15D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x15D4(0x0004) MISSED OFFSET
	TMap<int, int>                                     PreciousItemMap;                                          // 0x15D8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameState");
		return pStaticClass;
	}


	void ResetLeftTime();
	void PreLoadPreciousItemsMap();
	void OnRep_LastLeaveTime();
	int GetPlayerMilitartyOnClient();
	int CheckPreciousItemPrice(int TypeSpecificID);
	void BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor);
};


// Class TPlanGame.XTPlayerState
// 0x0050 (0x1D18 - 0x1CC8)
class AXTPlayerState : public ASTExtraPlayerState
{
public:
	TArray<struct FSyncRelevantPlayerTask>             SyncRelevantPlayerTask;                                   // 0x1CC8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FVector>                             EscapePosi;                                               // 0x1CD8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                BetrayDefaultTime;                                        // 0x1CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1CEC(0x0004) MISSED OFFSET
	uint64_t                                           Gold;                                                     // 0x1CF0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEscaped;                                               // 0x1CF8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRunAway;                                               // 0x1CF9(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x1CFA(0x0006) MISSED OFFSET
	TArray<int>                                        AssetPointsCheckedByTeammate;                             // 0x1D00(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FXTBetrayInfo                               BetrayInfo;                                               // 0x1D10(0x0008) (BlueprintVisible, Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTPlayerState");
		return pStaticClass;
	}


	void OnRepXTBetrayInfo();
	void OnRepRelevantPlayerTaskNotifyBP();
	void OnRepEscapePosition();
	void OnRepAssetPointsCheckedByTeammate();
	void OnRep_RelevantPlayerTaskNotify();
	void OnRep_IsRunAway();
	void OnRep_IsEscaped();
	void OnRep_Gold();
	void OnRep_EscapePosiNotify();
	void OnRep_BetrayInfo();
	void OnRep_AssetPointsCheckedByTeammate();
	void OnPlayerEscaped();
	bool IsInGame();
	bool IsInBetrayState();
	TArray<struct FPreciousItem> GetAllPreciousItemsList();
};


}

