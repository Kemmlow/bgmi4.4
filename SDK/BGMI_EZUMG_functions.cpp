// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Functions
//---------------------By BEST @RXJOKER1---------------------------

// Function EZUMG.EnhancedSlider.SetUnfilledBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData)

void UEnhancedSlider::SetUnfilledBarColor(const struct FLinearColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetUnfilledBarColor");

	UEnhancedSlider_SetUnfilledBarColor_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EnhancedSlider.SetOnlyRespondToThumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UEnhancedSlider::SetOnlyRespondToThumb(bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetOnlyRespondToThumb");

	UEnhancedSlider_SetOnlyRespondToThumb_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EnhancedSlider.SetFilledBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData)

void UEnhancedSlider::SetFilledBarColor(const struct FLinearColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetFilledBarColor");

	UEnhancedSlider_SetFilledBarColor_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EnhancedSlider.SetEnableSteppedSliding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UEnhancedSlider::SetEnableSteppedSliding(bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetEnableSteppedSliding");

	UEnhancedSlider_SetEnableSteppedSliding_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EnhancedSlider.GetUnfilledBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UEnhancedSlider::GetUnfilledBarColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetUnfilledBarColor");

	UEnhancedSlider_GetUnfilledBarColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EnhancedSlider.GetOnlyRespondToThumb
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnhancedSlider::GetOnlyRespondToThumb()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetOnlyRespondToThumb");

	UEnhancedSlider_GetOnlyRespondToThumb_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EnhancedSlider.GetFilledBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UEnhancedSlider::GetFilledBarColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetFilledBarColor");

	UEnhancedSlider_GetFilledBarColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EnhancedSlider.GetEnableSteppedSliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnhancedSlider::GetEnableSteppedSliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetEnableSteppedSliding");

	UEnhancedSlider_GetEnableSteppedSliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzFactory.SetNum
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NumItems                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzFactory::SetNum(int NumItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.SetNum");

	UEzFactory_SetNum_Params params;
	params.NumItems = NumItems;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzFactory.RemoveLastItem
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEzFactory::RemoveLastItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.RemoveLastItem");

	UEzFactory_RemoveLastItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzFactory.GetFactoryItemCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEzFactory::GetFactoryItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.GetFactoryItemCount");

	UEzFactory_GetFactoryItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzFactory.AddItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEzFactory::AddItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.AddItem");

	UEzFactory_AddItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzSelectable.OnStateRefresh
// (Event, Public, BlueprintEvent)
// Parameters:
// EEzItemState                   NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFocused                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzSelectable::OnStateRefresh(EEzItemState NewState, bool bFocused)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelectable.OnStateRefresh");

	UEzSelectable_OnStateRefresh_Params params;
	params.NewState = NewState;
	params.bFocused = bFocused;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzSelector.SetSelectedIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzSelector::SetSelectedIndex(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetSelectedIndex");

	UEzSelector_SetSelectedIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzSelector.SetItemState
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// EEzItemState                   NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzSelector::SetItemState(int ItemIndex, EEzItemState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetItemState");

	UEzSelector_SetItemState_Params params;
	params.ItemIndex = ItemIndex;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzSelector.SetItemEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzSelector::SetItemEnabled(int ItemIndex, bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetItemEnabled");

	UEzSelector_SetItemEnabled_Params params;
	params.ItemIndex = ItemIndex;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzSelector.SetFocusedIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UEzSelector::SetFocusedIndex(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetFocusedIndex");

	UEzSelector_SetFocusedIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.EzSelector.IsItemEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEzSelector::IsItemEnabled(int ItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.IsItemEnabled");

	UEzSelector_IsItemEnabled_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzSelector.GetSelectedIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEzSelector::GetSelectedIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetSelectedIndex");

	UEzSelector_GetSelectedIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzSelector.GetItemState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// EEzItemState                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EEzItemState UEzSelector::GetItemState(int ItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetItemState");

	UEzSelector_GetItemState_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.EzSelector.GetFocusedIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEzSelector::GetFocusedIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetFocusedIndex");

	UEzSelector_GetFocusedIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.HorizontalSelector.GetChildIndexAtPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               LocalPosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHorizontalSelector::GetChildIndexAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.HorizontalSelector.GetChildIndexAtPosition");

	UHorizontalSelector_GetChildIndexAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialPanel.SetStartAngleOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStartAngleOffset             (Parm, ZeroConstructor, IsPlainOldData)

void URadialPanel::SetStartAngleOffset(float InStartAngleOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetStartAngleOffset");

	URadialPanel_SetStartAngleOffset_Params params;
	params.InStartAngleOffset = InStartAngleOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialPanel.SetSectorPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSectorPadding                (Parm, ZeroConstructor, IsPlainOldData)

void URadialPanel::SetSectorPadding(float InSectorPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetSectorPadding");

	URadialPanel_SetSectorPadding_Params params;
	params.InSectorPadding = InSectorPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialPanel.SetArrangement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERadialArrangement             InArrangement                  (Parm, ZeroConstructor, IsPlainOldData)

void URadialPanel::SetArrangement(ERadialArrangement InArrangement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetArrangement");

	URadialPanel_SetArrangement_Params params;
	params.InArrangement = InArrangement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialPanel.GetAngleAtPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               LocalPosition                  (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialPanel::GetAngleAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.GetAngleAtPosition");

	URadialPanel_GetAngleAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSlot.SlotAsRadialSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadialSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URadialSlot* URadialSlot::SlotAsRadialSlot(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SlotAsRadialSlot");

	URadialSlot_SlotAsRadialSlot_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSlot.SetSectorSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSectorSize             InSectorSize                   (Parm)

void URadialSlot::SetSectorSize(const struct FSectorSize& InSectorSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorSize");

	URadialSlot_SetSectorSize_Params params;
	params.InSectorSize = InSectorSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.SetSectorColorAndOpacity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InTint                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URadialSlot::SetSectorColorAndOpacity(const struct FLinearColor& InTint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorColorAndOpacity");

	URadialSlot_SetSectorColorAndOpacity_Params params;
	params.InTint = InTint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.SetSectorBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)

void URadialSlot::SetSectorBrush(const struct FSlateBrush& InBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorBrush");

	URadialSlot_SetSectorBrush_Params params;
	params.InBrush = InBrush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.SetOuterRadiusRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOuterRadiusRatio             (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlot::SetOuterRadiusRatio(float InOuterRadiusRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetOuterRadiusRatio");

	URadialSlot_SetOuterRadiusRatio_Params params;
	params.InOuterRadiusRatio = InOuterRadiusRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.SetInnerRadiusRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InInnerRadiusRatio             (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlot::SetInnerRadiusRatio(float InInnerRadiusRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetInnerRadiusRatio");

	URadialSlot_SetInnerRadiusRatio_Params params;
	params.InInnerRadiusRatio = InInnerRadiusRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoSize                    (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlot::SetAutoSize(bool bInAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetAutoSize");

	URadialSlot_SetAutoSize_Params params;
	params.bInAutoSize = bInAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function EZUMG.RadialSlot.GetCenterRadiusRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlot::GetCenterRadiusRatio()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetCenterRadiusRatio");

	URadialSlot_GetCenterRadiusRatio_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSlot.GetCenterAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlot::GetCenterAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetCenterAngle");

	URadialSlot_GetCenterAngle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSlot.GetArcSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlot::GetArcSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetArcSize");

	URadialSlot_GetArcSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSelector.GetChildIndexByVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               CenterOffset                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeadzoneLength                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URadialSelector::GetChildIndexByVector(const struct FVector2D& CenterOffset, float DeadzoneLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexByVector");

	URadialSelector_GetChildIndexByVector_Params params;
	params.CenterOffset = CenterOffset;
	params.DeadzoneLength = DeadzoneLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSelector.GetChildIndexByAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URadialSelector::GetChildIndexByAngle(float Angle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexByAngle");

	URadialSelector_GetChildIndexByAngle_Params params;
	params.Angle = Angle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EZUMG.RadialSelector.GetChildIndexAtPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               LocalPosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URadialSelector::GetChildIndexAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexAtPosition");

	URadialSelector_GetChildIndexAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

