#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Addons.AmphibiousSlidingVehicle
// 0x0010 (0x15C0 - 0x15B0)
class AAmphibiousSlidingVehicle : public ASTExtraSimulatedSlidingVehicle
{
public:
	bool                                               RepWaterState;                                            // 0x15B0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x15B1(0x0003) MISSED OFFSET
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x15B4(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x15B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AmphibiousSlidingVehicle");
		return pStaticClass;
	}


	void OnRep_WaterState();
	void OnRep_UseSyncatClient();
	void HandleContactWater(bool bInContactingWater);
	class UFloatingVehicleVehicleMovementComponent2* GetFloatingVehicleMovement();
};


// Class Addons.AnimInstanceSlidingTrack
// 0x0090 (0x0870 - 0x07E0)
class UAnimInstanceSlidingTrack : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_MovementCrouch;                                        // 0x07E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurningLeft;                                            // 0x07E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurningRight;                                           // 0x07E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_DecelerationBreak;                                      // 0x07EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idle;                                                   // 0x07F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_MovementMode;                                           // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    C_CustomMovementMode;                                     // 0x07F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasWeapon;                                               // 0x07F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x07F7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurnLeft;                                              // 0x07F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningLeft;                                           // 0x07F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningRight;                                          // 0x07FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x07FB(0x0001) MISSED OFFSET
	struct FVector2D                                   SplineVelocity;                                           // 0x07FC(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bEnableDecelerating;                                      // 0x0804(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	float                                              MaxAngleOfDeltaDeceleration;                              // 0x0808(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 IdleBlendCurve;                                           // 0x080C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleAlpha;                                                // 0x0810(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionPlayRate;                                       // 0x0814(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0818(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDecelerateThreshold;                                   // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnPlayStartPos;                                         // 0x0820(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnPlayRate;                                             // 0x0824(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurnLoop;                                          // 0x0828(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurningDetect;                                     // 0x0829(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x082A(0x0002) MISSED OFFSET
	float                                              TurnAngleThresholdEnableTriggerLoop;                      // 0x082C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAngleThresholdDisableTriggerLoop;                     // 0x0830(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart;                                              // 0x0834(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpFalling;                                            // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding;                                            // 0x083C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingHard;                                        // 0x0840(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingLight;                                       // 0x0844(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStart;                                         // 0x0848(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStartEx;                                       // 0x0849(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLanding;                                        // 0x084A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToSpline;                                         // 0x084B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLandingHard;                                    // 0x084C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	float                                              MaxFallingSpeedThresholdToLandingHard;                    // 0x0850(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandingToIdle;                                           // 0x0854(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	float                                              FootIKAlpha;                                              // 0x0858(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FootIKLODDefaultLevel;                                    // 0x085C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0860(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceSlidingTrack");
		return pStaticClass;
	}

};


// Class Addons.AnimInstanceVerticalZipline
// 0x0000 (0x07E0 - 0x07E0)
class UAnimInstanceVerticalZipline : public UCharacterAnimStateBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceVerticalZipline");
		return pStaticClass;
	}

};


// Class Addons.AnimNodeHelper
// 0x0004 (0x0020 - 0x001C)
class UAnimNodeHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNodeHelper");
		return pStaticClass;
	}

};


// Class Addons.AnimNotify_PlayMechaFootStep
// 0x0018 (0x0040 - 0x0028)
class UAnimNotify_PlayMechaFootStep : public UAnimNotify
{
public:
	class UAkAudioEvent*                               WaterFootStep;                                            // 0x0028(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               NotHitFootStep;                                           // 0x002C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootBone;                                                 // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceUpOffset;                                            // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNotify_PlayMechaFootStep");
		return pStaticClass;
	}

};


// Class Addons.AnimNotify_PlayMechaParticleEffect
// 0x0000 (0x00A0 - 0x00A0)
class UAnimNotify_PlayMechaParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNotify_PlayMechaParticleEffect");
		return pStaticClass;
	}

};


// Class Addons.AnimNotify_ShakeVehicleCamera
// 0x0030 (0x0058 - 0x0028)
class UAnimNotify_ShakeVehicleCamera : public UAnimNotify
{
public:
	float                                              ShakeScale;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FppShakeScale;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ControlParam;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ControlRange;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<EPawnState>                                 ShakeIgnoreState;                                         // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShakeDrivers;                                            // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShakePassengers;                                         // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShakeSurrounding;                                        // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	float                                              MaxShakeDistance;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNotify_ShakeVehicleCamera");
		return pStaticClass;
	}

};


// Class Addons.AnimPoseRecorder
// 0x008C (0x00A8 - 0x001C)
class UAnimPoseRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x001C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimPoseRecorder");
		return pStaticClass;
	}

};


// Class Addons.BeamEffectMoveActor
// 0x00E0 (0x04A8 - 0x03C8)
class ABeamEffectMoveActor : public AUAERegionActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET
	struct FBeamEffectDataParams                       BeamMoveEffectData;                                       // 0x0400(0x0028) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bUseRelativeLoc;                                          // 0x0428(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    BeamEffectComp;                                           // 0x042C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ExtraSourceEffectComp;                                    // 0x0430(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ExtraTargetEffectComp;                                    // 0x0434(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBeamEmitterData>                    BeamEmitterData;                                          // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FName                                       CharacterSourceAttachSocketName;                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponSourceAttachSocketName;                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, struct FName>                            VehicleSourceAttachSocketNames;                           // 0x0458(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   VehicleSourceAttachKey;                                   // 0x0498(0x0008) (Edit, BlueprintVisible)
	float                                              DSTickInternal;                                           // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BeamEffectMoveActor");
		return pStaticClass;
	}


	void SetBeamEffectData(const struct FBeamEffectDataParams& InBeamEffectData);
	void RefreshEffectLocation();
	void OnRep_BeamMoveEffectData();
};


// Class Addons.BioVehicleMovementComponent
// 0x08A0 (0x09D0 - 0x0130)
class UBioVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0130(0x0004) MISSED OFFSET
	unsigned char                                      bHasRequestedVelocity : 1;                                // 0x0134(0x0001) (Transient)
	unsigned char                                      bNeedSLerpRequestedVelocity : 1;                          // 0x0134(0x0001) (Transient)
	unsigned char                                      bRequestedMoveWithMaxSpeed : 1;                           // 0x0134(0x0001) (Transient)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x0134(0x0001) (Transient)
	unsigned char                                      UnknownData01 : 2;                                        // 0x0134(0x0001)
	unsigned char                                      bProjectNavMeshWalking : 1;                               // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bProjectNavMeshOnBothWorldChannels : 1;                   // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNeedSlowDownRequestedVelocity : 1;                       // 0x0135(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0136(0x0002) MISSED OFFSET
	float                                              SlowDownRequestedVelocityFactor;                          // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x013C(0x0010) MISSED OFFSET
	float                                              GravityScale;                                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0150(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x0151(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1E];                                      // 0x0152(0x001E) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorAngle;                                       // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorZ;                                           // 0x0178(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WalkableHeadHitZ;                                         // 0x017C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StepForwardMinDelta;                                      // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStandOnOthervehicle;                                  // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              MaxSwimSpeed;                                             // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyBackSpeed;                                          // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnalogWalkSpeed;                                       // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimFriction;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAirControl;                                        // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CurveAirControl;                                          // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl;                                               // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostMultiplier;                                // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostVelocityThreshold;                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedHalfHeight;                                       // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimVelocityZLimitScale;                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingUpZ;                                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThreshold;                                     // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchAdditionalHeight;                                    // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x01F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SmoothRotationLerpFactor;                                 // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateToCameraLerpSpeed;                                  // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotated;                                             // 0x020C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseControllerDesiredRotation : 1;                        // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOrientRotationToMovement : 1;                            // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNeedBackward : 1;                                        // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSweepWhileNavWalking : 1;                                // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoFloatingUp : 1;                                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeriousInjuried : 1;                                     // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJumpAllowedWhenSeriousInjuried : 1;                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07 : 1;                                        // 0x0218(0x0001)
	unsigned char                                      bMovementInProgress : 1;                                  // 0x0219(0x0001)
	unsigned char                                      bEnableScopedMovementUpdates : 1;                         // 0x0219(0x0001) (Edit)
	unsigned char                                      bForceMaxAccel : 1;                                       // 0x0219(0x0001)
	unsigned char                                      bRunPhysicsWithNoController : 1;                          // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceNextFloorCheck : 1;                                 // 0x0219(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bShrinkProxyCapsule : 1;                                  // 0x0219(0x0001)
	unsigned char                                      bCanWalkOffLedges : 1;                                    // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedgesWhenCrouching : 1;                       // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x2];                                       // 0x021A(0x0002) MISSED OFFSET
	float                                              HeadCollisionScaleOnDS;                                   // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingBlockHeadSlide;                                   // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingDoubleCheckWhenPenetrate;                         // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              WalkingHeadPenetrateCheckRadius;                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingHeadPenetrateCheckHeight;                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingBlockHeadSlide;                                   // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleCheckSlide;                                        // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x022E(0x0002) MISSED OFFSET
	float                                              HeadSlideCollisionScaleHeight;                            // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideCollisionScaleRadius;                            // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideFallingCollisionScale;                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadCheckSlope;                                          // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowBodySlideSurface;                                    // 0x023D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockVelocityLimit;                             // 0x023E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x023F(0x0001) MISSED OFFSET
	float                                              HeadBlockLimitVelocity;                                   // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockLimitThrottle;                             // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHeadWalkingCheck;                                    // 0x0245(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientResolveServerPenetration;                          // 0x0246(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12 : 1;                                        // 0x0247(0x0001)
	unsigned char                                      bNetworkSkipProxyPredictionOnNetUpdate : 1;               // 0x0247(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceNoSimulatePrediction : 1;                           // 0x0247(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDeferUpdateMoveComponent : 1;                            // 0x0247(0x0001)
	class USceneComponent*                             DeferredUpdatedMoveComponent;                             // 0x0248(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxOutOfWaterStepHeight;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutofWaterZ;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchForceScaledToMass;                                  // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x025A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceUsingZOffset;                                   // 0x025B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	float                                              StandingDownwardForceScale;                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialPushForceFactor;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForcePointZOffsetFactor;                              // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFactor;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTouchForce;                                            // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchForce;                                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepulsionForce;                                           // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0280(0x0004) MISSED OFFSET
	struct FVector                                     Acceleration;                                             // 0x0284(0x000C) (Net, IsPlainOldData)
	struct FVector                                     PendingDirectionalBrakingAccelerationToApply;             // 0x0290(0x000C) (Net, IsPlainOldData)
	struct FVector                                     LastUpdateLocation;                                       // 0x029C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	struct FQuat                                       LastUpdateRotation;                                       // 0x02B0(0x0010) (IsPlainOldData)
	struct FVector                                     LastUpdateVelocity;                                       // 0x02C0(0x000C) (IsPlainOldData)
	float                                              ServerLastTransformUpdateTimeStamp;                       // 0x02CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PendingImpulseToApply;                                    // 0x02D0(0x000C) (IsPlainOldData)
	struct FVector                                     PendingForceToApply;                                      // 0x02DC(0x000C) (IsPlainOldData)
	float                                              AnalogInputModifier;                                      // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x02EC(0x0008) MISSED OFFSET
	float                                              MaxSimulationTimeStep;                                    // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometry;                             // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometryAsProxy;                      // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawn;                                 // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawnAsProxy;                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothLocationTime;           // 0x0314(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothRotationTime;           // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkRadius;                                     // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkHalfHeight;                                 // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothUpdateDistance;                           // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothScale;                                    // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkNoSmoothUpdateDistance;                            // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaySmoothUseInterp;                                   // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENetworkSmoothingMode                              NetworkSmoothingMode;                                     // 0x0331(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	float                                              LedgeCheckThreshold;                                      // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOutOfWaterPitch;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FFindFloorResult                            CurrentFloor;                                             // 0x0340(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	TEnumAsByte<EMovementMode>                         DefaultLandMovementMode;                                  // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         DefaultWaterMovementMode;                                 // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         GroundMovementMode;                                       // 0x03E2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMaintainHorizontalGroundVelocity : 1;                    // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityX : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityY : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityZ : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseAngularVelocity : 1;                           // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJustTeleported : 1;                                      // 0x03E3(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      bNetworkUpdateReceived : 1;                               // 0x03E3(0x0001) (Transient)
	unsigned char                                      bNetworkMovementModeChanged : 1;                          // 0x03E3(0x0001) (Transient)
	unsigned char                                      bIgnoreClientMovementErrorChecksAndCorrection : 1;        // 0x03E4(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      bNotifyApex : 1;                                          // 0x03E4(0x0001) (Edit, BlueprintVisible, EditConst)
	unsigned char                                      bCheatFlying : 1;                                         // 0x03E4(0x0001)
	unsigned char                                      bWantsToCrouch : 1;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCustomAction0 : 1;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCrouchMaintainsBaseLocation : 1;                         // 0x03E4(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bIgnoreBaseRotation : 1;                                  // 0x03E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFastAttachedMove : 1;                                    // 0x03E4(0x0001)
	unsigned char                                      bAlwaysCheckFloor : 1;                                    // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFlatBaseForFloorChecks : 1;                           // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPerformingJumpOff : 1;                                   // 0x03E5(0x0001)
	unsigned char                                      bWantsToLeaveNavWalking : 1;                              // 0x03E5(0x0001)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x03E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRequestedMoveUseAcceleration : 1;                        // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData19[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	float                                              AvoidanceConsiderationRadius;                             // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x03EC(0x000C) (Transient, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x040C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData20[0xA8];                                      // 0x0418(0x00A8) MISSED OFFSET
	float                                              NavMeshProjectionInterval;                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTimer;                                   // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NavMeshProjectionInterpSpeed;                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleUp;                           // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleDown;                         // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingFloorDistTolerance;                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavRotationFactor;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWantedSpeed;                                           // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceBraking : 1;                                        // 0x04E0(0x0001) (Deprecated)
	unsigned char                                      UnknownData21[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              CrouchedSpeedMultiplier;                                  // 0x04E4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              UpperImpactNormalScale;                                   // 0x04E8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FBioVehicleMovementPostPhysicsTickFunction  PostPhysicsTickFunction;                                  // 0x04EC(0x003C)
	bool                                               bEnableSimulatedVelocity;                                 // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpectatorSmoothVelocity;                                 // 0x0529(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x052A(0x0002) MISSED OFFSET
	float                                              ClientServerVelocitySizeSquareThreshold;                  // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDSSmoothVelocity;                                        // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustClientWithRotation;                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x12];                                      // 0x0532(0x0012) MISSED OFFSET
	bool                                               EnabledResetPredictionData;                               // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0xF];                                       // 0x0545(0x000F) MISSED OFFSET
	float                                              MinTimeBetweenTimeStampResets;                            // 0x0554(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrustClientTimeStampThres;                         // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              TrustClientTimeStampThres;                                // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRootMotionSourceGroup                      CurrentRootMotion;                                        // 0x0560(0x0090) (Transient)
	unsigned char                                      UnknownData26[0x90];                                      // 0x05F0(0x0090) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0680(0x0040) (Transient)
	struct FVector                                     AnimRootMotionVelocity;                                   // 0x06C0(0x000C) (Transient, IsPlainOldData)
	bool                                               bWasSimulatingRootMotion;                                 // 0x06CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAllowPhysicsRotationDuringAnimRootMotion : 1;            // 0x06CD(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData27[0x2];                                       // 0x06CE(0x0002) MISSED OFFSET
	class ABioVehicleBase*                             VehicleOwner;                                             // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x10];                                      // 0x06D4(0x0010) MISSED OFFSET
	bool                                               bIsAcceptInput;                                           // 0x06E4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	float                                              NetThrottleInput;                                         // 0x06E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetSteeringInput;                                         // 0x06EC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetRisingInput;                                           // 0x06F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0xC];                                       // 0x06F4(0x000C) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x0700(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeed;                                             // 0x0704(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HandBrakeRate;                                            // 0x0708(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomBodyBox;                                       // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomHeadCapsule;                                   // 0x070D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckHeadCapsule;                                // 0x070E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockRevertTransfrom;                                    // 0x070F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorCheckXReduce;                                        // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowBasedVehicle;                                      // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanWalkOnBioVehicle;                                     // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x0716(0x0002) MISSED OFFSET
	class UCurveFloat*                                 AngularVelocityCurve;                                     // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AccResistanceCurve;                                       // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DecResistanceCurve;                                       // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BreakAccelerationCurve;                                   // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SlopeSpeedFactorCurve;                                    // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAcceleration;                                      // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackAcceleration;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularAcceleration;                                      // 0x0734(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultAngularVelocity;                                   // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultResistanceCoefficient;                             // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultStaticResistance;                                  // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBrakeAcceleration;                                 // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackSpeed;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaDotFactor;                                           // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMax;                                   // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMin;                                   // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHeadResolveSpeed;                                  // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0760(0x0004) MISSED OFFSET
	float                                              SeriousInjuredSpeedFactor;                                // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0768(0x0004) MISSED OFFSET
	float                                              fKeepMinSpeed;                                            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableOBSmooth : 1;                                     // 0x0770(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData34[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              MinJumpSpeed;                                             // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenRot;                             // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenJump;                            // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenHeadBlock;                       // 0x077A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenStepup;                          // 0x077B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockNoCombineInterval;                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepUpNoCombineInterval;                                  // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x8];                                       // 0x0784(0x0008) MISSED OFFSET
	unsigned char                                      NoCombineDeviceLevel;                                     // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	float                                              NoCombineSecondsPerFrame;                                 // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMin;                       // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMax;                       // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleRate;                           // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerMoveCheckPassWall;                                 // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportIgnoreCheckPassWall;                             // 0x07A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x07A2(0x0002) MISSED OFFSET
	float                                              RadiusScaleWhenCheckPassWall;                             // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightScaleWhenCheckPassWall;                             // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePenetrationResolve;                                // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	int                                                PenetrationUnResolveCount;                                // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationUnResolveDistanceSq;                           // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceSq;                        // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceMax;                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET
	struct FResolvePenetrationMoveData                 ResolvePenetrationMove;                                   // 0x07D0(0x0088) (Transient)
	struct FResolvePenetrationParams                   ResolvePenetrationParams;                                 // 0x0858(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData40[0x68];                                      // 0x08A8(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleResolvePenetrationDelegate;                   // 0x0910(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData41[0xC];                                       // 0x091C(0x000C) MISSED OFFSET
	float                                              DefaultJumpHeight;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightCurve;                                       // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightByObsHeightCurve;                            // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsControlJumpHeight : 1;                                 // 0x0934(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyGravityWhileJumping : 1;                            // 0x0934(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	float                                              JumpHorizontalVelocityScale;                              // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeed;                                         // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeedZ;                                        // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffJumpZFactor;                                       // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffVelocityScale;                                     // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateZeroVelocityDeferFindFloor;                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              SimulateFindFloorInternal;                                // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimulateOptimizeCountsNum;                                // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	bool                                               bUseSelfLocDiffThreshold;                                 // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	float                                              MaxAllowedLocDiffSquare;                                  // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceApplyServerMovementMode;                            // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerCheckJumpZLocDiff;                                 // 0x0969(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x096A(0x0002) MISSED OFFSET
	float                                              JumpProtectionZThreshold;                                 // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateProtection;                                      // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x0971(0x0003) MISSED OFFSET
	float                                              SimulateProtectionInterval;                               // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAbandonReplicatedMovement;                               // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x1B];                                      // 0x0979(0x001B) MISSED OFFSET
	bool                                               bSimulateMovement;                                        // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableServerAntiCheat;                                   // 0x0995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x2];                                       // 0x0996(0x0002) MISSED OFFSET
	float                                              SecurityAllowedMoveSpeedRatio;                            // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecurityAllowedJumpHeightRatio;                           // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecuritySpeedPingAdaption;                               // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	float                                              SecuritySpeedPingAdaptionRate;                            // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SecurityCheckThres;                                       // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData51[0x24];                                      // 0x09AC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleMovementComponent");
		return pStaticClass;
	}


	void UnpackAccelerationToInput(const struct FVector& InAccel);
	bool ShouldRecordPosition();
	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void SetRisingInput(float rate);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAcceptInput(bool bIsAccept);
	void ServerSetThrottleInput(float rate);
	void ServerSetSteeringInput(float rate);
	void ServerSetRisingInput(float rate);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	struct FVector PackInputToAcceleration();
	void OnRecoverOnServer();
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsSwimming();
	bool IsSeriousInjuriedAllowJumping();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx);
	float GetWalkingDecResistance(float Speed);
	float GetWalkingAccResistance(float Speed);
	float GetValidPerchRadius();
	float GetThrottleInput();
	float GetSteeringInput();
	float GetSlopeSpeedFactor(float Slope);
	float GetRisingInput();
	struct FVector GetPredictVelocity(float PredictTime);
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMinAnalogSpeed();
	float GetMaxJumpHeightWithJumpTime();
	float GetMaxJumpHeight();
	float GetMaxBrakingDeceleration();
	float GetMaxAcceleration();
	float GetJumpVelocityZ();
	float GetJumpingHeightBySpeed(float Speed);
	float GetJumpingHeightByObsHeight(float ObsHeight);
	struct FVector GetImpartedMovementBaseVelocity();
	float GetDesireAcceleration();
	float GetCurrentSecuritySpeedRatio();
	float GetCurrentMaxAllowedSpeed();
	struct FVector GetCurrentAcceleration();
	float GetBreakAcceleration(float Speed);
	float GetAngularVelocityByCurve(float Speed, bool AsForce);
	float GetAnalogInputModifier();
	void DisableMovement();
	void DealWithCustomAction(float DeltaTime);
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void ClearAccumulatedForces();
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void CalculateVelocityWithResistance(float DeltaTime, bool bFluid);
	float CalculateCurrentForwardSpeed();
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& Force);
	void AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration);
};


// Class Addons.BioBaseFlyComponent
// 0x00D0 (0x0AA0 - 0x09D0)
class UBioBaseFlyComponent : public UBioVehicleMovementComponent
{
public:
	float                                              MaxTraceDownHeight;                                       // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFlyBioVehicleFlyingConfig                  FlyingConfig;                                             // 0x09D4(0x0028) (Edit, BlueprintVisible)
	float                                              MaxTakeOffTime;                                           // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                TakeOffCurve;                                             // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FFlyBioVehicleLandingConfig>         LandingConfigs;                                           // 0x0A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      CacheSplineActor;                                         // 0x0A10(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceNoSimulate;                                 // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceLanding;                                    // 0x0A15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingHeight;                                 // 0x0A16(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingZDiff;                                  // 0x0A17(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingLocZDiff;                                        // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0A1C(0x001C) MISSED OFFSET
	TArray<struct FFlyBioVehicleUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0A38(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0A44(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0A45(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoLandingWhenNoDriver;                           // 0x0A46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0A47(0x0001) MISSED OFFSET
	float                                              SimulateLandingInput;                                     // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0A50(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LandingConfigIndex;                                       // 0x0A58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0A5C(0x0028) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0A84(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0A88(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0A8C(0x0010) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0A9C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioBaseFlyComponent");
		return pStaticClass;
	}


	void StartTakingOff();
	void StartLanding();
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	bool IsTakingOff();
	bool IsLanding();
	bool IsCurveMoving();
	EFlyBioVehicleBaseMoveMode GetMoveState();
	struct FFlyBioVehicleFlyingConfig GetFlyingConfig();
	float GetDistanceToLand();
	void ExitLanding();
	void EndTakingOff();
	void EndLanding();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
};


// Class Addons.BioFlyMovementComponentBase
// 0x0110 (0x0AE0 - 0x09D0)
class UBioFlyMovementComponentBase : public UBioVehicleMovementComponent
{
public:
	float                                              MaxUpSpeed;                                               // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingZ;                                               // 0x09D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceDownHeight;                                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                TakeOffCurve;                                             // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CacheSplineActor;                                         // 0x09F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceNoSimulate;                                 // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceLanding;                                    // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingHeight;                                 // 0x09FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingZDiff;                                  // 0x09FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingLocZDiff;                                        // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionHeightScaleWhenCheckPassWall;              // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionRadiusScaleWhenCheckPassWall;              // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedInterpSpeed;                                  // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpotRotator;                                              // 0x0A0C(0x000C) (IsPlainOldData)
	float                                              SpotTurnStartTime;                                        // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x0A20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0A40(0x000C) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0A54(0x0010) MISSED OFFSET
	class AReindeerBioVehicle*                         ReindeerOwner;                                            // 0x0A64(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFlyBioVehicleUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0A68(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0A74(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0A75(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A76(0x0002) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0A78(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x0A80(0x002C) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0AAC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0AB0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0AB4(0x0001) MISSED OFFSET
	bool                                               bCheckAttachCollision;                                    // 0x0AB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttachBlockVelocityLimit;                          // 0x0AB6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0AB7(0x0001) MISSED OFFSET
	float                                              AttachBlockLimitVelocity;                                 // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlyingBlockAttachSlide;                                  // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	float                                              AttachCapsuleTraceGroundScale;                            // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulateLandingInput;                                     // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateRadiusScale;                          // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateHeightScale;                          // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckAttachCapsule;                              // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	class UCapsuleComponent*                           AttachedCollision;                                        // 0x0AD4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0AD8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioFlyMovementComponentBase");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	bool IsTakingOff();
	bool IsCurveMoving();
	EFlyBioVehicleMoveMode GetMoveState();
	float GetDistanceToLand();
	void EndTakingOff();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
};


// Class Addons.BioVehicleBase
// 0x0370 (0x14F0 - 0x1180)
class ABioVehicleBase : public ASTExtraVehicleBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1180(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleRunOutFuel;                                   // 0x1184(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleRecoverFuel;                                  // 0x1190(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFuelExhausted;                                           // 0x119C(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x119D(0x0003) MISSED OFFSET
	class UBioVehicleMovementComponent*                VehicleMovement;                                          // 0x11A0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x11A4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BodyBoxComponent;                                         // 0x11A8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HeadCapsuleComponent;                                     // 0x11AC(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSpringArmComponent*                  BioVehicleSpringArm;                                      // 0x11B0(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginAccelerate;                                        // 0x11B4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAccelerate;                                          // 0x11C0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasAcceleration;                                         // 0x11CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasAccelerationLastFrame;                                // 0x11CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1A];                                      // 0x11CE(0x001A) MISSED OFFSET
	struct FBasedMovementInfo                          BasedMovement;                                            // 0x11E8(0x0030)
	struct FBasedMovementInfo                          ReplicatedBasedMovement;                                  // 0x1218(0x0030) (Net)
	struct FVector                                     BaseTranslationOffset;                                    // 0x1248(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1254(0x000C) MISSED OFFSET
	struct FQuat                                       BaseRotationOffset;                                       // 0x1260(0x0010) (IsPlainOldData)
	bool                                               bInBaseReplication;                                       // 0x1270(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x1271(0x000F) MISSED OFFSET
	struct FRootMotionMovementParams                   ClientRootMotionParams;                                   // 0x1280(0x0040) (Transient)
	bool                                               bCanVehicleJump;                                          // 0x12C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimGravityDisabled : 1;                                  // 0x12C1(0x0001)
	unsigned char                                      bPressedJump : 1;                                         // 0x12C1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWasJumping : 1;                                          // 0x12C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData05[0x2];                                       // 0x12C2(0x0002) MISSED OFFSET
	float                                              JumpKeyHoldTime;                                          // 0x12C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpForceTimeRemaining;                                   // 0x12C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              ProxyJumpForceStartedTime;                                // 0x12CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpMaxHoldTime;                                          // 0x12D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpMaxCount;                                             // 0x12D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpCurrentCount;                                         // 0x12D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              BioVehicleLaunchCollDownTime;                             // 0x12DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachedJumpApex;                                        // 0x12E0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xC];                                       // 0x12EC(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    MovementModeChangedDelegate;                              // 0x12F8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleJumped;                                       // 0x1304(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterMovementUpdated;                               // 0x1310(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      ReplicatedMovementMode;                                   // 0x131C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClientCheckEncroachmentOnNetUpdate : 1;                  // 0x131D(0x0001) (Transient)
	unsigned char                                      bClientUpdating : 1;                                      // 0x131D(0x0001) (Transient)
	unsigned char                                      bClientWasFalling : 1;                                    // 0x131D(0x0001) (Transient)
	unsigned char                                      UnknownData07[0xA];                                       // 0x131E(0x000A) MISSED OFFSET
	bool                                               HasBeenTamed;                                             // 0x1328(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x13];                                      // 0x1329(0x0013) MISSED OFFSET
	bool                                               bCanbeDamagedByTrex;                                      // 0x133C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldGenerateStaticDeadBodyWhileDeath;                  // 0x133D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x133E(0x0002) MISSED OFFSET
	float                                              OverlapTestScale;                                         // 0x1340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBioVehicleBeenTamed;                                    // 0x1344(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMesh*                               UntamedMesh;                                              // 0x1350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TamedMesh;                                                // 0x1354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FFootStepEffect>         FootStepEffects;                                          // 0x1358(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UParticleSystemComponent*> FootStepEffectRuntimeData;                                // 0x1394(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnAnimInstanceActive;                                     // 0x13D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldPlayRandomIdleWhilePassengersOn;                   // 0x13DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x13DD(0x0003) MISSED OFFSET
	float                                              RandomIdleResetTimeMin;                                   // 0x13E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomIdleResetTimeMax;                                   // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMin;                                       // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMax;                                       // 0x13EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBioVehicleDoRandomIdle;                                 // 0x13F0(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData11[0x8];                                       // 0x13FC(0x0008) MISSED OFFSET
	bool                                               bEnableSimulatedOptimize;                                 // 0x1404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1405(0x0003) MISSED OFFSET
	TArray<struct FSimulateThresholds>                 BioVehicleSimulateThresholds;                             // 0x1408(0x000C) (ZeroConstructor, Config)
	bool                                               bEnableCollisionOptimization;                             // 0x1414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1415(0x0003) MISSED OFFSET
	float                                              OpenCollisionMinDistSq;                                   // 0x1418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShooterOpenCollisionMaxCosTheta;                          // 0x141C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FOpenCollisionLODAngle>              BioVehicleCollisionDistSqAngles;                          // 0x1420(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CheckCollisionOpenInternal;                               // 0x142C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CreatureVehicleMesh_ProfileName;                          // 0x1430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCollisionLine;                                      // 0x1438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0xB];                                       // 0x1439(0x000B) MISSED OFFSET
	class ASTExtraBaseCharacter*                       CacheNearlyCharacer;                                      // 0x1444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<ESTExtraVehicleSeatType, class UAnimMontage*> SeatMountMontages;                                        // 0x1448(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                CreatureMountReAction;                                    // 0x1484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDeathRagDoll;                                      // 0x1488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1489(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ComponentRagdollIgnoreCollisionChannel;                   // 0x148C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             MeshRagDollIgnoreCollisionChannel;                        // 0x1498(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCacheNeedPlayMountMontage;                               // 0x14A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x14A5(0x0003) MISSED OFFSET
	class UBoxComponent*                               BrokenShapeComponent;                                     // 0x14A8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              PenetrationDragPlayerOffsetZ;                             // 0x14AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PenetrationDragPlayerOffsets;                             // 0x14B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PenetrationDragVehicleOffsetZ;                            // 0x14BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PenetrationDragVehicleOffsets;                            // 0x14C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnResolveCharacterPenetrationFailed;                      // 0x14CC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResolveVehiclePenetrationFailed;                        // 0x14D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData17[0xC];                                       // 0x14E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleBase");
		return pStaticClass;
	}


	void UpdateFuelState();
	void StopJumping();
	void SetSimulatePhysics(bool bSimulate);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetHandBrake(float rate);
	void ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bResetVelocity);
	void ProcessPenetration();
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage);
	void OnRep_ReplicatedBasedMovement();
	void OnRep_HasBeenTamed();
	void OnRep_FuelExhausted(bool bPrevFuelExhausted);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void OnExitingVehicleOnServer();
	void OnEnteringVehicleOnServer(bool IsSucc);
	void MoveUp(float rate);
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsJumpProvidingForce();
	void HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance);
	void HandleOnClientBeenTamed();
	float GetVehicleOriginToLand();
	bool GetVehicleBreakOutState();
	class UAnimMontage* GetSeatMountMontage(ESTExtraVehicleSeatType SeatType);
	struct FVector GetRotationInputDir();
	struct FRotator GetPlayerLookAtRotation();
	float GetConsumeFuelRate();
	class UBoxComponent* GetBodyShapeComponent();
	class UBioVehicleMovementComponent* GetBioVehicleMovement();
	struct FVector GetBaseTranslationOffset();
	class UBioVehicleAnimListComponent* GetAnimListComponent();
	void ExitVehicle();
	void EnterVehicle(bool IsSucc);
	bool ConsumeNeedPlayMountMontage();
	void ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	bool CanJumpInternal();
	bool CanJump();
	bool CanConsumeFuel();
	void CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);
	void BroadCastPlayMountMontage(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void BroadCastPlayingRandomIdleAnim(int RandomIdleAnim);
	void ActiveRagDoll();
	void ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation);
};


