#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OceanPlugin.AdvancedBuoyancyComponent
// 0x00F0 (0x03C0 - 0x02D0)
class UAdvancedBuoyancyComponent : public USceneComponent
{
public:
	float                                              WaterDensity;                                             // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02DC(0x000C) MISSED OFFSET
	class UStaticMeshComponent*                        BuoyantMesh;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FTransform                                  MeshTransform;                                            // 0x02F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FalseVolume;                                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyReductionCoefficient;                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyPitchReductionCoefficient;                        // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrection;                                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrectionModifier;                                // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmergedVolume;                                          // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactCoefficient;                                        // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DragCoefficient;                                          // 0x033C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SuctionCoefficient;                                       // 0x0348(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ViscousDragCoefficient;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlamAcceleration;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             AdvancedGridHeight;                                       // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FForceTriangle>                      SubmergedTris;                                            // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSizes;                                                 // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSubmergedArea;                                         // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x34];                                      // 0x038C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.AdvancedBuoyancyComponent");
		return pStaticClass;
	}


	float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
	void SetMeshDensity(float NewDensity, float NewWaterDensity);
	float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
	void GetOcean();
	void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
	void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
	void ApplyForce(const struct FForceTriangle& TriForce);
};


// Class OceanPlugin.BuoyancyComponent
// 0x0078 (0x0178 - 0x0100)
class UBuoyancyComponent : public UMovementComponent
{
public:
	float                                              MeshDensity;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0110(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      PointDensityOverride;                                     // 0x0134(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x014C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0160(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.BuoyancyForceComponent
// 0x0270 (0x0540 - 0x02D0)
class UBuoyancyForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnterWater;                                             // 0x02D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseBuoyancyEvent;                                        // 0x02E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x02FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ApplyForceToBones;                                        // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToSurfaceIfNoPhysics;                                 // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToSeaLevel;                                           // 0x0322(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwoGerstnerIterations;                                    // 0x0323(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      PointDensityOverride;                                     // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStructBoneOverride>                 BoneOverride;                                             // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEnableZOptimize;                                         // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugPoints;                                          // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugSeaLevel;                                        // 0x033E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x033F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightStiffness;                                     // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x0348(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             UpdatedComponent;                                         // 0x035C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCustomWaveForce;                                    // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FVector                                     CustomWaveForceTestPointOffset;                           // 0x0364(0x000C) (Edit, IsPlainOldData)
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      // 0x0370(0x000C) (BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData05[0x1A4];                                     // 0x037C(0x01A4) MISSED OFFSET
	class UPhysicsConstraintComponent*                 UprightConstraintComp;                                    // 0x0520(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x0524(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyForceComponent");
		return pStaticClass;
	}


	void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void OnEnterWaterDelegate__DelegateSignature(bool IsUnderWater);
	void OnContactWaterDelegate__DelegateSignature(bool IsContactingWater);
	void NativeSetEnableCustomWaveForce(bool bEnable);
	bool IsFloatingOnWater();
	bool IsEntirelyUnderWater();
	bool IsContactedWater();
	void EndableUprightConstraint(bool bEnable);
	bool CheckPointInWater(const struct FVector& Point, bool isWorldPosition);
};


// Class OceanPlugin.BuoyantMeshComponent
// 0x0050 (0x0840 - 0x07F0)
class UBuoyantMeshComponent : public UStaticMeshComponent
{
public:
	bool                                               bVerticalForcesOnly;                                      // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWaterPatch;                                           // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStaticForces;                                         // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicForces;                                        // 0x07F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AOceanManager*                               OceanManager;                                             // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawForceArrows;                                         // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawWaterline;                                           // 0x07F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawVertices;                                            // 0x07FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawTriangles;                                           // 0x07FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSubtriangles;                                        // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	float                                              ForceArrowSize;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMeshDensity;                                     // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	float                                              MeshDensity;                                              // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMass;                                            // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDensity;                                             // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0818(0x0018) MISSED OFFSET
	class UWaterHeightmapComponent*                    WaterHeightmap;                                           // 0x0830(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0834(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyantMeshComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.FishManager
// 0x0040 (0x0378 - 0x0338)
class AFishManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	TArray<float>                                      numInFlock;                                               // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              minZ;                                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxZ;                                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              underwaterBoxLength;                                      // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               attachToPlayer;                                           // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	class UClass*                                      PlayerType;                                               // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0364(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FishManager");
		return pStaticClass;
	}

};


// Class OceanPlugin.FlockFish
// 0x0140 (0x04B8 - 0x0378)
class AFlockFish : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class USphereComponent*                            FishInteractionSphere;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IsLeader;                                                 // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	TArray<class UClass*>                              enemyTypes;                                               // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              preyTypes;                                                // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      neighborType;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              followDist;                                               // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              turnFrequency;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hungerResetTime;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              distBehindSpeedUpRange;                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeperationDistanceMultiplier;                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeDistanceMultiplier;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeAccelerationMultiplier;                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChaseAccelerationMultiplier;                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekDecelerationMultiplier;                               // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidForceMultiplier;                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceForce;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerType;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     underwaterMin;                                            // 0x03E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     underwaterMax;                                            // 0x03EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomZSeekMin;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomZSeekMax;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NumNeighborsToEvaluate;                                   // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateEveryTick;                                          // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	bool                                               DebugMode;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0419(0x000F) MISSED OFFSET
	class AActor*                                      Leader;                                                   // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              neighbors;                                                // 0x042C(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              nearbyEnemies;                                            // 0x0438(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              nearbyPrey;                                               // 0x0444(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              nearbyFriends;                                            // 0x0450(0x000C) (ZeroConstructor)
	class AActor*                                      fleeTarget;                                               // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      preyTarget;                                               // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0464(0x0050) MISSED OFFSET
	class AActor*                                      FishManager;                                              // 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FlockFish");
		return pStaticClass;
	}


	void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class OceanPlugin.InfiniteSystemComponent
