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

// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Validate
struct UUAEGameplayTagEventNodeBase_Validate_Params
{
	class AActor*                                      NodeTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Observer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnUnregistered
struct UUAEGameplayTagEventNodeBase_OnUnregistered_Params
{
	class AActor*                                      NodeTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Observer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnRegistered
struct UUAEGameplayTagEventNodeBase_OnRegistered_Params
{
	class AActor*                                      NodeTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Observer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Invalidate
struct UUAEGameplayTagEventNodeBase_Invalidate_Params
{
	class AActor*                                      NodeTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Observer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UntagActor
struct UUAEGameplayTagImposerSubsystem_UntagActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        InTags;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagQueryUpdatedEvent
struct UUAEGameplayTagImposerSubsystem_UnregisterActorTagQueryUpdatedEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Handle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagChangedEvent
struct UUAEGameplayTagImposerSubsystem_UnregisterActorTagChangedEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                InTag;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.TagActor
struct UUAEGameplayTagImposerSubsystem_TagActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        InTags;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllMatchingTags
struct UUAEGameplayTagImposerSubsystem_RemoveAllMatchingTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllActorTagEventNode
struct UUAEGameplayTagImposerSubsystem_RemoveAllActorTagEventNode_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveActorTagEventNode
struct UUAEGameplayTagImposerSubsystem_RemoveActorTagEventNode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Handle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagQueryUpdatedEvent
struct UUAEGameplayTagImposerSubsystem_RegisterActorTagQueryUpdatedEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagChangedEvent
struct UUAEGameplayTagImposerSubsystem_RegisterActorTagChangedEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                InTag;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.OnActorEndPlay
struct UUAEGameplayTagImposerSubsystem_OnActorEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EEndPlayReason>                   EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.Get
struct UUAEGameplayTagImposerSubsystem_Get_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEGameplayTagImposerSubsystem*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ClearActorTags
struct UUAEGameplayTagImposerSubsystem_ClearActorTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyAll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ApplyActorTagEventNode
struct UUAEGameplayTagImposerSubsystem_ApplyActorTagEventNode_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEGameplayTagEventNodeBase*                NodeBase;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasMatchingTag
struct UUAEGameplayTagImposerSubsystem_ActorHasMatchingTag_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAnyTags
struct UUAEGameplayTagImposerSubsystem_ActorHasAnyTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        InTags;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAllTags
struct UUAEGameplayTagImposerSubsystem_ActorHasAllTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        InTags;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

