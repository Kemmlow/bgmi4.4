#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:40 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum ClothingSystemRuntimeInterface.EClothSkinningMode
enum class EClothSkinningMode : uint8_t
{
	EClothSkinningMode__Default    = 0,
	EClothSkinningMode__Alternate  = 1,
	EClothSkinningMode__EClothSkinningMode_MAX = 2
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014
struct FClothCollisionPrim_Sphere
{
	int                                                BoneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalPosition;                                            // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008
struct FClothCollisionPrim_SphereConnection
{
	int                                                SphereIndices[0x2];                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018
struct FClothCollisionPrim_Convex
{
	TArray<struct FPlane>                              Planes;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                BoneIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0030
struct FClothCollisionData
{
	TArray<struct FClothCollisionPrim_Sphere>          Spheres;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_Convex>          Convexes;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
};

}