// Class Addons.BioFlyVehicleBase
// 0x0010 (0x1500 - 0x14F0)
class ABioFlyVehicleBase : public ABioVehicleBase
{
public:
	float                                              ForceOpenParachuteHeightInFlyVehicle;                     // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInFlyVehicle;                         // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInFlyVehicle;                      // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bObserverNotRepMovement;                                  // 0x14FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x14FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioFlyVehicleBase");
		return pStaticClass;
	}


	void OnClientExitFromBioFlyVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void HandleVehicleHealthDestroy();
	class UBioBaseFlyComponent* GetBioFlyMovementComponent();
};


// Class Addons.BioVehicleAnimInstanceBase
// 0x00A0 (0x03A0 - 0x0300)
class UBioVehicleAnimInstanceBase : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0300(0x0048) MISSED OFFSET
	TArray<float>                                      LOD_Level_DistanceFactor;                                 // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class ABioVehicleBase*                             OwnerVehicle;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsServer;                                                // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasBeenTamed;                                            // 0x035E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAnimVarHasCached;                                        // 0x035F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasDrivers;                                              // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAnyPassengers;                                        // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableSlopeAdaption;                                     // 0x0363(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableLegAdaption;                                       // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              CurrentDistanceFactor;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimLOD;                                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAnimLODChanged;                                         // 0x0370(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimSequence*                               DeathAnim;                                                // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBioVehicleRiderAnimInstanceBase> DriverAnimInstance;                                       // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0388(0x0004) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimInstanceBase");
		return pStaticClass;
	}


	void LuaOnAnimLodChanged(int NewAnimLod);
	void LuaInitializeWithDeviceLevel(int DeviceLevel);
	void LuaInitializeAnimation();
};


// Class Addons.BioVehicleAnimListComponent
// 0x0048 (0x0198 - 0x0150)
class UBioVehicleAnimListComponent : public UCachedAnimListComponentBase
{
public:
	class UAnimationData*                              AnimationData;                                            // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAssetsLoading;                                         // 0x0154(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	TMap<struct FName, class UAnimationAsset*>         CachedAssets;                                             // 0x0158(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimListComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleDamageComponent
// 0x0020 (0x0460 - 0x0440)
class UBioVehicleDamageComponent : public UVehicleDamageComponent
{
public:
	float                                              MaxHitByVehicleImpulseVelocity;                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHitByVehicleImpulseVelocity;                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseSelfCD;                                            // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x044C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleDamageComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleRiderAnimInstanceBase
// 0x0010 (0x0810 - 0x0800)
class UBioVehicleRiderAnimInstanceBase : public UVehicleCharacterAnimInstanceBase
{
public:
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0800(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x0805(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0806(0x0002) MISSED OFFSET
	int                                                AnimLOD;                                                  // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBioVehicleAnimInstanceBase*                 CachedOwnerBioVehicleAnimInstance;                        // 0x080C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleRiderAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleSkeletalMeshComponent
// 0x0000 (0x0C90 - 0x0C90)
class UBioVehicleSkeletalMeshComponent : public UUAESkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleSkeletalMeshComponent");
		return pStaticClass;
	}

};


// Class Addons.BlanketDanceComponent
// 0x0078 (0x01C8 - 0x0150)
class UBlanketDanceComponent : public ULuaActorComponent
{
public:
	float                                              OverlapCheckRadius;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverlapCheckInterval;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterReadyDanceWaitTime;                                  // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnThreshold;                                            // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandSpeedThreshold;                                      // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeBlanketDanceStateEvent;                           // 0x0164(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterNewDanceStateEvent;                                // 0x0170(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFaceLookAtPlayerEvent;                                  // 0x017C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FBlanketDanceData                           BlanketDanceData;                                         // 0x0188(0x0008) (Net)
	struct FRotator                                    LastLocomotionRotator;                                    // 0x0190(0x000C) (Net, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               OverlappedCharacters;                                     // 0x019C(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketDanceComponent");
		return pStaticClass;
	}


	void OnRep_BlanketDanceData();
	void OnEnterNewDanceState(TEnumAsByte<EBlanketDanceState> NewState);
	void BroadCastFaceLookAtPlayer(const struct FRotator& InTargetRotator);
};


// Class Addons.LandingCreatureDriverAnimInstance
// 0x00A0 (0x08B0 - 0x0810)
class ULandingCreatureDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	struct FName                                       LeftHandSaddleSocketName;                                 // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightHandSaddleSocketName;                                // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0820(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0824(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableNewStateMachine;                                   // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x082B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x082C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x082D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x082E(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0834(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0838(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Direction;                                                // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BodyLeanAngle;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LeftHandEffectorLocation;                                 // 0x084C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     RightHandEffectorLocation;                                // 0x0858(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              HandIkAlpha;                                              // 0x0864(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x0868(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x0869(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x086A(0x0002) MISSED OFFSET
	class UAnimSequence*                               IdleAnim;                                                 // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopLAnim;                                             // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopRAnim;                                             // 0x0874(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopLAnim;                                            // 0x0878(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopRAnim;                                            // 0x087C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0884(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x088C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0890(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x0894(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0898(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x089C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x08A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureDriverAnimInstance");
		return pStaticClass;
	}


	void OnCreatureJumped();
};


// Class Addons.BlanketDriverAnimInstance
// 0x0050 (0x0900 - 0x08B0)
class UBlanketDriverAnimInstance : public ULandingCreatureDriverAnimInstance
{
public:
	class UAnimMontage*                                LowStartFlying;                                           // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HighStartFlying;                                          // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveMontage;                                              // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABlanketVehicle*                             OwnerBlanket;                                             // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RisingInput;                                              // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    HeadDelta;                                                // 0x08C4(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	TEnumAsByte<EBlanketFlyingState>                   BlanketFlyingState;                                       // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAssetsHasCached;                                         // 0x08D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08D2(0x0002) MISSED OFFSET
	class UAnimSequence*                               SitIdleAnim;                                              // 0x08D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 LowMovementAnim;                                          // 0x08D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HighMovementAnim;                                         // 0x08DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StartRisingAnim;                                          // 0x08E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               RisingLoopAnim;                                           // 0x08E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               EndRisingAnim;                                            // 0x08E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StartFallingAnim;                                         // 0x08EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               FallingLoopAnim;                                          // 0x08F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               EndFallingAnim;                                           // 0x08F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketDriverAnimInstance");
		return pStaticClass;
	}


	void OnBeginFlying(bool bIsLowFlying);
	void OnBeginDiving(bool bStart);
};


// Class Addons.BlanketMovementComponent
// 0x00D0 (0x0B70 - 0x0AA0)
class UBlanketMovementComponent : public UBioBaseFlyComponent
{
public:
	class ABlanketVehicle*                             BlanketVehicle;                                           // 0x0AA0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFlyBioVehicleFlyingConfig                  FlyingConfigHigh;                                         // 0x0AA4(0x0028) (Edit, BlueprintVisible)
	class UCurveVector*                                RisingCurve;                                              // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                FallingCurve;                                             // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             LowFlyingAgainsetChannels;                                // 0x0AD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreMovePlatformHeight;                                // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitAgainstPlatformHeight;                              // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AE2(0x0002) MISSED OFFSET
	float                                              AgainstPlatformMinHeight;                                 // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgainstPlatformMaxHeight;                                 // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ServerAgainstPlatformMaxHeightScale;                      // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreTraceNum;                                           // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRisingTime;                                            // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingTime;                                           // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveSpeed;                                             // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveTime;                                              // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DivingCurve;                                              // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenZSlidingSurface;                                     // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B09(0x0003) MISSED OFFSET
	float                                              ZSlidingSurfaceImpactValue;                               // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustMinHeightInputScale;                                // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustMaxHeightInputScale;                                // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustMaxHeightAginstMoveableScale;                       // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustMinHeightAginstMoveableScale;                       // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoLandingMinHeight;                                     // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoLandingWhenNoFuel;                             // 0x0B24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B25(0x0003) MISSED OFFSET
	float                                              SwitchCustommodeIgnoreTime;                               // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerCheckMovementmodeProxy;                             // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DiveStartDirection;                                       // 0x0B30(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DiveDirection;                                            // 0x0B3C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0B48(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketMovementComponent");
		return pStaticClass;
	}


	void StartFlyingDive();
	void SetServerDiveDirection(const struct FVector& ClientDivDirection);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	bool IsRisingToHigh();
	bool IsLowFlying();
	bool IsHighFlying();
	bool IsDroppingToLow();
	bool IsDiving();
	bool IsCurveMoving();
	bool IsAutoLanding();
	struct FFlyBioVehicleFlyingConfig GetFlyingConfig();
	EBlankVehicleBaseMoveMode GetBlanketMoveState();
	void EndFlyingDive();
	void DealWithCustomAction(float DeltaTime);
	bool CheckVehicleCanSwitchMoveMode(bool bRiseToHigh);
	bool CheckCanStartFlyingDive();
	void CalculateDivingVelocity(float DeltaTime);
};


// Class Addons.BlanketPassengerAnimInstance
// 0x0040 (0x0940 - 0x0900)
class UBlanketPassengerAnimInstance : public UBlanketDriverAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0900(0x0008) MISSED OFFSET
	struct FRotator                                    OwnerAimRotation;                                         // 0x0908(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HeightOffset;                                             // 0x0914(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bIsHoldingGrenade;                                        // 0x0920(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              HoldGrenadeAimPerSpineAlpha;                              // 0x0924(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               AimAnim;                                                  // 0x0928(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               AimAddAnim;                                               // 0x092C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               NearDeathAnim;                                            // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HoldGrenadeAnim;                                          // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAimOffsetBlendSpace*                        HoldGrenadeAimOffsetBS;                                   // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x093C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.BlanketVehicle
// 0x01D0 (0x16D0 - 0x1500)
class ABlanketVehicle : public ABioFlyVehicleBase
{
public:
	class UBlanketMovementComponent*                   BlanketMovementComponent;                                 // 0x1500(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBlanketDanceComponent*                      BlanketDanceComponent;                                    // 0x1504(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RiseTraceDist;                                            // 0x1508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownTraceDist;                                            // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiseTraceAngle;                                           // 0x1510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownTraceAngle;                                           // 0x1514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FuelConsumeCurve;                                         // 0x1518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFuelConsumeRate;                                   // 0x151C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoStorage;                                             // 0x1520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1521(0x0003) MISSED OFFSET
	float                                              DivingCoolDown;                                           // 0x1524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassengerApplyCameraData;                                // 0x1528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1529(0x0003) MISSED OFFSET
	struct FCameraOffsetData                           DiveCameraOffset;                                         // 0x152C(0x002C) (Edit, BlueprintVisible)
	struct FCameraOffsetData                           SwitchModeCameraOffset;                                   // 0x1558(0x002C) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnBlanketBeginFlying;                                     // 0x1584(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlanketSwitchCheckFailedEvent;                          // 0x1590(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x159C(0x0008) MISSED OFFSET
	bool                                               bBlanketDiveInCD;                                         // 0x15A4(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x15A5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBlanketVehicleDive;                                     // 0x15A8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlanketSwitchMoveState;                                 // 0x15B4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlanketAutoLanding;                                     // 0x15C0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x14];                                      // 0x15CC(0x0014) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x15CC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.BlanketVehicle.MovingFastParticle
	unsigned char                                      UnknownData06[0x28];                                      // 0x1608(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.BlanketVehicle.MovingSlowParticle
	struct FName                                       MovingFastParticleAttachName;                             // 0x1630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MovingSlowParticleAttachName;                             // 0x1638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveFastMovingParticleSpeedThreshold;                   // 0x1640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveSlowMovingParticleSpeedThreshold;                   // 0x1644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedLastFrame;                                           // 0x1648(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    CachedFastMoveParticleComponent;                          // 0x164C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CachedSlowMoveParticleComponent;                          // 0x1650(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                ActiveOutlineDeviceLevel;                                 // 0x1654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_RiseToHigh;                                           // 0x1658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_DropToLow;                                            // 0x165C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BlanketDive;                                          // 0x1660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSwitchSfxVelocity;                                 // 0x1664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSTExtraVehicleSfxLoop                      BlanketSwitchSfxLoop;                                     // 0x1668(0x005C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0xC];                                       // 0x16C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketVehicle");
		return pStaticClass;
	}


	void TryVehicleDive(bool bStart);
	void TrySwitchFlyingHeightMode();
	void OnRep_BlanketDiveCDChanged(bool bPrevState);
	void HandleDeviceLevel(int DeviceLevel);
	float GetConsumeFuelRate();
	void EnableSwitchModeCameraModifier(bool bEnable);
	void EnableDiveCameraModifier(bool bEnable);
	void DoSwitchFlyingHeightMode(bool bRiseToHigh);
	void DestroyAllCachedParticleEffect();
	bool CanUpdateMovementInput();
	bool CanConsumeFuel();
	bool CanBlanketSwitchMoveMode(bool bRiseToHigh);
	bool CanBlanketDive();
	void CallServerSwitch(bool bRiseToHigh);
};


// Class Addons.LandingCreatureAnimInstance
// 0x00C0 (0x0460 - 0x03A0)
class ULandingCreatureAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	float                                              DirectionLerpSpeed;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedLerpSpeed;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockedSpeed;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunStopSpeedThreshold;                                    // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegIKAlphaLerpSpeed;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABioVehicleBase*                             OwnerCreature;                                            // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLandingCreatureJump;                                    // 0x03B8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ThrottleInput;                                            // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x03CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x03CE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x03CF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldUseExtraDeadAnim;                                  // 0x03D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LegIKAlpha;                                               // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x03F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	struct FVector                                     PredictedStopPoint;                                       // 0x03F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DistanceFromStopPoint;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               ExtraDeathAnim;                                           // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x043C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureAnimInstance");
		return pStaticClass;
	}


	void SetJump();
	void ResetStop();
	void ResetJump();
	void ResetDoRandomIdle();
	void DoRandomIdle(int Index);
};


// Class Addons.BlanketVehicleAnimInstance
// 0x00B0 (0x0510 - 0x0460)
class UBlanketVehicleAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              LookAtTurnLerpSpeed;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyBodyLeanSpeedRange;                                    // 0x0464(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyMaxTurnLeanAngle;                                      // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRiseLeanAngle;                                         // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiseLeanLerpSpeed;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnLeanLerpSpeed;                                        // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LowStartFlying;                                           // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HighStartFlying;                                          // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurnLeft;                                                 // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TurnRight;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveMontage;                                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BodyLeanAngle;                                            // 0x0494(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	TEnumAsByte<EBlanketFlyingState>                   BlanketFlyingState;                                       // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      DanceSourceSkeletalMesh;                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ASTExtraBaseCharacter*                       LookAtPlayer;                                             // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanDance;                                                // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EBlanketDanceState>                    BlanketDanceState;                                        // 0x04AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04AE(0x0002) MISSED OFFSET
	struct FRotator                                    LookAtYawDelta;                                           // 0x04B0(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bAssetsHasCached;                                         // 0x04BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	class UAnimSequence*                               StandIdleAnim;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StandAnim;                                                // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               LayAnim;                                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               RecoverAnim;                                              // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 LowMovementAnim;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HighMovementAnim;                                         // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StartRisingAnim;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               RisingLoopAnim;                                           // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               EndRisingAnim;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StartFallingAnim;                                         // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               FallingLoopAnim;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               EndFallingAnim;                                           // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               StandRandomIdleMontage;                                   // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               LocomotionRandomIdleMontage;                              // 0x04F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABlanketVehicle*                             OwnerBlanket;                                             // 0x04F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x04FC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BlanketVehicleAnimInstance");
		return pStaticClass;
	}


	void Turn(const struct FRotator& TargetRotator);
	void OnOwnerBlanketChangeDanceState(const struct FBlanketDanceData& InBlanketData);
	void OnBeginFlying(bool bIsLowFlying);
	void OnBeginDiving(bool bStart);
};


// Class Addons.CameraModifier_MechaCombineSmooth
// 0x0040 (0x0070 - 0x0030)
class UCameraModifier_MechaCombineSmooth : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.CameraModifier_MechaCombineSmooth");
		return pStaticClass;
	}


	static class UCameraModifier_MechaCombineSmooth* ActiveMechaSmoothModifier(class ASTExtraPlayerCharacter* OwnerPlayer, float LerpTime);
};


// Class Addons.DancerZombieAnimInstance
// 0x0020 (0x04F0 - 0x04D0)
class UDancerZombieAnimInstance : public UMonsterAnimInstanceBase
{
public:
	TEnumAsByte<EDancingState>                         DancingState;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	class UAnimSequence*                               DanceMoveStartAnim;                                       // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveLoopAnim;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveEndAnim;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DancingAnim;                                              // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DancerZombieAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.DinosaurMonsterAnimInstanceBase
// 0x0000 (0x04D0 - 0x04D0)
class UDinosaurMonsterAnimInstanceBase : public USTExtraMonsterAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DinosaurMonsterAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.DistanceMatchingComponent
// 0x0030 (0x00F8 - 0x00C8)
class UDistanceMatchingComponent : public UActorComponent
{
public:
	float                                              SpeedThreshold;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepUpOffset;                                            // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepDownOffset;                                          // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PredictedLocation;                                        // 0x00D4(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDistanceMatchSuccess;                                   // 0x00E0(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldOnlyDistanceMatchingOnAutonomousProxy;             // 0x00EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	class UBioVehicleMovementComponent*                BioVehicleMovement;                                       // 0x00F0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x00F4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingComponent");
		return pStaticClass;
	}


	void ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
	bool PredictStopLocation(struct FVector* OutLocation);
	void OnEndAccelerating();
	class UAnimInstance* GetBioVehicleAnimInstance();
	void BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.DistanceMatchingInterface
// 0x0000 (0x0020 - 0x0020)
class UDistanceMatchingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingInterface");
		return pStaticClass;
	}


	void OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.EventDataCollectionKeys
// 0x0004 (0x0020 - 0x001C)
class UEventDataCollectionKeys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys");
		return pStaticClass;
	}


	static struct FString GetTimestamp();
	static struct FString GetTeammatePositions();
	static struct FString GetSelfPosition();
};


// Class Addons.EventDataCollectionValues
// 0x0004 (0x0020 - 0x001C)
class UEventDataCollectionValues : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues");
		return pStaticClass;
	}


	static struct FString GetTeammatePositionsFromContext(class AActor* ActorContext);
	static struct FString GetTeammatePositions(class ASTExtraPlayerState* STExtraPlayerState);
	static struct FString GetTeammateOpenIds(class ASTExtraPlayerState* STExtraPlayerState);
};


// Class Addons.EventDataCollectionKeys_RankingScore
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_RankingScore : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankingScore");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTreatment();
	static struct FString GetTime();
	static struct FString GetTeammates();
	static struct FString GetSurvivalTime();
	static struct FString GetRescureCount();
	static struct FString GetRescueTimes();
	static struct FString GetRank();
	static struct FString GetPlayerName();
	static struct FString GetMaxKillDistance();
	static struct FString GetMarchDistance();
	static struct FString GetMapId();
	static struct FString GetKnockouts();
	static struct FString GetKillNumInVehicle();
	static struct FString GetKillNumByGrenade();
	static struct FString GetKillNum();
	static struct FString GetKill();
	static struct FString GetInDamage();
	static struct FString GetHurt();
	static struct FString GetHeal();
	static struct FString GetHeadShotNum();
	static struct FString GetGotAirDropNum();
	static struct FString GetGameID();
	static struct FString GetDriveDistance();
	static struct FString GetDamage();
	static struct FString GetAssists();
	static struct FString GetAliveTeamNum();
	static struct FString GetAlivePlayerNum();
};


// Class Addons.EventDataCollectionKeys_GameStatus
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_GameStatus : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetWeather();
	static struct FString GetTotalPlayerCount();
	static struct FString GetToPlaneCarryLeftTime();
	static struct FString GetTeamId();
	static struct FString GetPlaneRouteStop();
	static struct FString GetPlaneRouteStart();
	static struct FString GetOpenId();
	static struct FString GetGameStatus();
	static struct FString GetAlivePlayerCount();
};


// Class Addons.EventDataCollectionValues_GameStatus_GameStatus
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_GameStatus_GameStatus : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_GameStatus_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWin();
	static struct FString GetWaitingOnLobby();
	static struct FString GetQualityPlaza();
	static struct FString GetPlaneCarrying();
	static struct FString GetParachuteOpen();
	static struct FString GetParachuteJumping();
	static struct FString GetMatching();
	static struct FString GetLanding();
	static struct FString GetFireWorking();
	static struct FString GetFighting();
	static struct FString GetCake();
};


// Class Addons.EventDataCollectionKeys_StartMatching
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_StartMatching : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_StartMatching");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTeamCount();
	static struct FString GetPlayerCountInGameMode();
	static struct FString GetMapId();
	static struct FString GetGameMode();
	static struct FString GetFullTeamCount();
};


// Class Addons.EventDataCollectionKeys_PlaneCarrying
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PlaneCarrying : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlaneCarrying");
		return pStaticClass;
	}


	static struct FString GetStartPosition();
	static struct FString GetEndPosition();
};


// Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PuttingDownCakeFireWorks : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks");
		return pStaticClass;
	}


	static struct FString GetFireWorksOpenId();
	static struct FString GetCakeOpenId();
};


// Class Addons.EventDataCollectionKeys_TakeDropItem
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TakeDropItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakeDropItem");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemInstanceId();
	static struct FString GetItemId();
	static struct FString GetItemCount();
	static struct FString GetHoldingCount();
	static struct FString GetBulletCount();
	static struct FString GetBackpackAvatarItemDurability();
};


// Class Addons.EventDataCollectionValues_TakeDropItem_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakeDropItem_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakeDropItem_Type");
		return pStaticClass;
	}


	static struct FString GetTaking();
	static struct FString GetDropping();
};


// Class Addons.EventDataCollectionKeys_UsingItem
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_UsingItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UsingItem");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetPredictLine();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemLeftCount();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionValues_UsingItem_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UsingItem_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UsingItem_Status");
		return pStaticClass;
	}


	static struct FString GetLeading();
	static struct FString GetInteruption();
	static struct FString GetCompletion();
};


// Class Addons.EventDataCollectionKeys_Climbing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Climbing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Climbing");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_Falling
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Falling : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Falling");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetStatus();
};


// Class Addons.EventDataCollectionValues_Falling_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Falling_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Type");
		return pStaticClass;
	}


	static struct FString GetStart();
	static struct FString GetEnd();
};


// Class Addons.EventDataCollectionValues_Falling_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Falling_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Status");
		return pStaticClass;
	}


	static struct FString GetNonDriving();
	static struct FString GetDriving();
};


// Class Addons.EventDataCollectionKeys_InFieldOfView
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_InFieldOfView : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_InFieldOfView");
		return pStaticClass;
	}


	static struct FString GetUniqueIdentifier();
	static struct FString GetTargetWorldLocation();
	static struct FString GetOldFieldOfViewNotificationStatus();
	static struct FString GetMyWorldLocation();
	static struct FString GetMinimalScreenLocation();
	static struct FString GetMaximumScreenLocation();
	static struct FString GetFieldOfViewTargetCategory();
	static struct FString GetCurrentFieldOfViewNotificationStatus();
};


// Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_InFieldOfView_FieldOfView : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView");
		return pStaticClass;
	}


	static struct FString GetTombBox();
	static struct FString GetTeammateVehicle();
	static struct FString GetTeammate();
	static struct FString GetSmog();
	static struct FString GetFireWorks();
	static struct FString GetEnemyVehicle();
	static struct FString GetEnemy();
	static struct FString GetCake();
	static struct FString GetBombing();
	static struct FString GetAirDroping();
};


// Class Addons.EventDataCollectionKeys_UnderEnermyAttack
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_UnderEnermyAttack : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UnderEnermyAttack");
		return pStaticClass;
	}


	static struct FString GetValue();
	static struct FString GetTargetPart();
	static struct FString GetResult2();
	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetHurtUniqueIdentifier();
	static struct FString GetHurtUid();
	static struct FString GetHurtPosture();
	static struct FString GetHurtPosition();
	static struct FString GetHurtPlayerTeamId();
	static struct FString GetHurtPlayerName();
	static struct FString GetHurtOpenId();
	static struct FString GetHurtMaxBulletCountInClip();
	static struct FString GetHurtIsInHouse();
	static struct FString GetHurtHealth();
	static struct FString GetHurtEquipId();
	static struct FString GetHurtDirection();
	static struct FString GetHurtCarForwardSpeed();
	static struct FString GetHurtBulletCountInClip();
	static struct FString GetHurtBulletCountInBarrel();
	static struct FString GetHurtAim();
	static struct FString GetDph();
	static struct FString GetDistance();
	static struct FString GetCarValue();
	static struct FString GetCarHealth();
	static struct FString GetBeHurtUniqueIdentifier();
	static struct FString GetBeHurtUid();
	static struct FString GetBeHurtPosture();
	static struct FString GetBeHurtPosition();
	static struct FString GetBeHurtPlayerTeamId();
	static struct FString GetBeHurtPlayerName();
	static struct FString GetBeHurtOpenId();
	static struct FString GetBeHurtLastHealth();
	static struct FString GetBeHurtJacketDurabilityReduction();
	static struct FString GetBeHurtJacketDurability();
	static struct FString GetBeHurtJacket();
	static struct FString GetBeHurtIsInHouse();
	static struct FString GetBeHurtHelmetDurabilityReduction();
	static struct FString GetBeHurtHelmetDurability();
	static struct FString GetBeHurtHelmet();
	static struct FString GetBeHurtHealth();
	static struct FString GetBeHurtEquipId();
	static struct FString GetBeHurtDirection();
	static struct FString GetBeHurtCarForwardSpeed();
	static struct FString GetAce();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Result : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result");
		return pStaticClass;
	}


	static struct FString GetWeedingOut();
	static struct FString GetReducingHealth();
	static struct FString GetKnockingOutReducingHealth();
	static struct FString GetKnockingOut();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Result2 : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2");
		return pStaticClass;
	}


	static struct FString GetWeedingOut2();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture");
		return pStaticClass;
	}


	static struct FString GetWalking();
	static struct FString GetTurningHead();
	static struct FString GetStanding();
	static struct FString GetRunning();
	static struct FString GetProning();
	static struct FString GetJumping();
	static struct FString GetDying();
	static struct FString GetDriving();
	static struct FString GetCrouching();
	static struct FString GetCarriging();
	static struct FString FromPawnStates(int64_t PawnStates);
	static struct FString FromPawnState(EPawnState PawnState);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_HurtPosture : public UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_HurtAim : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim");
		return pStaticClass;
	}


	static struct FString Get(class ASTExtraBaseCharacter* AttackerSTExtraBaseCharacter, class AActor* DamageCauser);
};


// Class Addons.EventDataCollectionKeys_TakingDamage
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TakingDamage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakingDamage");
		return pStaticClass;
	}


	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetLeftHealth();
};


// Class Addons.EventDataCollectionValues_TakingDamage_Reason
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakingDamage_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_TakingDamage_Result
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakingDamage_Result : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Result");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_CircleReducing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CircleReducing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleReducing");
		return pStaticClass;
	}


	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionKeys_CircleChange
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CircleChange : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleChange");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetOldCircleRadius();
	static struct FString GetOldCircleCenter();
	static struct FString GetNewCircleRadius();
	static struct FString GetNewCircleCenter();
};


// Class Addons.EventDataCollectionKeys_Rescue
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Rescue : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Rescue");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetRescuePlayerName();
	static struct FString GetRescueOpenId();
	static struct FString GetBeRescuePlayerName();
	static struct FString GetBeRescueOpenId();
};


// Class Addons.EventDataCollectionValues_Rescue_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Rescue_Status : public UEventDataCollectionValues_UsingItem_Status
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Rescue_Status");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_DrivingVehicle
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_DrivingVehicle : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_DrivingVehicle");
		return pStaticClass;
	}


	static struct FString GetVehicleId();
	static struct FString GetTire();
	static struct FString GetStatus();
	static struct FString GetSpeed();
	static struct FString GetPassengerOpenId();
	static struct FString GetOil();
	static struct FString GetDrivingType();
	static struct FString GetDriverUId();
	static struct FString GetDriverPlayerName();
	static struct FString GetDriverOpenId();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_DrivingVehicle_DrivingType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType");
		return pStaticClass;
	}


	static struct FString GetPassanger();
	static struct FString GetDriver();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_DrivingVehicle_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_Status");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_ReloadingBullet
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_ReloadingBullet : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ReloadingBullet");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_AirDrop
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_AirDrop : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirDrop");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPosition();
	static struct FString GetLandedPosition();
};