// 0x0020 (0x02F0 - 0x02D0)
class UInfiniteSystemComponent : public USceneComponent
{
public:
	float                                              MaxLookAtDistance;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByDistance;                                          // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	float                                              ScaleDistanceFactor;                                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleStartDistance;                                       // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.InfiniteSystemComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.OceanManager
// 0x00A0 (0x03D8 - 0x0338)
class AOceanManager : public AActor
{
public:
	struct FVector                                     GlobalWaveDirection;                                      // 0x0338(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GlobalWaveSpeed;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalWaveAmplitude;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCheckAbove;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCheckBelow;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWaveParameter>                      WaveClusters;                                             // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              NetWorkTimeOffset;                                        // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLandscapeModulation;                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              ModulationStartHeight;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationMaxHeight;                                      // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationPower;                                          // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ALandscape*                                  Landscape;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0388(0x0020) MISSED OFFSET
	bool                                               bShouldCorrectTime;                                       // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWaterBoxModulation;                                // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	TArray<struct FBox>                                WaterBoxes;                                               // 0x03AC(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) MISSED OFFSET
	bool                                               bEnableWaterTransformModulation;                          // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	TArray<struct FTransform>                          WaterTransforms;                                          // 0x03C0(0x000C) (ZeroConstructor)
	TArray<struct FVector>                             WaterBoxExtends;                                          // 0x03CC(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.OceanManager");
		return pStaticClass;
	}


	void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
	struct FLinearColor GetHeightmapPixel(float U, float V);
};


// Class OceanPlugin.SegmentOceanManager
// 0x00C8 (0x04A0 - 0x03D8)
class ASegmentOceanManager : public AOceanManager
{
public:
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      // 0x03D8(0x000C) (ExportObject, ZeroConstructor)
	TMap<class UWaterBoxComponent*, struct FSegmentWaterBox> SegmentdWaterBoxes;                                       // 0x03E4(0x0050) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0420(0x0074) MISSED OFFSET
	float                                              FrequencyScale;                                           // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.SegmentOceanManager");
		return pStaticClass;
	}


	void RemoveBoxComponent(class UWaterBoxComponent* InBoxComponent);
	void AddBoxComponent(class UWaterBoxComponent* InBoxComponent, class USplineComponent* InDirectionSpline);
};


// Class OceanPlugin.TimeManager
// 0x00C0 (0x03F8 - 0x0338)
class ATimeManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET
	float                                              latitude;                                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              longitude;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetUTC;                                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetDST;                                                // 0x035C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDaylightSavings;                                    // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDaylightSavingsActive;                                   // 0x0361(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	float                                              TimeScaleMultiplier;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SolarTime;                                                // 0x0368(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalClockTime;                                           // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeCorrection;                                           // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LSTM;                                                     // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DayOfYear;                                                // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EoT;                                                      // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAltAngle;                                            // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarDeclination;                                         // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAzimuth;                                             // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarHRA;                                                 // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SiderealTime;                                             // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAltAngle;                                            // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarHRA;                                                 // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarDeclination;                                         // 0x039C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAzimuth;                                             // 0x03A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarRightAsc;                                            // 0x03A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarElapsedDays;                                         // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLongitude;                                              // 0x03AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLatitude;                                               // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcDistance;                                               // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartL;                                                    // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartM;                                                    // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartF;                                                    // 0x03C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x03C4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.TimeManager");
		return pStaticClass;
	}


	void SetCurrentLocalTime(float Time);
	bool IsLeapYear(int Year);
	void InitializeCalendar(const struct FTimeDate& Time);
	void IncrementTime(float DeltaSeconds);
	float GetYearPhase();
	float GetElapsedDayInMinutes();
	int GetDaysInYear(int Year);
	int GetDaysInMonth(int Year, int Month);
	float GetDayPhase();
	int GetDayOfYear(const struct FTimeDate& Time);
	struct FRotator CalculateSunAngle();
	float CalculateMoonPhase();
	struct FRotator CalculateMoonAngle();
};


// Class OceanPlugin.WaterBoxComponent
// 0x00A0 (0x0770 - 0x06D0)
class UWaterBoxComponent : public UBoxComponent
{
public:
	float                                              AcceptHigherZ;                                            // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x06D4(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedValue;                                               // 0x06E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaveForceMultiplier;                                      // 0x06E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTrippleWaveParameter>               TrippleWaveClusters;                                      // 0x06E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TimeScaleOffset;                                          // 0x06F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSplineDirection;                                       // 0x06FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	float                                              SpeedAttenuationFromSpline;                               // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSplineZ;                                               // 0x0704(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	float                                              ZOffset;                                                  // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSizeX;                                                // 0x070C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSizeY;                                                // 0x0710(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<float, struct FWaterBoxCell>                  Cells;                                                    // 0x0714(0x0050) (Edit, ZeroConstructor)
	int                                                KeyFactor;                                                // 0x0750(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0754(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterBoxComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.WaterHeightmapComponent
// 0x0060 (0x0128 - 0x00C8)
class UWaterHeightmapComponent : public UActorComponent
{
public:
	bool                                               bOnlyCollidingComponents;                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              GridSizeMultiplier;                                       // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawUsedTriangles;                                       // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawHeightmap;                                           // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x52];                                      // 0x00D2(0x0052) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterHeightmapComponent");
		return pStaticClass;
	}

};


}

