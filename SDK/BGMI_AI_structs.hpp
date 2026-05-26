#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:37 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};


// Enum AI.EObstacleDetectionSpace
enum class EObstacleDetectionSpace : uint8_t
{
	EObstacleDetectionSpace__ObstacleDetection_Box = 0,
	EObstacleDetectionSpace__ObstacleDetection_CapsuleSweep = 1,
	EObstacleDetectionSpace__ObstacleDetection_MAX = 2
};


// Enum AI.EAICheckFlyingStatusType
enum class EAICheckFlyingStatusType : uint8_t
{
	EAICheckFlyingStatusType__FlyingStatus_HasNavigationSystem = 0,
	EAICheckFlyingStatusType__FlyingStatus_NavigationVoxelDataDone = 1,
	EAICheckFlyingStatusType__FlyingStatus_MAX = 2
};


// Enum AI.EAIOcclusionPointPoseType
enum class EAIOcclusionPointPoseType : uint8_t
{
	EAIOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIOcclusionPointPoseType__Occlusion_MAX = 4
};


// Enum AI.EAICheckShootingPoseType
enum class EAICheckShootingPoseType : uint8_t
{
	EAICheckShootingPoseType__ShootingPose_Normal = 0,
	EAICheckShootingPoseType__ShootingPose_Stand = 1,
	EAICheckShootingPoseType__ShootingPose_Peek = 2,
	EAICheckShootingPoseType__ShootingPose_WaitVisibilityCheck = 3,
	EAICheckShootingPoseType__ShootingPose_MAX = 4
};


// Enum AI.EDistanceCheckType
enum class EDistanceCheckType : uint8_t
{
	FixedDistance                  = 0,
	BlackBoardKey                  = 1,
	ApplySensedRadius              = 2,
	EDistanceCheckType_MAX         = 3
};


// Enum AI.ECompareLengthType
enum class ECompareLengthType : uint8_t
{
	ELengthGreater                 = 0,
	ELengthLess                    = 1,
	ELengthEequal                  = 2,
	ECompareLengthType_MAX         = 3
};


// Enum AI.EAIDecoratorGeneralLineTraceType
enum class EAIDecoratorGeneralLineTraceType : uint8_t
{
	EAIDecoratorGeneralLineTraceType__LineTraceType_Forward = 0,
	EAIDecoratorGeneralLineTraceType__LineTraceType_MAX = 1
};


// Enum AI.EInSafetyCircleType
enum class EInSafetyCircleType : uint8_t
{
	EInSafetyCircleType__EInSafetyCircleType_None = 0,
	EInSafetyCircleType__EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType__EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType__EInSafetyCircleType_MAX = 3
};


// Enum AI.EItemNumCheckType
enum class EItemNumCheckType : uint8_t
{
	ItemNumGreater                 = 0,
	ItemNumLess                    = 1,
	ItemNumEequal                  = 2,
	EItemNumCheckType_MAX          = 3
};


// Enum AI.EChooseEnemySearchMethod
enum class EChooseEnemySearchMethod : uint8_t
{
	EChooseEnemySearchMethod__SearchMethod_Nearest = 0,
	EChooseEnemySearchMethod__SearchMethod_MostHP = 1,
	EChooseEnemySearchMethod__SearchMethod_LeastHP = 2,
	EChooseEnemySearchMethod__SearchMethod_ByBlackboardValue = 3,
	EChooseEnemySearchMethod__SearchMethod_MAX = 4
};


// Enum AI.EChooseEnemyType
enum class EChooseEnemyType : uint8_t
{
	EChooseEnemyType__EnemyType_Player = 0,
	EChooseEnemyType__EnemyType_Animal = 1,
	EChooseEnemyType__EnemyType_Zombie = 2,
	EChooseEnemyType__EnemyType_UAV = 3,
	EChooseEnemyType__EnemyType_MAX = 4
};


// Enum AI.EAISearchTeammateType
enum class EAISearchTeammateType : uint8_t
{
	EAISearchTeammateType__Nearest = 0,
	EAISearchTeammateType__LeastHP = 1,
	EAISearchTeammateType__EAISearchTeammateType_MAX = 2
};


// Enum AI.EMobAddHPServiceType
enum class EMobAddHPServiceType : uint8_t
{
	EMobAddHPServiceType__LoseTarget = 0,
	EMobAddHPServiceType__EMobAddHPServiceType_MAX = 1
};


// Enum AI.EAISearchEnemyType
enum class EAISearchEnemyType : uint8_t
{
	EAISearchEnemyType__Nearest    = 0,
	EAISearchEnemyType__Random     = 1,
	EAISearchEnemyType__Farthest   = 2,
	EAISearchEnemyType__EAISearchEnemyType_MAX = 3
};


// Enum AI.EAISearchEnemyRule
enum class EAISearchEnemyRule : uint8_t
{
	EAISearchEnemyRule__SingleRule_Hatred = 0,
	EAISearchEnemyRule__SingleRule_Random = 1,
	EAISearchEnemyRule__SingleRule_Nearest = 2,
	EAISearchEnemyRule__SingleRule_Farthest = 3,
	EAISearchEnemyRule__SingleRule_MostHP = 4,
	EAISearchEnemyRule__SingleRule_PoorHP = 5,
	EAISearchEnemyRule__SingleRule_BlackboardValue = 6,
	EAISearchEnemyRule__SingleRule_MAX = 7
};


// Enum AI.EAISearchEnemyEntityType
enum class EAISearchEnemyEntityType : uint8_t
{
	EAISearchEnemyEntityType__PlayerOnly = 0,
	EAISearchEnemyEntityType__PlayerAndMob = 1,
	EAISearchEnemyEntityType__EAISearchEnemyEntityType_MAX = 2
};


// Enum AI.EAISearchEnemySingleRule
enum class EAISearchEnemySingleRule : uint8_t
{
	EAISearchEnemySingleRule__SingleRule_Hatred = 0,
	EAISearchEnemySingleRule__SingleRule_Random = 1,
	EAISearchEnemySingleRule__SingleRule_Nearest = 2,
	EAISearchEnemySingleRule__SingleRule_Farthest = 3,
	EAISearchEnemySingleRule__SingleRule_MostHP = 4,
	EAISearchEnemySingleRule__SingleRule_PoorHP = 5,
	EAISearchEnemySingleRule__SingleRule_BlackboardValue = 6,
	EAISearchEnemySingleRule__SingleRule_MAX = 7
};


// Enum AI.EAISenseGrenadeType
enum class EAISenseGrenadeType : uint8_t
{
	EAISenseGrenadeType__ExplosionGrenade = 0,
	EAISenseGrenadeType__BurningGrenade = 1,
	EAISenseGrenadeType__SmokingGrenade = 2,
	EAISenseGrenadeType__FlashBomb = 3,
	EAISenseGrenadeType__Grenade_MaxNum = 4,
	EAISenseGrenadeType__EAISenseGrenadeType_MAX = 5
};


// Enum AI.ETargetAngleCheck
enum class ETargetAngleCheck : uint8_t
{
	TargetAngleCheckFocus          = 0,
	TargetAngleCheckFocusFail      = 1,
	TargetAngleCheckFocusSuccess   = 2,
	ETargetAngleCheck_MAX          = 3
};


// Enum AI.EVHQueryEnemyRule
enum class EVHQueryEnemyRule : uint8_t
{
	EVHQueryEnemyRule__Nearest     = 0,
	EVHQueryEnemyRule__Random      = 1,
	EVHQueryEnemyRule__EVHQueryEnemyRule_MAX = 2
};