// Class Addons.EventDataCollectionValues_AirDrop_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_AirDrop_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_AirDrop_Type");
		return pStaticClass;
	}


	static struct FString GetSuper();
	static struct FString GetNormal();
};


// Class Addons.EventDataCollectionKeys_ItemAttach
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_ItemAttach : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ItemAttach");
		return pStaticClass;
	}


	static struct FString GetState();
	static struct FString GetOpenId();
	static struct FString GetItemId();
	static struct FString GetAttachmentId();
};


// Class Addons.EventDataCollectionValues_ItemAttach_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_ItemAttach_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_ItemAttach_State");
		return pStaticClass;
	}


	static struct FString GetDetaching();
	static struct FString GetAttaching();
};


// Class Addons.EventDataCollectionKeys_PlayerInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PlayerInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlayerInfo");
		return pStaticClass;
	}


	static struct FString GetSex();
	static struct FString GetPlayerName();
	static struct FString GetAvatars();
};


// Class Addons.EventDataCollectionValues_PlayerInfo_Sex
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_PlayerInfo_Sex : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PlayerInfo_Sex");
		return pStaticClass;
	}


	static struct FString GetMale();
	static struct FString GetFemale();
};


// Class Addons.EventDataCollectionKeys_MiniMapShowInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MiniMapShowInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapShowInfo");
		return pStaticClass;
	}


	static struct FString GetVoiceCheck();
	static struct FString GetPosition();
};


// Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck");
		return pStaticClass;
	}


	static struct FString GetWeapon();
	static struct FString GetTyre();
	static struct FString GetSilentWeapon();
	static struct FString GetGlass();
	static struct FString GetFootPrint();
};


// Class Addons.EventDataCollectionKeys_Following
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Following : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Following");
		return pStaticClass;
	}


	static struct FString GetFollowType();
	static struct FString GetFollowerOpenId();
	static struct FString GetFolloweeOpenId();
};


// Class Addons.EventDataCollectionValues_Following_FollowType
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Following_FollowType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Following_FollowType");
		return pStaticClass;
	}


	static struct FString GetRefuse();
	static struct FString GetInvitation();
	static struct FString GetFollowing();
	static struct FString GetCancellation();
	static struct FString GetAcception();
};


// Class Addons.EventDataCollectionKeys_MiniMapPinning
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MiniMapPinning : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapPinning");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPinPosition();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_MiniMapPinning_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_MiniMapPinning_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapPinning_Type");
		return pStaticClass;
	}


	static struct FString GetPinning();
	static struct FString GetNonPinning();
};


// Class Addons.EventDataCollectionKeys_Blocking
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Blocking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Blocking");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetBlockerOpenId();
	static struct FString GetBlockerIndex();
	static struct FString GetBlockeeOpenId();
	static struct FString GetBlockeeIndex();
};


// Class Addons.EventDataCollectionValues_Blocking_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Blocking_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Blocking_Type");
		return pStaticClass;
	}


	static struct FString GetNonBlocking();
	static struct FString GetBlocking();
};


// Class Addons.EventDataCollectionKeys_Dancing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Dancing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Dancing");
		return pStaticClass;
	}


	static struct FString GetDancerOpenId();
	static struct FString GetDanceId();
};


// Class Addons.EventDataCollectionKeys_PickingupTombBox
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PickingupTombBox : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PickingupTombBox");
		return pStaticClass;
	}


	static struct FString GetOpenId();
	static struct FString GetItemIDs();
	static struct FString GetItemId();
	static struct FString GetItemCounts();
	static struct FString GetItemCount();
	static struct FString GetBoxName();
};


// Class Addons.EventDataCollectionKeys_AirAttacking
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_AirAttacking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirAttacking");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetCenter();
};


// Class Addons.EventDataCollectionKeys_CurrentWeapon
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CurrentWeapon : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CurrentWeapon");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetItemId();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_SceneInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_SceneInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_SceneInfo");
		return pStaticClass;
	}


	static struct FString GetIsInHouse();
};


// Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_SceneInfo_IsInHouse : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse");
		return pStaticClass;
	}


	static struct FString GetYes();
	static struct FString GetNo();
};


// Class Addons.EventDataCollectionKeys_TeamInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TeamInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TeamInfo");
		return pStaticClass;
	}


	static struct FString GetTeammateUIds();
	static struct FString GetTeammateOpenIds();
	static struct FString GetTeamId();
};


// Class Addons.EventDataCollectionKeys_EnteringLeavingTeam
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_EnteringLeavingTeam : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_EnteringLeavingTeam");
		return pStaticClass;
	}


	static struct FString GetTeamId();
	static struct FString GetOpenId();
	static struct FString GetAction();
};


// Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_EnteringLeavingTeam_Action : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OnOffline
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_OnOffline : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OnOffline");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_OnOffline_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OnOffline_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OnOffline_Type");
		return pStaticClass;
	}


	static struct FString GetOnline();
	static struct FString GetOffline();
};


// Class Addons.EventDataCollectionKeys_RankList
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_RankList : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankList");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetState();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_RankList_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_RankList_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_RankList_State");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_TextMessage
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TextMessage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TextMessage");
		return pStaticClass;
	}


	static struct FString GetText();
	static struct FString GetOpenId();
	static struct FString GetItemPosition();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionKeys_PawnState
// 0x0008 (0x0028 - 0x0020)
class UEventDataCollectionKeys_PawnState : public UEventDataCollectionKeys
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PawnState");
		return pStaticClass;
	}


	static bool IsInterestedPawnStates(EPawnState PawnState);
	static struct FString GetType();
	static struct FString GetStates();
	static struct FString GetOpenId();
	static struct FString GetChangedState();
};


// Class Addons.EventDataCollectionValues_PawnState_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_PawnState_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PawnState_State");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OpenCloseDoor
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_OpenCloseDoor : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OpenCloseDoor");
		return pStaticClass;
	}


	static struct FString GetRightState();
	static struct FString GetOpenId();
	static struct FString GetLeftState();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OpenCloseDoor_RightState : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState");
		return pStaticClass;
	}


	static struct FString GetOpen();
	static struct FString GetClose();
	static struct FString GetBroken();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OpenCloseDoor_LeftState : public UEventDataCollectionValues_OpenCloseDoor_RightState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_MicSpeakerState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MicSpeakerState : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MicSpeakerState");
		return pStaticClass;
	}


	static struct FString GetSpeaker();
	static struct FString GetOpenId();
	static struct FString GetMic();
};


// Class Addons.EventDataCollectionKeys_VehicleState
// 0x0008 (0x0028 - 0x0020)
class UEventDataCollectionKeys_VehicleState : public UEventDataCollectionKeys
{
public:
	float                                              UpperboundTickReportIntervalSeconds;                      // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_VehicleState");
		return pStaticClass;
	}


	static struct FString GetWheelStates();
	static struct FString GetHp();
	static struct FString GetFuel();
	static struct FString GetForwardSpeed();
};


// Class Addons.EventReportComponent
// 0x0000 (0x00C8 - 0x00C8)
class UEventReportComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventReportComponent");
		return pStaticClass;
	}

};


// Class Addons.FloatingCapsuleVehicle
// 0x0070 (0x1520 - 0x14B0)
class AFloatingCapsuleVehicle : public ASTExtraAmphibiousVehicle
{
public:
	float                                              LiftSpeedFactor;                                          // 0x14B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoWakeUpDistance;                                       // 0x14B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMoveWheelVelocticyCheck;                            // 0x14B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x14B9(0x0003) MISSED OFFSET
	float                                              MoveWheelVelocticyCheckThreshold;                         // 0x14BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BreakOutMode;                                             // 0x14C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x14C1(0x0003) MISSED OFFSET
	float                                              BreakOutCD;                                               // 0x14C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutInterval;                                         // 0x14C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BreakOutImpulseCurve;                                     // 0x14CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutVelocity;                                  // 0x14D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutImpulse;                                   // 0x14D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCameraEffect;                                       // 0x14D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepThrottleInput;                                        // 0x14D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x14DA(0x0002) MISSED OFFSET
	float                                              BreakOutCameraFOVEffect;                                  // 0x14DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutStart;                                        // 0x14E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutEnd;                                          // 0x14E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleBreakOutStateChanged;                            // 0x14E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleWaterStateChanged;                               // 0x14F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x1500(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bInBreakOutState;                                         // 0x1504(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x1505(0x0013) MISSED OFFSET
	bool                                               TargetFloatState;                                         // 0x1518(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1519(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingCapsuleVehicle");
		return pStaticClass;
	}


	void VehicleBreakOutVelocity(const struct FVector& ApplyVelocity, bool bAddVelocity);
	void SetTargetFloatState(bool bUpState);
	void SetServerPrecentPenetratingEnabled(bool Enabled);
	void ServerBreakOut(bool bEnable);
	void OnRep_BreakOutState(bool bPrevState);
	void MoveWheelHeight(float DeltaSeconds);
	class USTExtraFloatingVehicleMovementComponentBase* GetFloatingVehicleMovement();
	float GetEnterDistanceSq();
	void DoBreakOut(bool bEnable);
	void BreakOut(bool bEnable);
	void BPTryCheckSimulatePhysics();
};


// Class Addons.FloatingMechaAnimInstance
// 0x00C0 (0x03C0 - 0x0300)
class UFloatingMechaAnimInstance : public UAnimInstance
{
public:
	struct FVector2D                                   PitchOffsetRange;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLateralAccel;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRollOffset;                                            // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanLerpSpeed;                                            // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InplaceMaxAngularSpeed;                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InplaceMaxRollOffset;                                     // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InPlaceLeanLerpSpeed;                                     // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineStartShakingTime;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AssembleDuration;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisassembleDuration;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AHoveringMecha*                              OwnerHoverVehicle;                                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UHoveringVehicleMovementComponent*           OwnerHoverMovement;                                       // 0x0330(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0334(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0340(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     LocalInputValue;                                          // 0x034C(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // 0x0358(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              PitchOffset;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RollOffset;                                               // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Speed;                                                    // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasAnyInput;                                             // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              EngineShakingAlpha;                                       // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMeshComponent*                      ParentMecha;                                              // 0x0380(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     CombineRelativeLocation;                                  // 0x0384(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    CombineRelativeRotation;                                  // 0x0390(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     UncombineRelativeLocation;                                // 0x039C(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    UncombineRelativeRotation;                                // 0x03A8(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              CombineProcess;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCombined;                                                // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EMechaWeaponState>                     HoveringMechaWeaponState;                                 // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCatchSomething;                                          // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03BB(0x0001) MISSED OFFSET
	float                                              CatchPlayRate;                                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingMechaAnimInstance");
		return pStaticClass;
	}


	void TryUncombineWithMecha();
	void TryCombineWithMecha(class USkeletalMeshComponent* SourceMechaMesh, const struct FVector& InRelativeLocation, const struct FRotator& InRelativeRotation);
	void HandleOnPlayerEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void HandleOnNitrogenAccelStateChanged(ENitrogenAccelState State, ENitrogenAccelState preState, class ASTExtraVehicleBase* Vehile);
	struct FString GetLuaDebugString();
};


// Class Addons.FloatingVehicleVehicleMovementComponent2
// 0x0030 (0x01A8 - 0x0178)
class UFloatingVehicleVehicleMovementComponent2 : public USTExtraFloatingVehicleMovementComponentBase
{
public:
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_HandBrakeAcceleration;                              // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringTorqueScale;                                      // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticStatusSpeedThreshold;                               // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClientSideCameraUpdates;                                 // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSteeringTorqueMode;                                      // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0192(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingVehicleVehicleMovementComponent2");
		return pStaticClass;
	}


	bool UpdateEnabled();
	void EnableUpdate(bool InEnable);
};


// Class Addons.FlyingArmorAnimInstance
// 0x0030 (0x1050 - 0x1020)
class UFlyingArmorAnimInstance : public USTExtraAnimInstance
{
public:
	float                                              f_FlyRightRate;                                           // 0x1020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               b_Magnet;                                                 // 0x1024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1025(0x0003) MISSED OFFSET
	class UBlendSpace*                                 C_FlyMove_Blend;                                          // 0x1028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_SuperFlyMove;                                           // 0x102C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_FlyFalling;                                             // 0x1030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_FlyFallLow;                                             // 0x1034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_FlyFallHight;                                           // 0x1038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_FlyMoveToSprint;                                        // 0x103C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_FlySprintToMove;                                        // 0x1040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Magnet_Additive;                                        // 0x1044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FlyingArmorAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.FlyingArmorMoveObj
// 0x01A8 (0x0218 - 0x0070)
class UFlyingArmorMoveObj : public USpecialMoveBaseObj
{
public:
	float                                              FlyRightMaxSpeed;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyBackMaxSpeed;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardAccel;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightAccel;                                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakingDeceleration;                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyFriction;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedMaxSpeed;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MagnetMaxSpeed;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStepUp;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              HighSpeedEnterSpeed;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedThres;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedAccAngle;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedAccel;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightAboveGround;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceGroundInterval;                                      // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyCoefficient;                                      // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BuoyancyCurveFloat;                                       // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingCoefficient;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LaunchStartSpeed;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HighSpeedLaunchStartSpeed;                                // 0x00C0(0x000C) (Edit, IsPlainOldData)
	float                                              FlyUpMaxSpeed;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyUpAccel;                                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedFlyUpMaxSpeed;                                   // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedFlyUpAccel;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuperJumpDuration;                                        // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuperJumpCD;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RingsingInputPressTime;                                   // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableFlyCameraData;                                      // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FCameraOffsetData                           FlyCameraData;                                            // 0x00EC(0x002C) (Edit)
	bool                                               EnableHighSpeedFlyCameraData;                             // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FCameraOffsetData                           HighSpeedFlyCameraData;                                   // 0x011C(0x002C) (Edit)
	bool                                               EnableMagnetCameraData;                                   // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	struct FCameraOffsetData                           MagnetCameraData;                                         // 0x014C(0x002C) (Edit)
	float                                              RotationSpeed;                                            // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RotationSpeedCurve;                                       // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighSpeedRotationSpeed;                                   // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HighSpeedRotationSpeedCurve;                              // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SwitchHighSpeedCameraLagSpeedCurve;                       // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     PowerAttrName;                                            // 0x018C(0x000C) (Edit, ZeroConstructor)
	float                                              PowerRecoverSpeed;                                        // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PowerCostSpeed;                                           // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpCostValue;                                            // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuperJumpCostValue;                                       // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrwaDebugSpeed;                                           // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFlyingArmorSuperJump;                                   // 0x01AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFlyingArmorRisingUp;                                    // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFlyingArmorPowerExhaust;                                // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RisingInput;                                              // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	EFAMActiveState                                    CurActiveState;                                           // 0x01D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	float                                              AccFlyDistance;                                           // 0x01D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccRisingTime;                                            // 0x01DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x38];                                      // 0x01E0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FlyingArmorMoveObj");
		return pStaticClass;
	}


	void SetRisingInput(float rate);
	void SetActiveState(EFAMActiveState NewState);
	void OnLeaveFly();
	void OnEnterFly();
	void LeaveFly();
	void EnterFly();
};


// Class Addons.FreeViewPawn
// 0x0018 (0x0390 - 0x0378)
class AFreeViewPawn : public APawn
{
public:
	class UPawnMovementComponent*                      MovementComponent;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComponent;                                       // 0x037C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxDistanceFromCharacter;                                 // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraPlayerController*                    ViewController;                                           // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveUpRate;                                               // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawn");
		return pStaticClass;
	}


	void UnbindPlayerInputDelegate();
	void SetController(class ASTExtraPlayerController* InController);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	struct FVector GetFreeViewOrigin();
	void BindPlayerInputDelegate();
};


// Class Addons.FreeViewPawnMovement
// 0x0010 (0x0140 - 0x0130)
class UFreeViewPawnMovement : public UPawnMovementComponent
{
public:
	float                                              MaxSpeed;                                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawnMovement");
		return pStaticClass;
	}

};


// Class Addons.HoveringVehicle
// 0x0040 (0x11C0 - 0x1180)
class AHoveringVehicle : public ASTExtraVehicleBase
{
public:
	TArray<struct FName>                               SpotSockets;                                              // 0x1180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	struct FVector                                     CenterOfMassOffset;                                       // 0x118C(0x000C) (Edit, BlueprintVisible, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDeavtivePhysByDefault : 1;                               // 0x1198(0x0001) (Edit, BlueprintVisible, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1199(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnBPCalcFinalMomentumDelegate;                            // 0x11A0(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bHoveringActive : 1;                                      // 0x11B0(0x0001) (BlueprintVisible, Net)
	unsigned char                                      bHoveringInitialized : 1;                                 // 0x11B0(0x0001)
	EHoverSimulateState                                HoverSimulateState;                                       // 0x11B1(0x0001) (ZeroConstructor, IsPlainOldData)
	EHoverSimulateState                                LastHoverSimulateState;                                   // 0x11B2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x11B3(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicle");
		return pStaticClass;
	}


	bool SetBoosting(bool bEnabled);
	void OnVehicleRefuelWhenNoFuel(float PreFuel, float Increment);
	void OnVehicleFuelRunOut(float InMaxFuel);
	void OnSkeletalMeshSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void OnSkeletalMeshAwake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);
	void OnRep_SimulateViewData();
	void OnRep_bHoveringActive(bool PreHoveringState);
	void OnDriverStateChanged(class ASTExtraPlayerCharacter* Character, bool isOn);
	void OnClientExit(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void OnClientEnter(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void OnClientChangeSeat(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType OldSeatType, ESTExtraVehicleSeatType NewSeatType);
	void InitHoveringSpots();
	void HandleVehicleHealthDestroy();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FRotator GetViewRotation();
	struct FVector GetSpotLocation(int Index);
	class UHoveringVehicleMovementComponent* GetHoveringMovement();
	float GetForwardSpeed();
	void DeactivateHoveringSimulate();
	bool CanActivateHoveringSimulate();
	float CalcFinalMomentum(class UClass* DamageTypeClass, float BaseMomentun);
	void ActivateHoveringSimulate();
};


// Class Addons.HoveringMecha
// 0x01C0 (0x1380 - 0x11C0)
class AHoveringMecha : public AHoveringVehicle
{
public:
	class UBoxComponent*                               CombineDetectBox;                                         // 0x11C0(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x11C4(0x000C) MISSED OFFSET
	struct FTransform                                  LockedRelativeTransform;                                  // 0x11D0(0x0030) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FUncombineHelper                            UncombineHelper;                                          // 0x1200(0x0040) (Edit, BlueprintVisible, Net, EditConst)
	float                                              CombineProcess;                                           // 0x1240(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)
	struct FCameraOffsetData                           CombineCameraModifier;                                    // 0x1244(0x002C) (Edit, BlueprintVisible)
	struct FCameraOffsetData                           NitrogenAccelCameraModifier;                              // 0x1270(0x002C) (Edit, BlueprintVisible)
	struct FRotator                                    ReplicatedCameraRot;                                      // 0x129C(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	bool                                               bPassengerApplyCameraData;                                // 0x12A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMechaWeaponState>                     HoveringMechaWeaponState;                                 // 0x12A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x12AA(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMechaWeaponStateChanged;                                // 0x12AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaBeCached;                                          // 0x12B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMechaSmoothAttachComponent*                 MechaCombineComponent;                                    // 0x12C4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<EMechaState, struct FMechaStateSet>           DisallowStateMap;                                         // 0x12C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EMechaState, struct FMechaStateSet>           InterruptStateMap;                                        // 0x1304(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bHideNoPhysSimulateBonesOnDS : 1;                         // 0x1340(0x0001) (Edit, BlueprintVisible, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1341(0x0003) MISSED OFFSET
	uint32_t                                           MechaStates;                                              // 0x1344(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMechaEnterState;                                        // 0x1348(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaLeaveState;                                        // 0x1354(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaInterruptState;                                    // 0x1360(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x14];                                      // 0x136C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringMecha");
		return pStaticClass;
	}


	struct FString StateToString();
	void SetWeaponState(TEnumAsByte<EMechaWeaponState> InState);
	void SetEnterVehicleDistance(float InNewEnterDistance);
	void OpenVehicleLogic();
	void OnRep_UncombineHelper(const struct FUncombineHelper& OldUncombineHelper);
	void OnRep_MechaStates(uint32_t OldStates);
	void OnRep_CombineProcess(float OldProcess);
	void OnBeCachedCPlus(class AActor* SourceCatcher);
	void LeaveState(EMechaState State);
	void InterruptState(EMechaState State, EMechaState InterruptBy);
	void InitHoveringSpots();
	bool HasState(EMechaState State);
	bool HasCombined();
	class ASTExtraBaseCharacter* GetInVehicleLocalPlayer();
	TEnumAsByte<ECombineState> GetCombineState();
	class ASTExtraVehicleBase* GetCombinedVehicle();
	class UMechaSmoothAttachComponent* GetCombineComponent();
	bool EnterState(EMechaState State);
	void EnableNitrogenAccelCameraModifier(bool bEnable, class ASTExtraPlayerCharacter* Passenger);
	void CloseVehicleLogic();
	bool AllowState(EMechaState State);
};


// Class Addons.HoveringVehicleMovementComponent
// 0x0310 (0x0440 - 0x0130)
class UHoveringVehicleMovementComponent : public UPawnMovementComponent
{
public:
	float                                              MaxAcceleration;                                          // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedKMH;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceGroundLength;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringCoefficient;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpringCurveFloat;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingCoefficient;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverSimulatePeriod;                                      // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SideMoveThrottleFactor;                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyHoverDataUpdatePeriod;                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSetHoverDeltaZeroWhenBadSituation : 1;                   // 0x0158(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              SimpleHoverSimulatePeriod;                                // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverDistanceWhenNoDriver;                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleHoverForceRate;                                     // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaticHoveringSectionFactor;                              // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoPowerHoveringSectionFactor;                             // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleHovertInterpSpeed;                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReviewDistToLandFreq;                                     // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCorrectWhenTurnOver : 1;                             // 0x0178(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseSimpleHoverWhenBadRotation : 1;                       // 0x0178(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              MaxDurationAutoFix;                                       // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoAdaptCoolDownAfterHit;                                // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x0184(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RollRange;                                                // 0x018C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    AcceptableRotationAfterAutoFix;                           // 0x0194(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AutoAdaptInterpSpeed;                                     // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverAngleOfZAxis;                                     // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverLastDurationBeforeFix;                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverSpeedThreshold;                                   // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNitrogenAccelBeforeHit : 1;                              // 0x01B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	float                                              NitrogenAccelOMaxSpeedKMH;                                // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     NitrogenAccelOverlapChannel;                              // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	float                                              MinSpeedKMHForNitrogenAccel;                              // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinCosineFromForward;                                     // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDifferenceBetweenHoverSpots;                           // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDifferenceBetweenHoverSpotsOnDS;                       // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateNitrogenAccelPeriod;                                // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NitrogenAccelOBBScale;                                    // 0x01D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NitrogenAccelSideOverlapBoxExtent;                        // 0x01DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PassiveAccelOverlapBoxDSExtend;                           // 0x01E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaxAllowedDiffDistanceFromClient;                         // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NitrogenAccelLocOffset;                                   // 0x01F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NitrogenAccelSideOverlapOffset;                           // 0x0204(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              NitrogenAccelPredictDuration;                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NitrogenAccelPredictMeshHitDuration;                      // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNitrogenAccelForceCorrectVelocity : 1;                   // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              Duration_NitrogenAccelBounce;                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve_NitrogenAccelBounce;                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NitrogenAccelBounceDirectionRotateAngleWhenSteeringInput; // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelCoolDownReduce_Bounce;                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_SideNitrogenAccel;                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                CurveVector_SideAccelerate;                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelCoolDownReduce_SideAccel;                            // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NitrogenAccelCoolDown_PassiveAccel;                       // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NitrogenAccelCoolDown;                                    // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve_NitrogenAccelerate;                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_NitrogenAccel;                                   // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_NitrogenAccelReduceOnDS;                         // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_NitrogenAccelForceExecBeforePassiveAccel;        // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelCoolDownReduce_Drifting;                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drifting_SpeedThreshold;                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drifting_DurationLimit;                                   // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drifting_YawDeltaThreshold;                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drifting_CoolDownDuration;                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCorrectClientNitrogenStateAfterReconnect : 1;            // 0x0264(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFollowCamera : 1;                                        // 0x0264(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	float                                              UpdateCameraRotDuration;                                  // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowCameraAcceptableRotationYaw;                        // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve_FollowCamTorque;                                    // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bConstantFollowCamera : 1;                                // 0x0274(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	float                                              FollowCameraConstantInterpSpeed;                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAutoAdaptLinearVelocityDirToForward : 1;                 // 0x027C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	float                                              LinearVelocityFixFactor;                                  // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoverOptimizeWeakFeedback : 1;                           // 0x0284(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	int                                                HoverOptimizeFrameCountPredict;                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverOptimizeInterpSpeed;                                 // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoverDeltaUseInterp : 1;                                 // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              HoverDeltaInterpSpeed;                                    // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoverSimulateUseSphereSweep : 1;                         // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              SphereSweepSimulateRadius;                                // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPostOptimizeGatherHoverDeltas : 1;                       // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData11[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              PostOptimizeGatherHoverDeltaFactor;                       // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoverSpotPenetrationProtect : 1;                         // 0x02A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	float                                              ExtendRangeFromPhysCenterToSpot;                          // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotPenetrationSphereSweepRadius;                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableDiffDotImpactNormal;                            // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverSpotUnderGroundProtectExtraForce;                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyDampingWhenBadRotation : 1;                         // 0x02BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData13[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CurveFloat_ResistanceWhenAutoFix;                         // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyDampingWhenHoverDeltaBigDiff : 1;                   // 0x02C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData14[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CurveFloat_ResistanceWhenHoverBigDiff;                    // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoverSimulationValidSpaceProtect : 1;                    // 0x02CC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData15[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	float                                              HoverSpaceProtectDistToLandThreshold;                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HoverSimulationValidSpaceBoxScale;                        // 0x02D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bContinuousHitProtectionDrag : 1;                         // 0x02E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData16[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              ContinuousHitInterval;                                    // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ContinuousHitHorizonDragForce;                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReplicateHoverSimData : 1;                               // 0x02EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData17[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	float                                              HoverSimDataRepFreq;                                      // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FReplicatedHoverSimData>             ReplicatedHoverSimData;                                   // 0x02F4(0x000C) (Net, ZeroConstructor)
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_AutoAdaptRotTorque;                                 // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             OnCheckNitrogenAccelCondition;                            // 0x0310(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnNitrogenAccelStateChanged;                              // 0x0320(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHoverVehicleTurnOverStateChanged;                       // 0x032C(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHoverVehicleDriftingDelegate;                           // 0x0338(0x000C) (ZeroConstructor, InstancedReference)
	TArray<struct FHoveringSimulateData>               HoveringSimulateData;                                     // 0x0344(0x000C) (ZeroConstructor)
	struct FHoveringBodyData                           BodyHoverData;                                            // 0x0350(0x001C)
	float                                              STThrottleInput;                                          // 0x036C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              STSteeringInput;                                          // 0x0370(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReplicatedCameraRot;                                      // 0x0374(0x000C) (Net, IsPlainOldData)
	float                                              NitrogenAccelTime_Cooldown;                               // 0x0380(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRot;                                                // 0x038C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FNitrogenAccelData                          NitrogenAccelData;                                        // 0x0398(0x001C)
	ENitrogenAccelState                                NitrogenAccelState;                                       // 0x03B4(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	ENitrogenAccelState                                LastNitrogenAccelState;                                   // 0x03B5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEntirelyInAir : 1;                                       // 0x03B6(0x0001)
	unsigned char                                      bEntirelyTurnOver : 1;                                    // 0x03B6(0x0001)
	unsigned char                                      UnknownData18[0x1];                                       // 0x03B7(0x0001) MISSED OFFSET
	float                                              Acceleration;                                             // 0x03B8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationResistance;                                   // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBadRotationAutoAdaptFlag : 1;                            // 0x03C0(0x0001)
	unsigned char                                      UnknownData19[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              RotationAutoAdaptCoolDown;                                // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceUseSimpleHover : 1;                                 // 0x03C8(0x0001)
	unsigned char                                      bHoverSimulationSpaceStatus : 1;                          // 0x03C8(0x0001)
	unsigned char                                      bShouldUpdateDitToLand : 1;                               // 0x03C8(0x0001)
	unsigned char                                      UnknownData20[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                CacheFollowCameraSide;                                    // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x70];                                      // 0x03D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicleMovementComponent");
		return pStaticClass;
	}


	void UpdateSimulate(float DeltaTime);
	void UpdateSimpleHover(float DeltaTime);
	void UpdateRotationAutoAdapt(float DeltaTime);
	void UpdatePreCheck(float DeltaTime);
	void UpdateNitrogenAccel(float DeltaTime);
	void UpdateMovement2(float DeltaTime);
	void UpdateMovement(float DeltaTime);
	void UpdateInput(float DeltaTime);
	void UpdateHoverSimulation_WeakFeedback(float DeltaTime);
	void UpdateHoverSimulation(float DeltaTime);
	void UpdateDrifting(float DeltaTime);
	void UpdateDistToLand(float DeltaTime);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void SetNitrogenAccelState(ENitrogenAccelState NewState);
	void ServerUpdatePassiveAccel(const struct FNitrogenAccelData& NAData);
	void ServerUpdateInput(float InSteeringInput, float InThrottleInput, const struct FRotator& InCameraRot);
	void ServerNitrogenAccel();
	void Reset();
	void OnRep_NitrogenAccelState(ENitrogenAccelState PrevState);
	void OnRecoverOnServer();
	bool IsShouldDsControl();
	bool IsInNitrogenAccel();
	bool IsHasPower();
	void Internal_DoNitrogenAccel();
	void HandleActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ForceCorrectClientNitroAccelState(ENitrogenAccelState NewState, float CD);
	void ClientUpdateDistToLand(const struct FVector& TargetLoc);
	bool ClientTryNitrogenAccel();
	void ClientAddForceAfterContinuousHit(const struct FVector& Force);
	bool CanPassiveNitrogenAccel(struct FString* FailedCode);
	bool CalculateHoverSimulation(const struct FVector& SpotWorldLoc, const struct FVector& OwnerLoc, float DeltaTime, struct FHoveringSimulateData* SimData);
};


// Class Addons.HoverVehicleSpringArmComponent
// 0x0000 (0x0520 - 0x0520)
class UHoverVehicleSpringArmComponent : public UVehicleSpringArmComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoverVehicleSpringArmComponent");
		return pStaticClass;
	}

};


