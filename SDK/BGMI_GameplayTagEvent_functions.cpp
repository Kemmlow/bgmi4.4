// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Functions
//---------------------By BEST @RXJOKER1---------------------------

// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Validate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NodeTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Observer                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagEventNodeBase::Validate(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Validate");

	UUAEGameplayTagEventNodeBase_Validate_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnUnregistered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NodeTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Observer                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagEventNodeBase::OnUnregistered(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnUnregistered");

	UUAEGameplayTagEventNodeBase_OnUnregistered_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnRegistered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NodeTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Observer                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagEventNodeBase::OnRegistered(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnRegistered");

	UUAEGameplayTagEventNodeBase_OnRegistered_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Invalidate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NodeTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Observer                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagEventNodeBase::Invalidate(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Invalidate");

	UUAEGameplayTagEventNodeBase_Invalidate_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UntagActor
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    InTags                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAEGameplayTagImposerSubsystem::UntagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UntagActor");

	UUAEGameplayTagImposerSubsystem_UntagActor_Params params;
	params.Actor = Actor;
	params.InTags = InTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagQueryUpdatedEvent
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Handle                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagImposerSubsystem::UnregisterActorTagQueryUpdatedEvent(class AActor* Actor, int Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagQueryUpdatedEvent");

	UUAEGameplayTagImposerSubsystem_UnregisterActorTagQueryUpdatedEvent_Params params;
	params.Actor = Actor;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagChangedEvent
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            InTag                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameplayTagImposerSubsystem::UnregisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagChangedEvent");

	UUAEGameplayTagImposerSubsystem_UnregisterActorTagChangedEvent_Params params;
	params.Actor = Actor;
	params.InTag = InTag;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.TagActor
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    InTags                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAEGameplayTagImposerSubsystem::TagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.TagActor");

	UUAEGameplayTagImposerSubsystem_TagActor_Params params;
	params.Actor = Actor;
	params.InTags = InTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllMatchingTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)

void UUAEGameplayTagImposerSubsystem::RemoveAllMatchingTags(class AActor* Actor, const struct FGameplayTag& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllMatchingTags");

	UUAEGameplayTagImposerSubsystem_RemoveAllMatchingTags_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllActorTagEventNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagImposerSubsystem::RemoveAllActorTagEventNode(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_RemoveAllActorTagEventNode_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveActorTagEventNode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Handle                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagImposerSubsystem::RemoveActorTagEventNode(class UObject* WorldContextObject, int Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_RemoveActorTagEventNode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagQueryUpdatedEvent
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameplayTagImposerSubsystem::RegisterActorTagQueryUpdatedEvent(class AActor* Actor, const struct FGameplayTagQuery& Query, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagQueryUpdatedEvent");

	UUAEGameplayTagImposerSubsystem_RegisterActorTagQueryUpdatedEvent_Params params;
	params.Actor = Actor;
	params.Query = Query;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagChangedEvent
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            InTag                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameplayTagImposerSubsystem::RegisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagChangedEvent");

	UUAEGameplayTagImposerSubsystem_RegisterActorTagChangedEvent_Params params;
	params.Actor = Actor;
	params.InTag = InTag;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.OnActorEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagImposerSubsystem::OnActorEndPlay(class AActor* Actor, TEnumAsByte<enum EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.OnActorEndPlay");

	UUAEGameplayTagImposerSubsystem_OnActorEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.Get
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEGameplayTagImposerSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEGameplayTagImposerSubsystem* UUAEGameplayTagImposerSubsystem::Get(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.Get");

	UUAEGameplayTagImposerSubsystem_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ClearActorTags
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNotifyAll                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameplayTagImposerSubsystem::ClearActorTags(class AActor* Actor, bool bNotifyAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ClearActorTags");

	UUAEGameplayTagImposerSubsystem_ClearActorTags_Params params;
	params.Actor = Actor;
	params.bNotifyAll = bNotifyAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ApplyActorTagEventNode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEGameplayTagEventNodeBase* NodeBase                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameplayTagImposerSubsystem::ApplyActorTagEventNode(class AActor* TargetActor, class UObject* NodeOwner, class UUAEGameplayTagEventNodeBase* NodeBase)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ApplyActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_ApplyActorTagEventNode_Params params;
	params.TargetActor = TargetActor;
	params.NodeOwner = NodeOwner;
	params.NodeBase = NodeBase;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasMatchingTag
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameplayTagImposerSubsystem::ActorHasMatchingTag(class AActor* Actor, const struct FGameplayTag& TagToCheck, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasMatchingTag");

	UUAEGameplayTagImposerSubsystem_ActorHasMatchingTag_Params params;
	params.Actor = Actor;
	params.TagToCheck = TagToCheck;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAnyTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    InTags                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameplayTagImposerSubsystem::ActorHasAnyTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAnyTags");

	UUAEGameplayTagImposerSubsystem_ActorHasAnyTags_Params params;
	params.Actor = Actor;
	params.InTags = InTags;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAllTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    InTags                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameplayTagImposerSubsystem::ActorHasAllTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAllTags");

	UUAEGameplayTagImposerSubsystem_ActorHasAllTags_Params params;
	params.Actor = Actor;
	params.InTags = InTags;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

