// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:44 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Functions
//---------------------By BEST @RXJOKER1---------------------------

// Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)

void UParticleSystemWidget2::SetParticleSystem(class UParticleSystem* ParticleSystem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem");

	UParticleSystemWidget2_SetParticleSystem_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)

void UParticleSystemWidget2::SetNiagaraSystem(class UNiagaraSystem* ParticleSystem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem");

	UParticleSystemWidget2_SetNiagaraSystem_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticleSystem2.ParticleSystemWidget2.SetActivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsActivate                    (Parm, ZeroConstructor, IsPlainOldData)

void UParticleSystemWidget2::SetActivate(bool bIsActivate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetActivate");

	UParticleSystemWidget2_SetActivate_Params params;
	params.bIsActivate = bIsActivate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UParticleSystemWidget2::GetParticleComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent");

	UParticleSystemWidget2_GetParticleComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UParticleSystemWidget2::GetNiagaraComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent");

	UParticleSystemWidget2_GetNiagaraComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

