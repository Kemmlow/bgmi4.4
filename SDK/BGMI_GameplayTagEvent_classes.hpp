#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class GameplayTagEvent.UAEGameplayTagEventNodeBase
// 0x00B8 (0x00E0 - 0x0028)
class UUAEGameplayTagEventNodeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FGameplayTagQuery                           Requirements;                                             // 0x0080(0x0048) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FString                                     LuaFilePath;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitialAutoVerify;                                       // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTagEvent.UAEGameplayTagEventNodeBase");
		return pStaticClass;
	}


	void Validate(class AActor* NodeTarget, class UObject* Observer);
	void OnUnregistered(class AActor* NodeTarget, class UObject* Observer);
	void OnRegistered(class AActor* NodeTarget, class UObject* Observer);
	void Invalidate(class AActor* NodeTarget, class UObject* Observer);
};


// Class GameplayTagEvent.UAEGameplayTagImposerSubsystem
// 0x0140 (0x0170 - 0x0030)
class UUAEGameplayTagImposerSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTagEvent.UAEGameplayTagImposerSubsystem");
		return pStaticClass;
	}


	static void UntagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags);
	static void UnregisterActorTagQueryUpdatedEvent(class AActor* Actor, int Handle);
	static bool UnregisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate);
	static void TagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags);
	static void RemoveAllMatchingTags(class AActor* Actor, const struct FGameplayTag& Tag);
	void RemoveAllActorTagEventNode(class AActor* TargetActor);
	static void RemoveActorTagEventNode(class UObject* WorldContextObject, int Handle);
	static int RegisterActorTagQueryUpdatedEvent(class AActor* Actor, const struct FGameplayTagQuery& Query, const struct FScriptDelegate& InDelegate);
	static bool RegisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate);
	void OnActorEndPlay(class AActor* Actor, TEnumAsByte<enum EEndPlayReason> EndPlayReason);
	static class UUAEGameplayTagImposerSubsystem* Get(class UObject* WorldContextObject);
	static void ClearActorTags(class AActor* Actor, bool bNotifyAll);
	static int ApplyActorTagEventNode(class AActor* TargetActor, class UObject* NodeOwner, class UUAEGameplayTagEventNodeBase* NodeBase);
	static bool ActorHasMatchingTag(class AActor* Actor, const struct FGameplayTag& TagToCheck, bool bExactMatch);
	static bool ActorHasAnyTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch);
	static bool ActorHasAllTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch);
};


}