// Class Addons.JavelinAnimInstance
// 0x0000 (0x07E0 - 0x07E0)
class UJavelinAnimInstance : public UCharacterAnimStateBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.JavelinAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.LadderActor
// 0x0060 (0x0420 - 0x03C0)
class ALadderActor : public ALuaActor
{
public:
	class USceneComponent*                             RootScene;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TopScene;                                                 // 0x03C4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BottomScene;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LadderWidth;                                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x03D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x03E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x03F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                upCurve;                                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderActor");
		return pStaticClass;
	}

};


// Class Addons.LadderAnimInstance
// 0x0030 (0x0810 - 0x07E0)
class ULadderAnimInstance : public UCharacterAnimStateBase
{
public:
	TEnumAsByte<ELadderMoveType>                       OldMoveType;                                              // 0x07E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E1(0x0003) MISSED OFFSET
	int                                                LadderStep;                                               // 0x07E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BottomEnterAnim;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           BottomExitAnim;                                           // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopEnterAnim;                                             // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopExitAnim;                                              // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpLeftToRightAnim;                                        // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpRightToLeftAnim;                                        // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownLeftToRightAnim;                                      // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownRightToLeftAnim;                                      // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0808(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.LadderMovementComponent
// 0x0100 (0x0250 - 0x0150)
class ULadderMovementComponent : public ULuaActorComponent
{
public:
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x0150(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0154(0x0024) MISSED OFFSET
	float                                              LadderWidth;                                              // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x017C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x0180(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x0184(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x01A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x01B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                upCurve;                                                  // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LadderTopExitPosition;                                    // 0x01CC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LadderBottomExitPosition;                                 // 0x01D8(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bLocalOnLadder;                                           // 0x01E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	struct FLadderMoveData                             OldLadderMoveState;                                       // 0x01E8(0x000C) (BlueprintVisible)
	struct FLadderMoveData                             LadderMoveState;                                          // 0x01F4(0x000C) (BlueprintVisible)
	struct FLadderMoveData                             NetLadderMoveState;                                       // 0x0200(0x000C) (BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0xC];                                       // 0x020C(0x000C) MISSED OFFSET
	int                                                SimActionNum;                                             // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreClientError;                                       // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	float                                              ServerLocDiff;                                            // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeginPlayRequest;                                        // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickHasSendRequest;                                      // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	class ALadderActor*                                OverlappedLadder;                                         // 0x0228(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BottomEnterAnim;                                          // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               BottomExitAnim;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopEnterAnim;                                             // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopExitAnim;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpLeftToRightAnim;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpRightToLeftAnim;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownLeftToRightAnim;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownRightToLeftAnim;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderMovementComponent");
		return pStaticClass;
	}


	void StartPhaseMoving();
	void ShowDebugInformation(float DeltaTime);
	void ServerMove(const struct FLadderMoveData& LadderMoveData, int MoveDirection, int EnterOrLeave);
	bool ServerCheckClientError(const struct FLadderMoveData& LadderMoveData);
	void RequestCurrentLadderState();
	void ReceiveExitLadder();
	void ReceiveEnterLadder();
	void PushBackSimAction(const struct FLadderMoveData& InData);
	void PopFirstSimAction();
	void OnRep_NetLadderMoveState();
	void OnCharacterExitLadder();
	void OnCharacterEnterLadder(class ALadderActor* Ladder);
	void LadderMoveInput(float rate);
	bool IsLeaving();
	bool IsEntering();
	void InitLadderParams(class ALadderActor* Ladder);
	void HandleJump();
	void HandleInput();
	struct FString GetStateName();
	struct FLadderMoveData GetNextMoveData(const struct FLadderMoveData& Cur, int8_t movedir);
	class UAnimSequence* GetLadderAnimSequence();
	void GatherCurrentLadderState();
	bool ExitLadder();
	bool EnterLadder(class ALadderActor* Ladder, bool bTop);
	void EndPhaseMoving();
	void EnableCharacterMovement(bool bEnable);
	void ClimbUpOneStepInternal();
	void ClimbDownOneStepInternal();
	bool CheckValidPositionOnLadder(class AActor* Ladder, int StepNum);
	bool CheckValidPosition(const struct FVector& Pos);
	void CheckEnterOrExitLadder();
	void CheckAutoEnterLadder();
	void CatchUp(const struct FLadderMoveData& LadderMoveData);
	struct FVector CalcLocationOnLadder(class AActor* Ladder, int StepNum);
	void BuildActionQueue(const struct FLadderMoveData& Target);
	void BindPlayerMoveInput(bool bEnable);
	void AdjustClient(const struct FLadderMoveData& LadderMoveData);
};


// Class Addons.MechaAimCircle
// 0x0040 (0x0400 - 0x03C0)
class AMechaAimCircle : public ALuaActor
{
public:
	class UMaterialInstance*                           DecalMaterialInstance;                                    // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecalSize;                                                // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalLocationOffset;                                      // 0x03C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    DecalRotatorOffset;                                       // 0x03D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UCustomDecalComponent*                       DecalComponent;                                           // 0x03E0(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AIdeaDecalManager*                           IdeaDecalManager;                                         // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackBoardLocationKey;                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackBoardScaleKey;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlackBoardSkillID;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOwnController;                                       // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaAimCircle");
		return pStaticClass;
	}


	void RefreshActorLocationFromBlackBoard();
	static bool HasCharacterInCircle(class UObject* ContextObject, const struct FVector& Center, float Raius, float Height);
	float GetBlackBoardScale();
	class UCustomDecalComponent* CreateNewDecalComponent(const struct FName& InName, float InSize, class UMaterialInstance* InMaterial, float InExistsTime);
};


// Class Addons.MechaAnimInstanceBase
// 0x0340 (0x07A0 - 0x0460)
class UMechaAnimInstanceBase : public ULandingCreatureAnimInstance
{
public:
	float                                              MaxLockDistance;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpperBodyModifyYawTurnThreshold;                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EMechaState>                                SkipLockFootState;                                        // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FFootLockData                               LeftFootLockData;                                         // 0x0478(0x0038) (Edit, BlueprintVisible)
	struct FFootLockData                               RightFootLockData;                                        // 0x04B0(0x0038) (Edit, BlueprintVisible)
	class UCurveFloat*                                 MechaStanceCurve;                                         // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRunSpeed;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSprintSpeed;                                           // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionThreshold;                                       // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeedThreshold;                                       // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ViewLerpSpeed;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedControlRotationLerpSpeed;                        // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InPlaceTurnYawThreshold;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InPlaceTurnLerpSpeed;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InPlaceTurnWaitTime;                                      // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RootYawLerpSpeed;                                         // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RootYawLerpSpeedCurve;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RootYawCurve_FB;                                          // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RootYawCurve_LR;                                          // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VelocityYawCurve;                                         // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnLeftDistanceThreshold;                                // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRightDistanceThreshold;                               // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InPlaceTurnAnimRate;                                      // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingMaxRoll;                                            // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingMaxPitch;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingRotLerpSpeed;                                       // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterFlyingWaitTime;                                      // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissileReloadDuration;                                    // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StopLeftMontage;                                          // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StopRightMontage;                                         // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombineMontage;                                           // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                UncombineMontage;                                         // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HitFMontage;                                              // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HitBMontage;                                              // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HitLMontage;                                              // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HitRMontage;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableTerrainAdaptingLodLevel;                            // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableFootLockLodLevel;                                   // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGunAdsSmoothOpt;                                   // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               MechaTurnLoopAudio;                                       // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MechaTurnStopAudio;                                       // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayMechaTurnAudioThreshold;                              // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMechaVehicle*                               OwnerMecha;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsLaunching;                                             // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsAirGliding;                                            // 0x0585(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bFlyingToFalling;                                         // 0x0586(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bPrepareToFlying;                                         // 0x0587(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DistanceToLand;                                           // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LocalInputValue;                                          // 0x058C(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    FlyingBodyRotOffset;                                      // 0x0598(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bHasAnyInput;                                             // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EMoveDirection>                        MechaMoveDirection;                                       // 0x05A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05A6(0x0002) MISSED OFFSET
	float                                              ViewDelta;                                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    ModifyUpperBodyDelta;                                     // 0x05AC(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x05B8(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // 0x05C4(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bMove;                                                    // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bUseRightIdle;                                            // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanLockFoot;                                             // 0x05D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x05D3(0x0001) MISSED OFFSET
	float                                              MechaHorizontalSpeed;                                     // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MechaVerticalSpeed;                                       // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxFallingSpeed;                                          // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     MechaVelocity;                                            // 0x05E0(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              MechaStance;                                              // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TerrainAdaptingAlpha;                                     // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInPlaceTurning;                                          // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	float                                              VelocityYawDelta;                                         // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MoveYawDelta;                                             // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootMoveYaw_FB;                                           // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootMoveYaw_FL;                                           // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootMoveYaw_BL;                                           // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootMoveYaw_FR;                                           // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootMoveYaw_BR;                                           // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    RootYawModifyRotator;                                     // 0x0614(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              FeetPositionCurveValue;                                   // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TerrainAdaptingCurveValue;                                // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Sprint_F_CurveValue;                           // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_F_CurveValue;                              // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_FL_CurveValue;                             // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_FR_CurveValue;                             // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_B_CurveValue;                              // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_BL_CurveValue;                             // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Run_BR_CurveValue;                             // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_F_CurveValue;                             // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_FL_CurveValue;                            // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_FR_CurveValue;                            // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_B_CurveValue;                             // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_BL_CurveValue;                            // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Locomotion_Walk_BR_CurveValue;                            // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCombined;                                                // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x065D(0x0003) MISSED OFFSET
	float                                              CombineAlpha;                                             // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EMechaWeaponState>                     MechaWeaponState;                                         // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bMissileAiming;                                           // 0x0665(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               MeleeSlotActive;                                          // 0x0666(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0667(0x0001) MISSED OFFSET
	float                                              HideMissileAlpha;                                         // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShowMissile;                                             // 0x066C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCatchSomething;                                          // 0x066D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x066E(0x0002) MISSED OFFSET
	float                                              CatchPlayRate;                                            // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    CatchAimOffset;                                           // 0x0674(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bLocalPlayerGunAds;                                       // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanLuaLockFoot;                                          // 0x0681(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0682(0x0002) MISSED OFFSET
	class UAnimSequence*                               IdlePoseAnim_Alt;                                         // 0x0684(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CloseAnim_Alt;                                            // 0x0688(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ActiveAnim_Alt;                                           // 0x068C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ClosePoseAnim_Alt;                                        // 0x0690(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               MissileAttackStartAnim_Alt;                               // 0x0694(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               MissileAttackIdleAnim_Alt;                                // 0x0698(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               MissileAttackEndAnim_Alt;                                 // 0x069C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DieGroundAnim_Alt;                                        // 0x06A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DieAirAnim_Alt;                                           // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DieAirFallAnim_Alt;                                       // 0x06A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DieAirHitGroundAnim_Alt;                                  // 0x06AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim_Alt;                                        // 0x06B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim_Alt;                                          // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkFAnim;                                                // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkLAnim;                                                // 0x06BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkRAnim;                                                // 0x06C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkBAnim;                                                // 0x06C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunFAnim;                                                 // 0x06C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLAnim;                                                 // 0x06CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunRAnim;                                                 // 0x06D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunBAnim;                                                 // 0x06D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SprintAnim;                                               // 0x06D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveFAnim;                                                // 0x06DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveLAnim;                                                // 0x06E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveRAnim;                                                // 0x06E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveBAnim;                                                // 0x06E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkFAnim_Combine;                                        // 0x06EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkFLAnim_Combine;                                       // 0x06F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkFRAnim_Combine;                                       // 0x06F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkBAnim_Combine;                                        // 0x06F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkBLAnim_Combine;                                       // 0x06FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkBRAnim_Combine;                                       // 0x0700(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunFAnim_Combine;                                         // 0x0704(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunFLAnim_Combine;                                        // 0x0708(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunFRAnim_Combine;                                        // 0x070C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunBAnim_Combine;                                         // 0x0710(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunBLAnim_Combine;                                        // 0x0714(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunBRAnim_Combine;                                        // 0x0718(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SprintAnim_Combine;                                       // 0x071C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim_Combine;                                         // 0x0720(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleRightAnim_Combine;                                    // 0x0724(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveFAnim_Combine;                                        // 0x0728(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveFLAnim_Combine;                                       // 0x072C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveFRAnim_Combine;                                       // 0x0730(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveBAnim_Combine;                                        // 0x0734(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveBLAnim_Combine;                                       // 0x0738(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               MoveBRAnim_Combine;                                       // 0x073C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 FlyingAnim_Combine;                                       // 0x0740(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingToFlyFallAnim_Combine;                              // 0x0744(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyFallAnim_Combine;                                      // 0x0748(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TransformStartAnim_Combine;                               // 0x074C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TransformLoopAnim_Combine;                                // 0x0750(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TransformEndAnim_Combine;                                 // 0x0754(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CatchStartAnim_Combine;                                   // 0x0758(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CatchRightLoopAnim_Combine;                               // 0x075C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CatchLeftLoopAnim_Combine;                                // 0x0760(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               CatchEndAnim_Combine;                                     // 0x0764(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x38];                                      // 0x0768(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaAnimInstanceBase");
		return pStaticClass;
	}


	void TryUncombineWithMecha();
	void TryCombineWithMecha(bool bShouldPlayAnimation);
	void StopMechaMontage(const struct FName& InGroupName, float BlendOutTime);
	void ResetMechaGlidingToFalling();
	void PlayMechaMontage(class UAnimMontage* Montage, float PlayRate);
	void OnMechaStartMoving();
	void OnMechaStartFire();
	void OnMechaReloadFinish();
	void OnMechaHit(const struct FVector& HitDir, bool bHugeHit);
	void MechaEnterFlying();
	void HandleOnMechaGlidingToFalling();
	void HandleOnMechaAirGliding(bool bAirGliding);
	struct FString GetLuaDebugString();
	TArray<struct FString> GetActivedMontageNames();
	bool CanLockFoot();
};


// Class Addons.MechaDamageComponent
// 0x00D0 (0x0530 - 0x0460)
class UMechaDamageComponent : public UBioVehicleDamageComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	TMap<class ASTExtraBaseCharacter*, float>          HitCharacterTimestamps;                                   // 0x0468(0x0050) (ZeroConstructor)
	TMap<class ASTExtraVehicleBase*, float>            HitVehicleTimestamps;                                     // 0x04A4(0x0050) (ZeroConstructor)
	float                                              HitPawnMinSpeed;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPawnCheckScale;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPawnBoxScale;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPawnCheckInterval;                                     // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCheckPawnOptimize;                                 // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              HitPawnVolumeCheckDis;                                    // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitPawnSinceLastCheck;                                    // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitCharacterImpulseScale;                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitCharacterImpulseScaleZ;                                // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageCharacterCoolDown;                                  // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRepulseVehicle;                                          // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	float                                              HitVehicleMinSpeed;                                       // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AfterHitVehicleSpeed;                                     // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HitVehicleVelocityCurve;                                  // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitVehicleDamageScale;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfDamageScale;                                          // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDontDamageOtherMecha;                                    // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              DamageVehicleCoolDown;                                    // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaDamageComponent");
		return pStaticClass;
	}


	void RepulseVehicle(class ASTExtraVehicleBase* OtherVehicle, struct FHitResult* InHit);
	void RepulseCharacter(class ASTExtraBaseCharacter* OtherCharacter, struct FHitResult* InHit);
	void RegisterCollisionShapes();
	void MulticastRPC_RepulseVehicle(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& Vel, const struct FVector& HitPoint);
	void MulticastRPC_RepulseCharacter(class ASTExtraBaseCharacter* OtherCharacter, const struct FVector& Vel, const struct FVector& HitPoint);
	void DetectBlockedPawn(float DeltaTime);
	void DealWithVehicleHit(class UPrimitiveComponent* SelfComp, struct FHitResult* InHit);
	void DealWithCharacterHit(class UPrimitiveComponent* SelfComp, struct FHitResult* InHit);
};


// Class Addons.MechaDriverAnimInstance
// 0x0010 (0x0860 - 0x0850)
class UMechaDriverAnimInstance : public UAnimInstanceCarDriverBase
{
public:
	float                                              LuaHideAlpha;                                             // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0854(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaDriverAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.MechaMovementComponent
// 0x0120 (0x0AF0 - 0x09D0)
class UMechaMovementComponent : public UBioVehicleMovementComponent
{
public:
	bool                                               bJetJump;                                                 // 0x09D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	float                                              JumpZVel;                                                 // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetJumpZVel;                                              // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JetJumpAirControl;                                        // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetJumpMaxAcceleration;                                   // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpLinearAcceleration;                                   // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetJumpUpSpeedThreshold;                                  // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetJumpTime;                                              // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingSpeedScale;                                        // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardLandingSpeedThreshold;                                // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingSpeedScale;                                        // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetAccelHeight;                                           // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JetAccelCurve;                                            // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetJumpRemainingTime;                                     // 0x0A04(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetVehicleAsBase;                                        // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	float                                              MaxForwardSpeed;                                          // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBackwardSpeed;                                         // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMaxWalkSpeed;                                          // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireMaxWalkSpeed;                                         // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MechaUnArmedSpeedScale;                                   // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceStopSpeed;                                           // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRate;                                                // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundAcceleration;                                       // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundBrakingDeceleration;                                // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundVelocityRotationSpeed;                              // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 GroundAccelCurve;                                         // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 GroundBrakingCurve;                                       // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 GroundTurnSpeedCurve;                                     // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceLimitMaxSpeed;                                      // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAirGliding;                                              // 0x0A45(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A46(0x0002) MISSED OFFSET
	float                                              GlidingMaxSpeedBaseXY;                                    // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingMaxSpeedFactorXY;                                  // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingMaxSpeedBaseZ;                                     // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingMaxSpeedFactorZ;                                   // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingAcceleration;                                      // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingAccelerationZ;                                     // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingTurnSpeed;                                         // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingToFallingHeight;                                   // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingToFallingExtraSpeed;                               // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMechaGlidingToFalling;                                  // 0x0A6C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DistanceToLand;                                           // 0x0A78(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCheckGroundHeight;                                     // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckGroundIntervalConfig;                                // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A88(0x0004) MISSED OFFSET
	float                                              ExtraMoveDuration;                                        // 0x0A8C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraMovePassedTime;                                      // 0x0A90(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ExtraMoveCurve;                                           // 0x0A94(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraMoveSpeed;                                           // 0x0A98(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExtraMoveInitialDir;                                      // 0x0A9C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     PreContinuousMovePos;                                     // 0x0AA8(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bLimitObstacleSpeed;                                      // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	float                                              ObstacleSpeed;                                            // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationDuration;                                     // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationRate;                                         // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMinHeight;                                    // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0AC8(0x000C) MISSED OFFSET
	float                                              TurnAngularSpeed;                                         // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InPlaceTurnAngularSpeed;                                  // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ApproxJumpHeight;                                         // 0x0ADC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTickOptimization;                                  // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceTickOptimization;                                   // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0AE2(0x0002) MISSED OFFSET
	float                                              TickOptimizationInterval;                                 // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0AE8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaMovementComponent");
		return pStaticClass;
	}


	void UpdateDistanceToLand(float DeltaTime);
	bool ShouldOptimizeTick();
	bool HasContinuousMove();
	void DrawDebugInfo(float DeltaTime);
	struct FVector ApplyContinuousMove(float DeltaTime);
};


// Class Addons.MechaPassengerAnimInstance
// 0x0010 (0x0900 - 0x08F0)
class UMechaPassengerAnimInstance : public UAnimInstanceCarPassengerBase
{
public:
	float                                              HideAlpha;                                                // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LuaHideAlpha;                                             // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.MechaSeatComponent
// 0x0028 (0x0308 - 0x02E0)
class UMechaSeatComponent : public UMyriaPodVehicleSeatComponent
{
public:
	bool                                               bCombined;                                                // 0x02E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              HandleSeatsDelayTime;                                     // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSTExtraVehicleSeat>                 BeforeCombinedSeats;                                      // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTExtraVehicleSeat>                 AfterCombinedSeats;                                       // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAllowLeanOutOrIn;                                        // 0x0300(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowChangeSeat;                                         // 0x0301(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0302(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaSeatComponent");
		return pStaticClass;
	}


	void UpdateMechaSeatGUI();
	void UncombineVehicleSeats(class ASTExtraVehicleBase* OtherVehicle);
	void HandleUncombined(class ASTExtraVehicleBase* OtherVehicle);
	void HandleCombined(class ASTExtraVehicleBase* OtherVehicle);
	class UVehicleUserComponentBase* GetVehicleUserComponentBase(class ASTExtraBaseCharacter* SeatOccupier);
	void CombineVehicleSeats(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.MechaCombineInterface
// 0x0000 (0x0020 - 0x0020)
class UMechaCombineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaCombineInterface");
		return pStaticClass;
	}


	TEnumAsByte<ECombineState> GetCombineState();
	class ASTExtraVehicleBase* GetCombinedVehicle();
	class UMechaSmoothAttachComponent* GetCombineComponent();
};


// Class Addons.MechaSmoothAttachComponent
// 0x00A0 (0x01F0 - 0x0150)
class UMechaSmoothAttachComponent : public ULuaActorComponent
{
public:
	float                                              CombineDuration;                                          // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UncombineDuration;                                        // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSort;                                              // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	class UClass*                                      OtherVehicleClass;                                        // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CombineMaxDistance;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckCanCombineInterval;                                  // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Priority;                                                 // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindValidUncombinePositionUpOffset;                       // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindValidUncombinePositionDownOffset;                     // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FindValidUncombinePositionMaxTime;                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindValidUncombinePositionForwardStep;                    // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReachableCheckOffset;                                     // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECombineState>                         CombineState;                                             // 0x0180(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	class ASTExtraVehicleBase*                         CombinedOtherMecha;                                       // 0x0184(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanCombine;                                              // 0x0188(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	int                                                CellX;                                                    // 0x018C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // 0x0190(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRequestedCombine;                                        // 0x0194(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCombine;                                                // 0x0198(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCombineFinished;                                        // 0x01A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUncombine;                                              // 0x01B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUncombineFinished;                                      // 0x01BC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCombineFailed;                                          // 0x01C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnCombineFailed;                                        // 0x01D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class ASTExtraVehicleBase*>                 PendingValidCombinedVehicle;                              // 0x01E0(0x000C) (ZeroConstructor, Transient)
	float                                              CheckCanCombineAccumulate;                                // 0x01EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaSmoothAttachComponent");
		return pStaticClass;
	}


	void TryUnCombine();
	void TryCombine(class ASTExtraVehicleBase* OtherVehicle);
	void ServerTryUnCombine();
	void ServerTryCombine(class ASTExtraVehicleBase* OtherVehicle, bool bRequested);
	int ProcessUncombine(class ASTExtraVehicleBase* OtherVehicle);
	int ProcessCombine(class ASTExtraVehicleBase* OtherVehicle);
	void OnUncombinedFinished();
	void OnUncombined(class ASTExtraVehicleBase* OldCombinedMecha);
	void OnRep_CombineState(TEnumAsByte<ECombineState> OldCombineState);
	void OnRep_CombinedOtherMecha(class ASTExtraVehicleBase* OldCombinedVehicle);
	void OnRep_bCanCombine();
	void OnPreAttachTo(class ASTExtraVehicleBase* AttachedVehicle);
	void OnCombinedFinished();
	void OnCombined(class ASTExtraVehicleBase* OtherVehicle);
	void OnAttachedTo(class ASTExtraVehicleBase* AttachedVehicle);
	void MulticastSetRequestedCombine(bool bRequested);
	bool LuaCheckUncombinePosition(const struct FVector& InPosition);
	int K2_ProcessUncombine(class ASTExtraVehicleBase* OtherVehicle);
	int K2_ProcessCombine(class ASTExtraVehicleBase* OtherVehicle);
	void K2_OnRep_CombineState(TEnumAsByte<ECombineState> OldCombineState);
	void K2_OnRep_CombinedOtherMecha(class ASTExtraVehicleBase* OldCombinedVehicle);
	void K2_OnRep_bCanCombine();
	bool HasCombined();
	void HandleOnFatalUncombineError(class ASTExtraVehicleBase* HighPriorityVehicle, class ASTExtraVehicleBase* OtherVehicle);
	void HandleOnFatalCombineError(class ASTExtraVehicleBase* HighPriorityVehicle, class ASTExtraVehicleBase* OtherVehicle);
	void GetNearbyValidCombineVehicles(TArray<class ASTExtraVehicleBase*>* ValidCombineVehicles);
	struct FString GetLuaDebugString();
	struct FVector FindValidateUncombinePosition(const struct FVector& StartLocation, const struct FVector& ForwardDirection, const struct FVector& BoxExtent);
	void ExitFreeCamera();
	void ClientDrawDebugString(const struct FString& DebugString, const struct FColor& Color, float Duration);
	void ClientDrawDebugCapsule(const struct FVector& Center, float HalfHeight, float Radius, const struct FColor& Color, float Duration, float Thickness);
	void ClientDrawDebugBox(const struct FVector& Center, const struct FVector& Extent, const struct FQuat& Quat, const struct FColor& Color, float Duration, float Thickness);
	void ClientDrawDebugArrow(const struct FVector& from, const struct FVector& to, const struct FColor& Color, float Duration, float Thickness);
	int CanUnCombineWith(class ASTExtraVehicleBase* OtherVehicle);
	int CanCombineWith(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.MechaSpringArmComponent
// 0x0090 (0x05B0 - 0x0520)
class UMechaSpringArmComponent : public UVehicleSpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0520(0x0004) MISSED OFFSET
	struct FVector                                     BeforeCombined_TargetOffset;                              // 0x0524(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterCombined_TargetArmLength;                            // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AfterCombined_SocketOffset;                               // 0x0534(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AfterCombined_TargetOffset;                               // 0x0540(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditiveTargetArmLength;                                  // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMechaCameraModifier                        MechaCameraModifier;                                      // 0x0550(0x0050) (Transient)
	class UCameraComponent*                            CameraCom;                                                // 0x05A0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LastSetFovOffset;                                         // 0x05A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaSpringArmComponent");
		return pStaticClass;
	}


	void HandleUncombined();
	void HandleCombined();
};


// Class Addons.MechaUtils
// 0x0000 (0x0020 - 0x0020)
class UMechaUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaUtils");
		return pStaticClass;
	}


	static struct FString GetMeshInfo(class USkeletalMeshComponent* InSkeletalMesh);
};


// Class Addons.MechaVehicle
// 0x0200 (0x16F0 - 0x14F0)
class AMechaVehicle : public ABioVehicleBase
{
public:
	struct FRotator                                    NetControlRotation;                                       // 0x14F0(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	float                                              HitByVehicleVelocity;                                     // 0x14FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitByVehicleTime;                                         // 0x1500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HitByVehicleCurve;                                        // 0x1504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitImpulseThreshold;                                      // 0x1508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitVelocityThreshold;                                     // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     OverrideMissileConfig;                                    // 0x1510(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint32_t                                           MechaStates;                                              // 0x151C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMechaEnterState;                                        // 0x1520(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaLeaveState;                                        // 0x152C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaInterruptState;                                    // 0x1538(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TurnSpeed;                                                // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowTurnWhenFire;                                       // 0x1548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMechaWeaponState>                     MechaWeaponState;                                         // 0x1549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x154A(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMechaWeaponStateChanged;                                // 0x154C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaBeCached;                                          // 0x1558(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaHit;                                               // 0x1564(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMechaRepulseVehicle;                                    // 0x1570(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bSkipEnterMechaCheck;                                     // 0x157C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedRecreatePhysicsState;                                // 0x157D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasDriverLastFrame;                                      // 0x157E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x157F(0x0001) MISSED OFFSET
	class ASTExtraBaseCharacter*                       CachedLastDriver;                                         // 0x1580(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UMechaSmoothAttachComponent*                 MechaCombineComponent;                                    // 0x1584(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMechaAirGliding;                                        // 0x1588(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bAirGliding;                                              // 0x1594(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1595(0x0003) MISSED OFFSET
	float                                              BeforeCombined_MaxHealth;                                 // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeforeCombined_MaxFuel;                                   // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonBioVehicleFuelRatio;                                   // 0x15A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EMechaState, struct FMechaStateSet>           DisallowStateMap;                                         // 0x15A4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EMechaState, struct FMechaStateSet>           InterruptStateMap;                                        // 0x15E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               AirGlidingAudio;                                          // 0x161C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AirGlidingStopAudio;                                      // 0x1620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FallingWindAudio;                                         // 0x1624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FallingWindStopAudio;                                     // 0x1628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSTExtraVehicleSfxLoop                      AirGlidingSfxLoop;                                        // 0x162C(0x005C)
	struct FSTExtraVehicleSfxLoop                      FallingWind2DSfxLoop;                                     // 0x1688(0x005C)
	unsigned char                                      UnknownData03[0xC];                                       // 0x16E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MechaVehicle");
		return pStaticClass;
	}


	void UncombineHealthAndFuel(class ASTExtraVehicleBase* OtherHover);
	void StopMechaMontage(float BlendOutTime, class UAnimMontage* Montage);
	struct FString StateToString();
	void StartAirGliding();
	bool ShouldApplyVehicleImpulse(class ASTExtraVehicleBase* OtherVehicle, class UPrimitiveComponent* MyPrimComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetWeaponState(TEnumAsByte<EMechaWeaponState> InState);
	void ServerUpdateControlRotation(const struct FRotator& ControlRotation);
	void ProcessAirGlidingLanded();
	void PlayMechaMontage(class UAnimMontage* Montage);
	void OnRep_NetControlRotation();
	void OnRep_MechaStates(uint32_t OldStates);
	void OnRep_bAirGliding();
	void OnPlayerExitMecha(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void OnPlayerEnterMecha(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void OnDriverLeaveMecha(class ASTExtraCharacter* LeaveDriver);
	void OnDriverEnterMecha(class ASTExtraCharacter* EnterDriver);
	void OnDeadMechaFallingToGrounded();
	void OnBeCachedCPlus(class AActor* SourceCatcher);
	void MulticastRPC_AddContinuousMove(class UCurveFloat* MoveCurve, float Speed, const struct FVector& movedir, float Time);
	void MulticastDrawDebugBox(const struct FVector& Center, const struct FVector& Extent, const struct FQuat& Rotation, const struct FColor& Color, float LifeTime, float Thickness, bool bAutonomousOnly);
	void MulticastDrawDebugArrow(const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FColor& Color, float Duration, float Thickness, bool bAutonomousOnly);
	void MulticastDoJump();
	void LeaveState(EMechaState State);
	void InterruptState(EMechaState State, EMechaState InterruptBy);
	bool HasState(EMechaState State);
	bool HasCombined();
	void HandleOnDestroyBy(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	class UMechaMovementComponent* GetMechaMovement();
	class ASTExtraBaseCharacter* GetInVehicleLocalPlayer();
	float GetHeight();
	TEnumAsByte<ECombineState> GetCombineState();
	class ASTExtraVehicleBase* GetCombinedVehicle();
	class UMechaSmoothAttachComponent* GetCombineComponent();
	bool EnterState(EMechaState State);
	void EndAirGliding();
	void EnableMechaResolvePenetration(bool bEnable);
	void DrawDebugInfo(float DeltaTime);
	void DoJump();
	void CombineHealthAndFuel(class ASTExtraVehicleBase* OtherHover);
	void CheckDriverState();
	bool CanHitVehicle(class ASTExtraVehicleBase* HitVehicle, struct FHitResult* InHit);
	bool CanHitCharacter(class ASTExtraBaseCharacter* HitCharacter, struct FHitResult* InHit);
	void CacheMaxHealthAndFuel();
	void ApplyVehicleImpulse(const struct FVector& ApplyImpulse, bool bVelocityChange);
	bool AllowState(EMechaState State);
	void AddContinuousSpeedMove(float Speed, const struct FVector& movedir, float Time);
	void AddContinuousCurveMove(class UCurveFloat* MoveCurve, const struct FVector& movedir, float Time);
};


// Class Addons.MonsterRaptorAnimInstance
// 0x0030 (0x0500 - 0x04D0)
class UMonsterRaptorAnimInstance : public UDinosaurMonsterAnimInstanceBase
{
public:
	TArray<int>                                        NotBattleIdleIndex;                                       // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BattleIdleIndex;                                          // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultBattleIdleIndex;                                   // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNotBattleIdleIndex;                                // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLockedTarget;                                         // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInBattle;                                                // 0x04F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x04F2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MonsterRaptorAnimInstance");
		return pStaticClass;
	}


	void OnResetPlayedIdleIndex(int NewIndex);
};


// Class Addons.OBHttpComponent
// 0x0050 (0x01A0 - 0x0150)
class UOBHttpComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerRealTimeAPI>                  RealTimeAPIList;                                          // 0x0150(0x000C) (Net, ZeroConstructor)
	TArray<struct FPlayerAfterMatchAPI>                AfterMatchAPIList;                                        // 0x015C(0x000C) (Net, ZeroConstructor)
	bool                                               bSwitchOBHttpComponent;                                   // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	struct FString                                     IPAddr;                                                   // 0x016C(0x000C) (ZeroConstructor, Config)
	int                                                Port;                                                     // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     URLSetting;                                               // 0x017C(0x000C) (ZeroConstructor)
	int                                                MaxFailedTimes;                                           // 0x0188(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<int>                                        NeedItems;                                                // 0x018C(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.OBHttpComponent");
		return pStaticClass;
	}


	void ServerGetBackPackInfo(int TeamID);
	void ServerGetAllPlayerThrowInfo();
	void PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr);
	void PostTeamBackPackInfoByTeamID(int TeamID);
	void PostTDMResultInfo(const struct FString& TDMResultInfoJsonStr);
	void PostPlayersAMInfo(const struct FString& PlayerAMInfoJsonStr);
	void OnRep_RealTimeAPIList();
	void OnRep_AfterMatchAPIList();
	void ClientUpdateTeammateItemList();
	void ClientGetPlayerUseSightInfo(TArray<struct FPlayerSightUsageInfoCompress> PlayerSightUsageInfoCompress);
	void ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo);
	void ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo);
	void ClientGetAirDropBoxInfo(unsigned char AirDropId, TArray<struct FAirDropBoxDataItem> AirDropBoxDataList);
};


