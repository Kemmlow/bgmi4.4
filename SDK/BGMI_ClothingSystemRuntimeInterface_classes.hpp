#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:40 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (0x0048 - 0x0028)
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGuid                                       AssetGuid;                                                // 0x0038(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return pStaticClass;
	}

};


}