// Enum AI.EVHEnemyType
enum class EVHEnemyType : uint8_t
{
	EVHEnemyType__EVHEnemyType_Player = 0,
	EVHEnemyType__EVHEnemyType_Car = 1,
	EVHEnemyType__EVHEnemyType_Mob = 2,
	EVHEnemyType__EVHEnemyType_FakePlayer = 3,
	EVHEnemyType__EVHEnemyType_MAX = 4
};


// Enum AI.EAIAdvFindOcclusionPointSearchBestOcclusionMethod
enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8_t
{
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_Normal = 0,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToTarget = 1,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_FarToTarget = 2,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToSelf = 3,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_RandomOfSelf = 4,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_MAX = 5
};


// Enum AI.EAIAdvFindOcclusionPointPoseType
enum class EAIAdvFindOcclusionPointPoseType : uint8_t
{
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIAdvFindOcclusionPointPoseType__Occlusion_MAX = 4
};


// Enum AI.EBioVHMoveType
enum class EBioVHMoveType : uint8_t
{
	EBioVHMoveType__EMoveType_Normal = 0,
	EBioVHMoveType__EMoveType_Backward = 1,
	EBioVHMoveType__EMoveType_Directly = 2,
	EBioVHMoveType__EMoveType_MAX  = 3
};


// Enum AI.EFindFlyingHoverPointOneSideShapeOType
enum class EFindFlyingHoverPointOneSideShapeOType : uint8_t
{
	EFindFlyingHoverPointOneSideShapeOType__OT_RandomSide = 0,
	EFindFlyingHoverPointOneSideShapeOType__OT_LeftSide = 1,
	EFindFlyingHoverPointOneSideShapeOType__OT_RightSide = 2,
	EFindFlyingHoverPointOneSideShapeOType__OT_MAX = 3
};


// Enum AI.EFindFlyingHoverPointHoverType
enum class EFindFlyingHoverPointHoverType : uint8_t
{
	EFindFlyingHoverPointHoverType__HT_OneSideShapeO = 0,
	EFindFlyingHoverPointHoverType__HT_MAX = 1
};


// Enum AI.EFlyToPathfindingThread
enum class EFlyToPathfindingThread : uint8_t
{
	EFlyToPathfindingThread__Sync  = 0,
	EFlyToPathfindingThread__ASync = 1,
	EFlyToPathfindingThread__EFlyToPathfindingThread_MAX = 2
};


// Enum AI.EMobFindAttackablePositionLineTraceType
enum class EMobFindAttackablePositionLineTraceType : uint8_t
{
	EMobFindAttackablePositionLineTraceType__Normal = 0,
	EMobFindAttackablePositionLineTraceType__HalfHeightOffset = 1,
	EMobFindAttackablePositionLineTraceType__CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType__EMobFindAttackablePositionLineTraceType_MAX = 3
};


// Enum AI.ESearchType
enum class ESearchType : uint8_t
{
	ESearchType__CenterInSelfLocation = 0,
	ESearchType__CenterInSpecificLocation = 1,
	ESearchType__ESearchType_MAX   = 2
};


