#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:36 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Parameters
//---------------------By BEST @RXJOKER1---------------------------

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit
struct UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData
struct UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params
{
};

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit
struct UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit
struct UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData
struct UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params
{
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit
struct UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent
struct UPhotonDestructiblePuppet_TriggerPuppetEvent_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent
struct UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params
{
	struct FString                                     ObjectName;                                               // (Parm, ZeroConstructor)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent
struct UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params
{
	struct FGuid                                       PuppetGUID;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

