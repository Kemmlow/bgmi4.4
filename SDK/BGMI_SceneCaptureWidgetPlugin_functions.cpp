// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:43 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Functions
//---------------------By BEST @RXJOKER1---------------------------

// Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASceneCaptureCameraActor* InSceneCaptureCameraActor      (Parm, ZeroConstructor, IsPlainOldData)

void USceneCaptureWidget::SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor");

	USceneCaptureWidget_SetSceneCaptureCameraActor_Params params;
	params.InSceneCaptureCameraActor = InSceneCaptureCameraActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