// Class Addons.ObserverProbeComponent
// 0x0148 (0x0210 - 0x00C8)
class UObserverProbeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00C8(0x0060) MISSED OFFSET
	TArray<class ABaseAIController*>                   MLAIControllerList;                                       // 0x0128(0x000C) (ZeroConstructor)
	TArray<class ASTExtraPlayerController*>            APIControllerList;                                        // 0x0134(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0140(0x0054) MISSED OFFSET
	TArray<int>                                        PlayerCollectItemNeed;                                    // 0x0194(0x000C) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseItemNeed;                                        // 0x01A0(0x000C) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseSight;                                           // 0x01AC(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x48];                                      // 0x01B8(0x0048) MISSED OFFSET
	class AUAEGameMode*                                OwnerGameMode;                                            // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraGameStateBase*                       CachedGameState;                                          // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ObserverProbeComponent");
		return pStaticClass;
	}


	void PostInfoAfterMatch();
	void OnTerminatorEndGame(class AController* Killer, class AController* Victim, int DamageType, int ExtraParam);
	void CollectSightUseTime(uint32_t PlayerKey, int SightId, bool bUse);
};


// Class Addons.PCOBCommonComponent
// 0x00B8 (0x0208 - 0x0150)
class UPCOBCommonComponent : public ULuaActorComponent
{
public:
	struct FViewPoint                                  ViewPoint[0x5];                                           // 0x0150(0x001C)
	int                                                CameraZoomRateScale;                                      // 0x01DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraLagSpeed;                                           // 0x01E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraRotationLagSpeed;                                   // 0x01E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ObservingTime;                                            // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TrackingDelayTime;                                        // 0x01EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PCOBCommonComponent");
		return pStaticClass;
	}


	void TrackingEnd();
	void PCOBTerminator(class ASTExtraBaseCharacter* Causer, class ASTExtraBaseCharacter* Victim);
	void OnLoadAllLevelChanged(bool bLoadAllLevel);
};


// Class Addons.PterosaurAnimInstance
// 0x00D0 (0x0470 - 0x03A0)
class UPterosaurAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	float                                              VerticalSpeedLerpSpeed;                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanRollSpeed;                                    // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanPitchSpeed;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFlyingSpeedThreshold;                                // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDirection;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopDirectionThreshold;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAnglePitch;                                        // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAngleRoll;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAngleRollLerpSpeed;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAnglePitchLerpSpeed;                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurSwoopStage                               SwoopStage;                                               // 0x03CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	int                                                LandingIndex;                                             // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x03D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGroundDead;                                            // 0x03D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwoopingDown;                                          // 0x03D7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x03DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x03DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawInterpolateSpeed;                                  // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchInterpolateSpeed;                                // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 ArrestMovementAnim;                                       // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 FlyingAO_Anim;                                            // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundDeathAnim;                                          // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingAnim;                                         // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingGround;                                       // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurAnimInstance");
		return pStaticClass;
	}


	void ResetStartFlying();
	void OnStartFlying();
};


// Class Addons.PterosaurCatchedPassengerAnimInstance
// 0x0020 (0x0830 - 0x0810)
class UPterosaurCatchedPassengerAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0810(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x0814(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0818(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0820(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0824(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0828(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurCatchedPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurDriverAnimInstance
// 0x0080 (0x0890 - 0x0810)
class UPterosaurDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0810(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LandingIndex;                                             // 0x0814(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x0819(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x081A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x081B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0820(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0824(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x082C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0834(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0838(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x0840(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0844(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0848(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 CatchPassengerMovementAnim;                               // 0x084C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x0850(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0854(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x0858(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x085C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x0860(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0864(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x0868(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0874(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x0878(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x087C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPterosaurAnimInstance>       OwnedPterosuarAnimInstance;                               // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurDriverAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurMovementComponent
// 0x0200 (0x0BD0 - 0x09D0)
class UPterosaurMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x09D0(0x000C) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x09E4(0x0010) MISSED OFFSET
	float                                              MaxUpSpeed;                                               // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPterosaurSwoopDownStageChanged;                         // 0x09FC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPterosaurUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0A14(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	float                                              MaxFlyingZ;                                               // 0x0A18(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0A1C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A1D(0x0003) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0A20(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0A28(0x000C) MISSED OFFSET
	bool                                               bTopBlocked;                                              // 0x0A34(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	float                                              MaxTraceDownHeight;                                       // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopClimbOffset;                                         // 0x0A48(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bSwoopUsePathRotation : 1;                                // 0x0A54(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A55(0x0003) MISSED OFFSET
	float                                              SyncRotationSpeed;                                        // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationMoveSpeed;                                    // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationAcceptableAngle;                              // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SplineActorClass;                                         // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopDownSpeed;                                        // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineCurveTangentLength;                                 // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreCatchEnterDistance;                                    // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ModifyEnterSplinePointDistanceArr;                        // 0x0A74(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 SwoopSpeedCurve;                                          // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SwoopSpeedSafeRange;                                      // 0x0A84(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TMap<struct FVector2D, struct FVector2D>           DirectionCorrectMoveSpeedMap;                             // 0x0A8C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DistThresholdWhenInputAllowed;                            // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopMoveDuration;                                     // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveBlockedDurationThreshold;                        // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchUsePassedSplineDistance;                           // 0x0AD4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x17];                                      // 0x0AD5(0x0017) MISSED OFFSET
	struct FVector                                     DiveStartDirection;                                       // 0x0AEC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DiveDirection;                                            // 0x0AF8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MaxDiveSpeed;                                             // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveTime;                                              // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiveTurnTime;                                             // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingCoolDown;                                           // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDivingResetCamera;                                       // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x33];                                      // 0x0B15(0x0033) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0B48(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0B4C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x30];                                      // 0x0B50(0x0030) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0B80(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                TakeOffCurve;                                             // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DivingCurve;                                              // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopingDownVelocity;                                     // 0x0B90(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSwoopTurnLeft;                                           // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B9D(0x0003) MISSED OFFSET
	int                                                LandingConfigIndex;                                       // 0x0BA0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPterosaurLandingConfig>             LandingConfigs;                                           // 0x0BA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      CacheSplineActor;                                         // 0x0BB0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0BB4(0x0008) MISSED OFFSET
	float                                              MaxAutoLandingTime;                                       // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceNoSimulate;                                 // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceLanding;                                    // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bCheckClientFlyingHeight;                                 // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurMovementComponent");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void StartSwoopDown(const struct FVector& TargetLocation);
	void StartLanding();
	void StartFlyingDive();
	void SetServerDiveDirection(const struct FVector& Direction);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetAutoLanding(float Value);
	bool IsTakingOff();
	bool IsSwoopDown();
	bool IsSwoopCatching();
	bool IsStrugglingToLand();
	bool IsLocalSwoopingDown();
	bool IsLandingWalking();
	bool IsLanding();
	bool IsDiving();
	bool IsCurveMoving();
	EPterosaurMoveMode GetMoveState();
	float GetDistanceToLand();
	void ExitSwoopDown();
	void ExitLanding();
	void EndTakingOff();
	void EndSwoopDown(bool bRestVelocity);
	void EndLanding();
	void EndFlyingDive();
	void DealWithCustomAction(float DeltaTime);
	bool CheckCanStartFlyingDive();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
	void CalculateDivingVelocity(float DeltaTime);
};


// Class Addons.PterosaurVehicle
// 0x0090 (0x1580 - 0x14F0)
class APterosaurVehicle : public ABioVehicleBase
{
public:
	float                                              CloseParachuteHeightInPterosaur;                          // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInPterosuar;                       // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExecSwoopCatchDistance;                                // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinExecSwoopCatchDistance2D;                              // 0x14FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCatchableDistance;                                     // 0x1500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopCatchCoolDown;                                       // 0x1504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreHitPlayerWhenSwoopDown;                      // 0x1508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SyncSwoopCatchState;                                      // 0x1509(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x150A(0x0002) MISSED OFFSET
	class ASTExtraBaseCharacter*                       ArrestCharacter;                                          // 0x150C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetCatchLocation;                                      // 0x1510(0x000C) (IsPlainOldData)
	class UPterosaurMovementComponent*                 PterosaurMoveComponent;                                   // 0x151C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DiveReadyTime;                                            // 0x1520(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDive;                                   // 0x1524(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDiveEnd;                                // 0x1530(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleGroundDead;                             // 0x153C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleTopBlocked;                             // 0x1548(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1554(0x0008) MISSED OFFSET
	bool                                               bIsGroundDead;                                            // 0x155C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x155D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDead;                                   // 0x1560(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                CatchPassengerAnim;                                       // 0x156C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PrepareCatchPassengerAnim;                                // 0x1570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDynamicOptimizeActorComponents*             DynamicOptimizeComponent;                                 // 0x1574(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1578(0x0004) MISSED OFFSET
	float                                              FlyingHoverConsumeFuelRate;                               // 0x157C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurVehicle");
		return pStaticClass;
	}


	void TryFlyingDive(bool bTry);
	void TryCancelSwoopDown();
	void ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd);
	void ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester);
	void OnRep_SyncSwoopCatchState();
	void OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation);
	void OnPterosaurPrepareCatch();
	void OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MultiCast_SwoopDown(const struct FVector& TargetLocation);
	void MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints);
	bool IsSwoopDown();
	bool IsSwoopCoolDown();
	bool IsSwoopCatching();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	class UPterosaurMovementComponent* GetPterosaurMovementComponent();
	float GetConsumeFuelRate();
	bool ForceCatchCharacter(class ASTExtraBaseCharacter* Character);
	bool DoSwoopDown(const struct FVector& TargetLocation);
	bool CanConsumeFuel();
	void BroadCastOnPterosaurPrepareCatch();
	void BPOnPterosaurSwoopStateChanged(unsigned char NewStage);
};


// Class Addons.RaptorMovementComponent
// 0x0050 (0x0A20 - 0x09D0)
class URaptorMovementComponent : public UBioVehicleMovementComponent
{
public:
	struct FVector                                     SpotRotator;                                              // 0x09D0(0x000C) (IsPlainOldData)
	float                                              SpotTurnStartTime;                                        // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x09E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAdjustMovementFloor;                                  // 0x0A04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A05(0x0003) MISSED OFFSET
	float                                              BreakOutAcclerationRate;                                  // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutVelocityRate;                                     // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BreakOutAccResistanceCurve;                               // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0A14(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorMovementComponent");
		return pStaticClass;
	}


	float GetWalkingAccResistance(float Speed);
	float GetMaxAcceleration();
};


// Class Addons.RaptorVehicle
// 0x0020 (0x1510 - 0x14F0)
class ARaptorVehicle : public ABioVehicleBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x14F0(0x0008) MISSED OFFSET
	struct FName                                       LeftFootBoneName;                                         // 0x14F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x1508(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1509(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorVehicle");
		return pStaticClass;
	}


	void SetHandBrake(float rate);
	void ServerSetHandBrake(float rate);
	void MulticastDoJump();
	class URaptorMovementComponent* GetRaptorMovementComponent();
	void DoJump();
};


// Class Addons.RegionOverlapComponent
// 0x0068 (0x0130 - 0x00C8)
class URegionOverlapComponent : public UActorComponent
{
public:
	float                                              UpdateCheckInternal;                                      // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlyServerUpdateCheck;                                   // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FName                                       TriggerTag;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShapeOffset;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CheckOverlapTimer;                                        // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             ShapeComponent;                                           // 0x00E8(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x00EC(0x003C) UNKNOWN PROPERTY: SetProperty Addons.RegionOverlapComponent.CurrentPawns
	class UPrimitiveComponent*                         CachePlayAreaComponent;                                   // 0x0128(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x012C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RegionOverlapComponent");
		return pStaticClass;
	}


	void SetPlayAreaComponent(class UPrimitiveComponent* AreaComponent);
	void GetOverlappingActors(class UClass* ClassFilter, bool bForceQuery, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*>* OverlappingActors);
};


// Class Addons.ReindeerAnimInstance
// 0x0090 (0x04F0 - 0x0460)
class UReindeerAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              GroundMovementPlayRate;                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LeanAnglePelvisOffsetCurve;                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyBodyLeanSpeedRange;                                    // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundBodyLeanSpeedRange;                                 // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyMaxTurnLeanAngle;                                      // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundMaxTurnLeanAngle;                                   // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnLeanLerpSpeed;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRiseLeanAngle;                                         // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiseLeanLerpSpeed;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	float                                              MovementAnimPlayRate;                                     // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LeanPelvisOffset;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              RisingInput;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BodyLeanAngle;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              TerrainAdaptingAlpha;                                     // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x04B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AReindeerBioVehicle*                         OwnerReindeer;                                            // 0x04C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTurnLeanAngle;                                     // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetTurnLeanAngle;                                      // 0x04C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRiseLeanAngle;                                     // 0x04CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRiseLeanAngle;                                      // 0x04D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseComponentCalcTerrainAdaptingParam;                    // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	float                                              PelvisHeightOffset;                                       // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisPitchOffset;                                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinusPelvisPitchOffset;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerBioVehicle
// 0x01A0 (0x1690 - 0x14F0)
class AReindeerBioVehicle : public ABioVehicleBase
{
public:
	class UChildActorComponent*                        VehicleAttachBone_Helper;                                 // 0x14F0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           AttachCapsuleComponent;                                   // 0x14F4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       LeftFootBoneName;                                         // 0x14F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x1508(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1509(0x0007) MISSED OFFSET
	struct FName                                       AttachBoneName;                                           // 0x1510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachLocationBoneName;                                   // 0x1518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DoLagRotationRate;                                        // 0x1520(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDoRotationPitchLag;                                      // 0x152C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x152D(0x0003) MISSED OFFSET
	float                                              RotateFollowRate;                                         // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxHP;                                     // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxFuel;                                   // 0x1538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSyncMovementTick;                                  // 0x153C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x153D(0x0003) MISSED OFFSET
	float                                              AttachEnterDistanceScale;                                 // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeightInAttachedVehicle;                     // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeightInAttachedVehicle;                  // 0x1548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeightInAttachedVehicle;                // 0x154C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInAttachedVehicle;                    // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInAttachedVehicle;                 // 0x1554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bObserverNotRepMovement;                                  // 0x1558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayDestroyInWater;                                     // 0x1559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x155A(0x0002) MISSED OFFSET
	float                                              DelayDestroyInWaterInterval;                              // 0x155C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x1560(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRotator                                    AttachOffsetRotation;                                     // 0x156C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AttachOffsetLocation;                                     // 0x1578(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UAkAudioEvent*                               WindAudio2D;                                              // 0x1584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WindAudioStop2D;                                          // 0x1588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AirMovingAudio;                                           // 0x158C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPCSpeedLerpSpeed;                                       // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ReindeerRPTCName;                                         // 0x1594(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ReindeerRTPCRange;                                        // 0x15A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LinkedReindeerRPTCName;                                   // 0x15A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   LinkedReindeerRTPCRange;                                  // 0x15B4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FSTExtraVehicleSfxLoop                      AirMovingSfxLoop;                                         // 0x15BC(0x005C)
	struct FSTExtraVehicleSfxLoop                      Wind2DSfxLoop;                                            // 0x1618(0x005C)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1674(0x0004) MISSED OFFSET
	int                                                AudioID_LinkedReindeer;                                   // 0x1678(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRTPCSpeed;                                         // 0x167C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x1680(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerBioVehicle");
		return pStaticClass;
	}


	void TryAttachToOtherVehicle();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MulticastDoJump();
	void K2_OnClientAttachWithReindeerCart(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	class UBioFlyMovementComponentBase* GetBioFlyMovementComponent();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoJump();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.ReindeerCartVehicle
// 0x0080 (0x1450 - 0x13D0)
class AReindeerCartVehicle : public ASTExtraWheeledVehicle
{
public:
	float                                              AttachEnterDistanceScale;                                 // 0x13D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenAttachTransformProtection;                           // 0x13D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x13D5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x13D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x13E4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x13E4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.FloatingParticle
	unsigned char                                      UnknownData03[0x28];                                      // 0x1410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.MovingParticle
	struct FName                                       MovingParticleAttachName;                                 // 0x1438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveMovingParticleSpeedThreshold;                       // 0x1440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedLastFrame;                                           // 0x1444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    CachedFloatingParticleComponent;                          // 0x1448(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CachedMovingParticleComponent;                            // 0x144C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerCartVehicle");
		return pStaticClass;
	}


	void UpdateParticleState();
	void TryAttachToOtherVehicle();
	void SetMovingParticleActived(bool Inactive);
	void SetFloatingParticleActived(bool Inactive);
	void OnParticleEffectLoadingFinished();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void LoadParticleEffect();
	void K2_OnClientAttachToReindeer(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	float GetForwardSpeed();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
	void DestroyAllCachedParticleEffect();
	void CloseWheelsCollision();
};


// Class Addons.ReindeerRiderAnimInstance
// 0x0030 (0x08E0 - 0x08B0)
class UReindeerRiderAnimInstance : public ULandingCreatureDriverAnimInstance
{
public:
	float                                              DefaultSpinePitchOffset;                                  // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultSpinePitchOffsetNearDeath;                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinePitchOffsetLerpSpeed;                                // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpinePitchOffset;                                      // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAssetsCached;                                            // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08C2(0x0002) MISSED OFFSET
	float                                              RisingInput;                                              // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MovementAnimPlayRate;                                     // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SpinePitchOffset;                                         // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x08D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x08D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x08D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x08DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerRiderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerPassengerAnimInstance
// 0x0090 (0x0970 - 0x08E0)
class UReindeerPassengerAnimInstance : public UReindeerRiderAnimInstance
{
public:
	struct FName                                       DriverSpineBoneName;                                      // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DriverSpineLocationOffsetToPassengerHand;                 // 0x08E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDriverSeatOccupier;                                   // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldUseHandIK;                                         // 0x08F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08F6(0x0002) MISSED OFFSET
	float                                              RightHandIkAlpha;                                         // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineLeftHandLocation;                              // 0x08FC(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineRightHandLocation;                             // 0x0908(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bShouldTransIdleToAim;                                    // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldTransAimToIdle;                                    // 0x0915(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPassengerWeaponType>                  PassengerWeaponType;                                      // 0x0916(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bScoping;                                                 // 0x0917(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    OwnerAimRotation;                                         // 0x0918(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    AimAnimBSParam;                                           // 0x0924(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bIsHoldingGrenade;                                        // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	float                                              HoldGrenadeAimPerSpineAlpha;                              // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HoldGrenadeAnim;                                          // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAimOffsetBlendSpace*                        HoldGrenadeAimOffsetBS;                                   // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOffAnim;                  // 0x0940(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOffAnim;           // 0x0944(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim;         // 0x0948(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim;      // 0x094C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOffAimAnim;                                // 0x0950(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOnAnim;                   // 0x0954(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOnAnim;            // 0x0958(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim;          // 0x095C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim;       // 0x0960(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOnAimAnim;                                 // 0x0964(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DyingIdle;                                                // 0x0968(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x096C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerSeatComponent
// 0x0048 (0x0328 - 0x02E0)
class UReindeerSeatComponent : public UVehicleSeatComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02E0(0x0038) MISSED OFFSET
	int                                                RealSeatsNum;                                             // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x031C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerSeatComponent");
		return pStaticClass;
	}


	int GetTotalSeatsNum();
};


// Class Addons.ReindeerTerrainAdaptingComponent
// 0x00C0 (0x0210 - 0x0150)
class UReindeerTerrainAdaptingComponent : public ULuaActorComponent
{
public:
	struct FName                                       AdaptedBoneName;                                          // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LHandBoneName;                                            // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RHandBoneName;                                            // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LFootBoneName;                                            // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RFootBoneName;                                            // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             TerrainAdaption_ObjectTypesToQuery;                       // 0x0178(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceUpOffset;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxPitch;                                    // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxZ;                                        // 0x0194(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptLerpSpeed;                                      // 0x0198(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UReindeerAnimInstance*                       ReindeerAnimInstance;                                     // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x01A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerTerrainAdaptingComponent");
		return pStaticClass;
	}

};


// Class Addons.ScanAvatar
// 0x0000 (0x0338 - 0x0338)
class AScanAvatar : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ScanAvatar");
		return pStaticClass;
	}


	void ScanAndPrint();
};


// Class Addons.SpectatingSubsystem
// 0x0010 (0x0030 - 0x0020)
class USpectatingSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.SpectatingSubsystem");
		return pStaticClass;
	}

};


// Class Addons.SplineMoveObj
// 0x01E0 (0x0250 - 0x0070)
class USplineMoveObj : public USpecialMoveBaseObj
{
public:
	class USplineComponent*                            MoveAlongSpline;                                          // 0x0070(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CacheAllowEnterSplineTime;                                // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CacheInput;                                               // 0x0078(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     OriginalInput;                                            // 0x0084(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheControlRot;                                          // 0x0090(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheCurSplineDir;                                        // 0x009C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheTargetRot;                                           // 0x00A8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheBeginRot;                                            // 0x00B4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheOldRot;                                              // 0x00C0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineBeginLoc;                                      // 0x00CC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineEndLoc;                                        // 0x00D8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              DownhillCosValue;                                         // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheTurningTime;                                         // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusPawnRotation;                                       // 0x00EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingCameraLag;                                          // 0x00ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	float                                              OriginalCameraLagSpeed;                                   // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalCameraLagMaxDistance;                             // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SplineMoveAkEvent;                                        // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x00FC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.SplineMoveObj.SplineMoveAkEvent_SoftPtr
	struct FVector2D                                   MoveSoundSpeedRange;                                      // 0x0128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoveSoundSpeedInputScale;                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FName                                       Sound_SpeedName;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sound_OnAirName;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineDistance;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceLeaveSplineDistance;                                 // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnterSplineIgnoreCollision;                               // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClientEnterLocation;                                  // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              CameraLagEndThreshold;                                    // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagSpeed;                                           // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagMaxDistance;                                     // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopSprintOnTouch;                                       // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              ControlRotateSpeed;                                       // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveHoldWeaponSpeed;                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HoldWeaponControlYawLimit;                                // 0x016C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TurnLeftDeltaAngle;                                       // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRightDeltaAngle;                                      // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoldWeaponYawThreshold;                                   // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveJumpGravityScale;                               // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccDown;                                      // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccUp;                                        // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillExtraSpeed;                                       // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillCosThreshold;                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionChannelsForCheck;                                // 0x0194(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FindJumpEndOffset;                                        // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeedThresholdSq;                                  // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningExponent;                                          // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningTime;                                              // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningEndTolerance;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveMaxSpeed;                                       // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineSprintMoveMaxSpeed;                                 // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineFriction;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakingDeceleration;                                   // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineSpeed;                                         // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExtraJumpVelocity;                                        // 0x01CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SplineMoveAirControl;                                     // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceBeginOffset;                                         // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceEndOffset;                                           // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x01E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	struct FName                                       SplineActorTag;                                           // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleHalfHeight;                                   // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleRadiusHeight;                                 // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffSplineDistanceThreshold;                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoJumpOnSplineEnd;                                       // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	float                                              InteractEnterSplineHeight;                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllowEnterSplineDeltaTime;                                // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLifetime;                                            // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugSphereRadius;                                        // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientSendEnterRPC;                                      // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionLocationOnSpline;                               // 0x0218(0x000C) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    SplineMoveState;                                          // 0x0224(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	float                                              AimRotationInterpSpeed;                                   // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimRotationReverseInterpSpeed;                            // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurnMaxAngle;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1C];                                      // 0x0234(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.SplineMoveObj");
		return pStaticClass;
	}


	void UpdateTuring(float DeltaTime);
	void UpdateSplineMoveTurning(float DeltaTime);
	void UpdateMoveSound();
	void UpdateFocusRotation(float DeltaTime);
	void UpdateCameraLag(float DeltaTime);
	bool TryEnterSpline();
	void StopMoveSound();
	void StartSplineMoveCameraLag();
	void SplineMoveTurningEnd();
	void SplineMoveTurningBegin(const struct FVector& InTargetDir, bool bIsLeft);
	void SetSplineMoveState(TEnumAsByte<ECustomMovmentMode> InMoveState);
	void SetSpline(class USplineComponent* InSpline);
	void ServerPlayerTryEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLocation, const struct FRotator& EnterRot);
	void PlayMoveSound();
	void PlayerLeaveSpline(class USplineComponent* InSpline, TEnumAsByte<EMovementMode> InMovementMode);
	void PlayerEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLoc, const struct FRotator& EnterRot);
	void OwnerJump();
	bool OwnerHasWeapon();
	void OnSplineMoveHit(const struct FHitResult& Hit);
	void OnSpecialMoveCharacterJump();
	void OnSimulateCharStateChanged(uint64_t InCurrentStates, uint64_t InPrevStates);
	void OnPlayerRespawn(class AUAEPlayerController* PC);
	void OnPawnStateInterrupted(EPawnState State, EPawnState InterruptedBy);
	void OnPawnLeaveState(EPawnState LeaveState);
	void OnPawnEnterState(EPawnState EnterState);
	void MoveAlongSplineError();
	void InteractEnterSpline(class USplineComponent* InSpline);
	bool InSplineMoveState();
	void HandleBeginTouchScreen(const struct FVector2D& Loc);
	TEnumAsByte<ECustomMovmentMode> GetSplineMoveState();
	struct FVector GetProjectionLocationOnSpline(class USplineComponent* InSpline, const struct FVector& InLocation);
	struct FRotator GetPlayerEnterSplineRotation(class USplineComponent* InSpline);
	struct FVector GetPlayerEnterSplineLocation(class USplineComponent* InSpline);
	float GetDistanceAlongSplineAtWorldLocation(class USplineComponent* InSpline, const struct FVector& InLoc);
	float GetCurrentTime();
	class ASTExtraBaseCharacter* GetCharacterOwner();
	void ForceLeaveSpline(class USplineComponent* InSpline);
	void EndSplineMoveCameraLag();
	void EnableFocusRotation(bool InEnable);
	bool CustomModeIsSplineMove(unsigned char InCustomMode);
	void ClientPlayerLeaveSpline(class USplineComponent* InSpline);
	void AsyncLoadSoundResourceFinish();
	void AsyncLoadSoundResource();
	bool AllowTryEnterSpline();
};


// Class Addons.STCommonTransformAnimInstance
// 0x0050 (0x0350 - 0x0300)
class USTCommonTransformAnimInstance : public UAnimInstance
{
public:
	struct FVector                                     C_MoveVelocity;                                           // 0x0300(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_bHitPose;                                               // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_bFallingToLanding;                                      // 0x030E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x030F(0x0001) MISSED OFFSET
	class ASTExtraBaseCharacter*                       C_OwnerCharacter;                                         // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idel_Pos;                                               // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart_Pos;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLoop_Pos;                                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding_Pos;                                        // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Hit_Pos;                                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Move_Pos;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 C_Move_Blend;                                             // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMoveStateChange;                                        // 0x0330(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     C_MoveDir;                                                // 0x033C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.STCommonTransformAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.TargetedRotatingMovementComponent
// 0x0030 (0x0130 - 0x0100)
class UTargetedRotatingMovementComponent : public UMovementComponent
{
public:
	struct FRotator                                    RotationOffset;                                           // 0x0100(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bOnlyYaw;                                                 // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowViewRotation;                                      // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	struct FVector                                     RelativeLocationOffset;                                   // 0x0110(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bTraceVisible;                                            // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x011E(0x0002) MISSED OFFSET
	float                                              TraceTolerance;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTrace;                                          // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveWithCollision;                                       // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       TargetedActor;                                            // 0x0128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TargetedRotatingMovementComponent");
		return pStaticClass;
	}

};


