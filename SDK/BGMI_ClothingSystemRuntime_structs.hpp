#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:41 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Enums
//---------------------By BEST @RXJOKER1---------------------------

// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2
};


// Enum ClothingSystemRuntime.EClothTetherMode
enum class EClothTetherMode : uint8_t
{
	EClothTetherMode__Geodesic     = 0,
	EClothTetherMode__Simple       = 1,
	EClothTetherMode__EClothTetherMode_MAX = 2
};


// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__SelfCollisionMask = 5,
	MaskTarget_PhysMesh__PhysicsStiffness = 6,
	MaskTarget_PhysMesh__ShapeMatchingMask = 7,
	MaskTarget_PhysMesh__ClothLayerMask = 8,
	MaskTarget_PhysMesh__MaskTarget_MAX = 9
};



//---------------------By BEST @RXJOKER1---------------------------
//Script Structs
//---------------------By BEST @RXJOKER1---------------------------

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034
struct FClothVertBoneData
{
	int                                                NumInfluences;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BoneIndices[0x8];                                         // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              BoneWeights[0x8];                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010
struct FClothConstraintSetup
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothWindConfig
// 0x000C
struct FClothWindConfig
{
	EClothingWindMethod                                WindMethod;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WindDragCoefficient;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothSelfCollisionConfig
// 0x000C
struct FClothSelfCollisionConfig
{
	float                                              SelfCollisionRadius;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothDampingConfig
// 0x002C
struct FClothDampingConfig
{
	struct FVector                                     Damping;                                                  // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x0018(0x000C) (Edit, IsPlainOldData)
	float                                              Friction;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamping;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothInertiaConfig
// 0x0024
struct FClothInertiaConfig
{
	struct FVector                                     LinearInertiaScale;                                       // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x0018(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothSolverConfig
// 0x0028
struct FClothSolverConfig
{
	float                                              SolverFrequency;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseXPBD;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                XpbdIterations;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStiffness;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxParticleDisplacement;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdaptiveFrequency;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AdaptiveFrequencyMin;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdaptiveFrequencyMax;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothTeleportConfig
// 0x0010
struct FClothTeleportConfig
{
	bool                                               bEnableAutoTeleportDetection;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TeleportThreshold;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResetThreshold;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothTetherConfig
// 0x000C
struct FClothTetherConfig
{
	bool                                               bEnableTether;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClothTetherMode                                   TetherMode;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothCollisionConfig
// 0x0008
struct FClothCollisionConfig
{
	float                                              CollisionThickness;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableContinuousCollision;                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEnvironmentalCollision;                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGroundCollision;                                   // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothGPUConfig
// 0x0008
struct FClothGPUConfig
{
	bool                                               bUseGPU;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseJacobi;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              JacobiSOR;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothVolumeConfig
// 0x0010
struct FClothVolumeConfig
{
	bool                                               bEnableVolumeConstraints;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              VolumeConstraintStiffness;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeConstraintScaleMultiplier;                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VolumeConstraintSampleStride;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothBendingElementConfig
// 0x0018
struct FClothBendingElementConfig
{
	bool                                               bEnableBendingElement;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BendingElementStiffness;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendingElementDamping;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendingElementBucklingRatio;                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendingElementBucklingStiffness;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlatnessRatio;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x0140
struct FClothConfig
{
	struct FClothConstraintSetup                       VerticalConstraintConfig;                                 // 0x0000(0x0010) (Edit)
	struct FClothConstraintSetup                       HorizontalConstraintConfig;                               // 0x0010(0x0010) (Edit)
	struct FClothConstraintSetup                       BendConstraintConfig;                                     // 0x0020(0x0010) (Edit)
	struct FClothConstraintSetup                       ShearConstraintConfig;                                    // 0x0030(0x0010) (Edit)
	struct FClothWindConfig                            WindConfig;                                               // 0x0040(0x000C) (Edit)
	struct FClothSelfCollisionConfig                   SelfCollisionConfig;                                      // 0x004C(0x000C) (Edit)
	struct FClothDampingConfig                         DampingConfig;                                            // 0x0058(0x002C) (Edit)
	struct FClothInertiaConfig                         InertiaConfig;                                            // 0x0084(0x0024) (Edit)
	struct FClothSolverConfig                          SolverConfig;                                             // 0x00A8(0x0028) (Edit)
	struct FClothTeleportConfig                        TeleportConfig;                                           // 0x00D0(0x0010) (Edit)
	struct FClothTetherConfig                          TetherConfig;                                             // 0x00E0(0x000C) (Edit)
	struct FClothCollisionConfig                       CollisionConfig;                                          // 0x00EC(0x0008) (Edit)
	struct FClothGPUConfig                             GPUConfig;                                                // 0x00F4(0x0008) (Edit)
	struct FClothVolumeConfig                          VolumeConfig;                                             // 0x00FC(0x0010) (Edit)
	struct FClothBendingElementConfig                  BendingElementConfig;                                     // 0x010C(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             ImportedConfigAssetPath;                                  // 0x0128(0x0018) (Edit, EditConst)
};

// ScriptStruct ClothingSystemRuntime.VolumeConstraint
// 0x0018
struct FVolumeConstraint
{
	uint32_t                                           Particle;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Triangle[0x3];                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RestVolume;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x01F8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      MaxDistances;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      SelfCollisionMask;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      PhysicsStiffness;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ShapeMatchingMask;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      InverseMasses;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x00C0(0x0010) (Edit, ZeroConstructor)
	int                                                MaxBoneWeights;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFixedVerts;                                            // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OriginalSectionVertexCount;                               // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   ShapeMatchingIndices;                                     // 0x00F0(0x0010) (Edit, ZeroConstructor)
	int                                                NumShapeMatchingRigidBodies;                              // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   ShapeMatchingRigidBodyOffsets;                            // 0x0108(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   ShapeMatchingRigidBodyIds;                                // 0x0118(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ShapeMatchingRestPositions;                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ShapeMatchingInitialCenters;                              // 0x0138(0x0010) (Edit, ZeroConstructor)
	TArray<struct FIntPoint>                           VirtualEdges;                                             // 0x0148(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ClothLayerMask;                                           // 0x0158(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVolumeConstraint>                   VolumeConstraints;                                        // 0x0168(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ParticleToTetrahedronMap;                                 // 0x0178(0x0010) (Edit, ZeroConstructor)
	int                                                NumVolumeConstraints;                                     // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeConstraintScale;                                    // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VolumeConstraintSampleStride;                             // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   ClothLayerOffsets;                                        // 0x0198(0x0010) (Edit, ZeroConstructor)
	int                                                NumClothLayers;                                           // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   ParticleVolumeConstraintOffsets;                          // 0x01B0(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   ParticleVolumeConstraintData;                             // 0x01C0(0x0010) (Edit, ZeroConstructor)
	int                                                NumBendingElements;                                       // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	TArray<int>                                        BendingElementIndices;                                    // 0x01D8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BendingElementRestAngles;                                 // 0x01E8(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x0248
struct FClothLODData
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         // 0x0000(0x01F8) (Edit)
	struct FClothCollisionData                         CollisionData;                                            // 0x01F8(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0228(0x0020) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030
struct FClothParameterMask_PhysMesh
{
	struct FName                                       MaskName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EMaskTarget_PhysMesh                               CurrentTarget;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MaxValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

}

