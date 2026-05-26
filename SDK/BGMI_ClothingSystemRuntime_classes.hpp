#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:41 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class ClothingSystemRuntime.ClothBoneDataAsset
// 0x0058 (0x0080 - 0x0028)
class UClothBoneDataAsset : public UObject
{
public:
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                MaxBoneWeights;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FName                                       ReferenceBoneName;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumVertices;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             SourceMeshPath;                                           // 0x0060(0x0018) (Edit, EditConst)
	int                                                SourceLod;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SourceSection;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothBoneDataAsset");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothConfigAsset
// 0x0140 (0x0170 - 0x0030)
class UClothConfigAsset : public UDataAsset
{
public:
	struct FClothConfig                                ConfigData;                                               // 0x0030(0x0140) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothConfigAsset");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingAsset
// 0x0208 (0x0250 - 0x0048)
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EClothSkinningMode                                 DefaultSkinningMode;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0051(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ClothingSystemRuntime.ClothingAsset.AlternateBoneDataAsset
	struct FClothConfig                                ClothConfig;                                              // 0x0080(0x0140) (Edit)
	TArray<struct FClothLODData>                       LODData;                                                  // 0x01C0(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x01D0(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x01E0(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x01F0(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<struct FClothVertBoneData>                  AlternateBoneData;                                        // 0x0208(0x0010) (ZeroConstructor)
	int                                                AlternateMaxBoneWeights;                                  // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	TArray<struct FName>                               AlternateUsedBoneNames;                                   // 0x0220(0x0010) (ZeroConstructor)
	TArray<int>                                        AlternateUsedBoneIndices;                                 // 0x0230(0x0010) (ZeroConstructor)
	int                                                AlternateReferenceBoneIndex;                              // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UClothingAssetCustomData*                    CustomData;                                               // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothMaskAsset
// 0x0040 (0x0070 - 0x0030)
class UClothMaskAsset : public UDataAsset
{
public:
	struct FClothParameterMask_PhysMesh                MaskData;                                                 // 0x0030(0x0030) (Edit)
	struct FName                                       SourceAssetName;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SourceLodIndex;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothMaskAsset");
		return pStaticClass;
	}

};


}