// Class Addons.TRexVehicleDamageComponent
// 0x0080 (0x04E0 - 0x0460)
class UTRexVehicleDamageComponent : public UBioVehicleDamageComponent
{
public:
	struct FName                                       BlockComponentTag;                                        // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImpulseOnCharacter;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	class UCurveFloat*                                 VehicleHitCharcterImpulseCurve;                           // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImpuleScale;                                       // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseCharacterZScale;                                   // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BioDamageVehicleCooldownTime;                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultHitVehicleDamage;                                  // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCollisionLocation;                                    // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    OwnerVehicle;                                             // 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, float>                         BioDamageVehicleTimes;                                    // 0x0488(0x0050) (ZeroConstructor)
	TArray<class ASTExtraVehicleBase*>                 LastOverlapedVehicles;                                    // 0x04C4(0x000C) (ZeroConstructor)
	TArray<class UActorComponent*>                     DamageCollisions;                                         // 0x04D0(0x000C) (ExportObject, ZeroConstructor)
	class UPrimitiveComponent*                         BlockCollision;                                           // 0x04DC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TRexVehicleDamageComponent");
		return pStaticClass;
	}


	void HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
	void HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
};


// Class Addons.TyrannosaurusRexAnimInstance
// 0x0030 (0x0490 - 0x0460)
class UTyrannosaurusRexAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              RunSpeed;                                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATyrannosaurusRexVehicle*                    TRex;                                                     // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartMoving;                                             // 0x0474(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              WalkPlayRate;                                             // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunPlayRate;                                              // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintPlayRate;                                           // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0484(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexAnimInstance");
		return pStaticClass;
	}


	void ResetStartMoving();
};


// Class Addons.TyrannosaurusRexVehicle
// 0x0160 (0x1650 - 0x14F0)
class ATyrannosaurusRexVehicle : public ABioVehicleBase
{
public:
	float                                              RoarSpeedThreshold;                                       // 0x14F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCD;                                                   // 0x14F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarStartAttackTime;                                      // 0x14F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarEndAttackTime;                                        // 0x14FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarAttackDeltaTime;                                      // 0x1500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarDamage;                                               // 0x1504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RoarMontage;                                              // 0x1508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarCameraShake;                                          // 0x150C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTRexApplyRoarAttack;                                    // 0x1510(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexStartRoar;                                    // 0x151C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexFinishRoar;                                   // 0x1528(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               TRexRoarAudioEvent;                                       // 0x1534(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TRexBodyMatSlotName;                                      // 0x1538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShelfMatSlotName;                                         // 0x1540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyNormalMaterial;                                       // 0x1548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfNormalMaterial;                                      // 0x154C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyInjuredMaterial;                                      // 0x1550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfInjuredMaterial;                                     // 0x1554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodySeverelyInjuredMaterial;                              // 0x1558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfSeverelyInjuredMaterial;                             // 0x155C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnServerTRexBreakOut;                                     // 0x1560(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TRexBreakOutCD;                                           // 0x156C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TRexBreakOutInterval;                                     // 0x1570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LightInjuredMat;                                          // 0x1574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeavyInjuredMat;                                          // 0x1578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyPhysCD;                                             // 0x157C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETyranState                                        STCurWalkState;                                           // 0x1580(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1581(0x0007) MISSED OFFSET
	struct FName                                       BrokenCapsuleSocket;                                      // 0x1588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleRadius;                                      // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleHeight;                                      // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenDelayTime;                                          // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadAfterTime;                                            // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BioVehicleDestroyDelegate;                                // 0x15A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DeadDirection;                                            // 0x15AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x15AD(0x0027) MISSED OFFSET
	float                                              RoarCurrentCD;                                            // 0x15D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRoaring;                                               // 0x15D8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x15D9(0x000B) MISSED OFFSET
	TMap<class AActor*, float>                         BioModifyVehicleTimes;                                    // 0x15E4(0x0050) (ZeroConstructor)
	class URaptorMovementComponent*                    TRexMovementComponent;                                    // 0x1620(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HurtInterval;                                             // 0x1624(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1628(0x0004) MISSED OFFSET
	float                                              HurtDamageAmount;                                         // 0x162C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1630(0x0008) MISSED OFFSET
	class UAnimMontage*                                HurtMontage;                                              // 0x1638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x163C(0x0004) MISSED OFFSET
	struct FName                                       LeftFootBoneName;                                         // 0x1640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexVehicle");
		return pStaticClass;
	}


	void ShowRoarOverSpeedTips();
	void ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius);
	void ServerStopRoar();
	void ServerRoar();
	void ServerBreakOut(bool bEnable);
	void PrepareApplyRoarAttack();
	void OnTRexHPCHanged(float NewHP, float HPMax);
	void OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason);
	void OnRep_bIsRoaring();
	class URaptorMovementComponent* GetVehicleMovement();
	bool GetVehicleBreakOutState();
	bool GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results);
	void EndRoarAttack();
	void ClientHandleVehicleDead(bool VehicleDeadDirection);
	bool CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target);
	void CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime);
	void BroadCastStopMontage();
	void BroadCastPlayRoarMontage();
	void BroadCastClientDrawSphere(const struct FVector& Center, float Radius);
	void BreakOut(bool bEnable);
	void ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter);
	void ApplyRoarAttack();
};


// Class Addons.UAERotatingMovementComponent
// 0x0068 (0x0180 - 0x0118)
class UUAERotatingMovementComponent : public URotatingMovementComponent
{
public:
	float                                              MoveToTargetSeconds;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveToTargetSecondsSum;                                   // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePitch;                                             // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreYaw;                                               // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRoll;                                              // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	struct FRotator                                    TargetRotation;                                           // 0x0124(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RotationLagSpeed;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationNearlyToTarget;                                   // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	struct FQuat                                       TargetQuat;                                               // 0x0140(0x0010) (Transient, IsPlainOldData)
	struct FQuat                                       TargetOldQuat;                                            // 0x0150(0x0010) (Transient, IsPlainOldData)
	class ASTExtraBaseCharacter*                       TargetCharacter;                                          // 0x0160(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0164(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAERotatingMovementComponent");
		return pStaticClass;
	}


	void SetRotationToTarget(const struct FRotator& InTargetRotation, float MoveSeconds, const struct FVector& TargetLocation);
	void FaceToTarget(class ASTExtraBaseCharacter* InTargetCharacter);
	void EnableRotationToTarget(bool bEnable);
	void EnableRotation(bool bEnable);
};


