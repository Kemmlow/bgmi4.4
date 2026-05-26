#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:46 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class EZUMG.EnhancedSlider
// 0x0028 (0x04C0 - 0x0498)
class UEnhancedSlider : public USlider
{
public:
	bool                                               bEnableSteppedSliding;                                    // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyRespondToThumb;                                      // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x049A(0x0002) MISSED OFFSET
	struct FLinearColor                                FilledBarColor;                                           // 0x049C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                UnfilledBarColor;                                         // 0x04AC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EnhancedSlider");
		return pStaticClass;
	}


	void SetUnfilledBarColor(const struct FLinearColor& InValue);
	void SetOnlyRespondToThumb(bool InValue);
	void SetFilledBarColor(const struct FLinearColor& InValue);
	void SetEnableSteppedSliding(bool InValue);
	struct FLinearColor GetUnfilledBarColor();
	bool GetOnlyRespondToThumb();
	struct FLinearColor GetFilledBarColor();
	bool GetEnableSteppedSliding();
};


// Class EZUMG.EzFactory
// 0x0000 (0x0028 - 0x0028)
class UEzFactory : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzFactory");
		return pStaticClass;
	}


	void SetNum(int NumItems);
	bool RemoveLastItem();
	int GetFactoryItemCount();
	class UWidget* AddItem();
};


// Class EZUMG.EzSelectable
// 0x0000 (0x0028 - 0x0028)
class UEzSelectable : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelectable");
		return pStaticClass;
	}


	void OnStateRefresh(EEzItemState NewState, bool bFocused);
};


// Class EZUMG.EzSelectorSlot
// 0x0000 (0x0028 - 0x0028)
class UEzSelectorSlot : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelectorSlot");
		return pStaticClass;
	}

};


// Class EZUMG.EzSelector
// 0x0000 (0x0028 - 0x0028)
class UEzSelector : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelector");
		return pStaticClass;
	}


	void SetSelectedIndex(int NewIndex);
	void SetItemState(int ItemIndex, EEzItemState NewState);
	void SetItemEnabled(int ItemIndex, bool bEnabled);
	void SetFocusedIndex(int NewIndex);
	bool IsItemEnabled(int ItemIndex);
	int GetSelectedIndex();
	EEzItemState GetItemState(int ItemIndex);
	int GetFocusedIndex();
};


// Class EZUMG.HorizontalSelectorSlot
// 0x0010 (0x0078 - 0x0068)
class UHorizontalSelectorSlot : public UHorizontalBoxSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.HorizontalSelectorSlot");
		return pStaticClass;
	}

};


// Class EZUMG.HorizontalSelector
// 0x0070 (0x0198 - 0x0128)
class UHorizontalSelector : public UHorizontalBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	class UClass*                                      itemType;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalSelectorSlot*                     DefaultSlotTemplate;                                      // 0x0140(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      // 0x0148(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemFocused;                                            // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.HorizontalSelector");
		return pStaticClass;
	}


	int GetChildIndexAtPosition(const struct FVector2D& LocalPosition);
};


// Class EZUMG.RadialPanel
// 0x0018 (0x0130 - 0x0118)
class URadialPanel : public UPanelWidget
{
public:
	float                                              SectorPadding;                                            // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadialArrangement                                 Arrangement;                                              // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x011D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialPanel");
		return pStaticClass;
	}


	void SetStartAngleOffset(float InStartAngleOffset);
	void SetSectorPadding(float InSectorPadding);
	void SetArrangement(ERadialArrangement InArrangement);
	float GetAngleAtPosition(const struct FVector2D& LocalPosition);
};


// Class EZUMG.RadialSlot
// 0x00E0 (0x0120 - 0x0040)
class URadialSlot : public UPanelSlot
{
public:
	struct FSectorSize                                 SectorSize;                                               // 0x0040(0x0004) (Edit, BlueprintVisible)
	float                                              InnerRadiusRatio;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadiusRatio;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSize;                                                // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FSlateBrush                                 SectorBrush;                                              // 0x0050(0x00B8) (Edit, BlueprintVisible)
	struct FLinearColor                                SectorColorAndOpacity;                                    // 0x0108(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSlot");
		return pStaticClass;
	}


	static class URadialSlot* SlotAsRadialSlot(class UWidget* Widget);
	void SetSectorSize(const struct FSectorSize& InSectorSize);
	void SetSectorColorAndOpacity(const struct FLinearColor& InTint);
	void SetSectorBrush(const struct FSlateBrush& InBrush);
	void SetOuterRadiusRatio(float InOuterRadiusRatio);
	void SetInnerRadiusRatio(float InInnerRadiusRatio);
	void SetAutoSize(bool bInAutoSize);
	float GetCenterRadiusRatio();
	float GetCenterAngle();
	float GetArcSize();
};


// Class EZUMG.RadialSelectorSlot
// 0x0010 (0x0130 - 0x0120)
class URadialSelectorSlot : public URadialSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSelectorSlot");
		return pStaticClass;
	}

};


// Class EZUMG.RadialSelector
// 0x0070 (0x01A0 - 0x0130)
class URadialSelector : public URadialPanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	class UClass*                                      itemType;                                                 // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URadialSelectorSlot*                         DefaultSlotTemplate;                                      // 0x0148(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      // 0x0150(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemFocused;                                            // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSelector");
		return pStaticClass;
	}


	int GetChildIndexByVector(const struct FVector2D& CenterOffset, float DeadzoneLength);
	int GetChildIndexByAngle(float Angle);
	int GetChildIndexAtPosition(const struct FVector2D& LocalPosition);
};


}

