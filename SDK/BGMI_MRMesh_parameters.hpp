#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:40 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Parameters
//---------------------By BEST @RXJOKER1---------------------------

// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMeshReconstructorBase_StopReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMeshReconstructorBase_StartReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMeshReconstructorBase_PauseReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMRMeshConfiguration                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MRMesh.MRMeshComponent.GetReconstructor
struct UMRMeshComponent_GetReconstructor_Params
{
	class UMeshReconstructorBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.ConnectReconstructor
struct UMRMeshComponent_ConnectReconstructor_Params
{
	class UMeshReconstructorBase*                      Reconstructor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