// Class Addons.UAESkillAction_ActionsBunch
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ActionsBunch : public UUAESkillAction
{
public:
	TArray<struct FBunchAction>                        Actions;                                                  // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActionsBunch");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActionWithConditions
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_ActionWithConditions : public UUAESkillAction
{
public:
	TArray<class UUTSkillCondition*>                   Conditions;                                               // 0x0078(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UUTSkillAction*                              Action;                                                   // 0x0084(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillAction*                              FalseAction;                                              // 0x0088(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceUndoAction;                                         // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceReset;                                              // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActionWithConditions");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActiveSkill
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ActiveSkill : public UUAESkillAction
{
public:
	bool                                               bIsCastSkill;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSetSkillActive;                                        // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                SkillActiveButtonSlot;                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActiveSkill");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_Activities
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_Activities : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Activities");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActivityInteractiveFinished
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ActivityInteractiveFinished : public UUAESkillAction
{
public:
	bool                                               bCheckActivityActor;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActivityInteractiveFinished");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActivityInteractiveReset
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ActivityInteractiveReset : public UUAESkillAction
{
public:
	bool                                               bCheckActivityActor;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActivityInteractiveReset");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActivityInteractiveStarted
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ActivityInteractiveStarted : public UUAESkillAction
{
public:
	bool                                               bCheckActivityActor;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActivityInteractiveStarted");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActorFall
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ActorFall : public UUAESkillAction
{
public:
	bool                                               bDisableGravity;                                          // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FVector                                     moveVelocity;                                             // 0x007C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActorFall");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ActorJump
// 0x0038 (0x00B0 - 0x0078)
class UUAESkillAction_ActorJump : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Speed;                                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFollowTarget;                                      // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                JumpStartOffsetZ;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                JumpHighThreshold;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckOverlap;                                      // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              MinDistanceFromTarget;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZScale;                                    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   JumpSpeedRange;                                           // 0x0098(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              JumpSpeedInterval;                                        // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetOfTargetDir;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPercentOffsetOfTargetDir;                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActorJump");
		return pStaticClass;
	}


	void OnActorLanded(const struct FHitResult& InHitResult);
	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_ActorMove
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_ActorMove : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Speed;                                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFollowTarget;                                      // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortMovementWhenFinished;                               // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckOverlap;                                      // 0x008E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	float                                              MinDistanceFromTarget;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAwayFrom;                                            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              DistanceTolerance;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              OverlapObjectTypes;                                       // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActorMove");
		return pStaticClass;
	}


	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_ActorMoveToLocation
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_ActorMoveToLocation : public UUAESkillAction
{
public:
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortMovementWhenFinished;                               // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckOverlap;                                      // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ActorMoveToLocation");
		return pStaticClass;
	}


	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_AddCameraViewInfo
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_AddCameraViewInfo : public UUAESkillAction
{
public:
	bool                                               bNotUseSelect;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                SelectCurve;                                              // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FViewInfoCurve>                      WeighstCurves;                                            // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddCameraViewInfo");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddCmptToPicker
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_AddCmptToPicker : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCheckDuplicated;                                         // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepComponent;                                           // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	TArray<class UClass*>                              Components;                                               // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddCmptToPicker");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddForceEquipItem
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_AddForceEquipItem : public UUAESkillAction
{
public:
	int                                                SlotID;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddForceEquipItem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddItem
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_AddItem : public UUAESkillAction
{
public:
	int                                                ItemId;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EBattleItemPickupReason                            PickupType;                                               // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddItem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddMapMark
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_AddMapMark : public UUAESkillAction
{
public:
	bool                                               bOnClient;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                TypeId;                                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0080(0x000C) (Edit, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAddMarkFlag                                       MapAdded;                                                 // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0094(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EMarkDispatchRange                                 DispatchRange;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalData;                                               // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x009A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddMapMark");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddRandomBuff
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_AddRandomBuff : public UUAESkillAction
{
public:
	TArray<struct FRandomBuffItem>                     RandomBuffList;                                           // 0x0078(0x000C) (Edit, ZeroConstructor)
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              IgnoredActorClasses;                                      // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddRandomBuff");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddRecoveryPrompt
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_AddRecoveryPrompt : public UUAESkillAction
{
public:
	struct FString                                     ShowDataKey;                                              // 0x0078(0x000C) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddRecoveryPrompt");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AddRemoveBuff
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_AddRemoveBuff : public UUAESkillAction
{
public:
	bool                                               IsAddBuff;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                BuffID;                                                   // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddLayerCount;                                            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              IgnoredActorClasses;                                      // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bWhetherStopBuffAfterStopPhase;                           // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWhetherStopBuffAfterStopSkill;                           // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWhetherStopBuffBeforeCloseSkill;                         // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x009B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AddRemoveBuff");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AirJump
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_AirJump : public UUAESkillAction
{
public:
	struct FCustomSkillMoveData                        MoveData;                                                 // 0x0078(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AirJump");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AllowPawnState
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_AllowPawnState : public UUAESkillAction
{
public:
	bool                                               bResetRecover;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForAttachPawn;                                           // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	TArray<EPawnState>                                 AllowPawnStates;                                          // 0x007C(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AllowPawnState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ApplyRadiusDamage
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_ApplyRadiusDamage : public UUAESkillAction
{
public:
	bool                                               bAirAttackDamage;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              BaseDamage;                                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MiniDamage;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Momentum;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FalloffParam;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalDamagForVehicle;                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollitionFreeRadius;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsVehicleExplode;                                         // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDrawDebugLine;                                          // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ApplyRadiusDamage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ApplyVehicleWeaponBoard
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ApplyVehicleWeaponBoard : public UUAESkillAction
{
public:
	TArray<struct FVehicleWeaponBoardDataConfigItem>   DataConfigList;                                           // 0x0078(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ApplyVehicleWeaponBoard");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AttachActor
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_AttachActor : public UUAESkillAction
{
public:
	struct FSkillAction_AttachActorCreateData          AttachActorData;                                          // 0x0078(0x0030) (Edit)
	bool                                               bForceCheckSWPS_None;                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	class AActor*                                      AttachedActor;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AttachActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AttachMesh
// 0x0158 (0x01D0 - 0x0078)
class UUAESkillAction_AttachMesh : public UUAESkillAction
{
public:
	struct FName                                       SocketName;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentTag;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepRelative;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FTransform                                  AttachMeshOffset;                                         // 0x0090(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  AttachMeshOffset_F;                                       // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseAttachParentBound;                                    // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyedAtPhaseEnd;                                     // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyedAtSkillEnd;                                     // 0x00F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGender;                                                  // 0x00F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x00F4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachMesh.PropMesh
	unsigned char                                      UnknownData03[0x28];                                      // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachMesh.PropMesh_F
	unsigned char                                      UnknownData04[0x28];                                      // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachMesh.PropAnim
	bool                                               bAnimLoop;                                                // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData06[0x28];                                      // 0x0171(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachMesh.StaticMesh
	unsigned char                                      UnknownData07[0x28];                                      // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachMesh.StaticMesh_F
	unsigned char                                      UnknownData08[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AttachMesh");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AttachPawnPlayMontage
// 0x0048 (0x00C0 - 0x0078)
class UUAESkillAction_AttachPawnPlayMontage : public UUAESkillAction
{
public:
	class UClass*                                      ActorClass;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_AttachPawnPlayMontage.AnimMontage
	bool                                               bAnimStopAfterPhase;                                      // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FName                                       StartSectionName;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPrevMontage;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopMontageWithOriginal;                                 // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AttachPawnPlayMontage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AttackAdsorb
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_AttackAdsorb : public UUAESkillAction
{
public:
	class UCurveFloat*                                 AngleSpeedCurve;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AngleSpeedRatioCurve;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdsorbTime;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AdsorbEndStringEventName;                                 // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AttackAdsorb");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_AttrModify
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_AttrModify : public UUAESkillAction
{
public:
	bool                                               AuthorityOnly;                                            // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FAttrModifyItem                             AttrModifier;                                             // 0x007C(0x0038) (Edit)
	bool                                               bAutoRemove;                                              // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // 0x00B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_AttrModify");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_BeginThrow
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_BeginThrow : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_BeginThrow");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_BindDelegate
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_BindDelegate : public UUAESkillAction
{
public:
	EDelegateBindType                                  BindDelegateType;                                         // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	class UUAESkillPicker*                             BindObjectPicker;                                         // 0x007C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BindDelegateHandleName;                                   // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaEventType;                                             // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaEventID;                                               // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UUTSkillAction*                              Action;                                                   // 0x00A0(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUnbindAfterPhase;                                        // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnbindAfterSkill;                                        // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_BindDelegate");
		return pStaticClass;
	}


	void OnDelegateBindCallback();
};


// Class Addons.UAESkillAction_BreakGlass
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_BreakGlass : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_BreakGlass");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CallAirAttack
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_CallAirAttack : public UUAESkillAction
{
public:
	float                                              FlightHeight;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeaLevelHeight;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAirAttackConfig                            AirAttackConfig;                                          // 0x0080(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CallAirAttack");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CallAVehicle
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_CallAVehicle : public UUAESkillAction_Activities
{
public:
	struct FSpawnVehicleConfig                         SpawnVehicleConfig;                                       // 0x0078(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bNeedConsumeItem;                                         // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	int                                                ConsumeItemID;                                            // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ConsumeItemType;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ConsumeItemCount;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CallAVehicle");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CameraAnim
// 0x0078 (0x00F0 - 0x0078)
class UUAESkillAction_CameraAnim : public UUAESkillAction
{
public:
	bool                                               bLocalOnly;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnDoAction;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearAll;                                                // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007B(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_CameraAnim.CameraAnimTemplate
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_CameraAnim.PostCameraAnimTemplate
	bool                                               bResetCamera;                                             // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTPP;                                                // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00D2(0x0001) MISSED OFFSET
	bool                                               bLockCameraRotation;                                      // 0x00D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendOut;                                                // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              playSpeed;                                                // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BBPlaySpeedName;                                          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CameraAnim");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CameraShake
// 0x0048 (0x00C0 - 0x0078)
class UUAESkillAction_CameraShake : public UUAESkillAction
{
public:
	bool                                               bShakeWithCurve;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	class UCurveFloat*                                 DistanceDampCurve;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeTemplate;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0084(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_CameraShake.SoftCameraShakeTemplate
	float                                              ShakeScale;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnDoAction;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetAction;                                             // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CameraShake");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CarryBack
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_CarryBack : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             CarryBackPicker;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECarryBackSkillActionType                          ActionType;                                               // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	TArray<float>                                      CarryBackDegrees;                                         // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<ECarryBackDirection>                        CarryBackDirection;                                       // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CarryBack");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CarryToVehicle
// 0x0048 (0x00C0 - 0x0078)
class UUAESkillAction_CarryToVehicle : public UUAESkillAction
{
public:
	ECarryToVehicleActionState                         ActionState;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FVector                                     CheckCollisionBox;                                        // 0x007C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bEnableDebugTrace;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              DebugTraceDuration;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceLength;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionChannels;                                        // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>                     CheckBarrierCollisionChannel;                             // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	TArray<class UClass*>                              IngoreActorClass;                                         // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<ECarryToVehicleDirection>                   FindVehiclePriorityArray;                                 // 0x00B0(0x000C) (Edit, ZeroConstructor)
	class USTCharacterCarryBackComp*                   BeCarriedBackComp;                                        // 0x00BC(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CarryToVehicle");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CastUIMsg
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_CastUIMsg : public UUAESkillAction
{
public:
	TArray<struct FString>                             RealDoMsg;                                                // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             UndoMsg;                                                  // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ResetMsg;                                                 // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CastUIMsg");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ChangeAkParams
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_ChangeAkParams : public UUAESkillAction
{
public:
	TArray<struct FAKSwitchParam>                      AKSwitchParams;                                           // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAKRTPCParam>                        AKRTPCParams;                                             // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUpdateAkPos;                                             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetClear;                                              // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoClear;                                               // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0093(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ChangeAkParams");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ChangeMaterial
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ChangeMaterial : public UUAESkillAction
{
public:
	class UMaterialInstance*                           Material;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ChangeMaterial");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ChangeParticleParam
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_ChangeParticleParam : public UUAESkillAction
{
public:
	struct FName                                       ParticleCompTagName;                                      // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleSysParam>                   DoInstanceParameters;                                     // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FParticleSysParam>                   UndoInstanceParameters;                                   // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ChangeParticleParam");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ChangePoseState
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ChangePoseState : public UUAESkillAction
{
public:
	TEnumAsByte<ESTEPoseState>                         TargetPoseState;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCD;                                                // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCheck;                                             // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ChangePoseState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ChangeWearing
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_ChangeWearing : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ChangeWearing");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CharMoveByPath
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_CharMoveByPath : public UUAESkillAction
{
public:
	class UCurveVector*                                DeltaCurve;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DeltaCurveX;                                              // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DeltaCurveZ;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeRatio;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDragUponGround;                                          // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPhysMove;                                                // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckOverlap;                                      // 0x008E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortMovementWhenFinished;                               // 0x008F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CharMoveByPath");
		return pStaticClass;
	}


	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_ClearBlackboard
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ClearBlackboard : public UUAESkillAction
{
public:
	TArray<struct FUAEBlackboardKeySelector>           TargetKeys;                                               // 0x0078(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ClearBlackboard");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ConsoleCommand
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_ConsoleCommand : public UUAESkillAction
{
public:
	struct FString                                     CMDkey;                                                   // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseInt;                                                  // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerSide;                                              // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutonomousSide;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ConsoleCommand");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ConsumeHandleItem
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ConsumeHandleItem : public UUAESkillAction
{
public:
	int                                                ItemId;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isGrenade;                                                // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCalTakeItemFlow;                                         // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedNotifyLobbyServer;                                  // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PostEvent;                                                // 0x0087(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ConsumeHandleItem");
		return pStaticClass;
	}


	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
};


// Class Addons.UAESkillAction_CoolDown
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_CoolDown : public UUAESkillAction
{
public:
	bool                                               bResetCD;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                SkillID;                                                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CoolDownIndex;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CoolDown");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CountReport
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_CountReport : public UUAESkillAction
{
public:
	EEventCounterDefine                                CountDefine;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CountReport");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_CustomEvent
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_CustomEvent : public UUAESkillAction
{
public:
	TEnumAsByte<EUAESkillEvent>                        CustomEvent;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     UTCustomEvent;                                            // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_CustomEvent");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_DestroyActor
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_DestroyActor : public UUAESkillAction
{
public:
	struct FUAEBlackboardKeySelector                   TargetKey;                                                // 0x0078(0x0008) (Edit)
	float                                              LifeTime;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAtReset;                                          // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAtUndo;                                           // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_DestroyActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_DisablePawnState
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_DisablePawnState : public UUAESkillAction
{
public:
	class UUTSkillPicker*                              PawnPicker;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDisablePawnStateInfo>               PendingDisablePawnStates;                                 // 0x007C(0x000C) (Edit, ZeroConstructor)
	bool                                               bReverseAlteredStatesOnUndo;                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseAlteredStatesOnReset;                             // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_DisablePawnState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_DrawCrossHair
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_DrawCrossHair : public UUAESkillAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_DrawCrossHair.CrossHairTexture
	float                                              Scale;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopAfterPhase;                                           // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopAfterSkill;                                           // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_DrawCrossHair");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_DropItem
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_DropItem : public UUAESkillAction
{
public:
	TArray<TEnumAsByte<ESurviveWeaponPropSlot>>        DropWeaponSlots;                                          // 0x0078(0x000C) (Edit, ZeroConstructor)
	TArray<struct FSkillAction_DropItemData>           DropItemss;                                               // 0x0084(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_DropItem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_EnableAttrModifier
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_EnableAttrModifier : public UUAESkillAction
{
public:
	struct FString                                     AttrConfigItemName;                                       // 0x0078(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_EnableAttrModifier");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_EnableBuildSystem
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_EnableBuildSystem : public UUAESkillAction
{
public:
	int                                                BuildingID;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBSSkillActionType>                    ActionType;                                               // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBSSkillActionType>                    ActionTypeOnEnd;                                          // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuildingViewType>                     BuildViewType;                                            // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAfterPLacement;                                      // 0x0083(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnPhaseFinish;                                       // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReadIDFromBB;                                            // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   KeySelector;                                              // 0x0088(0x0008) (Edit, BlueprintVisible)
	bool                                               bReadAvatarIDFromBB;                                      // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   AvatarKeySelector;                                        // 0x0098(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_EnableBuildSystem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_OverrideBuildingConfiguration
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_OverrideBuildingConfiguration : public UUAESkillAction
{
public:
	int                                                BuildingID;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ENetRole>>                      AppliedRole;                                              // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bReadIDFromBB;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   KeySelector;                                              // 0x0090(0x0008) (Edit, BlueprintVisible)
	bool                                               bOverrideConstructable;                                   // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideConstructable_Start;                             // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideConstructable_End;                               // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x009B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_OverrideBuildingConfiguration");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_EnableEnemyPosMark
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_EnableEnemyPosMark : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             EnemyPicker;                                              // 0x0078(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      NetActorTemplate;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SetDataFunctionName;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_EnableEnemyPosMark");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_EnableHandleItem
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_EnableHandleItem : public UUAESkillAction
{
public:
	int                                                ItemId;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_EnableHandleItem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_EnableMove
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_EnableMove : public UUAESkillAction
{
public:
	bool                                               bRunOnServer;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMove;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              EnableSeconds;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_EnableMove");
		return pStaticClass;
	}


	void UndoAction_Internal();
	bool RealDoAction_Internal();
};


// Class Addons.UAESkillAction_FaceTarget
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_FaceTarget : public UUAESkillAction
{
public:
	bool                                               bTurnImmediately;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceWithCurve;                                           // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FString                                     FaceEndStringEventName;                                   // 0x007C(0x000C) (Edit, ZeroConstructor)
	class UCurveFloat*                                 AngleToTimeCurve;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableAngle;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceTarget;                                             // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPickFromTarget;                                          // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0098(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x009C(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsPlayer;                                                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FaceTarget");
		return pStaticClass;
	}


	void OnFaceActionEnd(class UUTSkillManagerComponent* SkillMgr);
};


// Class Addons.UAESkillAction_FindLocation
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_FindLocation : public UUAESkillAction
{
public:
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   TargetKeySelector;                                        // 0x0080(0x0008) (Edit, BlueprintVisible)
	bool                                               bRunOnDS;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnSimulate;                                           // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnAutonomous;                                         // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x008B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FindLocation");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_FindMultiTarget
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_FindMultiTarget : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FUAEBlackboardKeySelector>           TargetKeySelectorList;                                    // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bRunOnDS;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnSimulate;                                           // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnAutonomous;                                         // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x008B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FindMultiTarget");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_FindTarget
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_FindTarget : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   TargetKeySelector;                                        // 0x0080(0x0008) (Edit, BlueprintVisible)
	bool                                               bUsedAsPhaseEffectPicker;                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnDS;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnSimulate;                                           // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnAutonomous;                                         // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlackboardWeakObject;                                    // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FindTarget");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_FinishThrow
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_FinishThrow : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FinishThrow");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_FollowMoveActor
// 0x00F8 (0x0170 - 0x0078)
class UUAESkillAction_FollowMoveActor : public UUAESkillAction
{
public:
	struct FUAEBlackboardKeySelector                   MoveTargetKey;                                            // 0x0078(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   TargetLocationKey;                                        // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   SourceLocationKey;                                        // 0x0088(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   RelativeLocationKey;                                      // 0x0090(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   TargetYawKey;                                             // 0x0098(0x0008) (Edit, BlueprintVisible)
	float                                              FollowSpeed;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowStartDeceleratePercent;                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowSpeedDecelerate;                                    // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowSpeedMin;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistanceDecelerateSqMin;                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistanceMaxSq;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearToTargetDistSq;                                       // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveDelaySeconds;                                         // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeSocketLoc;                                        // 0x00C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   MoveActorPitchLimitKey;                                   // 0x00D0(0x0008) (Edit, BlueprintVisible)
	struct FString                                     HitStrEvent;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShouldCheckOverlap;                                      // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	float                                              ShapeInflation;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShapeZRate;                                               // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLineTrace;                                               // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              RotationLagSpeed;                                         // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CharacterSourceAttachSocketName;                          // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponSourceAttachSocketName;                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FName>                            VehicleSourceAttachSocketNames;                           // 0x0108(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FUAEBlackboardKeySelector>           KeyArray;                                                 // 0x0144(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SynLocEventName;                                          // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   VehicleSourceAttachKey;                                   // 0x0160(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   CenterZOffsetKey;                                         // 0x0168(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_FollowMoveActor");
		return pStaticClass;
	}


	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_GasCan
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_GasCan : public UUAESkillAction
{
public:
	bool                                               RunOnServer;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              GasValue;                                                 // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_GasCan");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_GrenadeSwitchBackToWeapon
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_GrenadeSwitchBackToWeapon : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_GrenadeSwitchBackToWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_HideMainControlUI
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_HideMainControlUI : public UUAESkillAction
{
public:
	struct FSkillAction_HideMainUIData                 UIData;                                                   // 0x0078(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_HideMainControlUI");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_HideMesh
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_HideMesh : public UUAESkillAction
{
public:
	bool                                               bResetAfterPhase;                                         // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              HideTime;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyHideCurrentMeshs;                                    // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_HideMesh");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_HidePet
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_HidePet : public UUAESkillAction
{
public:
	bool                                               bReset;                                                   // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndo;                                                    // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_HidePet");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_HideSkillButton
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_HideSkillButton : public UUAESkillAction
{
public:
	bool                                               bBroadToSpectator;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_HideSkillButton");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_Invincible
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_Invincible : public UUAESkillAction
{
public:
	bool                                               RunOnServer;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Invincible");
		return pStaticClass;
	}


	void UndoAction_Internal();
	bool RealDoAction_Internal();
};


// Class Addons.UAESkillAction_Jump
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_Jump : public UUAESkillAction
{
public:
	bool                                               bUseBlackBoardData;                                       // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   AddedVelocitykey;                                         // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     AddedVelocity;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bFollowingActorRotation;                                  // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowingViewRotation;                                   // 0x0095(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Jump");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_JumpByStages
// 0x0090 (0x0108 - 0x0078)
class UUAESkillAction_JumpByStages : public UUAESkillAction
{
public:
	unsigned char                                      bUseLocation : 1;                                         // 0x0078(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUAESkillPicker*                             SkillPicker;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EJumpStage                                         CustomJumpStage;                                          // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              OverrideGravityZScale;                                    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bResetVelocityAfterStageFinished : 1;                     // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSetLocationToBB;                                         // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	struct FName                                       BBName;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldCheckOverlap : 1;                                  // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              CapsuleSweepStepDistance;                                 // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawParabolaDebug : 1;                                   // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CapsuleScaleFactor;                                       // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OverlapFilterClasses;                                     // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FCollisionChannelResModify>          ModifyCollisionChannelResArr;                             // 0x00B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bAutoAdjustWhenOverlap : 1;                               // 0x00C0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              TriggerSphereRadius;                                      // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLength;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoAdjustMaxDuration;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoAdjustJumpHeight : 1;                                // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FVector                                     JumpSpeedRange;                                           // 0x00D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              CustomMaxJumpHeight;                                      // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomLandingOffsetXY;                                    // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomLandingOffsetZ;                                     // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckLandingOccupied : 1;                                // 0x00EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              CheckOccupiedHeightThreshold;                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BuffIDToOccupier;                                         // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFinishAfterLanded : 1;                                   // 0x00F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_ReachOccupiedHeight;                          // 0x0100(0x0008)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_JumpByStages");
		return pStaticClass;
	}


	bool Rising();
	void OnActorLanded(const struct FHitResult& InHitResult);
	bool Hovering();
	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool FreeFalling();
	bool Diving();
};


// Class Addons.UAESkillAction_JumpPhase
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_JumpPhase : public UUAESkillAction
{
public:
	int                                                NewPhaseID;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewReversePhaseID;                                        // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillCondition*                           JumpCondtion;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_JumpPhase");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_JumpPhaseWithState
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_JumpPhaseWithState : public UUAESkillAction
{
public:
	int                                                NewPhaseID;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchSwitchStandTime;                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProneSwitchStandTime;                                     // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwitchWeaponTime;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDependSwitchWeaponDone;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchBackWhenFinish;                                    // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	class UUTSkillCondition*                           JumpCondition;                                            // 0x008C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_JumpPhaseWithState");
		return pStaticClass;
	}


	void HandleChangeCurrentUsingWeapon(TEnumAsByte<ESurviveWeaponPropSlot> TargetChangeSlot);
};


// Class Addons.UAESkillAction_JumpToRandomPhase
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_JumpToRandomPhase : public UUAESkillAction
{
public:
	int                                                StartIndex;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCanBeCurIndex;                                          // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	class UUTSkillCondition*                           JumpCondtion;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_JumpToRandomPhase");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_LaunchMove
// 0x0078 (0x00F0 - 0x0078)
class UUAESkillAction_LaunchMove : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillLocationPicker*                      DestLocationPicker;                                       // 0x007C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSetNullBase;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomDestLocation;                                   // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FVector                                     CustomDestDir;                                            // 0x0084(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomDestDistance;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotUseCurveSpeed;                                        // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              LaunchSpeed;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMoveSpeedCurve>                     LaunchSpeedCurves;                                        // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AcceptableRadius;                                         // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTargetStop;                                         // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReachRangeStop;                                          // 0x00AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTickUpdateTargetLocation;                                // 0x00AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCalTargetDisContainZ;                                    // 0x00AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideZOrder;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddGroundMoveProtection;                                 // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              GroundMaxInclination;                                     // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSlowDownWhenStopLaunch;                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              SlowDownRate;                                             // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugLine;                                           // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlongCharacterDir;                                       // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	class UCurveFloat*                                 ZSpeedCurve;                                              // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AlongLaunchSpeedCurve;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   EstimatedTimeKey;                                         // 0x00D0(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   TargetLocationKey;                                        // 0x00D8(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   LaunchMoveDistanceKey;                                    // 0x00E0(0x0008) (Edit)
	unsigned char                                      UnknownData06[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_LaunchMove");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_LaunchToxicGrnd
// 0x00D0 (0x0148 - 0x0078)
class UUAESkillAction_LaunchToxicGrnd : public UUAESkillAction
{
public:
	class UClass*                                      ProjectileActorTemplate;                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_LaunchToxicGrnd.SoftProjectileActorTemplate
	bool                                               bReadProjectileActorFromBB;                               // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FName                                       ProjectileActorBBK;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPickFromTarget;                                          // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiTarget;                                             // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x00BC(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PickNum;                                                  // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x00C4(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bOnlySpawnActorInServer;                                  // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCharacterHeadLocation;                                // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPVEProjectileInitLocationType                     InitLocationType;                                         // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	struct FVector                                     ProjectileLineOffset;                                     // 0x00CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetActorOffset;                                        // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayFlyTime;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLifeSpan;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepProjectActorScale;                                    // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHighArc;                                              // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	TArray<struct FHighArcParam>                       HighArcGravityScales;                                     // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsHoming;                                                // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              HomingAccelerationMagnitude;                              // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnDirectionRadSpeed;                                    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRay;                                                   // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHorizontal;                                            // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedCheckMaxDistance;                                    // 0x011E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCachedTargetLocation;                                 // 0x011F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTargetActorLocationWhenSpawn;                         // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              ExplodeRadius;                                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplodeDamage;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddDistanceRatio;                                         // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddScaleRatio;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddExplodeRatio;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddDamageRatio;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxStoneEnergyTime;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_LaunchToxicGrnd");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_LockCameraViewType
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_LockCameraViewType : public UUAESkillAction
{
public:
	TEnumAsByte<ELockPPType>                           LockType;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockSwitch;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreAfterPhase;                                       // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreAfterSkill;                                       // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_LockCameraViewType");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_Log
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_Log : public UUAESkillAction
{
public:
	struct FString                                     LogString;                                                // 0x0078(0x000C) (Edit, ZeroConstructor)
	bool                                               bPrintEnd;                                                // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Log");
		return pStaticClass;
	}


	void UndoAction_Internal();
};


// Class Addons.UAESkillAction_MaintenanceVehicle
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_MaintenanceVehicle : public UUAESkillAction
{
public:
	bool                                               RunOnServer;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              PercentValue;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               fixtire;                                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_MaintenanceVehicle");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_MarkCurrentUseWeapon
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_MarkCurrentUseWeapon : public UUAESkillAction
{
public:
	struct FName                                       BlackboardSelectorKey;                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_MarkCurrentUseWeapon");
		return pStaticClass;
	}


	bool RealDoAction_Internal();
};


// Class Addons.UAESkillAction_MobHide
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_MobHide : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_MobHide");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ModifyProperty
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_ModifyProperty : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             ObjectPicker;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     AttrName;                                                 // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESkillModifyPropertyType>              AttrType;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndo;                                                    // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewBool;                                                  // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewInt;                                                   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NewFloat;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewString;                                                // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ModifyProperty");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_MoveToBlackboardLocation
// 0x0038 (0x00B0 - 0x0078)
class UUAESkillAction_MoveToBlackboardLocation : public UUAESkillAction
{
public:
	struct FUAEBlackboardKeySelector                   MoveTargetKey;                                            // 0x0078(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   LocationKey;                                              // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   CheckBlockKey;                                            // 0x0088(0x0008) (Edit, BlueprintVisible)
	bool                                               bShouldCheckOverlap;                                      // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              ShapeInflation;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShapeZRate;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLineTrace;                                               // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              FollowDistanceMaxSq;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     HitStrEvent;                                              // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_MoveToBlackboardLocation");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_MoveToRelativeLocation
// 0x0120 (0x0198 - 0x0078)
class UUAESkillAction_MoveToRelativeLocation : public UUAESkillAction
{
public:
	struct FUAEBlackboardKeySelector                   MoveTargetKey;                                            // 0x0078(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   TargetLocationKey;                                        // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   SourceLocationKey;                                        // 0x0088(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   CheckBlockKey;                                            // 0x0090(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   CenterZOffsetKey;                                         // 0x0098(0x0008) (Edit, BlueprintVisible)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedValueScale;                                          // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLoc;                                              // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RelativeSocketLoc;                                        // 0x00B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRot;                                              // 0x00C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     HitStrEvent;                                              // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MoveToTargetStrEvent;                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FUAEBlackboardKeySelector>           KeyArray;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SynLocEventName;                                          // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShouldCheckOverlap;                                      // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              ShapeInflation;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShapeZRate;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLineTrace;                                               // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FName                                       CharacterSourceAttachSocketName;                          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponSourceAttachSocketName;                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FName>                            VehicleSourceAttachSocketNames;                           // 0x0120(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RelativeRotMin;                                           // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RelativeRotMax;                                           // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   MoveActorPitchLimitKey;                                   // 0x0168(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   VehicleSourceAttachKey;                                   // 0x0170(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   RelativeLocationKey;                                      // 0x0178(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   DurationTimeKey;                                          // 0x0180(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   AdditiveRelativeLocationKey;                              // 0x0188(0x0008) (Edit, BlueprintVisible)
	float                                              StartMoveRelativeHight;                                   // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_MoveToRelativeLocation");
		return pStaticClass;
	}


	void HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Addons.UAESkillAction_PeriodAction
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_PeriodAction : public UUAESkillAction
{
public:
	class UUTSkillAction*                              Action;                                                   // 0x0078(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Interval;                                                 // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHandleDeltaTimeVariance;                                 // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              CurrentTickDeltaTime;                                     // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffsetStart;                                      // 0x008C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffsetEnd;                                        // 0x0098(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PeriodAction");
		return pStaticClass;
	}


	void UndoPeriodAction(class UActorComponent* SkillManagerComponent);
	void DoPeriodAction(class UActorComponent* SkillManagerComponent);
};


// Class Addons.UAESkillAction_PickRange
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_PickRange : public UUAESkillAction
{
public:
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0078(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   LocationKey;                                              // 0x0080(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   LocationVectorKey;                                        // 0x0088(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   ResultKey;                                                // 0x0090(0x0008) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PickRange");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayAvatarAction
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_PlayAvatarAction : public UUAESkillAction
{
public:
	TMap<TWeakObjectPtr<class UActorComponent>, class UUTAvatarActionList*> ActionListMap;                                            // 0x0078(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayAvatarAction");
		return pStaticClass;
	}


	void OnAsyncLoadHandlesDone(int InAsyncLoadIndex, TArray<class UBattleItemHandleBase*> AvatarHandles, TArray<struct FItemDefineID> DefineIDList);
};


// Class Addons.UAESkillAction_PlayEmote
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_PlayEmote : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayEmote");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayEmoteAndVoice
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_PlayEmoteAndVoice : public UUAESkillAction
{
public:
	int                                                InEmoteID;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     VoiceBankName;                                            // 0x007C(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayEmoteAndVoice");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontage
// 0x0060 (0x00D8 - 0x0078)
class UUAESkillAction_PlayMontage : public UUAESkillAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_PlayMontage.AnimMontage
	bool                                               bInitAsyncLoad;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterPhase;                                       // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterSkill;                                       // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00A3(0x0005) MISSED OFFSET
	struct FName                                       IgnoreStopSectionName;                                    // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimPlayRateAdjustAttr;                                   // 0x00B0(0x000C) (Edit, ZeroConstructor)
	bool                                               bPlayMontageOnDS;                                         // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAnimation;                                           // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	struct FName                                       StartSectionName;                                         // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyJumpToSectionWhilePlaying;                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPrevMontage;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopParticleWhenMontageStop;                             // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetPawnKey;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontage_IsArmed
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_PlayMontage_IsArmed : public UUAESkillAction
{
public:
	float                                              CheckDurationConfig;                                      // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_PlayMontage_IsArmed.AnimMontage
	bool                                               AnimStopAfterPhase;                                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x00AA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage_IsArmed");
		return pStaticClass;
	}


	void OnAsyncLoadAnimResFinished(const struct FPlayMontageAsyncloadParams& LoadParams);
};


// Class Addons.UAESkillAction_PlayMontage_Pose
// 0x01C0 (0x0298 - 0x00D8)
class UUAESkillAction_PlayMontage_Pose : public UUAESkillAction_PlayMontage
{
public:
	struct FSkillPoseMontageData                       PoseMontageData;                                          // 0x00D8(0x00D0) (Edit)
	struct FSkillPoseMontageData                       FPPPoseMontageData;                                       // 0x01A8(0x00D0) (Edit)
	struct FString                                     MutexMontageGroupName;                                    // 0x0278(0x000C) (Edit, ZeroConstructor)
	struct FString                                     AkAudioStopEventName;                                     // 0x0284(0x000C) (Edit, ZeroConstructor)
	bool                                               bForceCheckSWPS_None;                                     // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage_Pose");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontage_Jump
// 0x0028 (0x02C0 - 0x0298)
class UUAESkillAction_PlayMontage_Jump : public UUAESkillAction_PlayMontage_Pose
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_PlayMontage_Jump.AnimMontage_Jump

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage_Jump");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontage_Pose_IsArmed
// 0x0500 (0x0578 - 0x0078)
class UUAESkillAction_PlayMontage_Pose_IsArmed : public UUAESkillAction
{
public:
	struct FSkillPoseMontageData                       PoseMontageDataArmed;                                     // 0x0078(0x00D0) (Edit)
	struct FSkillPoseMontageData                       FPPPoseMontageDataArmed;                                  // 0x0148(0x00D0) (Edit)
	struct FSkillPoseMontageData                       PoseMontageDataArmed_LeftHandWeapon;                      // 0x0218(0x00D0) (Edit)
	struct FSkillPoseMontageData                       FPPPoseMontageDataArmed_LeftHandWeapon;                   // 0x02E8(0x00D0) (Edit)
	struct FSkillPoseMontageData                       PoseMontageData;                                          // 0x03B8(0x00D0) (Edit)
	struct FSkillPoseMontageData                       FPPPoseMontageData;                                       // 0x0488(0x00D0) (Edit)
	float                                              CheckDurationConfig;                                      // 0x0558(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEntertainmentEnable;                                    // 0x055C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              EntertainmentRatio;                                       // 0x0560(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x0564(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0565(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage_Pose_IsArmed");
		return pStaticClass;
	}


	void OnAsyncLoadAnimResFinished(const struct FPlayMontageAsyncloadParams& LoadParams);
};


// Class Addons.UAESkillAction_PlayMontage_WeaponState
// 0x0378 (0x03F0 - 0x0078)
class UUAESkillAction_PlayMontage_WeaponState : public UUAESkillAction
{
public:
	bool                                               StopPrevMontage;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseValue;                                                // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   EstimatedTimeKey;                                         // 0x0080(0x0008) (Edit, BlueprintVisible)
	float                                              PlayRateDeviation;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTimeDeviation;                                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeaponStateToAnimPair                      emptyHand;                                                // 0x0090(0x01A8) (Edit)
	struct FWeaponStateToAnimPair                      handWeapon;                                               // 0x0238(0x01A8) (Edit)
	TArray<struct FWeaponStateToAnimPair>              WeaponTypes;                                              // 0x03E0(0x000C) (Edit, ZeroConstructor)
	bool                                               StopAnimAfterAction;                                      // 0x03EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateAnimAfterChange;                                    // 0x03ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x03EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03EF(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontage_WeaponState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontageByBlackboard
// 0x0020 (0x00F8 - 0x00D8)
class UUAESkillAction_PlayMontageByBlackboard : public UUAESkillAction_PlayMontage
{
public:
	struct FUAEBlackboardKeySelector                   Key;                                                      // 0x00D8(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E0(0x000C) UNKNOWN PROPERTY: ArrayProperty Addons.UAESkillAction_PlayMontageByBlackboard.AnimMontageArray
	unsigned char                                      UnknownData01[0xC];                                       // 0x00EC(0x000C) UNKNOWN PROPERTY: ArrayProperty Addons.UAESkillAction_PlayMontageByBlackboard.FPPAnimMontageArray

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontageByBlackboard");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontageInTick
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_PlayMontageInTick : public UUAESkillAction
{
public:
	class UAnimMontage*                                AnimMontage;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterPhase;                                       // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bConsiderPing;                                            // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ModifyWithActivityActor;                                  // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x008B(0x0005) MISSED OFFSET
	struct FName                                       StopSectionName;                                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontageInTick");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontageWithAvatarSlot
// 0x0040 (0x0118 - 0x00D8)
class UUAESkillAction_PlayMontageWithAvatarSlot : public UUAESkillAction_PlayMontage
{
public:
	TMap<EAvatarSlotType, struct FAvatarSlotAnimData>  AvatarSlotAnimDataMap;                                    // 0x00D8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontageWithAvatarSlot");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontageWithPrepare
// 0x0000 (0x00D8 - 0x00D8)
class UUAESkillAction_PlayMontageWithPrepare : public UUAESkillAction_PlayMontage
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontageWithPrepare");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayMontageWithSection
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_PlayMontageWithSection : public UUAESkillAction
{
public:
	float                                              CheckDurationConfig;                                      // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterPhase;                                       // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bConsiderPing;                                            // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	struct FName                                       StopSectionName;                                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayMontageWithSection");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayScreenAppearance
// 0x0038 (0x00B0 - 0x0078)
class UUAESkillAction_PlayScreenAppearance : public UUAESkillAction
{
public:
	struct FName                                       AppearanceKeyString;                                      // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_PlayScreenAppearance.AppearanceProviderClass
	bool                                               DisableOnLowCPU;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayScreenAppearance");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayScreenEffect
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_PlayScreenEffect : public UUAESkillAction
{
public:
	bool                                               bMaterial;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     AppearanceKeyString;                                      // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              LifeSpan;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableOnLowCPU;                                          // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          AppearanceMaterial;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FName                                       MatInstParamName;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ParamCurve;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayScreenEffect");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlaySequence
// 0x0058 (0x00D0 - 0x0078)
class UUAESkillAction_PlaySequence : public UUAESkillAction
{
public:
	struct FSkillAction_SequenceCreateData             SequenceCreateData;                                       // 0x0078(0x0058) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlaySequence");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlaySpecialLevelSequence
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_PlaySpecialLevelSequence : public UUAESkillAction
{
public:
	TEnumAsByte<ECharSpecialLevelSequenceType>         SpecialLevelSeqType;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlaySpecialLevelSequence");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayVehicleMontage
// 0x0060 (0x00D8 - 0x0078)
class UUAESkillAction_PlayVehicleMontage : public UUAESkillAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_PlayVehicleMontage.AnimMontage
	bool                                               bInitAsyncLoad;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterPhase;                                       // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AnimStopAfterSkill;                                       // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00A3(0x0005) MISSED OFFSET
	struct FName                                       IgnoreStopSectionName;                                    // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimPlayRateAdjustAttr;                                   // 0x00B0(0x000C) (Edit, ZeroConstructor)
	bool                                               bPlayMontageOnDS;                                         // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAnimation;                                           // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	struct FName                                       StartSectionName;                                         // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyJumpToSectionWhilePlaying;                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPrevMontage;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopParticleWhenMontageStop;                             // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetPawnKey;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayVehicleMontage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PlayWeaponMontage
// 0x0050 (0x00C8 - 0x0078)
class UUAESkillAction_PlayWeaponMontage : public UUAESkillAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_PlayWeaponMontage.AnimMontage
	bool                                               AnimStopAfterPhase;                                       // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayMontageOnDS;                                         // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAnimation;                                           // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00A3(0x0005) MISSED OFFSET
	struct FName                                       StartSectionName;                                         // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPrevMontage;                                         // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FName                                       StartingSection;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PlayWeaponMontage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PostEventAtLoc
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_PostEventAtLoc : public UUAESkillAction
{
public:
	class UAkAudioEvent*                               in_pAkEvent;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PostEventAtLoc");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PostLuaEvent
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_PostLuaEvent : public UUAESkillAction
{
public:
	TArray<struct FPostEventParams>                    ExecuteEvents;                                            // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPostEventParams>                    EndEvents;                                                // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PostLuaEvent");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PostOneLuaEvent
// 0x0088 (0x0100 - 0x0078)
class UUAESkillAction_PostOneLuaEvent : public UUAESkillAction
{
public:
	struct FString                                     ExecuteEventType;                                         // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ExecuteEventId;                                           // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndEventType;                                             // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndEventId;                                               // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bWhetherPostEndEventsAfterStopPhase;                      // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAfterSkill;                                          // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerEventWithFilter;                                   // 0x00AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00AB(0x0001) MISSED OFFSET
	TArray<TEnumAsByte<ENetRole>>                      TriggerSides;                                             // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x00B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FUAEBlackboardKeySelector>           BBKeySelectors;                                           // 0x00F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PostOneLuaEvent");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_PutDown
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_PutDown : public UUAESkillAction
{
public:
	EPutDownSkillActionType                            ActionType;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FVector                                     CheckCollisionBox;                                        // 0x007C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FrontCheckVector;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   BackCheckVector;                                          // 0x0090(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UClass*>                              IngoreActorClass;                                         // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDebugCollisionBox;                                       // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_PutDown");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_QuickMove
// 0x0068 (0x00E0 - 0x0078)
class UUAESkillAction_QuickMove : public UUAESkillAction
{
public:
	struct FDirectMoveData                             MoveData;                                                 // 0x0078(0x0038) (Edit, BlueprintVisible)
	bool                                               bUsePhaseTimeForMove;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bManualExitAfterReset;                                    // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ServerIgnoreMovementCheck;                                // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedSetMovementBaseNull;                                 // 0x00B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceViewDirection;                                       // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceForward;                                             // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBlackBoardDirection;                                   // 0x00B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFaceToTargetLocation;                               // 0x00B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceToTargetLocationOnlyChangeYaw;                       // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReadTargetFromBB;                                        // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   TargetKeySelector;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible)
	bool                                               bPickLocation;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNetCompensate;                                           // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   MoveStartTimeKeySelector;                                 // 0x00D8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_QuickMove");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_RandomAction
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_RandomAction : public UUAESkillAction
{
public:
	TArray<struct FRandomActionGroup>                  SkillCandidates;                                          // 0x0078(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_RandomAction");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_RecordSkillTouch
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_RecordSkillTouch : public UUAESkillAction
{
public:
	ESkillTouchEvent                                   SkillTouchEvent;                                          // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   BBKeyDownTime;                                            // 0x0080(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   BBKeyUpTime;                                              // 0x0088(0x0008) (Edit)
	struct FUAEBlackboardKeySelector                   BBKeyTouchTime;                                           // 0x0090(0x0008) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_RecordSkillTouch");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_Recovery
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_Recovery : public UUAESkillAction
{
public:
	struct FString                                     PropertyName;                                             // 0x0078(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<ERecoveryType>                         RecoveryType;                                             // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EValueType>                            ValueType;                                                // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	float                                              RecoveryValue;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryLimit;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     MaxPropertyName;                                          // 0x0090(0x000C) (Edit, ZeroConstructor)
	bool                                               RunOnServer;                                              // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecoveryReasonType>                   ReasonType;                                               // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasEffectWhenNearDeath;                                   // 0x009E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Recovery");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_RecoveryCharAnim
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_RecoveryCharAnim : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_RecoveryCharAnim");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ReplaceCharAnim
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ReplaceCharAnim : public UUAESkillAction
{
public:
	TArray<struct FSkillReplaceCharAnimData>           AnimDataList;                                             // 0x0078(0x000C) (Edit, ZeroConstructor)
	bool                                               bDisableTurnPose;                                         // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecoverWhenSkillPhaseEnd;                                // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecoverWhenPhaseEnd;                                     // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0087(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ReplaceCharAnim");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_RescueTeammate
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_RescueTeammate : public UUAESkillAction
{
public:
	int                                                RescueRange;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_RescueTeammate");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_RPCBlackboardV
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_RPCBlackboardV : public UUAESkillAction
{
public:
	TArray<struct FUAEBlackboardKeySelector>           KeyArray;                                                 // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsServerToClientRPC;                                     // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsServerToNetMulticastRPC;                               // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClientToServerRPC;                                     // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNetMulticastToAllClient;                                 // 0x0093(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_RPCBlackboardV");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ScaleCapsule
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ScaleCapsule : public UUAESkillAction
{
public:
	float                                              fTargetScale;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              fTargetScaleZ;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseRVO;                                                // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRevertWhenReset;                                         // 0x0082(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepCheckPassWall;                                       // 0x0083(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ScaleCapsule");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ScopeEnemy
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ScopeEnemy : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             EnemyPicker;                                              // 0x0078(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      NetActorTemplate;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SetDataFunctionName;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ScopeEnemy");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetAntidoteTime
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetAntidoteTime : public UUAESkillAction
{
public:
	float                                              AntidoteTime;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetAntidoteTime");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetBlackboardV
// 0x00A0 (0x0118 - 0x0078)
class UUAESkillAction_SetBlackboardV : public UUAESkillAction
{
public:
	struct FUAEBlackboardKeySelector                   Key;                                                      // 0x0078(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EUAEBlackboardType>                    Type;                                                     // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0081(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillAction_SetBlackboardV.ExpectedObject
	unsigned char                                      UnknownData02[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_SetBlackboardV.ExpectedClass
	unsigned char                                      ExpectedEnum;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                ExpectedInt;                                              // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedFloat;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExpectedBool;                                             // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FString                                     ExpectedString;                                           // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FName                                       ExpectedName;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExpectedVector;                                           // 0x0100(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bRandom;                                                  // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	float                                              RandomMin;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomMax;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetBlackboardV");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetCameraData
// 0x0048 (0x00C0 - 0x0078)
class UUAESkillAction_SetCameraData : public UUAESkillAction
{
public:
	bool                                               ResetCameraAfterPhase;                                    // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnroeCameraAtFPP;                                        // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bConstantLerpSpringArm;                                   // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	float                                              DelayResetCameraTime;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringArmInterpSpeedScale;                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCameraOffsetData                           SkillCameraData;                                          // 0x0084(0x002C) (Edit, BlueprintVisible)
	struct FRotator                                    SpringArmRotator;                                         // 0x00B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bResetControlRotation;                                    // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadInCapsuleLimit;                                      // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetCameraData");
		return pStaticClass;
	}


	void ResetCameraData(class UActorComponent* NewOwnerActorComponent);
};


// Class Addons.UAESkillAction_SetCollisionResponse
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetCollisionResponse : public UUAESkillAction
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    CollisionResponse;                                        // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ResetAfterPhase;                                          // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetCollisionResponse");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetMaterialParameterValueWithAvatarSlot
// 0x0048 (0x00C0 - 0x0078)
class UUAESkillAction_SetMaterialParameterValueWithAvatarSlot : public UUAESkillAction
{
public:
	EAvatarSlotType                                    SlotID;                                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurveValue;                                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	class UCurveFloat*                                 ParameterValueCurve;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) UNKNOWN PROPERTY: ArrayProperty Addons.UAESkillAction_SetMaterialParameterValueWithAvatarSlot.ReplaceMaterials
	bool                                               NeedReset;                                                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	TArray<int>                                        CheckIDList;                                              // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  CachedOriginMats;                                         // 0x00B0(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetMaterialParameterValueWithAvatarSlot");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetMoveable
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetMoveable : public UUAESkillAction
{
public:
	bool                                               SetIsMoveable;                                            // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ResetAfterPhase;                                          // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetMoveable");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetMovementMode
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetMovementMode : public UUAESkillAction
{
public:
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    CustomMovementMode;                                       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ServerIgnoreMovementCheck;                                // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySetIgnoreMovementCheck;                              // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndo;                                                    // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetMovementMode");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetPlayerState
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetPlayerState : public UUAESkillAction
{
public:
	EPawnState                                         PawnState;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SetEnter;                                                 // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetWhenPhaseEnd;                                       // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoWhenSkillEnd;                                        // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetPlayerState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetRecoveryPromptBase
// 0x0050 (0x00C8 - 0x0078)
class UUAESkillAction_SetRecoveryPromptBase : public UUAESkillAction
{
public:
	struct FHealthPredictShowData                      ShowData;                                                 // 0x0078(0x0024) (Edit)
	TEnumAsByte<EValueType>                            ValueType;                                                // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FHealthPredictShowData                      CacShowData;                                              // 0x00A0(0x0024)
	bool                                               RemoveByAddBuff;                                          // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetRecoveryPromptBase");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetRecoveryEnergyPrompt
// 0x0000 (0x00C8 - 0x00C8)
class UUAESkillAction_SetRecoveryEnergyPrompt : public UUAESkillAction_SetRecoveryPromptBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetRecoveryEnergyPrompt");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetRecoveryPrompt
// 0x0010 (0x00D8 - 0x00C8)
class UUAESkillAction_SetRecoveryPrompt : public UUAESkillAction_SetRecoveryPromptBase
{
public:
	struct FString                                     RemovePrePromptKey;                                       // 0x00C8(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetRecoveryPrompt");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetSlideState
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SetSlideState : public UUAESkillAction
{
public:
	TEnumAsByte<ESlideState>                           SlideState;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	class UClass*                                      SlideComponentClass;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetSlideState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SetViewLimit
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_SetViewLimit : public UUAESkillAction
{
public:
	struct FRotator                                    MinRotator;                                               // 0x0078(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    MaxRotator;                                               // 0x0084(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bResetCamera;                                             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFPP;                                                // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSwitchCameraMode;                                   // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAttachPawnRotationYawForCamera;                        // 0x0093(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRelativeLimit;                                        // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SetViewLimit");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ShowMainControlUI
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_ShowMainControlUI : public UUAESkillAction
{
public:
	struct FSkillAction_ShowMainUIData                 UIData;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ShowMainControlUI");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ShowPrompt
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_ShowPrompt : public UUAESkillAction
{
public:
	bool                                               ShowPrompt;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGeneralTips;                                             // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                PromptID;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameTipParam1;                                            // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GameTipParam2;                                            // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ShowPrompt");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ShowSkillButton
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_ShowSkillButton : public UUAESkillAction
{
public:
	bool                                               bBroadToSpectator;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ShowSkillButton");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ShowSkillPrompt
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_ShowSkillPrompt : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ShowSkillPrompt");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_ShowWeapon
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_ShowWeapon : public UUAESkillAction
{
public:
	bool                                               bShowWeapon;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoClear;                                               // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPhaseFinishClear;                                        // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	struct FName                                       WeaponName;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_ShowWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SkillToken
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_SkillToken : public UUAESkillAction
{
public:
	bool                                               bClearAll;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAdd;                                                     // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                SkillID;                                                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndo;                                                    // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SkillToken");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SpawnActor
// 0x00B8 (0x0130 - 0x0078)
class UUAESkillAction_SpawnActor : public UUAESkillAction
{
public:
	struct FSkillAction_SpawnActorCreateData           SpawnActorData;                                           // 0x0078(0x00B0) (Edit)
	TEnumAsByte<ECharacterPoseType>                    PreviousPoseType;                                         // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SpawnActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SpawnBeamEffectActor
// 0x00E0 (0x0210 - 0x0130)
class UUAESkillAction_SpawnBeamEffectActor : public UUAESkillAction_SpawnActor
{
public:
	struct FName                                       GetDataFunctionName;                                      // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBeamEffectData                             Source;                                                   // 0x0138(0x0030) (Edit)
	struct FBeamEffectData                             Target;                                                   // 0x0168(0x0030) (Edit)
	float                                              BeamActorLifeTime;                                        // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixLifeTime;                                          // 0x019C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FName                                       CharacterSourceAttachSocketName;                          // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FName>                            VehicleSourceAttachSocketNames;                           // 0x01A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FName                                       WeaponSourceAttachSocketName;                             // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   VehicleSourceAttachKey;                                   // 0x01F0(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   TargetZOffsetKey;                                         // 0x01F8(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   BeamEffectActor;                                          // 0x0200(0x0008) (Edit, BlueprintVisible)
	bool                                               bTargetZOffsetReverse;                                    // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0209(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SpawnBeamEffectActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SpawnLocalActor
// 0x0060 (0x00D8 - 0x0078)
class UUAESkillAction_SpawnLocalActor : public UUAESkillAction
{
public:
	class UClass*                                      ActorTemplate;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_SpawnLocalActor.SoftActorTemplate
	struct FVector                                     Offset;                                                   // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x00B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DelaySecondsDestroy;                                      // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpawnAtClientSide;                                      // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNoOwner;                                                // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   SpawnActorKey;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      SpawnedActor;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SpawnLocalActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SpawnMonster
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_SpawnMonster : public UUAESkillAction
{
public:
	TArray<struct FSpawnMonsterConfig>                 SpawnMonsterList;                                         // 0x0078(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SpawnMonster");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SpawnProjectile
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_SpawnProjectile : public UUAESkillAction
{
public:
	struct FSkillAction_SpawnProjectileCreateData      SpawnProjectileData;                                      // 0x0078(0x001C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SpawnProjectile");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_StopMontage
// 0x0020 (0x0098 - 0x0078)
class UUAESkillAction_StopMontage : public UUAESkillAction
{
public:
	bool                                               bStopAllMontage;                                          // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FName                                       StopGroupName;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupteStandByIdle;                                   // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopImmediately;                                         // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAfterPhase;                                          // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAfterSkill;                                          // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FName                                       TargetPawnKey;                                            // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_StopMontage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_StopSkill
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_StopSkill : public UUAESkillAction
{
public:
	bool                                               IsStopAllSkill;                                           // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_StopSkill");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SwitchCameraMode
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SwitchCameraMode : public UUAESkillAction
{
public:
	TEnumAsByte<EPlayerCameraMode>                     SwitchCameraMode;                                         // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchNormalToFly;                                       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              CameraCameraLagSpeedOverride;                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SwitchCameraMode");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SwitchCameraViewTarget
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_SwitchCameraViewTarget : public UUAESkillAction
{
public:
	float                                              Range;                                                    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FName                                       ActorTag;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeSpectator;                                        // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FViewTargetTransitionParams                 TargetTransitionParams;                                   // 0x0090(0x0010) (Edit, BlueprintVisible)
	struct FViewTargetTransitionParams                 EndTargetTransitionParams;                                // 0x00A0(0x0010) (Edit, BlueprintVisible)
	bool                                               bForceTPP;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForbidUseControllerRotationYaw;                          // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SwitchCameraViewTarget");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SwitchToLastWeap
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_SwitchToLastWeap : public UUAESkillAction
{
public:
	bool                                               bOnlyNonAuthority;                                        // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAnimation;                                            // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFinishPreviousSwitch;                               // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreState;                                              // 0x007B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLastNoneGrenageWeapon;                                   // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchToNoneWhenNoWeapon;                                // 0x007D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SwitchToLastWeap");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SwitchWeapon
// 0x0018 (0x0090 - 0x0078)
class UUAESkillAction_SwitchWeapon : public UUAESkillAction
{
public:
	TEnumAsByte<ESurviveWeaponPropSlot>                WeaponSlot;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   BlackboardSlotKey;                                        // 0x0080(0x0008) (Edit)
	bool                                               bSwitchByBlackboradSlot;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SwitchBackWhenFinish;                                     // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoerState;                                             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFinishPreviousSwitch;                               // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAnim;                                                 // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SwitchWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_SyncSkillCD
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_SyncSkillCD : public UUAESkillAction
{
public:
	class UUAESkillPicker*                             TargetPicker;                                             // 0x0078(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SkillClassName;                                           // 0x007C(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_SyncSkillCD");
		return pStaticClass;
	}

};


// Class Addons.DamageType_TakeDamageType
// 0x0000 (0x0100 - 0x0100)
class UDamageType_TakeDamageType : public USTExtraDamageType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DamageType_TakeDamageType");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_TakeDamage
// 0x0078 (0x00F0 - 0x0078)
class UUAESkillAction_TakeDamage : public UUAESkillAction
{
public:
	float                                              DamageAmount;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountHeadshot;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageToVehicle;                                          // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvatarDamagePositionOverride;                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageAmountFromBlackboard;                              // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   DamageAmountKey;                                          // 0x0090(0x0008) (Edit, BlueprintVisible)
	bool                                               bDamageWithImpact;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageWithVehicleImpact;                                 // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageWithVehicleImpactServerOnly;                       // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageWithVehicleVelocity;                               // 0x009B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HitVehicleVelocityCurve;                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImpactVelocity;                                           // 0x00A0(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ImpactChangeVelocity;                                     // 0x00A8(0x0008) (Edit, IsPlainOldData)
	TArray<class UClass*>                              TargetClassFilter;                                        // 0x00B0(0x000C) (Edit, ZeroConstructor)
	TArray<class UClass*>                              VehicleTargetClassFilter;                                 // 0x00BC(0x000C) (Edit, ZeroConstructor)
	bool                                               bUseWeaponDamageType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                DamageEventClassId;                                       // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpecificItemID;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeleeDamageSubType>                   SubDamageType;                                            // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OnlyApplyOnce;                                            // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_TakeDamage");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_TakeDamageWithDelay
// 0x0040 (0x00B8 - 0x0078)
class UUAESkillAction_TakeDamageWithDelay : public UUAESkillAction
{
public:
	float                                              DamageAmount;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountHeadshot;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageToVehicle;                                          // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecificItemID;                                           // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeaponDamageType;                                     // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeleeDamageSubType>                   SubDamageType;                                            // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OnlyApplyOnce;                                            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              DelayDeltaBeforeDamage;                                   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetTargetInvincibleWhenDelay;                            // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetTargetMoveStopWhenDelay;                              // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	TArray<class AActor*>                              CachedTarget;                                             // 0x00A0(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00AC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_TakeDamageWithDelay");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_TeleportTo
// 0x0030 (0x00A8 - 0x0078)
class UUAESkillAction_TeleportTo : public UUAESkillAction
{
public:
	bool                                               bRunOnDS;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnSimulate;                                           // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnAutonomous;                                         // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x007C(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     OffsetVec;                                                // 0x0080(0x000C) (Edit, IsPlainOldData)
	bool                                               IsLineCheckTarget;                                        // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	int                                                LineCheckTimes;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportNoCheck;                                         // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              ValidityCheckDis2D;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValidityCheckDisZ;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDrawDebugLine;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_TeleportTo");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_TriggerSkill
// 0x0038 (0x00B0 - 0x0078)
class UUAESkillAction_TriggerSkill : public UUAESkillAction
{
public:
	int                                                SkillID;                                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillAction_TriggerSkill.SkillClass
	bool                                               TriggerOnServer;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_TriggerSkill");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_TriggerSkillSuccess
// 0x0008 (0x0080 - 0x0078)
class UUAESkillAction_TriggerSkillSuccess : public UUAESkillAction
{
public:
	int                                                SkillID;                                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_TriggerSkillSuccess");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_UIMessage
// 0x0028 (0x00A0 - 0x0078)
class UUAESkillAction_UIMessage : public UUAESkillAction
{
public:
	struct FString                                     DoUIMsg;                                                  // 0x0078(0x000C) (Edit, ZeroConstructor)
	struct FString                                     UndoUIMsg;                                                // 0x0084(0x000C) (Edit, ZeroConstructor)
	struct FString                                     UIModule;                                                 // 0x0090(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_UIMessage");
		return pStaticClass;
	}


	void UndoAction_Internal();
	bool RealDoAction_Internal();
	class ASTExtraPlayerController* GetOwernPawnController();
};


// Class Addons.UAESkillAction_UseControlRot
// 0x0010 (0x0088 - 0x0078)
class UUAESkillAction_UseControlRot : public UUAESkillAction
{
public:
	bool                                               IsUseControllerRotationPitch;                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseControllerRotationYaw;                               // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseControllerRotationRoll;                              // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAtTheEndOfThePhase;                                  // 0x007B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWaistFollowingController;                                // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              MaxDeltaYawBetweenControlAndActor;                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_UseControlRot");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_UseHandleItem
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_UseHandleItem : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_UseHandleItem");
		return pStaticClass;
	}

};


// Class Addons.UAESkillAction_Vault
// 0x0000 (0x0078 - 0x0078)
class UUAESkillAction_Vault : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillAction_Vault");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_AllowPawnState
// 0x0010 (0x0070 - 0x0060)
class UUAESkillCondition_AllowPawnState : public UUAESkillConditionWithPrompt
{
public:
	TArray<EPawnState>                                 ArrAllowPawnState;                                        // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_AllowPawnState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_AllowPoseChange
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_AllowPoseChange : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_AllowPoseChange");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_And
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_And : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_And");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_BlackboardValueComparison
// 0x00A8 (0x0108 - 0x0060)
class UUAESkillCondition_BlackboardValueComparison : public UUAESkillCondition
{
public:
	struct FUAEBlackboardKeySelector                   Key;                                                      // 0x0060(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EUAEBlackboardType>                    Type;                                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUAESkillCondition_BlackboardValueComparison       Comparison;                                               // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x006A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UAESkillCondition_BlackboardValueComparison.ExpectedObject
	bool                                               bCheckObjectClass;                                        // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x0099(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.UAESkillCondition_BlackboardValueComparison.ExpectedClass
	unsigned char                                      ExpectedEnum;                                             // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                ExpectedInt;                                              // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedFloat;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExpectedBool;                                             // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	struct FString                                     ExpectedString;                                           // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FName                                       ExpectedName;                                             // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExpectedVector;                                           // 0x00F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FName                                       ExpectedSkillBlackboardKey;                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_BlackboardValueComparison");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_BlackboardValueComparisonLastValue
// 0x0010 (0x0070 - 0x0060)
class UUAESkillCondition_BlackboardValueComparisonLastValue : public UUAESkillCondition
{
public:
	struct FUAEBlackboardKeySelector                   Key;                                                      // 0x0060(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EUAEBlackboardType>                    Type;                                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              SyncThreshold;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_BlackboardValueComparisonLastValue");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CanVault
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_CanVault : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CanVault");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CharacterInDoor
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_CharacterInDoor : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CharacterInDoor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CheckActivityActor
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_CheckActivityActor : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CheckActivityActor");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CheckActorFloorSurface
// 0x0010 (0x0070 - 0x0060)
class UUAESkillCondition_CheckActorFloorSurface : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	float                                              ZTraceLen;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CheckActorFloorSurface");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CheckAutoSkillCount
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_CheckAutoSkillCount : public UUAESkillCondition
{
public:
	int                                                DefautlValue;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOperatorType>                         Comparison;                                               // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CheckAutoSkillCount");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CheckBeingRescued
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_CheckBeingRescued : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CheckBeingRescued");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CheckModType
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_CheckModType : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FString                                     SubModName;                                               // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CheckModType");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CollisionCheck
// 0x0048 (0x00A8 - 0x0060)
class UUAESkillCondition_CollisionCheck : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TArray<class UClass*>                              IgnoreActorClasses;                                       // 0x0068(0x000C) (Edit, ZeroConstructor)
	struct FVector                                     CollisionTestBoxExtern;                                   // 0x0074(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     CollisionTestBoxOffset;                                   // 0x0080(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    CollisionTestBoxRotation;                                 // 0x008C(0x000C) (Edit, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   TargetKeySelector;                                        // 0x0098(0x0008) (Edit, BlueprintVisible)
	struct FUAEBlackboardKeySelector                   LocationKeySelector;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CollisionCheck");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CurrentUseWeapon
// 0x0010 (0x0070 - 0x0060)
class UUAESkillCondition_CurrentUseWeapon : public UUAESkillCondition
{
public:
	struct FName                                       BlackboardSelectorKey;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CurrentUseWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_CurrentWeapon
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_CurrentWeapon : public UUAESkillCondition
{
public:
	int                                                ItemId;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_CurrentWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_FaceToPoint
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_FaceToPoint : public UUAESkillCondition
{
public:
	float                                              AllowedAngle;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckZ;                                                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_FaceToPoint");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_FallingMode
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_FallingMode : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_FallingMode");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_GoldenSuitTarget
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_GoldenSuitTarget : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_GoldenSuitTarget");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_GrenadeMode
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_GrenadeMode : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_GrenadeMode");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HandleBuildItemLimit
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_HandleBuildItemLimit : public UUAESkillCondition
{
public:
	bool                                               bReadIDFromBB;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   KeySelector;                                              // 0x0068(0x0008) (Edit, BlueprintVisible)
	bool                                               UseTips;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                TipsID;                                                   // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HandleBuildItemLimit");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HandleMutilItemLimit
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_HandleMutilItemLimit : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	bool                                               bShowPrompt;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                PromptID;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugFlag;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HandleMutilItemLimit");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HasBuff
// 0x0028 (0x0088 - 0x0060)
class UUAESkillCondition_HasBuff : public UUAESkillCondition
{
public:
	int                                                SkillID;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     HasBuffPromptText;                                        // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NoBuffPromptText;                                         // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HasBuffPromptID;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NoBuffPromptID;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HasBuff");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HasCarryTargert
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_HasCarryTargert : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HasCarryTargert");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HasCompletedWeapon
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_HasCompletedWeapon : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TArray<struct FUAEBlackboardKeySelector>           BlackboardSlotKeys;                                       // 0x0068(0x000C) (Edit, ZeroConstructor)
	bool                                               bSwitchByBlackboradSlot;                                  // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HasCompletedWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_HeightGround
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_HeightGround : public UUAESkillCondition
{
public:
	bool                                               bCanInVehicle;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVehicleLocation;                                      // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServer;                                                  // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClient;                                                  // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_HeightGround");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_InControllerState
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_InControllerState : public UUAESkillConditionWithPrompt
{
public:
	EStateType                                         CheckControllerState;                                     // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_InControllerState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_InFightingState
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_InFightingState : public UUAESkillConditionWithPrompt
{
public:
	bool                                               bIncludeFinishState;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_InFightingState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_InGameModeState
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_InGameModeState : public UUAESkillConditionWithPrompt
{
public:
	struct FName                                       TargetGameModeState;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_InGameModeState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsAI
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsAI : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsAI");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsCDReady
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsCDReady : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsCDReady");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsHandleInFold
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsHandleInFold : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsHandleInFold");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsInHouse
// 0x0020 (0x0080 - 0x0060)
class UUAESkillCondition_IsInHouse : public UUAESkillCondition
{
public:
	ESkillConditionIsInHouseCheckTarget                checkTarget;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillConditionIsInHouseCheckType                  CheckType;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              LineTraceLength;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfForwardLength;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPrompt;                                              // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FString                                     GameTipsFunctionName;                                     // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                GameTipsID;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsInHouse");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsInPhase
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_IsInPhase : public UUAESkillCondition
{
public:
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsInPhase");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsMoving
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsMoving : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsMoving");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsOnVehicle
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsOnVehicle : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsOnVehicle");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsPlayerWeaponCreating
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsPlayerWeaponCreating : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsPlayerWeaponCreating");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsSkillActived
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsSkillActived : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsSkillActived");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsSwitchingWeapon
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsSwitchingWeapon : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsSwitchingWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsUsingWeapon
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsUsingWeapon : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsUsingWeapon");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_IsWeaponInState
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_IsWeaponInState : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_IsWeaponInState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_KeyEvent
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_KeyEvent : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_KeyEvent");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_LocationPickSuc
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_LocationPickSuc : public UUAESkillCondition
{
public:
	bool                                               ShowPrompt;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                PromptID;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_LocationPickSuc");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_MoveDist
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_MoveDist : public UUAESkillCondition
{
public:
	bool                                               bIgnoreWithNotProne;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_MoveDist");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_MovementDir
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_MovementDir : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TArray<EMovementDirection>                         EitherDirectionNeedSatisfied;                             // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_MovementDir");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_MovementMode
// 0x0030 (0x0090 - 0x0060)
class UUAESkillCondition_MovementMode : public UUAESkillConditionWithPrompt
{
public:
	TArray<TEnumAsByte<EMovementMode>>                 MovementModeArray;                                        // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<ECustomMovmentMode>>            CustomMovementModeArray;                                  // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EMovementMode>>                 DisableMovementModeArray;                                 // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<ECustomMovmentMode>>            DisableCustomMovementModeArray;                           // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_MovementMode");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_MoveSpeed
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_MoveSpeed : public UUAESkillCondition
{
public:
	ESkillConditionCheckType                           CheckType;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_MoveSpeed");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_MoveSpeedAxis
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_MoveSpeedAxis : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_MoveSpeedAxis");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_Not
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_Not : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_Not");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_NotIsInWater
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_NotIsInWater : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_NotIsInWater");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_Or
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_Or : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_Or");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_PlayerHasTag
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_PlayerHasTag : public UUAESkillCondition
{
public:
	struct FName                                       NeededTag;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_PlayerHasTag");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_PlayerPoseState
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_PlayerPoseState : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_PlayerPoseState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_PlayerState
// 0x0020 (0x0080 - 0x0060)
class UUAESkillCondition_PlayerState : public UUAESkillConditionWithPrompt
{
public:
	TArray<EPawnState>                                 ArrPlayerState;                                           // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOnlyHasCurrentStates;                                    // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustHasAllStates;                                        // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	TArray<EPawnState>                                 ArrFatalPlayerState;                                      // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_PlayerState");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_PlayerStateHold
// 0x0018 (0x0078 - 0x0060)
class UUAESkillCondition_PlayerStateHold : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TArray<EPawnState>                                 ChooseOnePlayerState;                                     // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_PlayerStateHold");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_PropertyLimit
// 0x0020 (0x0080 - 0x0060)
class UUAESkillCondition_PropertyLimit : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EValueType>                            ValueType;                                                // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              propertyValue;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPrompt;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                PromptID;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPromptWithParam;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsingGeneralTips;                                         // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChatMsg;                                              // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChatMsgInCludeTeammate;                                   // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChatMsgID;                                                // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_PropertyLimit");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_RotatorAngle
// 0x0010 (0x0070 - 0x0060)
class UUAESkillCondition_RotatorAngle : public UUAESkillCondition
{
public:
	struct FRotator                                    RotatorDistValue;                                         // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_RotatorAngle");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_SettingConfig
// 0x0028 (0x0088 - 0x0060)
class UUAESkillCondition_SettingConfig : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TEnumAsByte<ESettingConfigType>                    Type;                                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOperatorType>                         Comparison;                                               // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	int                                                ExpectedInt;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedFloat;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExpectedBool;                                             // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FString                                     ExpectedString;                                           // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_SettingConfig");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_SkillLevel
// 0x0008 (0x0068 - 0x0060)
class UUAESkillCondition_SkillLevel : public UUAESkillCondition
{
public:
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                SkillLevel;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_SkillLevel");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_SwitchPoseInterval
// 0x0040 (0x00A0 - 0x0060)
class UUAESkillCondition_SwitchPoseInterval : public UUAESkillCondition
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET
	bool                                               bAllowInInterval;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_SwitchPoseInterval");
		return pStaticClass;
	}

};


// Class Addons.UAESkillCondition_VelocityChange
// 0x0000 (0x0060 - 0x0060)
class UUAESkillCondition_VelocityChange : public UUAESkillCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillCondition_VelocityChange");
		return pStaticClass;
	}

};


// Class Addons.UAESkillConditionAction
// 0x0008 (0x0080 - 0x0078)
class UUAESkillConditionAction : public UUAESkillAction
{
public:
	class UUTSkillCondition*                           Condition;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUAESkillAction*                             Action;                                                   // 0x007C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UAESkillConditionAction");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_AddParticle
// 0x00A8 (0x0120 - 0x0078)
class UUTSkillAppearance_AddParticle : public UUAESkillAction
{
public:
	class UParticleSystem*                             TemplateParticle_Effect;                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustAttach;                                              // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FName                                       HangMeshTagName;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleCompTagName;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationPosition;                                         // 0x0090(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LocationRotation;                                         // 0x009C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LocationScale;                                            // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FPPScale;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FPPLocationPosition;                                      // 0x00C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bPhaseFinishRemove;                                       // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoRemove;                                              // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	TMap<struct FString, class UParticleSystem*>       DecentParticles;                                          // 0x00D0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x14];                                      // 0x010C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_AddParticle");
		return pStaticClass;
	}


	void UndoAction_Internal();
	void Reset_Internal();
	void OnParticleSystemFinished(class UParticleSystemComponent* PSC);
};


// Class Addons.UTSkillAppearance_AnimHurtingState
// 0x0018 (0x0090 - 0x0078)
class UUTSkillAppearance_AnimHurtingState : public UUAESkillAction
{
public:
	EAnimHurtingTarget                                 Target;                                                   // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0079(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_AnimHurtingState");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_CameraShake
// 0x0028 (0x00A0 - 0x0078)
class UUTSkillAppearance_CameraShake : public UUAESkillAction
{
public:
	class UClass*                                      CameraShakeClass;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediatelyStopCameraShake;                              // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttackerShake;                                           // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	TArray<class UClass*>                              TargetClassFilter;                                        // 0x0084(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<ECameraAnimPlaySpace>                  CameraShakePlaySpace;                                     // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FRotator                                    CameraShakeUserPlaySpaceRot;                              // 0x0094(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_CameraShake");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_ParticleSystem
// 0x0150 (0x01C8 - 0x0078)
class UUTSkillAppearance_ParticleSystem : public UUTSkillAction
{
public:
	struct FUTSkillAppearance_ParticleSystem_Item      Item;                                                     // 0x0078(0x00F0) (Edit, BlueprintVisible)
	bool                                               bShowOnLocalControl;                                      // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVehicleRealHit;                                      // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x016A(0x000E) MISSED OFFSET
	TMap<struct FString, class UParticleSystem*>       DecentParticles;                                          // 0x0178(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_ParticleSystem");
		return pStaticClass;
	}


	void StopParticleSystem(class UUTSkillManagerComponent* SkillManagerComponent);
	void RealDoActionWrapper(class UUTSkillManagerComponent* SkillManagerComponent);
	void OnHurtAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC);
	void OnAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC);
	float GetPlayRateScale();
};


// Class Addons.UTSkillAppearance_PlayMontage
// 0x0018 (0x0090 - 0x0078)
class UUTSkillAppearance_PlayMontage : public UUTSkillAction
{
public:
	class UAnimMontage*                                HurtMontage;                                              // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenReset;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              DelayTimer;                                               // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_PlayMontage");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_RemoveAllParticle
// 0x0010 (0x0088 - 0x0078)
class UUTSkillAppearance_RemoveAllParticle : public UUAESkillAction
{
public:
	bool                                               bPhaseFinishRemove;                                       // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoRemove;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	TArray<TWeakObjectPtr<class UParticleSystemComponent>> ParticleComps;                                            // 0x007C(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_RemoveAllParticle");
		return pStaticClass;
	}


	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
};


// Class Addons.UTSkillAppearance_RemoveWarning
// 0x0000 (0x0078 - 0x0078)
class UUTSkillAppearance_RemoveWarning : public UUAESkillAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_RemoveWarning");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_RomoveParticle
// 0x0010 (0x0088 - 0x0078)
class UUTSkillAppearance_RomoveParticle : public UUAESkillAction
{
public:
	struct FName                                       ParticleCompTagName;                                      // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPhaseFinishRemove;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUndoRemove;                                              // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_RomoveParticle");
		return pStaticClass;
	}


	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
};


// Class Addons.UTSkillAppearance_RotateTo
// 0x0010 (0x0088 - 0x0078)
class UUTSkillAppearance_RotateTo : public UUTSkillAction
{
public:
	EHurtApperanceRotateType                           RotationType;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FRotator                                    RotationDelta;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_RotateTo");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_ScreenParticle
// 0x0058 (0x00D0 - 0x0078)
class UUTSkillAppearance_ScreenParticle : public UUTSkillAction
{
public:
	TArray<class UParticleSystem*>                     ParticleTemplates;                                        // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystem*>                     ParticleTemplate_Ints;                                    // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  TransformOffset;                                          // 0x0090(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RotationOffset;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActionAppearance;                                        // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAllCamera;                                          // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x00C6(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_ScreenParticle");
		return pStaticClass;
	}

};


// Class Addons.UTSkillAppearance_SimpleParticleSystem
// 0x0118 (0x0190 - 0x0078)
class UUTSkillAppearance_SimpleParticleSystem : public UUTSkillAction
{
public:
	class UParticleSystem*                             Template_Effect;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x007C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_SimpleParticleSystem.Soft_Template_Effect
	float                                              MaxLifetime;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   ParticleSaveKey;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible)
	bool                                               bReadEffectFromBB;                                        // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   EffectKeySelector;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible)
	bool                                               bPickLocation;                                            // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x00CC(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     OffsetLoc;                                                // 0x00D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRot;                                                // 0x00DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bReadScaleFromBB;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   ScaleKeySelector;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     RelativeScale;                                            // 0x00F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsUsingViewRotation;                                     // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FRotator                                    RelativeViewRotOffset;                                    // 0x0108(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               NeedAttach;                                               // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	struct FName                                       AttachedCompTag;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachedSocketName;                                       // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOffsetRelativeOwner;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepOffsetRelativeOwner;                                 // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSocketLocationOffset;                                 // 0x012A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyParticleOnUndoAction;                             // 0x012B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyParticleOnResetAfterPhase;                        // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	float                                              AdjustRotationYaw;                                        // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySpawnOnAutonomousClient;                             // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnSpectator;                                        // 0x0135(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnDriveVehicle;                                     // 0x0136(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToVehicleMesh;                                     // 0x0137(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToWeaponMesh;                                      // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	TMap<int, struct FName>                            VehicleSourceAttachSocketNames;                           // 0x013C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FUAEBlackboardKeySelector                   VehicleSourceAttachKey;                                   // 0x0178(0x0008) (Edit, BlueprintVisible)
	struct FName                                       WeaponSourceAttachSocketName;                             // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0189(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_SimpleParticleSystem");
		return pStaticClass;
	}


	void RealDoActionWrapper(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Addons.UTSkillAppearance_SkillWarning
// 0x0030 (0x00A8 - 0x0078)
class UUTSkillAppearance_SkillWarning : public UUAESkillAction
{
public:
	class UMaterialInstance*                           WarningDecalMaterial;                                     // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x007C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0088(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0094(0x000C) (Edit, IsPlainOldData)
	float                                              AutoDisappearTime;                                        // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkillEndRemove;                                          // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_SkillWarning");
		return pStaticClass;
	}


	void UndoAction_Internal();
};


// Class Addons.UTSkillAppearance_SoundCue
// 0x0110 (0x0188 - 0x0078)
class UUTSkillAppearance_SoundCue : public UUTSkillAction
{
public:
	struct FUTSkillAppearance_SoundCue_Item            Item;                                                     // 0x0078(0x0060) (Edit, BlueprintVisible)
	bool                                               bStopSoundWhenUnDoAction;                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopSoundWhenPhaseEnd;                                   // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class UAkAudioEvent*> PhysSoundMapForLocal;                                     // 0x00DC(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsPlayingCollideSound;                                    // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalControlHurtAppearance;                              // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class UAkAudioEvent*> PhysSoundMap;                                             // 0x011C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseWeaponAvatarPhysSound;                                // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurviveWeaponPropSlot>                WeaponPropSlot;                                           // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeaponAvatarItemSound;                                // 0x015A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AccelateEnable;                                           // 0x015B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FName                                       AccelateScaleBlackBoardName;                              // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0168(0x0018) MISSED OFFSET
	class UAkAudioEvent*                               StopAkEventCache;                                         // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0184(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillAppearance_SoundCue");
		return pStaticClass;
	}

};


// Class Addons.UTSkillLocationPicker_CrossHairMecha
// 0x0030 (0x0080 - 0x0050)
class UUTSkillLocationPicker_CrossHairMecha : public UUTSkillLocationPicker
{
public:
	float                                              MinTraceDistance;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceDistance;                                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceDistanceEx;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownwardTraceDistance;                                 // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreVehicleAttachedActors;                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitPitchAngle;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              MinPitchAngle;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchAngle;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             TraceChannelArray;                                        // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FUAEBlackboardKeySelector                   PickedLocationKey;                                        // 0x0078(0x0008) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.UTSkillLocationPicker_CrossHairMecha");
		return pStaticClass;
	}

};


// Class Addons.VehicleAttachmentComponent
// 0x0098 (0x01E8 - 0x0150)
class UVehicleAttachmentComponent : public UVehicleComponent
{
public:
	struct FName                                       FindingSocketName;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FindingSphereRadius;                                      // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherValidBoxExtent;                                      // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxExtent;                                      // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxOffset;                                      // 0x0174(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AttachFollowParent;                                       // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              AttachValidSpeed;                                         // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CheckCollisionOffset;                                     // 0x0188(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                AttachFailTips;                                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleAttachWithOtherVehicle;                          // 0x0198(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachAvaliableStateChanged;                      // 0x01A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachCheckFailed;                                // 0x01B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01BC(0x0008) MISSED OFFSET
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          // 0x01C4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraVehicleBase*>                 PendingAttachVehicles;                                    // 0x01C8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01D4(0x0008) MISSED OFFSET
	class UChildActorComponent*                        AttachComponent;                                          // 0x01DC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleAttachmentComponent");
		return pStaticClass;
	}


	void TryToAttachOtherVehicle();
	void SetAttachState(class ASTExtraVehicleBase* OtherVehicle);
	void ServerDoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	void OnRep_AttachedVehicle(class ASTExtraVehicleBase* PrevVehicle);
	bool GetAttachState();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	bool DoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	bool CheckSurroundingVehicle();
	bool CanInteractedByOther();
	bool CanAttachVehicle();
	void CallServerToAttach();
	void BroadcastClientVehicleAttachment(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.VehicleProtectionComponent_Hover
// 0x0010 (0x02B0 - 0x02A0)
class UVehicleProtectionComponent_Hover : public UVehicleProtectionComponentBase
{
public:
	float                                              MaxVelZByCollision;                                       // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHoveringVehicleMovementComponent*           HoveringMovement;                                         // 0x02A4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleProtectionComponent_Hover");
		return pStaticClass;
	}

};


// Class Addons.VehicleRubberDuck
// 0x0040 (0x11C0 - 0x1180)
class AVehicleRubberDuck : public ASTExtraVehicleBase
{
public:
	class UFloatingVehicleVehicleMovementComponent2*   VehicleMovement;                                          // 0x1180(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bCacheSfxStatusWhenLinked;                                // 0x1184(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayerOnCurLink;                                    // 0x1185(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A];                                      // 0x1186(0x001A) MISSED OFFSET
	unsigned char                                      bUseMultiPositionWhenLinked : 1;                          // 0x11A0(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x11A1(0x0003) MISSED OFFSET
	float                                              MultiPosSoundTickInterval;                                // 0x11A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_UnLinked;                                  // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Autonomous;                         // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Simulated;                          // 0x11B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsBalanceComponent*                    PhysicsBalance;                                           // 0x11B4(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x11B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleRubberDuck");
		return pStaticClass;
	}


	class UFloatingVehicleVehicleMovementComponent2* GetVehicleMovement();
	float GetForwardSpeed();
};


// Class Addons.VehicleSyncComponent_Hover
// 0x0010 (0x0520 - 0x0510)
class UVehicleSyncComponent_Hover : public UVehicleSyncComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0510(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleSyncComponent_Hover");
		return pStaticClass;
	}


	void SendServerHoverMoveToClient(float ServerAcceleration, float ServerMaxSpeed, float ServerMaxAcceleration);
	void Correct(bool bIsSnap, bool bPlayerChannel, float ZAdjustValue);
};


}

