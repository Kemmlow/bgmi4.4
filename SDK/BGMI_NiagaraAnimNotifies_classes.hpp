#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:45 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// 0x0058 (0x0090 - 0x0038)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0058(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET
	unsigned char                                      Attached : 1;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
		return pStaticClass;
	}

};


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// 0x0038 (0x0068 - 0x0030)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToCharacter;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0048(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0054(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	bool                                               bDestroyAtEnd;                                            // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedSetTranslucencySort;                                 // 0x0061(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                TranslucencySortPriority;                                 // 0x0064(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
		return pStaticClass;
	}


	class ACharacter* GetParentCharacter(class USkeletalMeshComponent* MeshComp);
};


}