// Enum AI.EAIMoveToOcclusionFinishMovePoseType
enum class EAIMoveToOcclusionFinishMovePoseType : uint8_t
{
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_Normal = 0,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionMovingPoseType
enum class EAIMoveToOcclusionMovingPoseType : uint8_t
{
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_Normal = 0,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionSearchBestOcclusionMethod
enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8_t
{
	EAIMoveToOcclusionSearchBestOcclusionMethod__Normal = 0,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToTarget = 1,
	EAIMoveToOcclusionSearchBestOcclusionMethod__FarToTarget = 2,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToSelf = 3,
	EAIMoveToOcclusionSearchBestOcclusionMethod__RandomOfSelf = 4,
	EAIMoveToOcclusionSearchBestOcclusionMethod__EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 5
};


// Enum AI.EAIMoveToOcclusionPoseType
enum class EAIMoveToOcclusionPoseType : uint8_t
{
	EAIMoveToOcclusionPoseType__PoseProne = 0,
	EAIMoveToOcclusionPoseType__PoseCrouch = 1,
	EAIMoveToOcclusionPoseType__PoseStand = 2,
	EAIMoveToOcclusionPoseType__PoseBush = 3,
	EAIMoveToOcclusionPoseType__EAIMoveToOcclusionPoseType_MAX = 4
};


// Enum AI.ESeekFlyPointHorizontalAngleType
enum class ESeekFlyPointHorizontalAngleType : uint8_t
{
	ESeekFlyPointHorizontalAngleType__TargetView = 0,
	ESeekFlyPointHorizontalAngleType__TargetToSelf = 1,
	ESeekFlyPointHorizontalAngleType__BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType__ESeekFlyPointHorizontalAngleType_MAX = 3
};


// Enum AI.ESeekFlyPointCenterLocType
enum class ESeekFlyPointCenterLocType : uint8_t
{
	ESeekFlyPointCenterLocType__Target = 0,
	ESeekFlyPointCenterLocType__Self = 1,
	ESeekFlyPointCenterLocType__BornLocation = 2,
	ESeekFlyPointCenterLocType__ESeekFlyPointCenterLocType_MAX = 3
};


// Enum AI.ELocateType
enum class ELocateType : uint8_t
{
	ELocateType__ELocateType_Random = 0,
	ELocateType__ELocateType_Strategy = 1,
	ELocateType__ELocateType_Escape = 2,
	ELocateType__ELocateType_MAX   = 3
};


// Enum AI.EAIVHMoveType
enum class EAIVHMoveType : uint8_t
{
	EAIVHMoveType__ELocateType_Normal = 0,
	EAIVHMoveType__ELocateType_Strategy = 1,
	EAIVHMoveType__ELocateType_Directly = 2,
	EAIVHMoveType__ELocateType_Toward = 3,
	EAIVHMoveType__ELocateType_MAX = 4
};


// Enum AI.EAITaskNodeThrowGrenadeMethod
enum class EAITaskNodeThrowGrenadeMethod : uint8_t
{
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Normal = 0,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Advanced = 1,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_MAX = 2
};


// Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};


// Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum AI.EAIProviderType
enum class EAIProviderType : uint8_t
{
	Type_None                      = 0,
	Type_TEG                       = 1,
	Type_CCS                       = 2,
	Type_MAX                       = 3
};


// Enum AI.EMLBotType
enum class EMLBotType : uint8_t
{
	BT                             = 0,
	MLAI                           = 1,
	MLDelivery                     = 2,
	MLTeammate                     = 3,
	MLHumanoid                     = 4,
	EMLBotType_MAX                 = 5
};


// Enum AI.EMLAIJumpingPhase
enum class EMLAIJumpingPhase : uint8_t
{
	EMLAIJumpingPhase__Before      = 0,
	EMLAIJumpingPhase__FreeFalling = 1,
	EMLAIJumpingPhase__OpenParachute = 2,
	EMLAIJumpingPhase__Landing     = 3,
	EMLAIJumpingPhase__EMLAIJumpingPhase_MAX = 4
};


// Enum AI.EDiffListIDTag
enum class EDiffListIDTag : uint8_t
{
	EDiffListIDTag__NoDiff         = 0,
	EDiffListIDTag__General        = 1,
	EDiffListIDTag__GeneralDiff    = 2,
	EDiffListIDTag__EDiffListIDTag_MAX = 3
};


// Enum AI.EStatePlayerType
enum class EStatePlayerType : uint8_t
{
	EStatePlayerType__None         = 0,
	EStatePlayerType__MLAI_Normal  = 1,
	EStatePlayerType__MLAI_Deliver = 2,
	EStatePlayerType__BTAI         = 3,
	EStatePlayerType__Player       = 4,
	EStatePlayerType__MLAI_Teammate = 5,
	EStatePlayerType__CandidateBTAI = 6,
	EStatePlayerType__CandidateMLAI = 7,
	EStatePlayerType__Player_Teammate = 8,
	EStatePlayerType__MLAI_Humanoid = 9,
	EStatePlayerType__MLAI_Mercenary = 10,
	EStatePlayerType__EStatePlayerType_MAX = 11
};


// Enum AI.ENearItemType
enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__Weed            = 4,
	ENearItemType__ENearItemType_MAX = 5
};


// Enum AI.ESpecialZoneType
enum class ESpecialZoneType : uint8_t
{
	ESpecialZoneType__Normal       = 0,
	ESpecialZoneType__Character    = 1,
	ESpecialZoneType__DamageableActor = 2,
	ESpecialZoneType__Vehicle      = 3,
	ESpecialZoneType__ESpecialZoneType_MAX = 4
};


// Enum AI.EVehicleSpecialState
enum class EVehicleSpecialState : uint8_t
{
	EVehicleSpecialState__BeCatched = 0,
	EVehicleSpecialState__HoverVHMagnetStatus = 1,
	EVehicleSpecialState__HasNitroBoostAbility = 2,
	EVehicleSpecialState__IsNitroBoosting = 3,
	EVehicleSpecialState__CanNitroBoost = 4,
	EVehicleSpecialState__EVehicleSpecialState_MAX = 5
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct AI.ChildDynamicItem
// 0x0020
struct FChildDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ChildName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBase
// 0x0018
struct FAIStateInfoBase
{
	uint64_t                                           UnChanged;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             IgnoreNames;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.UniqueStateInfo
// 0x0008 (0x0020 - 0x0018)
struct FUniqueStateInfo : public FAIStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIAttribute
// 0x0008 (0x0028 - 0x0020)
struct FAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIStateXYZ
// 0x000C
struct FAIStateXYZ
{
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SoundState
// 0x0018 (0x0030 - 0x0018)
struct FSoundState : public FAIStateInfoBase
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x001C(0x000C)
	uint32_t                                           ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.CacheSoundState
// 0x0038
struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               // 0x0000(0x0030)
	float                                              Time;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DamageSource
// 0x0018 (0x0030 - 0x0018)
struct FDamageSource : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 damage_source;                                            // 0x0018(0x000C)
	int                                                damage_type;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_source_id;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.ItemStateData
// 0x0030 (0x0050 - 0x0020)
struct FItemStateData : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UID;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0034(0x000C)
	uint32_t                                           player_id;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CacheNearbyItemState
// 0x0020
struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.ProgressBarState
// 0x0010 (0x0028 - 0x0018)
struct FProgressBarState : public FAIStateInfoBase
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           targetid;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIDamageInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           PlayerKey;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_part;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              damage_before_cal_armor;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerInteractInfo
// 0x0040 (0x0058 - 0x0018)
struct FAIPlayerInteractInfo : public FAIStateInfoBase
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAIDamageInfo>                       passive_damage;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   kill_list;                                                // 0x0038(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   knock_down_list;                                          // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.SingleDestroyBulletProbInfo
// 0x0010 (0x0028 - 0x0018)
struct FSingleDestroyBulletProbInfo : public FAIStateInfoBase
{
	float                                              max_destroy_time_float;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                max_destroy_num;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              destroy_cd_float;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              destroy_bullet_prob;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIDestroyBulletProbInfo
// 0x0080 (0x00A0 - 0x0020)
struct FAIDestroyBulletProbInfo : public FUniqueStateInfo
{
	int                                                bullet_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              low_hp_threshold;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSingleDestroyBulletProbInfo                low_hp_destroy_bullet_info;                               // 0x0028(0x0028)
	struct FSingleDestroyBulletProbInfo                high_hp_destroy_bullet_info;                              // 0x0050(0x0028)
	struct FSingleDestroyBulletProbInfo                fatal_Damage_destroy_bullet_info;                         // 0x0078(0x0028)
};

// ScriptStruct AI.AIHeardSound
// 0x0010 (0x0028 - 0x0018)
struct FAIHeardSound : public FAIStateInfoBase
{
	TArray<struct FSoundState>                         heard_sound;                                              // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerHitInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIPlayerHitInfo : public FAIStateInfoBase
{
	int                                                fire_count;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_count;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count_filter;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_filter;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateConfig
// 0x0008 (0x0020 - 0x0018)
struct FAIStateConfig : public FAIStateInfoBase
{
	int                                                Level;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRate
// 0x0008 (0x0020 - 0x0018)
struct FDamageRate : public FAIStateInfoBase
{
	float                                              HP;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRateInfo
// 0x0028 (0x0040 - 0x0018)
struct FDamageRateInfo : public FAIStateInfoBase
{
	TArray<struct FDamageRate>                         damage_rate_map;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FDamageRate>                         revive_damage_rate_map;                                   // 0x0028(0x0010) (ZeroConstructor)
	float                                              near_death_damage_rate;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIBulletHole
// 0x0020 (0x0038 - 0x0018)
struct FAIBulletHole : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hole_pos;                                                 // 0x0018(0x000C)
	struct FAIStateXYZ                                 hole_source_pos;                                          // 0x0024(0x000C)
	uint32_t                                           hole_source_id;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MLBaseAIStateInfo
// 0x0110 (0x0130 - 0x0020)
struct FMLBaseAIStateInfo : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    // 0x0020(0x0028)
	struct FProgressBarState                           progress_bar;                                             // 0x0048(0x0028)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0070(0x0030)
	struct FAIStateConfig                              Config;                                                   // 0x00A0(0x0020)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x00C0(0x0040)
	TArray<struct FAIDestroyBulletProbInfo>            destroy_bullet_prob_info;                                 // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIDestroyBulletProbInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIDestroyBulletProbInfoList : public FAIStateInfoBase
{
	TArray<struct FAIDestroyBulletProbInfo>            Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLBaseAIStateInfo
// 0x0138 (0x0158 - 0x0020)
struct FDiffMLBaseAIStateInfo : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    // 0x0020(0x0028)
	struct FProgressBarState                           progress_bar;                                             // 0x0048(0x0028)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0070(0x0030)
	struct FAIStateConfig                              Config;                                                   // 0x00A0(0x0020)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x00C0(0x0040)
	struct FDiffAIDestroyBulletProbInfoList            destroy_bullet_prob_info;                                 // 0x0100(0x0038)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x0138(0x0010) (ZeroConstructor)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x0148(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLBaseAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffMLBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMLBaseAIStateInfo>          AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffMLBaseAIStateInfo>      AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMLBaseAIStateInfo>          DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BaseModAIPlayerState
// 0x0128 (0x0140 - 0x0018)
struct FBaseModAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0028(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_index;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0040(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x004C(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x000C)
	float                                              HP;                                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	int                                                body_state;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x00C0(0x0010) (ZeroConstructor)
	bool                                               is_lost_connection;                                       // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                ai_kill_count;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x00DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x00DB(0x0001) MISSED OFFSET
	int                                                emote_id;                                                 // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              rating_score;                                             // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gender;                                                   // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x00F8(0x0010) (ZeroConstructor)
	int                                                high_hp_destroy_bullet_num;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                low_hp_destroy_bullet_num;                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                fatal_damage_destroy_bullet_num;                          // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	struct FAIStateXYZ                                 head_position;                                            // 0x0118(0x000C)
	struct FAIStateXYZ                                 muzzle_position;                                          // 0x0124(0x000C)
	uint32_t                                           ally_master_id;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                first_lang_id;                                            // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                received_fatal_destroy_bullet_num;                        // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.CameraState
// 0x0028 (0x0040 - 0x0018)
struct FCameraState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0018(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0024(0x000C)
	struct FAIStateXYZ                                 view_position;                                            // 0x0030(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIWeaponStateInfo
// 0x0030 (0x0050 - 0x0020)
struct FAIWeaponStateInfo : public FUniqueStateInfo
{
	int                                                slot_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bullet;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_reloading;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<int>                                        attachments;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                bullet_in_backpak;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           weapon_avatar_id;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerWeapon
// 0x0010 (0x0028 - 0x0018)
struct FAIPlayerWeapon : public FAIStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIBackpackItem
// 0x0010 (0x0030 - 0x0020)
struct FAIBackpackItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Count;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerBackpack
// 0x0010 (0x0028 - 0x0018)
struct FAIPlayerBackpack : public FAIStateInfoBase
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIEquipmentInfo
// 0x0010 (0x0030 - 0x0020)
struct FAIEquipmentInfo : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerEquipment
// 0x0010 (0x0028 - 0x0018)
struct FAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.ChatMsgInfo
// 0x0028 (0x0040 - 0x0018)
struct FChatMsgInfo : public FAIStateInfoBase
{
	struct FString                                     msg_content;                                              // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           item_id;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_id;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 hit_position;                                             // 0x0030(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SignMsgInfo
// 0x0018 (0x0030 - 0x0018)
struct FSignMsgInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hit_pos;                                                  // 0x0018(0x000C)
	uint32_t                                           item_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_type;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MapMarkInfo
// 0x0020 (0x0038 - 0x0018)
struct FMapMarkInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 mapmark_loc;                                              // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FAIStateXYZ>                         mapmultimark_list;                                        // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIAvatarInfo
// 0x0008 (0x0020 - 0x0018)
struct FAIAvatarInfo : public FAIStateInfoBase
{
	int                                                slot_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BaseModAIStateInfo
// 0x02A0 (0x02C0 - 0x0020)
struct FBaseModAIStateInfo : public FUniqueStateInfo
{
	struct FBaseModAIPlayerState                       State;                                                    // 0x0020(0x0140)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0160(0x0058)
	struct FCameraState                                Camera;                                                   // 0x01B8(0x0040)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x01F8(0x0028)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0220(0x0028)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0248(0x0028)
	uint32_t                                           Key;                                                      // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ai_style;                                                 // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x0278(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0288(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x02A8(0x0010) (ZeroConstructor)
	uint32_t                                           ai_provider;                                              // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIAttributeList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIAttributeList : public FAIStateInfoBase
{
	TArray<struct FAIAttribute>                        Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBaseModAIPlayerState
// 0x0140 (0x0158 - 0x0018)
struct FDiffBaseModAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0028(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_index;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0040(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x004C(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x000C)
	float                                              HP;                                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                body_state;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FDiffAIAttributeList                        Attributes;                                               // 0x00D0(0x0038)
	int                                                ai_kill_count;                                            // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gender;                                                   // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0110(0x0010) (ZeroConstructor)
	bool                                               has_gone;                                                 // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                high_hp_destroy_bullet_num;                               // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                low_hp_destroy_bullet_num;                                // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                fatal_damage_destroy_bullet_num;                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 head_position;                                            // 0x0134(0x000C)
	struct FAIStateXYZ                                 muzzle_position;                                          // 0x0140(0x000C)
	uint32_t                                           ally_master_id;                                           // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                first_lang_id;                                            // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                received_fatal_destroy_bullet_num;                        // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIWeaponStateInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIWeaponStateInfoList : public FAIStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeapon
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerWeapon : public FAIStateInfoBase
{
	struct FDiffAIWeaponStateInfoList                  player_weapon;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAIBackpackItemList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIBackpackItemList : public FAIStateInfoBase
{
	TArray<struct FAIBackpackItem>                     Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerBackpack
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerBackpack : public FAIStateInfoBase
{
	struct FDiffAIBackpackItemList                     backpack_item;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAIEquipmentInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIEquipmentInfoList : public FAIStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerEquipment
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerEquipment : public FAIStateInfoBase
{
	struct FDiffAIEquipmentInfoList                    equipment_item;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.DiffBaseModAIStateInfo
// 0x0330 (0x0350 - 0x0020)
struct FDiffBaseModAIStateInfo : public FUniqueStateInfo
{
	struct FDiffBaseModAIPlayerState                   State;                                                    // 0x0020(0x0158)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0178(0x0058)
	struct FCameraState                                Camera;                                                   // 0x01D0(0x0040)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0210(0x0050)
	struct FDiffAIPlayerBackpack                       BackPack;                                                 // 0x0260(0x0050)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x02B0(0x0050)
	uint32_t                                           Key;                                                      // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ai_style;                                                 // 0x0304(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x0308(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0318(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0328(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x0338(0x0010) (ZeroConstructor)
	uint32_t                                           ai_provider;                                              // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffBaseModAllPlayersInfo
// 0x0108 (0x0120 - 0x0018)
struct FDiffBaseModAllPlayersInfo : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<uint32_t, struct FBaseModAIStateInfo>         AllAIStateInfo;                                           // 0x0020(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffBaseModAIStateInfo>     AllDiffAIStateInfo;                                       // 0x0070(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FBaseModAIStateInfo>         DebugAllAIStateInfo;                                      // 0x00C0(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.BaseModAIGameState
// 0x0050 (0x0068 - 0x0018)
struct FBaseModAIGameState : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0030(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                can_jump_sky;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                newbie_score;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                newbie_match_count;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SpecialZoneState
// 0x0058 (0x0078 - 0x0020)
struct FSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0024(0x000C)
	float                                              Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0038(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0044(0x000C)
	int                                                custom_state;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0054(0x000C)
	uint32_t                                           extra_state;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIAttribute>                        custom_attribute_list;                                    // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.BattleVoiceRoomInfo
// 0x0028 (0x0048 - 0x0020)
struct FBattleVoiceRoomInfo : public FUniqueStateInfo
{
	uint32_t                                           team_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     battle_voice_room_id;                                     // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     battle_voice_server_url;                                  // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.BaseModGlobalGameState
// 0x0090 (0x00A8 - 0x0018)
struct FBaseModGlobalGameState : public FAIStateInfoBase
{
	struct FBaseModAIGameState                         Game;                                                     // 0x0018(0x0068)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FBattleVoiceRoomInfo>                voice_room_list;                                          // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.DiffSpecialZoneStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffSpecialZoneStateList : public FAIStateInfoBase
{
	TArray<struct FSpecialZoneState>                   Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBattleVoiceRoomInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffBattleVoiceRoomInfoList : public FAIStateInfoBase
{
	TArray<struct FBattleVoiceRoomInfo>                Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBaseModGlobalGameState
// 0x00D8 (0x00F0 - 0x0018)
struct FDiffBaseModGlobalGameState : public FAIStateInfoBase
{
	struct FBaseModAIGameState                         Game;                                                     // 0x0018(0x0068)
	struct FDiffSpecialZoneStateList                   special_zones;                                            // 0x0080(0x0038)
	struct FDiffBattleVoiceRoomInfoList                voice_room_list;                                          // 0x00B8(0x0038)
};

// ScriptStruct AI.BRBaseAIPlayerState
// 0x0048 (0x0060 - 0x0018)
struct FBRBaseAIPlayerState : public FAIStateInfoBase
{
	int                                                expect_delivery_num;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                revival_count;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_state;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	uint32_t                                           related_id;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	uint32_t                                           follow_state;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           leader_id;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_type;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_type;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 target_position;                                          // 0x0050(0x000C)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIRecipients
// 0x0020 (0x0038 - 0x0018)
struct FAIRecipients : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x000C)
	float                                              HP;                                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.BRBaseAIStateInfo
// 0x0078 (0x0098 - 0x0020)
struct FBRBaseAIStateInfo : public FUniqueStateInfo
{
	struct FBRBaseAIPlayerState                        State;                                                    // 0x0020(0x0060)
	uint32_t                                           deliver_target_id;                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBRBaseAllPlayersInfo
// 0x0100 (0x0118 - 0x0018)
struct FDiffBRBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FBRBaseAIStateInfo>          AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FBRBaseAIStateInfo>          AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FBRBaseAIStateInfo>          DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AirDropBoxState
// 0x0018 (0x0038 - 0x0020)
struct FAirDropBoxState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SpecialMeshState
// 0x0020 (0x0040 - 0x0020)
struct FSpecialMeshState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0024(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0030(0x000C)
	int                                                custom_state;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.RedZoneState
// 0x0018 (0x0030 - 0x0018)
struct FRedZoneState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Center;                                                   // 0x0018(0x000C)
	float                                              Radius;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              start_time;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SafetyAreaState
// 0x0030 (0x0048 - 0x0018)
struct FSafetyAreaState : public FAIStateInfoBase
{
	int                                                State;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x001C(0x000C)
	float                                              Radius;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 next_center;                                              // 0x002C(0x000C)
	float                                              next_radius;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_time;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                circle_index;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FlightInfo
// 0x0038 (0x0050 - 0x0018)
struct FFlightInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 start_loc;                                                // 0x0018(0x000C)
	struct FAIStateXYZ                                 end_loc;                                                  // 0x0024(0x000C)
	struct FAIStateXYZ                                 can_jump_loc;                                             // 0x0030(0x000C)
	struct FAIStateXYZ                                 force_jump_loc;                                           // 0x003C(0x000C)
	int                                                player_num;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.PlaneInfo
// 0x0068 (0x0088 - 0x0020)
struct FPlaneInfo : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FFlightInfo                                 flight_info;                                              // 0x0038(0x0050)
};

// ScriptStruct AI.GlobalControlInfo
// 0x0008 (0x0020 - 0x0018)
struct FGlobalControlInfo : public FAIStateInfoBase
{
	int                                                airdrop_tag;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.BRBaseGlobalGameState
// 0x00D8 (0x00F0 - 0x0018)
struct FBRBaseGlobalGameState : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FSpecialMeshState>                   special_meshes;                                           // 0x0028(0x0010) (ZeroConstructor)
	struct FRedZoneState                               red_zone;                                                 // 0x0038(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x0068(0x0048)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x00B0(0x0010) (ZeroConstructor)
	struct FGlobalControlInfo                          control_info;                                             // 0x00C0(0x0020)
	TArray<uint32_t>                                   silent_list;                                              // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAirDropBoxStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAirDropBoxStateList : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialMeshStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffSpecialMeshStateList : public FAIStateInfoBase
{
	TArray<struct FSpecialMeshState>                   Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffPlaneInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffPlaneInfoList : public FAIStateInfoBase
{
	TArray<struct FPlaneInfo>                          Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBRBaseGlobalGameState
// 0x0150 (0x0168 - 0x0018)
struct FDiffBRBaseGlobalGameState : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStateList                    air_drop_box_states;                                      // 0x0018(0x0038)
	struct FDiffSpecialMeshStateList                   special_meshes;                                           // 0x0050(0x0038)
	struct FRedZoneState                               red_zone;                                                 // 0x0088(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x00B8(0x0048)
	struct FDiffPlaneInfoList                          airplane_list;                                            // 0x0100(0x0038)
	struct FGlobalControlInfo                          control_info;                                             // 0x0138(0x0020)
	TArray<uint32_t>                                   silent_list;                                              // 0x0158(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.WeaponType2Range
// 0x000C
struct FWeaponType2Range
{
	TEnumAsByte<enum EWeaponTypeNew>                   WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NightRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRange
// 0x0008
struct FWeaponTypeToRange
{
	TEnumAsByte<enum EWeaponTypeNew>                   WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeatherToRange
// 0x0010
struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.ShapeRangeParam
// 0x000C
struct FShapeRangeParam
{
	float                                              CircleR;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorR;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorDegree;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRangeWithPawnState
// 0x0058
struct FWeaponTypeToRangeWithPawnState
{
	TEnumAsByte<enum EWeaponTypeNew>                   WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<EPawnState, struct FShapeRangeParam>          StateRange;                                               // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.SightFanInfo
// 0x0008
struct FSightFanInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.InTroubleTeleportConfig
// 0x0010
struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DstCheckRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindDstLocNum;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AIDistantJudgeNoftify
// 0x0030
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.BPAISenseGrenadeDistanceConfig
// 0x0008
struct FBPAISenseGrenadeDistanceConfig
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GrenadeSenseDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AISenseGrenadeClassConfig
// 0x0010
struct FAISenseGrenadeClassConfig
{
	TArray<class UClass*>                              IncludeClassArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.AISenseGrenadeBBKeyInfo
// 0x0030
struct FAISenseGrenadeBBKeyInfo
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyGrenadeActor;                                        // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.TaskAddItem
// 0x0008
struct FTaskAddItem
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DifficultyTimeConfig
// 0x0008
struct FDifficultyTimeConfig
{
	float                                              WaitTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GeneralRandLocationRetryRule
// 0x000C
struct FGeneralRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MobRandLocationRetryRule
// 0x000C
struct FMobRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BlackBoardSubTreeConfig
// 0x0030
struct FBlackBoardSubTreeConfig
{
	struct FBlackboardKeySelector                      BBKey;                                                    // 0x0000(0x0028) (Edit)
	class UBehaviorTree*                               SubBehaviorAsset;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.LocationRetryRule
// 0x000C
struct FLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AITaskNodeThrowGrenadeTargetLocRandomableConfig
// 0x0008
struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig
{
	float                                              RandomRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomTimes;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FindBuildingRatingConfig
// 0x0008
struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CustomDamageEventRow
// 0x00E0 (0x00E8 - 0x0008)
struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       EventID;                                                  // 0x000C(0x0010) (Edit, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateWhenRelevant;                               // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventTriggerType;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TriggerCooldown;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageThreshold;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerWhenDead;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventReactionType;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x002E(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.ActorClassToSpawn
	bool                                               bTriggersGlobalCooldown;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedByGlobalCooldown;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x005A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.OnCooldownActorClassToSpawn
	bool                                               bDestroySpawnedParticlesWithOwner;                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       AttachComponentTag;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomSpawnTransformTag;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAtRandomPointInBoundingBox;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomSpawnRotation;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinToSpawn;                                               // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxToSpawn;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FName                                       ActorSpawnTag;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshComponentTag;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshInstanceIndex;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetProfileName;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionPrimitiveTag;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.TriggeredCustomDamageEvent
// 0x00F0
struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    // 0x0000(0x00E8)
	float                                              TimeTriggered;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.JumpObstacleInfo
// 0x0040 (0x0058 - 0x0018)
struct FJumpObstacleInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 ObstacleCenter;                                           // 0x0018(0x000C)
	struct FAIStateXYZ                                 ObstacleNearest;                                          // 0x0024(0x000C)
	struct FAIStateXYZ                                 ObstacleHighest;                                          // 0x0030(0x000C)
	struct FAIStateXYZ                                 JumpV;                                                    // 0x003C(0x000C)
	struct FAIStateXYZ                                 LandSpot;                                                 // 0x0048(0x000C)
	bool                                               is_valid_jump;                                            // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct AI.MercenaryJumpObstacleAIStateInfo
// 0x0058 (0x0078 - 0x0020)
struct FMercenaryJumpObstacleAIStateInfo : public FUniqueStateInfo
{
	struct FJumpObstacleInfo                           jump_obstacle_info;                                       // 0x0020(0x0058)
};

// ScriptStruct AI.DiffMercenaryJumpObstacleAllPlayerInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffMercenaryJumpObstacleAllPlayerInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DestructibleItemAIStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FDestructibleItemAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   destructible_items_index;                                 // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDestructibleItemAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffDestructibleItemAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DestructibleItem
// 0x0040 (0x0060 - 0x0020)
struct FDestructibleItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	TArray<bool>                                       fragment_states;                                          // 0x0040(0x0010) (ZeroConstructor)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0050(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DestructibleItemGlobalNearbyInfo
// 0x0010 (0x0028 - 0x0018)
struct FDestructibleItemGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDestructibleItem>                   destructible_items;                                       // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DestructibleItemGlobalGameState
// 0x0028 (0x0040 - 0x0018)
struct FDestructibleItemGlobalGameState : public FAIStateInfoBase
{
	struct FDestructibleItemGlobalNearbyInfo           global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffDestructibleItemStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffDestructibleItemStateList : public FAIStateInfoBase
{
	TArray<struct FDestructibleItem>                   Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDestructibleItemGlobalNearbyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffDestructibleItemGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDestructibleItemStateList              destructible_items;                                       // 0x0018(0x0038)
};

// ScriptStruct AI.DiffDestructibleItemGlobalGameState
// 0x0050 (0x0068 - 0x0018)
struct FDiffDestructibleItemGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDestructibleItemGlobalNearbyInfo       global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.DynamicItemAIStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FDynamicItemAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItemAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffDynamicItemAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DynamicItem
// 0x0050 (0x0070 - 0x0020)
struct FDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	float                                              Durability;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Custom;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0048(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FAIAttribute>                        custom_attribute_list;                                    // 0x0058(0x0010) (ZeroConstructor)
	int                                                parallel_world_id;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DynamicItemGlobalNearbyInfo
// 0x0010 (0x0028 - 0x0018)
struct FDynamicItemGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DynamicItemGlobalGameState
// 0x0028 (0x0040 - 0x0018)
struct FDynamicItemGlobalGameState : public FAIStateInfoBase
{
	struct FDynamicItemGlobalNearbyInfo                global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffDynamicItemStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffDynamicItemStateList : public FAIStateInfoBase
{
	TArray<struct FDynamicItem>                        Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItemGlobalNearbyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffDynamicItemGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDynamicItemStateList                   dynamic_items;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffDynamicItemGlobalGameState
// 0x0050 (0x0068 - 0x0018)
struct FDiffDynamicItemGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDynamicItemGlobalNearbyInfo            global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.LandScapeDestroyState
// 0x0018 (0x0038 - 0x0020)
struct FLandScapeDestroyState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x0024(0x000C)
	int                                                Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.LandScapeAIStateInfo
// 0x0010 (0x0030 - 0x0020)
struct FLandScapeAIStateInfo : public FUniqueStateInfo
{
	TArray<struct FLandScapeDestroyState>              landscape_destroy_info;                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeDestroyStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffLandScapeDestroyStateList : public FAIStateInfoBase
{
	TArray<struct FLandScapeDestroyState>              Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeAIStateInfo
// 0x0038 (0x0058 - 0x0020)
struct FDiffLandScapeAIStateInfo : public FUniqueStateInfo
{
	struct FDiffLandScapeDestroyStateList              landscape_destroy_info;                                   // 0x0020(0x0038)
};

// ScriptStruct AI.DiffLandScapeAllPlayerInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffLandScapeAllPlayerInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FLandScapeAIStateInfo>       AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffLandScapeAIStateInfo>   AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FLandScapeAIStateInfo>       DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.LandScapeChange
// 0x0028 (0x0048 - 0x0020)
struct FLandScapeChange : public FUniqueStateInfo
{
	int                                                component_index_x;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_index_y;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_x1;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_y1;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_x2;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_y2;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint16_t>                                   heights_data;                                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.LandScapeChangeState
// 0x0018 (0x0038 - 0x0020)
struct FLandScapeChangeState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FLandScapeChange>                    changes;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.LandScapeGlobalGameInfo
// 0x0010 (0x0028 - 0x0018)
struct FLandScapeGlobalGameInfo : public FAIStateInfoBase
{
	TArray<struct FLandScapeChangeState>               landscape_change_info;                                    // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeChangeStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffLandScapeChangeStateList : public FAIStateInfoBase
{
	TArray<struct FLandScapeChangeState>               Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeGlobalGameInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffLandScapeGlobalGameInfo : public FAIStateInfoBase
{
	struct FDiffLandScapeChangeStateList               landscape_change_info;                                    // 0x0018(0x0038)
};

// ScriptStruct AI.NearbyDoorAIStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FNearbyDoorAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffNearbyDoorAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffNearbyDoorAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DoorState
// 0x0020 (0x0040 - 0x0020)
struct FDoorState : public FUniqueStateInfo
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x000C)
	int                                                State;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
};

// ScriptStruct AI.DoorGlobalNearbyInfo
// 0x0010 (0x0028 - 0x0018)
struct FDoorGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.NearbyDoorGlobalGameState
// 0x0028 (0x0040 - 0x0018)
struct FNearbyDoorGlobalGameState : public FAIStateInfoBase
{
	struct FDoorGlobalNearbyInfo                       global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffDoorStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffDoorStateList : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDoorGlobalNearbyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffDoorGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDoorStateList                          nearby_door;                                              // 0x0018(0x0038)
};

// ScriptStruct AI.DiffNearbyDoorGlobalGameState
// 0x0050 (0x0068 - 0x0018)
struct FDiffNearbyDoorGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDoorGlobalNearbyInfo                   global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.NearbyMonsterAIStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FNearbyMonsterAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffNearbyMonsterAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffNearbyMonsterAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.MonsterState
// 0x0040 (0x0060 - 0x0020)
struct FMonsterState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0040(0x000C)
	float                                              HP;                                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              hp_max;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                using_skill_id;                                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MonsterGlobalNearbyInfo
// 0x0010 (0x0028 - 0x0018)
struct FMonsterGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.NearbyMonsterGlobalGameState
// 0x0028 (0x0040 - 0x0018)
struct FNearbyMonsterGlobalGameState : public FAIStateInfoBase
{
	struct FMonsterGlobalNearbyInfo                    global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffMonsterStates
// 0x0020 (0x0038 - 0x0018)
struct FDiffMonsterStates : public FAIStateInfoBase
{
	TArray<struct FMonsterState>                       Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMonsterGlobalNearbyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffMonsterGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffMonsterStates                          monster_states;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.DiffNearbyMonsterGlobalGameState
// 0x0050 (0x0068 - 0x0018)
struct FDiffNearbyMonsterGlobalGameState : public FAIStateInfoBase
{
	struct FDiffMonsterGlobalNearbyInfo                global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.AISimplifyState
// 0x0008 (0x0020 - 0x0018)
struct FAISimplifyState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayer
// 0x0020 (0x0040 - 0x0020)
struct FAINearbyPlayer : public FUniqueStateInfo
{
	struct FAISimplifyState                            State;                                                    // 0x0020(0x0020)
};

// ScriptStruct AI.NearbyPlayerAIStateInfo
// 0x0010 (0x0030 - 0x0020)
struct FNearbyPlayerAIStateInfo : public FUniqueStateInfo
{
	TArray<struct FAINearbyPlayer>                     nearby_player;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyPlayerList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAINearbyPlayerList : public FAIStateInfoBase
{
	TArray<struct FAINearbyPlayer>                     Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffNearbyPlayerAIStateInfo
// 0x0038 (0x0058 - 0x0020)
struct FDiffNearbyPlayerAIStateInfo : public FUniqueStateInfo
{
	struct FDiffAINearbyPlayerList                     nearby_player;                                            // 0x0020(0x0038)
};

// ScriptStruct AI.DiffNearbyPlayerAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffNearbyPlayerAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffNearbyPlayerAIStateInfo> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BaseNearbyAIStateInfo
// 0x0068 (0x0088 - 0x0020)
struct FBaseNearbyAIStateInfo : public FUniqueStateInfo
{
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET
};

// ScriptStruct AI.DiffBaseNearbyAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffBaseNearbyAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.AINearbyThrown
// 0x0028 (0x0048 - 0x0020)
struct FAINearbyThrown : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0024(0x000C)
	float                                              remain_time;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              explode_time;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_held;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	uint32_t                                           actorid;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sourceid;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.BaseGlobalNearbyInfo
// 0x0020 (0x0038 - 0x0018)
struct FBaseGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.NearbyBaseGlobalGameState
// 0x0038 (0x0050 - 0x0018)
struct FNearbyBaseGlobalGameState : public FAIStateInfoBase
{
	struct FBaseGlobalNearbyInfo                       global_nearby_info;                                       // 0x0018(0x0038)
};

// ScriptStruct AI.DiffItemStateDataList
// 0x0020 (0x0038 - 0x0018)
struct FDiffItemStateDataList : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyThrownList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAINearbyThrownList : public FAIStateInfoBase
{
	TArray<struct FAINearbyThrown>                     Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBaseGlobalNearbyInfo
// 0x0070 (0x0088 - 0x0018)
struct FDiffBaseGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffItemStateDataList                      nearby_item;                                              // 0x0018(0x0038)
	struct FDiffAINearbyThrownList                     nearby_thrown;                                            // 0x0050(0x0038)
};

// ScriptStruct AI.DiffBaseNearbyGlobalGameState
// 0x0088 (0x00A0 - 0x0018)
struct FDiffBaseNearbyGlobalGameState : public FAIStateInfoBase
{
	struct FDiffBaseGlobalNearbyInfo                   global_nearby_info;                                       // 0x0018(0x0088)
};

// ScriptStruct AI.CollectorArray
// 0x0010
struct FCollectorArray
{
	TArray<class UStateInfoCollectorBase*>             Collectors;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffListIDMap
// 0x0050
struct FDiffListIDMap
{
	TMap<uint64_t, uint32_t>                           ListIDMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.PropertyNameListIDMap
// 0x0050
struct FPropertyNameListIDMap
{
	TMap<struct FString, struct FDiffListIDMap>        PropertyNameListIDMap;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.CollectorInitInfo
// 0x0020
struct FCollectorInitInfo
{
	struct FString                                     CollectorName;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<EStatePlayerType>                           CollectPlayerType;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.VehicleDamageInfoContainer
// 0x0010
struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AI.BulletHole
// 0x0018
struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     SourcePoint;                                              // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BulletHoleRecordInfo
// 0x0010 (0x0028 - 0x0018)
struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShooterId;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MPBaseAIPlayerState
// 0x0020 (0x0038 - 0x0018)
struct FMPBaseAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	int                                                death_count;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              survive_time;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kd_ratio;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                continue_kill;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revenge;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                top_spot_end;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeSlotInfo
// 0x0020 (0x0038 - 0x0018)
struct FAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	int                                                slot_index;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        attach_list;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	int                                                scheme_index;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_locked;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DeathMatchAIPlayerEquipment
// 0x0018 (0x0030 - 0x0018)
struct FDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIGameModePlayerWeaponSchemeInfo>   weapon_scheme_info_list;                                  // 0x0018(0x0010) (ZeroConstructor)
	int                                                cur_weapon_scheme_index;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MPBaseAIStateInfo
// 0x0068 (0x0088 - 0x0020)
struct FMPBaseAIStateInfo : public FUniqueStateInfo
{
	struct FMPBaseAIPlayerState                        State;                                                    // 0x0020(0x0038)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0058(0x0030)
};

// ScriptStruct AI.DiffMPBaseAllPlayersInfo
// 0x0100 (0x0118 - 0x0018)
struct FDiffMPBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMPBaseAIStateInfo>          AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMPBaseAIStateInfo>          AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMPBaseAIStateInfo>          DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.TeamScoreData
// 0x0008 (0x0028 - 0x0020)
struct FTeamScoreData : public FUniqueStateInfo
{
	int                                                team_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_score;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MPBaseAIGameState
// 0x0010 (0x0028 - 0x0018)
struct FMPBaseAIGameState : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.MPBaseGlobalGameState
// 0x0028 (0x0040 - 0x0018)
struct FMPBaseGlobalGameState : public FAIStateInfoBase
{
	struct FMPBaseAIGameState                          Game;                                                     // 0x0018(0x0028)
};

// ScriptStruct AI.DiffTeamScoreDataList
// 0x0020 (0x0038 - 0x0018)
struct FDiffTeamScoreDataList : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMPBaseAIGameState
// 0x0038 (0x0050 - 0x0018)
struct FDiffMPBaseAIGameState : public FAIStateInfoBase
{
	struct FDiffTeamScoreDataList                      team_score_datas;                                         // 0x0018(0x0038)
};

// ScriptStruct AI.DiffMPBaseGlobalGameState
// 0x0050 (0x0068 - 0x0018)
struct FDiffMPBaseGlobalGameState : public FAIStateInfoBase
{
	struct FDiffMPBaseAIGameState                      Game;                                                     // 0x0018(0x0050)
};

// ScriptStruct AI.AIVehicleStateData
// 0x0080
struct FAIVehicleStateData
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AI.VehicleAIPlayerState
// 0x0008 (0x0020 - 0x0018)
struct FVehicleAIPlayerState : public FAIStateInfoBase
{
	int                                                vehicle_role;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleDamageInfo
// 0x0018 (0x0030 - 0x0018)
struct FVehicleDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           vehicle_id;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_kill;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AI.VehicleState
// 0x00C8 (0x00E8 - 0x0020)
struct FVehicleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0024(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0030(0x000C)
	float                                              HP;                                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gas;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0044(0x000C)
	uint32_t                                           damaged_num;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Category;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_reverse;                                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_player;                                               // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_full;                                                  // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FCameraState                                Camera;                                                   // 0x0060(0x0040)
	int                                                location_state;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_attached;                                              // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	uint32_t                                           special_states;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<float>                                      wheels_hp;                                                // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              // 0x00C0(0x0010) (ZeroConstructor)
	bool                                               is_has_collision;                                         // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_horn;                                            // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	uint32_t                                           born_island_owner_id;                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           vehicle_avatar_id;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           custom_state;                                             // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              special_energy;                                           // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleAIStateInfo
// 0x0128 (0x0148 - 0x0020)
struct FVehicleAIStateInfo : public FUniqueStateInfo
{
	struct FVehicleAIPlayerState                       State;                                                    // 0x0020(0x0020)
	struct FVehicleState                               vehicle_state;                                            // 0x0040(0x00E8)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0138(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleAllPlayersInfo
// 0x00F0 (0x0108 - 0x0018)
struct FDiffVehicleAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FVehicleAIStateInfo>         AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FVehicleAIStateInfo>         AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FVehicleAIStateInfo>         DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.VehicleGlobalNearbyInfo
// 0x0010 (0x0028 - 0x0018)
struct FVehicleGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.VehicleGlobalGameState
// 0x0038 (0x0050 - 0x0018)
struct FVehicleGlobalGameState : public FAIStateInfoBase
{
	struct FVehicleGlobalNearbyInfo                    global_nearby_info;                                       // 0x0018(0x0028)
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleStateList
// 0x0020 (0x0038 - 0x0018)
struct FDiffVehicleStateList : public FAIStateInfoBase
{
	TArray<struct FVehicleState>                       Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleGlobalNearbyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffVehicleGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffVehicleStateList                       nearby_vehicles;                                          // 0x0018(0x0038)
};

// ScriptStruct AI.DiffVehicleGlobalGameState
// 0x0060 (0x0078 - 0x0018)
struct FDiffVehicleGlobalGameState : public FAIStateInfoBase
{
	struct FDiffVehicleGlobalNearbyInfo                global_nearby_info;                                       // 0x0018(0x0050)
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.ActionMoveData
// 0x0010
struct FActionMoveData
{
	bool                                               IsStop;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRun;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              DirectionX;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionY;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionZ;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIVehicleHatredInfo
// 0x000C
struct FAIVehicleHatredInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobOnceMemory
// 0x0004
struct FBTTaskMobOnceMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ShootingAimConfig
// 0x0014
struct FShootingAimConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AimDeviationScale;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAimDeviationScale;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.ShootingAimConfigContainer
// 0x0050
struct FShootingAimConfigContainer
{
	TMap<float, struct FShootingAimConfig>             AimConfig;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.DifficultyShootingConfig
// 0x0010
struct FDifficultyShootingConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DeviationScale;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.BTAICheckInAIBehaviorRegionMemory
// 0x002C
struct FBTAICheckInAIBehaviorRegionMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTAICheckMaxDistanceFromSpawnPointMemory
// 0x002C
struct FBTAICheckMaxDistanceFromSpawnPointMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTFlyingChooseEnemyMemory
// 0x000C
struct FBTFlyingChooseEnemyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTMobAddHpMemory
// 0x0001
struct FBTMobAddHpMemory
{
	bool                                               HPBuffAdded;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobCheckLoseTargetMemory
// 0x0008
struct FBTMobCheckLoseTargetMemory
{
	bool                                               LastLoseTarget;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LoseTargetElapsedTime;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobHearingMemory
// 0x0028
struct FBTMobHearingMemory
{
	struct FNoiseInfo                                  LastChosenNoiseInfo;                                      // 0x0000(0x0024)
	float                                              LockNoiseElapsedTime;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobMoveBlockTimerMemory
// 0x0004
struct FBTMobMoveBlockTimerMemory
{
	float                                              BlockElapsedTime;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTAISenseGrenadeMemory
// 0x0260
struct FBTAISenseGrenadeMemory
{
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistance;                                    // 0x0000(0x0050) (ZeroConstructor)
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistanceSquared;                             // 0x0050(0x0050) (ZeroConstructor)
	float                                              fMaxSenseDistance;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11C];                                     // 0x00A4(0x011C) MISSED OFFSET
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyInfo;                                         // 0x01C0(0x0050) (ZeroConstructor)
	TMap<class UClass*, EAISenseGrenadeType>           GrenadeClassesMap;                                        // 0x0210(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BTTaskCrowdMoveMemory
// 0x0078
struct FBTTaskCrowdMoveMemory
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AI.BTTaskFlyAlongSplineMemory
// 0x001C
struct FBTTaskFlyAlongSplineMemory
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskForceIdleMemory
// 0x000C
struct FBTTaskForceIdleMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTLaunchMoveSpeedCurve
// 0x0004
struct FBTLaunchMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTTaskMobExplodeMemory
// 0x0001
struct FBTTaskMobExplodeMemory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetNearDeathCharNearbyMemory
// 0x000C
struct FBTTaskGetNearDeathCharNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobGetRandomAttackTargetInRadius
// 0x0008
struct FBTTaskMobGetRandomAttackTargetInRadius
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetVehicleNearbyMemory
// 0x000C
struct FBTTaskGetVehicleNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMoveAroundMemory
// 0x00A0
struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
};

// ScriptStruct AI.BTTaskRotateToTargetMemory
// 0x0008
struct FBTTaskRotateToTargetMemory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTAICharacterCastSkillMemory
// 0x0034
struct FBTAICharacterCastSkillMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     FocusLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FocusActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossTargetLoc;                                            // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     GrenadeThrowStartLoc;                                     // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BTTaskParachuteJumpBaseMemory
// 0x0020
struct FBTTaskParachuteJumpBaseMemory
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AI.DiffDynamicItem
// 0x0078 (0x0098 - 0x0020)
struct FDiffDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	float                                              Durability;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Custom;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0048(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FDiffAIAttributeList                        custom_attribute_list;                                    // 0x0058(0x0038)
	int                                                parallel_world_id;                                        // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffSpecialZoneState
// 0x0080 (0x00A0 - 0x0020)
struct FDiffSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0024(0x000C)
	float                                              Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0038(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0044(0x000C)
	int                                                custom_state;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0054(0x000C)
	uint32_t                                           extra_state;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffAIAttributeList                        custom_attribute_list;                                    // 0x0068(0x0038)
};

// ScriptStruct AI.GlobalGameStateMPBase
// 0x0028 (0x0040 - 0x0018)
struct FGlobalGameStateMPBase : public FAIStateInfoBase
{
	struct FMPBaseAIGameState                          Game;                                                     // 0x0018(0x0028)
};

// ScriptStruct AI.AIDamageSources
// 0x0030 (0x0048 - 0x0018)
struct FAIDamageSources : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_type;                                              // 0x0028(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_weapon_type;                                       // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DebugAIParamConfig
// 0x0018
struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DistMax;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     NameAndDegree;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffCmd
// 0x0040
struct FDiffCmd
{
	class UProperty*                                   Property;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DiffProperty;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   ValueProperty;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DelItemProperty;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   UnChangedProperty;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DiffUnChangedProperty;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct AI.AIAttribute_CastEnergyWithCount
// 0x001C
struct FAIAttribute_CastEnergyWithCount
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

}

