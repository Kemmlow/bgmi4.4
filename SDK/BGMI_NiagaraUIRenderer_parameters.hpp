#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:48 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Parameters
//---------------------By BEST @RXJOKER1---------------------------

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
struct UNiagaraSystemWidget_SetIsActivated_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
	class UNiagaraUIComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
struct UNiagaraSystemWidget_GetIsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
struct UNiagaraSystemWidget_DeactivateSystem_Params
{
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct UNiagaraSystemWidget_ActivateSystem_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

