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

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory
struct UCustomMeshLoaderBPLibrary_LoadSModelFromMemory_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync
struct UCustomMeshLoaderBPLibrary_LoadSModelFileAsync_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnComplete;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile
struct UCustomMeshLoaderBPLibrary_LoadSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile
struct UCustomMeshLoaderBPLibrary_IsValidSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo
struct UCustomMeshLoaderBPLibrary_GetSModelFileInfo_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	int                                                OutSectionCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutMaterialCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutVertexCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

