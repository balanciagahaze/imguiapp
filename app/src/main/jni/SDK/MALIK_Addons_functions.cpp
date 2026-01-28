// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Addons.AmphibiousSlidingVehicle.OnRep_WaterState
// (Final, Native, Public)

void AAmphibiousSlidingVehicle::OnRep_WaterState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AmphibiousSlidingVehicle.OnRep_WaterState");

	AAmphibiousSlidingVehicle_OnRep_WaterState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.AmphibiousSlidingVehicle.OnRep_UseSyncatClient
// (Native, Public)

void AAmphibiousSlidingVehicle::OnRep_UseSyncatClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AmphibiousSlidingVehicle.OnRep_UseSyncatClient");

	AAmphibiousSlidingVehicle_OnRep_UseSyncatClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.AmphibiousSlidingVehicle.HandleContactWater
// (Final, Native, Public)
// Parameters:
// bool                           bInContactingWater             (Parm, ZeroConstructor, IsPlainOldData)

void AAmphibiousSlidingVehicle::HandleContactWater(bool bInContactingWater)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AmphibiousSlidingVehicle.HandleContactWater");

	AAmphibiousSlidingVehicle_HandleContactWater_Params params;
	params.bInContactingWater = bInContactingWater;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.AmphibiousSlidingVehicle.GetFloatingVehicleMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFloatingVehicleVehicleMovementComponent2* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFloatingVehicleVehicleMovementComponent2* AAmphibiousSlidingVehicle::GetFloatingVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AmphibiousSlidingVehicle.GetFloatingVehicleMovement");

	AAmphibiousSlidingVehicle_GetFloatingVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BeamEffectMoveActor.SetBeamEffectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBeamEffectDataParams   InBeamEffectData               (ConstParm, Parm, OutParm, ReferenceParm)

void ABeamEffectMoveActor::SetBeamEffectData(const struct FBeamEffectDataParams& InBeamEffectData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BeamEffectMoveActor.SetBeamEffectData");

	ABeamEffectMoveActor_SetBeamEffectData_Params params;
	params.InBeamEffectData = InBeamEffectData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BeamEffectMoveActor.RefreshEffectLocation
// (Final, Native, Public, BlueprintCallable)

void ABeamEffectMoveActor::RefreshEffectLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BeamEffectMoveActor.RefreshEffectLocation");

	ABeamEffectMoveActor_RefreshEffectLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BeamEffectMoveActor.OnRep_BeamMoveEffectData
// (Native, Event, Public, BlueprintEvent)

void ABeamEffectMoveActor::OnRep_BeamMoveEffectData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BeamEffectMoveActor.OnRep_BeamMoveEffectData");

	ABeamEffectMoveActor_OnRep_BeamMoveEffectData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 InAccel                        (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::UnpackAccelerationToInput(const struct FVector& InAccel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput");

	UBioVehicleMovementComponent_UnpackAccelerationToInput_Params params;
	params.InAccel = InAccel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ShouldRecordPosition
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::ShouldRecordPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ShouldRecordPosition");

	UBioVehicleMovementComponent_ShouldRecordPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWalkableFloorZ               (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ");

	UBioVehicleMovementComponent_SetWalkableFloorZ_Params params;
	params.InWalkableFloorZ = InWalkableFloorZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWalkableFloorAngle           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle");

	UBioVehicleMovementComponent_SetWalkableFloorAngle_Params params;
	params.InWalkableFloorAngle = InWalkableFloorAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetThrottleInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetThrottleInput");

	UBioVehicleMovementComponent_SetThrottleInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetSteeringInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetSteeringInput");

	UBioVehicleMovementComponent_SetSteeringInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetRisingInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetRisingInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetRisingInput");

	UBioVehicleMovementComponent_SetRisingInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetMovementMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetMovementMode");

	UBioVehicleMovementComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask");

	UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore");

	UBioVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask");

	UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid");

	UBioVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask");

	UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup");

	UBioVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled");

	UBioVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAcceptInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsAccept                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAcceptInput(bool bIsAccept)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAcceptInput");

	UBioVehicleMovementComponent_SetAcceptInput_Params params;
	params.bIsAccept = bIsAccept;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetThrottleInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput");

	UBioVehicleMovementComponent_ServerSetThrottleInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetSteeringInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput");

	UBioVehicleMovementComponent_ServerSetSteeringInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetRisingInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetRisingInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetRisingInput");

	UBioVehicleMovementComponent_ServerSetRisingInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveOld
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          OldTimeStamp                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   OldAccel                       (Parm)
// unsigned char                  OldMoveFlags                   (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveOld");

	UBioVehicleMovementComponent_ServerMoveOld_Params params;
	params.OldTimeStamp = OldTimeStamp;
	params.OldAccel = OldAccel;
	params.OldMoveFlags = OldMoveFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion");

	UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveDual
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveDual");

	UBioVehicleMovementComponent_ServerMoveDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMove
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMove");

	UBioVehicleMovementComponent_ServerMove_Params params;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.PackInputToAcceleration
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::PackInputToAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.PackInputToAcceleration");

	UBioVehicleMovementComponent_PackInputToAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.OnRecoverOnServer
// (Native, Protected)

void UBioVehicleMovementComponent::OnRecoverOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.OnRecoverOnServer");

	UBioVehicleMovementComponent_OnRecoverOnServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetWalkableFloorZ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ");

	UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetWalkableFloorAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle");

	UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetModifiedMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration");

	UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_FindFloor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 CapsuleLocation                (Parm, IsPlainOldData)
// struct FFindFloorResult        FloorResult                    (Parm, OutParm)

void UBioVehicleMovementComponent::K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_FindFloor");

	UBioVehicleMovementComponent_K2_FindFloor_Params params;
	params.CapsuleLocation = CapsuleLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}


// Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 CapsuleLocation                (Parm, IsPlainOldData)
// float                          LineDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SweepDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          SweepRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FFindFloorResult        FloorResult                    (Parm, OutParm)

void UBioVehicleMovementComponent::K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist");

	UBioVehicleMovementComponent_K2_ComputeFloorDist_Params params;
	params.CapsuleLocation = CapsuleLocation;
	params.LineDistance = LineDistance;
	params.SweepDistance = SweepDistance;
	params.SweepRadius = SweepRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}


// Function Addons.BioVehicleMovementComponent.IsWalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsWalking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsWalking");

	UBioVehicleMovementComponent_IsWalking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsWalkable
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsWalkable(const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsWalkable");

	UBioVehicleMovementComponent_IsWalkable_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsSwimming
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsSwimming()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsSwimming");

	UBioVehicleMovementComponent_IsSwimming_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsSeriousInjuriedAllowJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping");

	UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached
// (Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached");

	UBioVehicleMovementComponent_HandleOnSeatDetached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged
// (Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        LastSeatType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSeatIdx                    (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatIdx                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged");

	UBioVehicleMovementComponent_HandleOnSeatChanged_Params params;
	params.Character = Character;
	params.LastSeatType = LastSeatType;
	params.LastSeatIdx = LastSeatIdx;
	params.NewSeatType = NewSeatType;
	params.NewSeatIdx = NewSeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached
// (Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached");

	UBioVehicleMovementComponent_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatInx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim");

	UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params params;
	params.Character = Character;
	params.SeatInx = SeatInx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetWalkingDecResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance");

	UBioVehicleMovementComponent_GetWalkingDecResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetWalkingAccResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance");

	UBioVehicleMovementComponent_GetWalkingAccResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetValidPerchRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetValidPerchRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetValidPerchRadius");

	UBioVehicleMovementComponent_GetValidPerchRadius_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetThrottleInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetThrottleInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetThrottleInput");

	UBioVehicleMovementComponent_GetThrottleInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetSteeringInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetSteeringInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetSteeringInput");

	UBioVehicleMovementComponent_GetSteeringInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Slope                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetSlopeSpeedFactor(float Slope)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor");

	UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params params;
	params.Slope = Slope;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetRisingInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetRisingInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetRisingInput");

	UBioVehicleMovementComponent_GetRisingInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetPredictVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          PredictTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetPredictVelocity(float PredictTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetPredictVelocity");

	UBioVehicleMovementComponent_GetPredictVelocity_Params params;
	params.PredictTime = PredictTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetPerchRadiusThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold");

	UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMovementBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UBioVehicleMovementComponent::GetMovementBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMovementBase");

	UBioVehicleMovementComponent_GetMovementBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMinAnalogSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed");

	UBioVehicleMovementComponent_GetMinAnalogSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxJumpHeightWithJumpTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime");

	UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxJumpHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight");

	UBioVehicleMovementComponent_GetMaxJumpHeight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxBrakingDeceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration");

	UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxAcceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxAcceleration");

	UBioVehicleMovementComponent_GetMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpVelocityZ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ");

	UBioVehicleMovementComponent_GetJumpVelocityZ_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpingHeightBySpeed(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed");

	UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ObsHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpingHeightByObsHeight(float ObsHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight");

	UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params params;
	params.ObsHeight = ObsHeight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetImpartedMovementBaseVelocity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity");

	UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetDesireAcceleration
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetDesireAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetDesireAcceleration");

	UBioVehicleMovementComponent_GetDesireAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetCurrentSecuritySpeedRatio
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetCurrentSecuritySpeedRatio()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetCurrentSecuritySpeedRatio");

	UBioVehicleMovementComponent_GetCurrentSecuritySpeedRatio_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetCurrentMaxAllowedSpeed
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetCurrentMaxAllowedSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetCurrentMaxAllowedSpeed");

	UBioVehicleMovementComponent_GetCurrentMaxAllowedSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetCurrentAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration");

	UBioVehicleMovementComponent_GetCurrentAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetBreakAcceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetBreakAcceleration(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetBreakAcceleration");

	UBioVehicleMovementComponent_GetBreakAcceleration_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AsForce                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetAngularVelocityByCurve(float Speed, bool AsForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve");

	UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params params;
	params.Speed = Speed;
	params.AsForce = AsForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetAnalogInputModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier");

	UBioVehicleMovementComponent_GetAnalogInputModifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.DisableMovement
// (Native, Public, BlueprintCallable)

void UBioVehicleMovementComponent::DisableMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.DisableMovement");

	UBioVehicleMovementComponent_DisableMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.DealWithCustomAction
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::DealWithCustomAction(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.DealWithCustomAction");

	UBioVehicleMovementComponent_DealWithCustomAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition");

	UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRootMotionSourceGroup  ServerRootMotion               (Parm)
// bool                           bHasAnimRootMotion             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMontageTrackPosition     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerLoc                      (Parm, IsPlainOldData)
// struct FVector_NetQuantizeNormal ServerRotation                 (Parm)
// float                          ServerVelZ                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ServerBase                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ServerBoneName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition");

	UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params params;
	params.TimeStamp = TimeStamp;
	params.ServerRootMotion = ServerRootMotion;
	params.bHasAnimRootMotion = bHasAnimRootMotion;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMontageTrackPosition     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerLoc                      (Parm, IsPlainOldData)
// struct FVector_NetQuantizeNormal ServerRotation                 (Parm)
// float                          ServerVelZ                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ServerBase                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ServerBoneName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition");

	UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FRotator                NewRot                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation");

	UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustPosition");

	UBioVehicleMovementComponent_ClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAckGoodMove
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAckGoodMove(float TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAckGoodMove");

	UBioVehicleMovementComponent_ClientAckGoodMove_Params params;
	params.TimeStamp = TimeStamp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces
// (Native, Public, BlueprintCallable)

void UBioVehicleMovementComponent::ClearAccumulatedForces()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces");

	UBioVehicleMovementComponent_ClearAccumulatedForces_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CapsuleTouched");

	UBioVehicleMovementComponent_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalcVelocity
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Friction                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFluid                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BrakingDeceleration            (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalcVelocity");

	UBioVehicleMovementComponent_CalcVelocity_Params params;
	params.DeltaTime = DeltaTime;
	params.Friction = Friction;
	params.bFluid = bFluid;
	params.BrakingDeceleration = BrakingDeceleration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFluid                         (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::CalculateVelocityWithResistance(float DeltaTime, bool bFluid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance");

	UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params params;
	params.DeltaTime = DeltaTime;
	params.bFluid = bFluid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::CalculateCurrentForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed");

	UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// bool                           bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::AddImpulse(const struct FVector& Impulse, bool bVelocityChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddImpulse");

	UBioVehicleMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::AddForce(const struct FVector& Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddForce");

	UBioVehicleMovementComponent_AddForce_Params params;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 BrakingAcceleration            (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration");

	UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params params;
	params.BrakingAcceleration = BrakingAcceleration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.StartTakingOff
// (Final, Native, Public, BlueprintCallable)

void UBioBaseFlyComponent::StartTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.StartTakingOff");

	UBioBaseFlyComponent_StartTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.StartLanding
// (Final, Native, Public, BlueprintCallable)

void UBioBaseFlyComponent::StartLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.StartLanding");

	UBioBaseFlyComponent_StartLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.SetMovementMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UBioBaseFlyComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.SetMovementMode");

	UBioBaseFlyComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.IsTakingOff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioBaseFlyComponent::IsTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.IsTakingOff");

	UBioBaseFlyComponent_IsTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.IsLanding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioBaseFlyComponent::IsLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.IsLanding");

	UBioBaseFlyComponent_IsLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.IsCurveMoving
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioBaseFlyComponent::IsCurveMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.IsCurveMoving");

	UBioBaseFlyComponent_IsCurveMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.GetMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFlyBioVehicleBaseMoveMode     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFlyBioVehicleBaseMoveMode UBioBaseFlyComponent::GetMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.GetMoveState");

	UBioBaseFlyComponent_GetMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.GetFlyingConfig
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FFlyBioVehicleFlyingConfig ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFlyBioVehicleFlyingConfig UBioBaseFlyComponent::GetFlyingConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.GetFlyingConfig");

	UBioBaseFlyComponent_GetFlyingConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.GetDistanceToLand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioBaseFlyComponent::GetDistanceToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.GetDistanceToLand");

	UBioBaseFlyComponent_GetDistanceToLand_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioBaseFlyComponent.ExitLanding
// (Final, Native, Public, BlueprintCallable)

void UBioBaseFlyComponent::ExitLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.ExitLanding");

	UBioBaseFlyComponent_ExitLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.EndTakingOff
// (Final, Native, Public, BlueprintCallable)

void UBioBaseFlyComponent::EndTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.EndTakingOff");

	UBioBaseFlyComponent_EndTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.EndLanding
// (Final, Native, Public, BlueprintCallable)

void UBioBaseFlyComponent::EndLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.EndLanding");

	UBioBaseFlyComponent_EndLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.CalculateFlyingVelocity
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioBaseFlyComponent::CalculateFlyingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.CalculateFlyingVelocity");

	UBioBaseFlyComponent_CalculateFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioBaseFlyComponent.CalculateFlyingAcceleration
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioBaseFlyComponent::CalculateFlyingAcceleration(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioBaseFlyComponent.CalculateFlyingAcceleration");

	UBioBaseFlyComponent_CalculateFlyingAcceleration_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.UpdateVerticalHeight
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioFlyMovementComponentBase::UpdateVerticalHeight(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.UpdateVerticalHeight");

	UBioFlyMovementComponentBase_UpdateVerticalHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.StartTakingOff
// (Final, Native, Public, BlueprintCallable)

void UBioFlyMovementComponentBase::StartTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.StartTakingOff");

	UBioFlyMovementComponentBase_StartTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.SetMovementMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UBioFlyMovementComponentBase::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.SetMovementMode");

	UBioFlyMovementComponentBase_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.IsTakingOff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioFlyMovementComponentBase::IsTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.IsTakingOff");

	UBioFlyMovementComponentBase_IsTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioFlyMovementComponentBase.IsCurveMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioFlyMovementComponentBase::IsCurveMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.IsCurveMoving");

	UBioFlyMovementComponentBase_IsCurveMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioFlyMovementComponentBase.GetMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFlyBioVehicleMoveMode         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFlyBioVehicleMoveMode UBioFlyMovementComponentBase::GetMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.GetMoveState");

	UBioFlyMovementComponentBase_GetMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioFlyMovementComponentBase.GetDistanceToLand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioFlyMovementComponentBase::GetDistanceToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.GetDistanceToLand");

	UBioFlyMovementComponentBase_GetDistanceToLand_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioFlyMovementComponentBase.EndTakingOff
// (Final, Native, Public, BlueprintCallable)

void UBioFlyMovementComponentBase::EndTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.EndTakingOff");

	UBioFlyMovementComponentBase_EndTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.CalculateFlyingVelocity
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioFlyMovementComponentBase::CalculateFlyingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.CalculateFlyingVelocity");

	UBioFlyMovementComponentBase_CalculateFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyMovementComponentBase.CalculateFlyingAcceleration
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioFlyMovementComponentBase::CalculateFlyingAcceleration(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyMovementComponentBase.CalculateFlyingAcceleration");

	UBioFlyMovementComponentBase_CalculateFlyingAcceleration_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.UpdateFuelState
// (Final, Native, Public, BlueprintCallable)

void ABioVehicleBase::UpdateFuelState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.UpdateFuelState");

	ABioVehicleBase_UpdateFuelState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.StopJumping
// (Native, Public, BlueprintCallable)

void ABioVehicleBase::StopJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.StopJumping");

	ABioVehicleBase_StopJumping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetSimulatePhysics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetSimulatePhysics(bool bSimulate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetSimulatePhysics");

	ABioVehicleBase_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetReplicateMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetReplicateMovement");

	ABioVehicleBase_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetHandBrake
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetHandBrake(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetHandBrake");

	ABioVehicleBase_SetHandBrake_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ServerResetToPosition
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bResetVelocity                 (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bResetVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ServerResetToPosition");

	ABioVehicleBase_ServerResetToPosition_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bResetVelocity = bResetVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ProcessPenetration
// (Native, Event, Public, BlueprintEvent)

void ABioVehicleBase::ProcessPenetration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ProcessPenetration");

	ABioVehicleBase_ProcessPenetration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnWalkingOffLedge
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 PreviousFloorImpactNormal      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PreviousFloorContactNormal     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PreviousLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          TimeDelta                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnWalkingOffLedge");

	ABioVehicleBase_OnWalkingOffLedge_Params params;
	params.PreviousFloorImpactNormal = PreviousFloorImpactNormal;
	params.PreviousFloorContactNormal = PreviousFloorContactNormal;
	params.PreviousLocation = PreviousLocation;
	params.TimeDelta = TimeDelta;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnTakingDamage
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitInstigator                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpulseDir                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnTakingDamage");

	ABioVehicleBase_OnTakingDamage_Params params;
	params.HitActor = HitActor;
	params.HitInstigator = HitInstigator;
	params.HitInfo = HitInfo;
	params.ImpulseDir = ImpulseDir;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement
// (Native, Public)

void ABioVehicleBase::OnRep_ReplicatedBasedMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement");

	ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_HasBeenTamed
// (Final, Native, Public)

void ABioVehicleBase::OnRep_HasBeenTamed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_HasBeenTamed");

	ABioVehicleBase_OnRep_HasBeenTamed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_FuelExhausted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPrevFuelExhausted             (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnRep_FuelExhausted(bool bPrevFuelExhausted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_FuelExhausted");

	ABioVehicleBase_OnRep_FuelExhausted_Params params;
	params.bPrevFuelExhausted = bPrevFuelExhausted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnLaunched
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnLaunched");

	ABioVehicleBase_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABioVehicleBase::OnLanded(const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnLanded");

	ABioVehicleBase_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnJumped
// (Native, Event, Public, BlueprintEvent)

void ABioVehicleBase::OnJumped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnJumped");

	ABioVehicleBase_OnJumped_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnExitingVehicleOnServer
// (Event, Public, BlueprintEvent)

void ABioVehicleBase::OnExitingVehicleOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnExitingVehicleOnServer");

	ABioVehicleBase_OnExitingVehicleOnServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnEnteringVehicleOnServer
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsSucc                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnEnteringVehicleOnServer(bool IsSucc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnEnteringVehicleOnServer");

	ABioVehicleBase_OnEnteringVehicleOnServer_Params params;
	params.IsSucc = IsSucc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.MoveUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::MoveUp(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.MoveUp");

	ABioVehicleBase_MoveUp_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.LaunchCharacter
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.LaunchCharacter");

	ABioVehicleBase_LaunchCharacter_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.K2_UpdateCustomMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::K2_UpdateCustomMovement(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.K2_UpdateCustomMovement");

	ABioVehicleBase_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.K2_OnMovementModeChanged");

	ABioVehicleBase_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.Jump
// (Native, Public, BlueprintCallable)

void ABioVehicleBase::Jump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.Jump");

	ABioVehicleBase_Jump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.IsPlayingRootMotion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::IsPlayingRootMotion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.IsPlayingRootMotion");

	ABioVehicleBase_IsPlayingRootMotion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.IsJumpProvidingForce
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::IsJumpProvidingForce()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.IsJumpProvidingForce");

	ABioVehicleBase_IsJumpProvidingForce_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive
// (Native, Public)
// Parameters:
// class UAnimInstance*           ActivedAnimInstance            (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive");

	ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params params;
	params.ActivedAnimInstance = ActivedAnimInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.HandleOnClientBeenTamed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ABioVehicleBase::HandleOnClientBeenTamed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.HandleOnClientBeenTamed");

	ABioVehicleBase_HandleOnClientBeenTamed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.GetVehicleOriginToLand
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABioVehicleBase::GetVehicleOriginToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetVehicleOriginToLand");

	ABioVehicleBase_GetVehicleOriginToLand_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetVehicleBreakOutState
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::GetVehicleBreakOutState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetVehicleBreakOutState");

	ABioVehicleBase_GetVehicleBreakOutState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetSeatMountMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ABioVehicleBase::GetSeatMountMontage(ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetSeatMountMontage");

	ABioVehicleBase_GetSeatMountMontage_Params params;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetRotationInputDir
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABioVehicleBase::GetRotationInputDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetRotationInputDir");

	ABioVehicleBase_GetRotationInputDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetPlayerLookAtRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABioVehicleBase::GetPlayerLookAtRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetPlayerLookAtRotation");

	ABioVehicleBase_GetPlayerLookAtRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetConsumeFuelRate
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABioVehicleBase::GetConsumeFuelRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetConsumeFuelRate");

	ABioVehicleBase_GetConsumeFuelRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBodyShapeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBoxComponent* ABioVehicleBase::GetBodyShapeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBodyShapeComponent");

	ABioVehicleBase_GetBodyShapeComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBioVehicleMovement
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBioVehicleMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBioVehicleMovementComponent* ABioVehicleBase::GetBioVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBioVehicleMovement");

	ABioVehicleBase_GetBioVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBaseTranslationOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABioVehicleBase::GetBaseTranslationOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBaseTranslationOffset");

	ABioVehicleBase_GetBaseTranslationOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetAnimListComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBioVehicleAnimListComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBioVehicleAnimListComponent* ABioVehicleBase::GetAnimListComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetAnimListComponent");

	ABioVehicleBase_GetAnimListComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.ExitVehicle
// (Final, Native, Public)

void ABioVehicleBase::ExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ExitVehicle");

	ABioVehicleBase_ExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.EnterVehicle
// (Final, Native, Public)
// Parameters:
// bool                           IsSucc                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::EnterVehicle(bool IsSucc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.EnterVehicle");

	ABioVehicleBase_EnterVehicle_Params params;
	params.IsSucc = IsSucc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ConsumeNeedPlayMountMontage
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::ConsumeNeedPlayMountMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ConsumeNeedPlayMountMontage");

	ABioVehicleBase_ConsumeNeedPlayMountMontage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.ClientEnterVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ClientEnterVehicle");

	ABioVehicleBase_ClientEnterVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.CanJumpInternal
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanJumpInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanJumpInternal");

	ABioVehicleBase_CanJumpInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CanJump
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanJump");

	ABioVehicleBase_CanJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CanConsumeFuel
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanConsumeFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanConsumeFuel");

	ABioVehicleBase_CanConsumeFuel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CacheInitialMeshOffset
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)

void ABioVehicleBase::CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CacheInitialMeshOffset");

	ABioVehicleBase_CacheInitialMeshOffset_Params params;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.BroadCastPlayMountMontage
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::BroadCastPlayMountMontage(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.BroadCastPlayMountMontage");

	ABioVehicleBase_BroadCastPlayMountMontage_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            RandomIdleAnim                 (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::BroadCastPlayingRandomIdleAnim(int RandomIdleAnim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim");

	ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params params;
	params.RandomIdleAnim = RandomIdleAnim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ActiveRagDoll
// (Native, Event, Public, BlueprintEvent)

void ABioVehicleBase::ActiveRagDoll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ActiveRagDoll");

	ABioVehicleBase_ActiveRagDoll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ActiveFootParticleEffect
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   EffectName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActivedLocation                (Parm, IsPlainOldData)

void ABioVehicleBase::ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ActiveFootParticleEffect");

	ABioVehicleBase_ActiveFootParticleEffect_Params params;
	params.EffectName = EffectName;
	params.ActivedLocation = ActivedLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyVehicleBase.OnClientExitFromBioFlyVehicle
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABioFlyVehicleBase::OnClientExitFromBioFlyVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyVehicleBase.OnClientExitFromBioFlyVehicle");

	ABioFlyVehicleBase_OnClientExitFromBioFlyVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyVehicleBase.HandleVehicleHealthDestroy
// (Native, Public)

void ABioFlyVehicleBase::HandleVehicleHealthDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyVehicleBase.HandleVehicleHealthDestroy");

	ABioFlyVehicleBase_HandleVehicleHealthDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioFlyVehicleBase.GetBioFlyMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBioBaseFlyComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBioBaseFlyComponent* ABioFlyVehicleBase::GetBioFlyMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioFlyVehicleBase.GetBioFlyMovementComponent");

	ABioFlyVehicleBase_GetBioFlyMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            NewAnimLod                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleAnimInstanceBase::LuaOnAnimLodChanged(int NewAnimLod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged");

	UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params params;
	params.NewAnimLod = NewAnimLod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            DeviceLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleAnimInstanceBase::LuaInitializeWithDeviceLevel(int DeviceLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel");

	UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params params;
	params.DeviceLevel = DeviceLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation
// (Native, Event, Public, BlueprintEvent)

void UBioVehicleAnimInstanceBase::LuaInitializeAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation");

	UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketDanceComponent.OnRep_BlanketDanceData
// (Final, Native, Public)

void UBlanketDanceComponent::OnRep_BlanketDanceData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketDanceComponent.OnRep_BlanketDanceData");

	UBlanketDanceComponent_OnRep_BlanketDanceData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketDanceComponent.OnEnterNewDanceState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBlanketDanceState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketDanceComponent::OnEnterNewDanceState(TEnumAsByte<EBlanketDanceState> NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketDanceComponent.OnEnterNewDanceState");

	UBlanketDanceComponent_OnEnterNewDanceState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketDanceComponent.BroadCastFaceLookAtPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FRotator                InTargetRotator                (Parm, IsPlainOldData)

void UBlanketDanceComponent::BroadCastFaceLookAtPlayer(const struct FRotator& InTargetRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketDanceComponent.BroadCastFaceLookAtPlayer");

	UBlanketDanceComponent_BroadCastFaceLookAtPlayer_Params params;
	params.InTargetRotator = InTargetRotator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureDriverAnimInstance.OnCreatureJumped
// (Final, Native, Public)

void ULandingCreatureDriverAnimInstance::OnCreatureJumped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureDriverAnimInstance.OnCreatureJumped");

	ULandingCreatureDriverAnimInstance_OnCreatureJumped_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketDriverAnimInstance.OnBeginFlying
// (Native, Public)
// Parameters:
// bool                           bIsLowFlying                   (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketDriverAnimInstance::OnBeginFlying(bool bIsLowFlying)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketDriverAnimInstance.OnBeginFlying");

	UBlanketDriverAnimInstance_OnBeginFlying_Params params;
	params.bIsLowFlying = bIsLowFlying;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketDriverAnimInstance.OnBeginDiving
// (Final, Native, Public)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketDriverAnimInstance::OnBeginDiving(bool bStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketDriverAnimInstance.OnBeginDiving");

	UBlanketDriverAnimInstance_OnBeginDiving_Params params;
	params.bStart = bStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.StartFlyingDive
// (Final, Native, Public, BlueprintCallable)

void UBlanketMovementComponent::StartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.StartFlyingDive");

	UBlanketMovementComponent_StartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.SetServerDiveDirection
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 ClientDivDirection             (Parm, IsPlainOldData)

void UBlanketMovementComponent::SetServerDiveDirection(const struct FVector& ClientDivDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.SetServerDiveDirection");

	UBlanketMovementComponent_SetServerDiveDirection_Params params;
	params.ClientDivDirection = ClientDivDirection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.SetMovementMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.SetMovementMode");

	UBlanketMovementComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.IsRisingToHigh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsRisingToHigh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsRisingToHigh");

	UBlanketMovementComponent_IsRisingToHigh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsLowFlying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsLowFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsLowFlying");

	UBlanketMovementComponent_IsLowFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsHighFlying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsHighFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsHighFlying");

	UBlanketMovementComponent_IsHighFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsDroppingToLow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsDroppingToLow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsDroppingToLow");

	UBlanketMovementComponent_IsDroppingToLow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsDiving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsDiving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsDiving");

	UBlanketMovementComponent_IsDiving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsCurveMoving
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsCurveMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsCurveMoving");

	UBlanketMovementComponent_IsCurveMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.IsAutoLanding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::IsAutoLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.IsAutoLanding");

	UBlanketMovementComponent_IsAutoLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.GetFlyingConfig
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FFlyBioVehicleFlyingConfig ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFlyBioVehicleFlyingConfig UBlanketMovementComponent::GetFlyingConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.GetFlyingConfig");

	UBlanketMovementComponent_GetFlyingConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.GetBlanketMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EBlankVehicleBaseMoveMode      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBlankVehicleBaseMoveMode UBlanketMovementComponent::GetBlanketMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.GetBlanketMoveState");

	UBlanketMovementComponent_GetBlanketMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.EndFlyingDive
// (Final, Native, Public, BlueprintCallable)

void UBlanketMovementComponent::EndFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.EndFlyingDive");

	UBlanketMovementComponent_EndFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.DealWithCustomAction
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketMovementComponent::DealWithCustomAction(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.DealWithCustomAction");

	UBlanketMovementComponent_DealWithCustomAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketMovementComponent.CheckVehicleCanSwitchMoveMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRiseToHigh                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::CheckVehicleCanSwitchMoveMode(bool bRiseToHigh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.CheckVehicleCanSwitchMoveMode");

	UBlanketMovementComponent_CheckVehicleCanSwitchMoveMode_Params params;
	params.bRiseToHigh = bRiseToHigh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.CheckCanStartFlyingDive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlanketMovementComponent::CheckCanStartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.CheckCanStartFlyingDive");

	UBlanketMovementComponent_CheckCanStartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketMovementComponent.CalculateDivingVelocity
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketMovementComponent::CalculateDivingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketMovementComponent.CalculateDivingVelocity");

	UBlanketMovementComponent_CalculateDivingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.TryVehicleDive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::TryVehicleDive(bool bStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.TryVehicleDive");

	ABlanketVehicle_TryVehicleDive_Params params;
	params.bStart = bStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.TrySwitchFlyingHeightMode
// (Final, Native, Public, BlueprintCallable)

void ABlanketVehicle::TrySwitchFlyingHeightMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.TrySwitchFlyingHeightMode");

	ABlanketVehicle_TrySwitchFlyingHeightMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.OnRep_BlanketDiveCDChanged
// (Final, Native, Public)
// Parameters:
// bool                           bPrevState                     (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::OnRep_BlanketDiveCDChanged(bool bPrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.OnRep_BlanketDiveCDChanged");

	ABlanketVehicle_OnRep_BlanketDiveCDChanged_Params params;
	params.bPrevState = bPrevState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.HandleDeviceLevel
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            DeviceLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::HandleDeviceLevel(int DeviceLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.HandleDeviceLevel");

	ABlanketVehicle_HandleDeviceLevel_Params params;
	params.DeviceLevel = DeviceLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.GetConsumeFuelRate
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABlanketVehicle::GetConsumeFuelRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.GetConsumeFuelRate");

	ABlanketVehicle_GetConsumeFuelRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketVehicle.EnableSwitchModeCameraModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::EnableSwitchModeCameraModifier(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.EnableSwitchModeCameraModifier");

	ABlanketVehicle_EnableSwitchModeCameraModifier_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.EnableDiveCameraModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::EnableDiveCameraModifier(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.EnableDiveCameraModifier");

	ABlanketVehicle_EnableDiveCameraModifier_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.DoSwitchFlyingHeightMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRiseToHigh                    (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::DoSwitchFlyingHeightMode(bool bRiseToHigh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.DoSwitchFlyingHeightMode");

	ABlanketVehicle_DoSwitchFlyingHeightMode_Params params;
	params.bRiseToHigh = bRiseToHigh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.DestroyAllCachedParticleEffect
// (Final, Native, Protected, BlueprintCallable)

void ABlanketVehicle::DestroyAllCachedParticleEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.DestroyAllCachedParticleEffect");

	ABlanketVehicle_DestroyAllCachedParticleEffect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicle.CanUpdateMovementInput
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABlanketVehicle::CanUpdateMovementInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.CanUpdateMovementInput");

	ABlanketVehicle_CanUpdateMovementInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketVehicle.CanConsumeFuel
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABlanketVehicle::CanConsumeFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.CanConsumeFuel");

	ABlanketVehicle_CanConsumeFuel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketVehicle.CanBlanketSwitchMoveMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRiseToHigh                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABlanketVehicle::CanBlanketSwitchMoveMode(bool bRiseToHigh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.CanBlanketSwitchMoveMode");

	ABlanketVehicle_CanBlanketSwitchMoveMode_Params params;
	params.bRiseToHigh = bRiseToHigh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketVehicle.CanBlanketDive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABlanketVehicle::CanBlanketDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.CanBlanketDive");

	ABlanketVehicle_CanBlanketDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BlanketVehicle.CallServerSwitch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bRiseToHigh                    (Parm, ZeroConstructor, IsPlainOldData)

void ABlanketVehicle::CallServerSwitch(bool bRiseToHigh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicle.CallServerSwitch");

	ABlanketVehicle_CallServerSwitch_Params params;
	params.bRiseToHigh = bRiseToHigh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.SetJump
// (Native, Public)

void ULandingCreatureAnimInstance::SetJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.SetJump");

	ULandingCreatureAnimInstance_SetJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetStop
// (Final, Native, Private)

void ULandingCreatureAnimInstance::ResetStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetStop");

	ULandingCreatureAnimInstance_ResetStop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetJump
// (Final, Native, Public)

void ULandingCreatureAnimInstance::ResetJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetJump");

	ULandingCreatureAnimInstance_ResetJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle
// (Final, Native, Private)

void ULandingCreatureAnimInstance::ResetDoRandomIdle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle");

	ULandingCreatureAnimInstance_ResetDoRandomIdle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.DoRandomIdle
// (Final, Native, Private)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandingCreatureAnimInstance::DoRandomIdle(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.DoRandomIdle");

	ULandingCreatureAnimInstance_DoRandomIdle_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicleAnimInstance.Turn
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                TargetRotator                  (Parm, IsPlainOldData)

void UBlanketVehicleAnimInstance::Turn(const struct FRotator& TargetRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicleAnimInstance.Turn");

	UBlanketVehicleAnimInstance_Turn_Params params;
	params.TargetRotator = TargetRotator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicleAnimInstance.OnOwnerBlanketChangeDanceState
// (Final, Native, Public)
// Parameters:
// struct FBlanketDanceData       InBlanketData                  (Parm)

void UBlanketVehicleAnimInstance::OnOwnerBlanketChangeDanceState(const struct FBlanketDanceData& InBlanketData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicleAnimInstance.OnOwnerBlanketChangeDanceState");

	UBlanketVehicleAnimInstance_OnOwnerBlanketChangeDanceState_Params params;
	params.InBlanketData = InBlanketData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicleAnimInstance.OnBeginFlying
// (Final, Native, Public)
// Parameters:
// bool                           bIsLowFlying                   (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketVehicleAnimInstance::OnBeginFlying(bool bIsLowFlying)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicleAnimInstance.OnBeginFlying");

	UBlanketVehicleAnimInstance_OnBeginFlying_Params params;
	params.bIsLowFlying = bIsLowFlying;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BlanketVehicleAnimInstance.OnBeginDiving
// (Final, Native, Public)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlanketVehicleAnimInstance::OnBeginDiving(bool bStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BlanketVehicleAnimInstance.OnBeginDiving");

	UBlanketVehicleAnimInstance_OnBeginDiving_Params params;
	params.bStart = bStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.CameraModifier_MechaCombineSmooth.ActiveMechaSmoothModifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* OwnerPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UCameraModifier_MechaCombineSmooth* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraModifier_MechaCombineSmooth* UCameraModifier_MechaCombineSmooth::ActiveMechaSmoothModifier(class ASTExtraPlayerCharacter* OwnerPlayer, float LerpTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.CameraModifier_MechaCombineSmooth.ActiveMechaSmoothModifier");

	UCameraModifier_MechaCombineSmooth_ActiveMechaSmoothModifier_Params params;
	params.OwnerPlayer = OwnerPlayer;
	params.LerpTime = LerpTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingComponent::ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess");

	UDistanceMatchingComponent_ServerOnDistanceMatchSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingComponent.PredictStopLocation
// (Final, Native, Private, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDistanceMatchingComponent::PredictStopLocation(struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.PredictStopLocation");

	UDistanceMatchingComponent_PredictStopLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function Addons.DistanceMatchingComponent.OnEndAccelerating
// (Final, Native, Private)

void UDistanceMatchingComponent::OnEndAccelerating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.OnEndAccelerating");

	UDistanceMatchingComponent_OnEndAccelerating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance
// (Final, Native, Private, Const)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UDistanceMatchingComponent::GetBioVehicleAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance");

	UDistanceMatchingComponent_GetBioVehicleAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingComponent::BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess");

	UDistanceMatchingComponent_BroadCastOnDistanceMatchSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingInterface::OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess");

	UDistanceMatchingInterface_OnDistanceMatchingSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.EventDataCollectionKeys.GetTimestamp
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys::GetTimestamp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys.GetTimestamp");

	UEventDataCollectionKeys_GetTimestamp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys.GetTeammatePositions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys::GetTeammatePositions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys.GetTeammatePositions");

	UEventDataCollectionKeys_GetTeammatePositions_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys.GetSelfPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys::GetSelfPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys.GetSelfPosition");

	UEventDataCollectionKeys_GetSelfPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues.GetTeammatePositionsFromContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ActorContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEventDataCollectionValues::GetTeammatePositionsFromContext(class AActor* ActorContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues.GetTeammatePositionsFromContext");

	UEventDataCollectionValues_GetTeammatePositionsFromContext_Params params;
	params.ActorContext = ActorContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues.GetTeammatePositions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASTExtraPlayerState*     STExtraPlayerState             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEventDataCollectionValues::GetTeammatePositions(class ASTExtraPlayerState* STExtraPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues.GetTeammatePositions");

	UEventDataCollectionValues_GetTeammatePositions_Params params;
	params.STExtraPlayerState = STExtraPlayerState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues.GetTeammateOpenIds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASTExtraPlayerState*     STExtraPlayerState             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEventDataCollectionValues::GetTeammateOpenIds(class ASTExtraPlayerState* STExtraPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues.GetTeammateOpenIds");

	UEventDataCollectionValues_GetTeammateOpenIds_Params params;
	params.STExtraPlayerState = STExtraPlayerState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetViewType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetViewType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetViewType");

	UEventDataCollectionKeys_RankingScore_GetViewType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetTreatment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetTreatment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetTreatment");

	UEventDataCollectionKeys_RankingScore_GetTreatment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetTime");

	UEventDataCollectionKeys_RankingScore_GetTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetTeammates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetTeammates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetTeammates");

	UEventDataCollectionKeys_RankingScore_GetTeammates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetSurvivalTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetSurvivalTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetSurvivalTime");

	UEventDataCollectionKeys_RankingScore_GetSurvivalTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetRescureCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetRescureCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetRescureCount");

	UEventDataCollectionKeys_RankingScore_GetRescureCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetRescueTimes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetRescueTimes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetRescueTimes");

	UEventDataCollectionKeys_RankingScore_GetRescueTimes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetRank
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetRank()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetRank");

	UEventDataCollectionKeys_RankingScore_GetRank_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetPlayerName");

	UEventDataCollectionKeys_RankingScore_GetPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetMaxKillDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetMaxKillDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetMaxKillDistance");

	UEventDataCollectionKeys_RankingScore_GetMaxKillDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetMarchDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetMarchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetMarchDistance");

	UEventDataCollectionKeys_RankingScore_GetMarchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetMapId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetMapId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetMapId");

	UEventDataCollectionKeys_RankingScore_GetMapId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetKnockouts
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetKnockouts()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetKnockouts");

	UEventDataCollectionKeys_RankingScore_GetKnockouts_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumInVehicle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetKillNumInVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumInVehicle");

	UEventDataCollectionKeys_RankingScore_GetKillNumInVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumByGrenade
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetKillNumByGrenade()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumByGrenade");

	UEventDataCollectionKeys_RankingScore_GetKillNumByGrenade_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetKillNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetKillNum");

	UEventDataCollectionKeys_RankingScore_GetKillNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetKill
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetKill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetKill");

	UEventDataCollectionKeys_RankingScore_GetKill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetInDamage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetInDamage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetInDamage");

	UEventDataCollectionKeys_RankingScore_GetInDamage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetHurt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetHurt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetHurt");

	UEventDataCollectionKeys_RankingScore_GetHurt_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetHeal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetHeal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetHeal");

	UEventDataCollectionKeys_RankingScore_GetHeal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetHeadShotNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetHeadShotNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetHeadShotNum");

	UEventDataCollectionKeys_RankingScore_GetHeadShotNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetGotAirDropNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetGotAirDropNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetGotAirDropNum");

	UEventDataCollectionKeys_RankingScore_GetGotAirDropNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetGameID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetGameID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetGameID");

	UEventDataCollectionKeys_RankingScore_GetGameID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetDriveDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetDriveDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetDriveDistance");

	UEventDataCollectionKeys_RankingScore_GetDriveDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetDamage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetDamage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetDamage");

	UEventDataCollectionKeys_RankingScore_GetDamage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetAssists
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetAssists()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetAssists");

	UEventDataCollectionKeys_RankingScore_GetAssists_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetAliveTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetAliveTeamNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetAliveTeamNum");

	UEventDataCollectionKeys_RankingScore_GetAliveTeamNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankingScore.GetAlivePlayerNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankingScore::GetAlivePlayerNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankingScore.GetAlivePlayerNum");

	UEventDataCollectionKeys_RankingScore_GetAlivePlayerNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetWorldLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetWorldLocation");

	UEventDataCollectionKeys_GameStatus_GetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetWeather
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetWeather()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetWeather");

	UEventDataCollectionKeys_GameStatus_GetWeather_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetTotalPlayerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetTotalPlayerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetTotalPlayerCount");

	UEventDataCollectionKeys_GameStatus_GetTotalPlayerCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetToPlaneCarryLeftTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetToPlaneCarryLeftTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetToPlaneCarryLeftTime");

	UEventDataCollectionKeys_GameStatus_GetToPlaneCarryLeftTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetTeamId");

	UEventDataCollectionKeys_GameStatus_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStop
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetPlaneRouteStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStop");

	UEventDataCollectionKeys_GameStatus_GetPlaneRouteStop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetPlaneRouteStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStart");

	UEventDataCollectionKeys_GameStatus_GetPlaneRouteStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetOpenId");

	UEventDataCollectionKeys_GameStatus_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetGameStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetGameStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetGameStatus");

	UEventDataCollectionKeys_GameStatus_GetGameStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_GameStatus.GetAlivePlayerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_GameStatus::GetAlivePlayerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_GameStatus.GetAlivePlayerCount");

	UEventDataCollectionKeys_GameStatus_GetAlivePlayerCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetWin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWin");

	UEventDataCollectionValues_GameStatus_GameStatus_GetWin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWaitingOnLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetWaitingOnLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWaitingOnLobby");

	UEventDataCollectionValues_GameStatus_GameStatus_GetWaitingOnLobby_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetQualityPlaza
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetQualityPlaza()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetQualityPlaza");

	UEventDataCollectionValues_GameStatus_GameStatus_GetQualityPlaza_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetPlaneCarrying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetPlaneCarrying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetPlaneCarrying");

	UEventDataCollectionValues_GameStatus_GameStatus_GetPlaneCarrying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteOpen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetParachuteOpen()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteOpen");

	UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteOpen_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteJumping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetParachuteJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteJumping");

	UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteJumping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetMatching
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetMatching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetMatching");

	UEventDataCollectionValues_GameStatus_GameStatus_GetMatching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetLanding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetLanding");

	UEventDataCollectionValues_GameStatus_GameStatus_GetLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFireWorking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetFireWorking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFireWorking");

	UEventDataCollectionValues_GameStatus_GameStatus_GetFireWorking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFighting
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFighting");

	UEventDataCollectionValues_GameStatus_GameStatus_GetFighting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetCake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_GameStatus_GameStatus::GetCake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetCake");

	UEventDataCollectionValues_GameStatus_GameStatus_GetCake_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetViewType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetViewType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetViewType");

	UEventDataCollectionKeys_StartMatching_GetViewType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetTeamCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetTeamCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetTeamCount");

	UEventDataCollectionKeys_StartMatching_GetTeamCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetPlayerCountInGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetPlayerCountInGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetPlayerCountInGameMode");

	UEventDataCollectionKeys_StartMatching_GetPlayerCountInGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetMapId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetMapId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetMapId");

	UEventDataCollectionKeys_StartMatching_GetMapId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetGameMode");

	UEventDataCollectionKeys_StartMatching_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_StartMatching.GetFullTeamCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_StartMatching::GetFullTeamCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_StartMatching.GetFullTeamCount");

	UEventDataCollectionKeys_StartMatching_GetFullTeamCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetStartPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PlaneCarrying::GetStartPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PlaneCarrying.GetStartPosition");

	UEventDataCollectionKeys_PlaneCarrying_GetStartPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetEndPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PlaneCarrying::GetEndPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PlaneCarrying.GetEndPosition");

	UEventDataCollectionKeys_PlaneCarrying_GetEndPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetFireWorksOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PuttingDownCakeFireWorks::GetFireWorksOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetFireWorksOpenId");

	UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetFireWorksOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetCakeOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PuttingDownCakeFireWorks::GetCakeOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetCakeOpenId");

	UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetCakeOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetType");

	UEventDataCollectionKeys_TakeDropItem_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetReason()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetReason");

	UEventDataCollectionKeys_TakeDropItem_GetReason_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetPlayerName");

	UEventDataCollectionKeys_TakeDropItem_GetPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetOpenId");

	UEventDataCollectionKeys_TakeDropItem_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemInstanceId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetItemInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemInstanceId");

	UEventDataCollectionKeys_TakeDropItem_GetItemInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemId");

	UEventDataCollectionKeys_TakeDropItem_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemCount");

	UEventDataCollectionKeys_TakeDropItem_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetHoldingCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetHoldingCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetHoldingCount");

	UEventDataCollectionKeys_TakeDropItem_GetHoldingCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBulletCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetBulletCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetBulletCount");

	UEventDataCollectionKeys_TakeDropItem_GetBulletCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBackpackAvatarItemDurability
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakeDropItem::GetBackpackAvatarItemDurability()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakeDropItem.GetBackpackAvatarItemDurability");

	UEventDataCollectionKeys_TakeDropItem_GetBackpackAvatarItemDurability_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetTaking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakeDropItem_Type::GetTaking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetTaking");

	UEventDataCollectionValues_TakeDropItem_Type_GetTaking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetDropping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakeDropItem_Type::GetDropping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetDropping");

	UEventDataCollectionValues_TakeDropItem_Type_GetDropping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetStatus");

	UEventDataCollectionKeys_UsingItem_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetPredictLine
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetPredictLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetPredictLine");

	UEventDataCollectionKeys_UsingItem_GetPredictLine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetPlayerName");

	UEventDataCollectionKeys_UsingItem_GetPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetOpenId");

	UEventDataCollectionKeys_UsingItem_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetItemLeftCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetItemLeftCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetItemLeftCount");

	UEventDataCollectionKeys_UsingItem_GetItemLeftCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UsingItem.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UsingItem::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UsingItem.GetItemId");

	UEventDataCollectionKeys_UsingItem_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UsingItem_Status.GetLeading
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UsingItem_Status::GetLeading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UsingItem_Status.GetLeading");

	UEventDataCollectionValues_UsingItem_Status_GetLeading_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UsingItem_Status.GetInteruption
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UsingItem_Status::GetInteruption()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UsingItem_Status.GetInteruption");

	UEventDataCollectionValues_UsingItem_Status_GetInteruption_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UsingItem_Status.GetCompletion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UsingItem_Status::GetCompletion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UsingItem_Status.GetCompletion");

	UEventDataCollectionValues_UsingItem_Status_GetCompletion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Falling.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Falling::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Falling.GetType");

	UEventDataCollectionKeys_Falling_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Falling.GetStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Falling::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Falling.GetStatus");

	UEventDataCollectionKeys_Falling_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Falling_Type.GetStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Falling_Type::GetStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Falling_Type.GetStart");

	UEventDataCollectionValues_Falling_Type_GetStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Falling_Type.GetEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Falling_Type::GetEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Falling_Type.GetEnd");

	UEventDataCollectionValues_Falling_Type_GetEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Falling_Status.GetNonDriving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Falling_Status::GetNonDriving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Falling_Status.GetNonDriving");

	UEventDataCollectionValues_Falling_Status_GetNonDriving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Falling_Status.GetDriving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Falling_Status::GetDriving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Falling_Status.GetDriving");

	UEventDataCollectionValues_Falling_Status_GetDriving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetUniqueIdentifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetUniqueIdentifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetUniqueIdentifier");

	UEventDataCollectionKeys_InFieldOfView_GetUniqueIdentifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetTargetWorldLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetTargetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetTargetWorldLocation");

	UEventDataCollectionKeys_InFieldOfView_GetTargetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetOldFieldOfViewNotificationStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetOldFieldOfViewNotificationStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetOldFieldOfViewNotificationStatus");

	UEventDataCollectionKeys_InFieldOfView_GetOldFieldOfViewNotificationStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMyWorldLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetMyWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetMyWorldLocation");

	UEventDataCollectionKeys_InFieldOfView_GetMyWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMinimalScreenLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetMinimalScreenLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetMinimalScreenLocation");

	UEventDataCollectionKeys_InFieldOfView_GetMinimalScreenLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMaximumScreenLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetMaximumScreenLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetMaximumScreenLocation");

	UEventDataCollectionKeys_InFieldOfView_GetMaximumScreenLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetFieldOfViewTargetCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetFieldOfViewTargetCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetFieldOfViewTargetCategory");

	UEventDataCollectionKeys_InFieldOfView_GetFieldOfViewTargetCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_InFieldOfView.GetCurrentFieldOfViewNotificationStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_InFieldOfView::GetCurrentFieldOfViewNotificationStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_InFieldOfView.GetCurrentFieldOfViewNotificationStatus");

	UEventDataCollectionKeys_InFieldOfView_GetCurrentFieldOfViewNotificationStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTombBox
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetTombBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTombBox");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTombBox_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammateVehicle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetTeammateVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammateVehicle");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammateVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammate");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetSmog
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetSmog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetSmog");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetSmog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetFireWorks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetFireWorks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetFireWorks");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetFireWorks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemyVehicle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetEnemyVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemyVehicle");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemyVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemy");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetCake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetCake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetCake");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetCake_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetBombing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetBombing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetBombing");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetBombing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetAirDroping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_InFieldOfView_FieldOfView::GetAirDroping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetAirDroping");

	UEventDataCollectionValues_InFieldOfView_FieldOfView_GetAirDroping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetValue");

	UEventDataCollectionKeys_UnderEnermyAttack_GetValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetTargetPart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetTargetPart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetTargetPart");

	UEventDataCollectionKeys_UnderEnermyAttack_GetTargetPart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetResult2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult2");

	UEventDataCollectionKeys_UnderEnermyAttack_GetResult2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult");

	UEventDataCollectionKeys_UnderEnermyAttack_GetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetReason()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetReason");

	UEventDataCollectionKeys_UnderEnermyAttack_GetReason_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUniqueIdentifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtUniqueIdentifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUniqueIdentifier");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUniqueIdentifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtUid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUid");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtPosture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosture");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosition");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtPlayerTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerTeamId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerName");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtOpenId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtMaxBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtMaxBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtMaxBulletCountInClip");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtMaxBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtIsInHouse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtIsInHouse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtIsInHouse");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtIsInHouse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtHealth");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtEquipId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtEquipId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtEquipId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtEquipId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtDirection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtDirection");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtDirection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtCarForwardSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtCarForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtCarForwardSpeed");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtCarForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInClip");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInBarrel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtBulletCountInBarrel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInBarrel");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInBarrel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtAim
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetHurtAim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtAim");

	UEventDataCollectionKeys_UnderEnermyAttack_GetHurtAim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDph
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetDph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDph");

	UEventDataCollectionKeys_UnderEnermyAttack_GetDph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDistance");

	UEventDataCollectionKeys_UnderEnermyAttack_GetDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetCarValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarValue");

	UEventDataCollectionKeys_UnderEnermyAttack_GetCarValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetCarHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarHealth");

	UEventDataCollectionKeys_UnderEnermyAttack_GetCarHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUniqueIdentifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtUniqueIdentifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUniqueIdentifier");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUniqueIdentifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtUid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUid");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtPosture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosture");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosition");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtPlayerTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerTeamId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerName");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtOpenId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtLastHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtLastHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtLastHealth");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtLastHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurabilityReduction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtJacketDurabilityReduction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurabilityReduction");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurabilityReduction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurability
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtJacketDurability()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurability");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurability_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtJacket()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacket");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacket_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtIsInHouse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtIsInHouse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtIsInHouse");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtIsInHouse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurabilityReduction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtHelmetDurabilityReduction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurabilityReduction");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurabilityReduction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurability
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtHelmetDurability()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurability");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurability_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtHelmet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmet");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHealth");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtEquipId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtEquipId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtEquipId");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtEquipId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtDirection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtDirection");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtDirection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtCarForwardSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetBeHurtCarForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtCarForwardSpeed");

	UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtCarForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetAce
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_UnderEnermyAttack::GetAce()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetAce");

	UEventDataCollectionKeys_UnderEnermyAttack_GetAce_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetWeedingOut
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Result::GetWeedingOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetWeedingOut");

	UEventDataCollectionValues_UnderEnermyAttack_Result_GetWeedingOut_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetReducingHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Result::GetReducingHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetReducingHealth");

	UEventDataCollectionValues_UnderEnermyAttack_Result_GetReducingHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOutReducingHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Result::GetKnockingOutReducingHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOutReducingHealth");

	UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOutReducingHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOut
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Result::GetKnockingOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOut");

	UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOut_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result2.GetWeedingOut2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Result2::GetWeedingOut2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result2.GetWeedingOut2");

	UEventDataCollectionValues_UnderEnermyAttack_Result2_GetWeedingOut2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleColliding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetVehicleColliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleColliding");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleColliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleBombing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetVehicleBombing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleBombing");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleBombing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetPoison
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetPoison()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetPoison");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetPoison_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetLastBreathWithoutRescue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetLastBreathWithoutRescue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetLastBreathWithoutRescue");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetLastBreathWithoutRescue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetFalling
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetFalling()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetFalling");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetFalling_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetDrowning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetDrowning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetDrowning");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetDrowning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetBombing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetBombing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetBombing");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetBombing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetAirAttacking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::GetAirAttacking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetAirAttacking");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_GetAirAttacking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.FromDamageEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_Reason::FromDamageEvent(const struct FDamageEvent& DamageEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.FromDamageEvent");

	UEventDataCollectionValues_UnderEnermyAttack_Reason_FromDamageEvent_Params params;
	params.DamageEvent = DamageEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetWalking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetWalking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetWalking");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetWalking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetTurningHead
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetTurningHead()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetTurningHead");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetTurningHead_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetStanding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetStanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetStanding");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetStanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetRunning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetRunning");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetRunning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetProning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetProning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetProning");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetProning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetJumping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetJumping");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetJumping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetDying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDying");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDriving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetDriving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDriving");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDriving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCrouching
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetCrouching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCrouching");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCrouching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCarriging
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::GetCarriging()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCarriging");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCarriging_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnStates
// (Final, Native, Static, Public, Const)
// Parameters:
// int64_t                        PawnStates                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::FromPawnStates(int64_t PawnStates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnStates");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnStates_Params params;
	params.PawnStates = PawnStates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPawnState                     PawnState                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture::FromPawnState(EPawnState PawnState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnState");

	UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnState_Params params;
	params.PawnState = PawnState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASTExtraBaseCharacter*   AttackerSTExtraBaseCharacter   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEventDataCollectionValues_UnderEnermyAttack_HurtAim::Get(class ASTExtraBaseCharacter* AttackerSTExtraBaseCharacter, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim.Get");

	UEventDataCollectionValues_UnderEnermyAttack_HurtAim_Get_Params params;
	params.AttackerSTExtraBaseCharacter = AttackerSTExtraBaseCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakingDamage.GetResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakingDamage::GetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakingDamage.GetResult");

	UEventDataCollectionKeys_TakingDamage_GetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakingDamage.GetReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakingDamage::GetReason()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakingDamage.GetReason");

	UEventDataCollectionKeys_TakingDamage_GetReason_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakingDamage.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakingDamage::GetPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakingDamage.GetPlayerName");

	UEventDataCollectionKeys_TakingDamage_GetPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakingDamage.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakingDamage::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakingDamage.GetOpenId");

	UEventDataCollectionKeys_TakingDamage_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TakingDamage.GetLeftHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TakingDamage::GetLeftHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TakingDamage.GetLeftHealth");

	UEventDataCollectionKeys_TakingDamage_GetLeftHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleColliding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetVehicleColliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleColliding");

	UEventDataCollectionValues_TakingDamage_Reason_GetVehicleColliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleBombing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetVehicleBombing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleBombing");

	UEventDataCollectionValues_TakingDamage_Reason_GetVehicleBombing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetPoison
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetPoison()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetPoison");

	UEventDataCollectionValues_TakingDamage_Reason_GetPoison_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetLastBreathWithoutRescue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetLastBreathWithoutRescue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetLastBreathWithoutRescue");

	UEventDataCollectionValues_TakingDamage_Reason_GetLastBreathWithoutRescue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetFalling
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetFalling()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetFalling");

	UEventDataCollectionValues_TakingDamage_Reason_GetFalling_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetDrowning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetDrowning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetDrowning");

	UEventDataCollectionValues_TakingDamage_Reason_GetDrowning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetBombing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetBombing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetBombing");

	UEventDataCollectionValues_TakingDamage_Reason_GetBombing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetAirAttacking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::GetAirAttacking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetAirAttacking");

	UEventDataCollectionValues_TakingDamage_Reason_GetAirAttacking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_TakingDamage_Reason.FromDamageEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_TakingDamage_Reason::FromDamageEvent(const struct FDamageEvent& DamageEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_TakingDamage_Reason.FromDamageEvent");

	UEventDataCollectionValues_TakingDamage_Reason_FromDamageEvent_Params params;
	params.DamageEvent = DamageEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleReducing.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleReducing::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleReducing.GetOpenId");

	UEventDataCollectionKeys_CircleReducing_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleChange.GetWorldLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleChange::GetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleChange.GetWorldLocation");

	UEventDataCollectionKeys_CircleChange_GetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleChange::GetOldCircleRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleRadius");

	UEventDataCollectionKeys_CircleChange_GetOldCircleRadius_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleCenter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleChange::GetOldCircleCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleCenter");

	UEventDataCollectionKeys_CircleChange_GetOldCircleCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleChange::GetNewCircleRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleRadius");

	UEventDataCollectionKeys_CircleChange_GetNewCircleRadius_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleCenter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CircleChange::GetNewCircleCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleCenter");

	UEventDataCollectionKeys_CircleChange_GetNewCircleCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Rescue.GetStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Rescue::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Rescue.GetStatus");

	UEventDataCollectionKeys_Rescue_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Rescue.GetRescuePlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Rescue::GetRescuePlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Rescue.GetRescuePlayerName");

	UEventDataCollectionKeys_Rescue_GetRescuePlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Rescue.GetRescueOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Rescue::GetRescueOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Rescue.GetRescueOpenId");

	UEventDataCollectionKeys_Rescue_GetRescueOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescuePlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Rescue::GetBeRescuePlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Rescue.GetBeRescuePlayerName");

	UEventDataCollectionKeys_Rescue_GetBeRescuePlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescueOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Rescue::GetBeRescueOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Rescue.GetBeRescueOpenId");

	UEventDataCollectionKeys_Rescue_GetBeRescueOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetVehicleId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetVehicleId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetVehicleId");

	UEventDataCollectionKeys_DrivingVehicle_GetVehicleId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetTire
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetTire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetTire");

	UEventDataCollectionKeys_DrivingVehicle_GetTire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetStatus");

	UEventDataCollectionKeys_DrivingVehicle_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetSpeed");

	UEventDataCollectionKeys_DrivingVehicle_GetSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetPassengerOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetPassengerOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetPassengerOpenId");

	UEventDataCollectionKeys_DrivingVehicle_GetPassengerOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetOil
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetOil()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetOil");

	UEventDataCollectionKeys_DrivingVehicle_GetOil_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDrivingType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetDrivingType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDrivingType");

	UEventDataCollectionKeys_DrivingVehicle_GetDrivingType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverUId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetDriverUId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverUId");

	UEventDataCollectionKeys_DrivingVehicle_GetDriverUId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetDriverPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverPlayerName");

	UEventDataCollectionKeys_DrivingVehicle_GetDriverPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_DrivingVehicle::GetDriverOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverOpenId");

	UEventDataCollectionKeys_DrivingVehicle_GetDriverOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetPassanger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_DrivingVehicle_DrivingType::GetPassanger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetPassanger");

	UEventDataCollectionValues_DrivingVehicle_DrivingType_GetPassanger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetDriver
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_DrivingVehicle_DrivingType::GetDriver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetDriver");

	UEventDataCollectionValues_DrivingVehicle_DrivingType_GetDriver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_DrivingVehicle_Status::GetOn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOn");

	UEventDataCollectionValues_DrivingVehicle_Status_GetOn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOff
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_DrivingVehicle_Status::GetOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOff");

	UEventDataCollectionValues_DrivingVehicle_Status_GetOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetMaxBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ReloadingBullet::GetMaxBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ReloadingBullet.GetMaxBulletCountInClip");

	UEventDataCollectionKeys_ReloadingBullet_GetMaxBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ReloadingBullet::GetBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInClip");

	UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInBarrel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ReloadingBullet::GetBulletCountInBarrel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInBarrel");

	UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInBarrel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_AirDrop.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_AirDrop::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_AirDrop.GetType");

	UEventDataCollectionKeys_AirDrop_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_AirDrop.GetPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_AirDrop::GetPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_AirDrop.GetPosition");

	UEventDataCollectionKeys_AirDrop_GetPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_AirDrop.GetLandedPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_AirDrop::GetLandedPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_AirDrop.GetLandedPosition");

	UEventDataCollectionKeys_AirDrop_GetLandedPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_AirDrop_Type.GetSuper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_AirDrop_Type::GetSuper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_AirDrop_Type.GetSuper");

	UEventDataCollectionValues_AirDrop_Type_GetSuper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_AirDrop_Type.GetNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_AirDrop_Type::GetNormal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_AirDrop_Type.GetNormal");

	UEventDataCollectionValues_AirDrop_Type_GetNormal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ItemAttach.GetState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ItemAttach::GetState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ItemAttach.GetState");

	UEventDataCollectionKeys_ItemAttach_GetState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ItemAttach.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ItemAttach::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ItemAttach.GetOpenId");

	UEventDataCollectionKeys_ItemAttach_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ItemAttach.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ItemAttach::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ItemAttach.GetItemId");

	UEventDataCollectionKeys_ItemAttach_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_ItemAttach.GetAttachmentId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_ItemAttach::GetAttachmentId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_ItemAttach.GetAttachmentId");

	UEventDataCollectionKeys_ItemAttach_GetAttachmentId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_ItemAttach_State.GetDetaching
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_ItemAttach_State::GetDetaching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_ItemAttach_State.GetDetaching");

	UEventDataCollectionValues_ItemAttach_State_GetDetaching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_ItemAttach_State.GetAttaching
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_ItemAttach_State::GetAttaching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_ItemAttach_State.GetAttaching");

	UEventDataCollectionValues_ItemAttach_State_GetAttaching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PlayerInfo.GetSex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PlayerInfo::GetSex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PlayerInfo.GetSex");

	UEventDataCollectionKeys_PlayerInfo_GetSex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PlayerInfo.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PlayerInfo::GetPlayerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PlayerInfo.GetPlayerName");

	UEventDataCollectionKeys_PlayerInfo_GetPlayerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PlayerInfo.GetAvatars
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PlayerInfo::GetAvatars()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PlayerInfo.GetAvatars");

	UEventDataCollectionKeys_PlayerInfo_GetAvatars_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetMale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_PlayerInfo_Sex::GetMale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetMale");

	UEventDataCollectionValues_PlayerInfo_Sex_GetMale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetFemale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_PlayerInfo_Sex::GetFemale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetFemale");

	UEventDataCollectionValues_PlayerInfo_Sex_GetFemale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetVoiceCheck
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MiniMapShowInfo::GetVoiceCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetVoiceCheck");

	UEventDataCollectionKeys_MiniMapShowInfo_GetVoiceCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MiniMapShowInfo::GetPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetPosition");

	UEventDataCollectionKeys_MiniMapShowInfo_GetPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck::GetWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetWeapon");

	UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetTyre
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck::GetTyre()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetTyre");

	UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetTyre_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetSilentWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck::GetSilentWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetSilentWeapon");

	UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetSilentWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetGlass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck::GetGlass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetGlass");

	UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetGlass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetFootPrint
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck::GetFootPrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetFootPrint");

	UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetFootPrint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Following.GetFollowType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Following::GetFollowType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Following.GetFollowType");

	UEventDataCollectionKeys_Following_GetFollowType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Following.GetFollowerOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Following::GetFollowerOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Following.GetFollowerOpenId");

	UEventDataCollectionKeys_Following_GetFollowerOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Following.GetFolloweeOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Following::GetFolloweeOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Following.GetFolloweeOpenId");

	UEventDataCollectionKeys_Following_GetFolloweeOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Following_FollowType.GetRefuse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Following_FollowType::GetRefuse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Following_FollowType.GetRefuse");

	UEventDataCollectionValues_Following_FollowType_GetRefuse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Following_FollowType.GetInvitation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Following_FollowType::GetInvitation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Following_FollowType.GetInvitation");

	UEventDataCollectionValues_Following_FollowType_GetInvitation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Following_FollowType.GetFollowing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Following_FollowType::GetFollowing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Following_FollowType.GetFollowing");

	UEventDataCollectionValues_Following_FollowType_GetFollowing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Following_FollowType.GetCancellation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Following_FollowType::GetCancellation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Following_FollowType.GetCancellation");

	UEventDataCollectionValues_Following_FollowType_GetCancellation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Following_FollowType.GetAcception
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Following_FollowType::GetAcception()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Following_FollowType.GetAcception");

	UEventDataCollectionValues_Following_FollowType_GetAcception_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MiniMapPinning::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MiniMapPinning.GetType");

	UEventDataCollectionKeys_MiniMapPinning_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetPinPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MiniMapPinning::GetPinPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MiniMapPinning.GetPinPosition");

	UEventDataCollectionKeys_MiniMapPinning_GetPinPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MiniMapPinning::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MiniMapPinning.GetOpenId");

	UEventDataCollectionKeys_MiniMapPinning_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetPinning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapPinning_Type::GetPinning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetPinning");

	UEventDataCollectionValues_MiniMapPinning_Type_GetPinning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetNonPinning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_MiniMapPinning_Type::GetNonPinning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetNonPinning");

	UEventDataCollectionValues_MiniMapPinning_Type_GetNonPinning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Blocking.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Blocking::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Blocking.GetType");

	UEventDataCollectionKeys_Blocking_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Blocking::GetBlockerOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Blocking.GetBlockerOpenId");

	UEventDataCollectionKeys_Blocking_GetBlockerOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Blocking::GetBlockerIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Blocking.GetBlockerIndex");

	UEventDataCollectionKeys_Blocking_GetBlockerIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Blocking::GetBlockeeOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeOpenId");

	UEventDataCollectionKeys_Blocking_GetBlockeeOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Blocking::GetBlockeeIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeIndex");

	UEventDataCollectionKeys_Blocking_GetBlockeeIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Blocking_Type.GetNonBlocking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Blocking_Type::GetNonBlocking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Blocking_Type.GetNonBlocking");

	UEventDataCollectionValues_Blocking_Type_GetNonBlocking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_Blocking_Type.GetBlocking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_Blocking_Type::GetBlocking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_Blocking_Type.GetBlocking");

	UEventDataCollectionValues_Blocking_Type_GetBlocking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Dancing.GetDancerOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Dancing::GetDancerOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Dancing.GetDancerOpenId");

	UEventDataCollectionKeys_Dancing_GetDancerOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_Dancing.GetDanceId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_Dancing::GetDanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_Dancing.GetDanceId");

	UEventDataCollectionKeys_Dancing_GetDanceId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetOpenId");

	UEventDataCollectionKeys_PickingupTombBox_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetItemIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemIDs");

	UEventDataCollectionKeys_PickingupTombBox_GetItemIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemId");

	UEventDataCollectionKeys_PickingupTombBox_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCounts
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetItemCounts()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCounts");

	UEventDataCollectionKeys_PickingupTombBox_GetItemCounts_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCount");

	UEventDataCollectionKeys_PickingupTombBox_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetBoxName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PickingupTombBox::GetBoxName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PickingupTombBox.GetBoxName");

	UEventDataCollectionKeys_PickingupTombBox_GetBoxName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_AirAttacking.GetWorldLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_AirAttacking::GetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_AirAttacking.GetWorldLocation");

	UEventDataCollectionKeys_AirAttacking_GetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_AirAttacking.GetCenter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_AirAttacking::GetCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_AirAttacking.GetCenter");

	UEventDataCollectionKeys_AirAttacking_GetCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetMaxBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CurrentWeapon::GetMaxBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CurrentWeapon.GetMaxBulletCountInClip");

	UEventDataCollectionKeys_CurrentWeapon_GetMaxBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CurrentWeapon::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CurrentWeapon.GetItemId");

	UEventDataCollectionKeys_CurrentWeapon_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInClip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CurrentWeapon::GetBulletCountInClip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInClip");

	UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInClip_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInBarrel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_CurrentWeapon::GetBulletCountInBarrel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInBarrel");

	UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInBarrel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_SceneInfo.GetIsInHouse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_SceneInfo::GetIsInHouse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_SceneInfo.GetIsInHouse");

	UEventDataCollectionKeys_SceneInfo_GetIsInHouse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetYes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_SceneInfo_IsInHouse::GetYes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetYes");

	UEventDataCollectionValues_SceneInfo_IsInHouse_GetYes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetNo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_SceneInfo_IsInHouse::GetNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetNo");

	UEventDataCollectionValues_SceneInfo_IsInHouse_GetNo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateUIds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TeamInfo::GetTeammateUIds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateUIds");

	UEventDataCollectionKeys_TeamInfo_GetTeammateUIds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateOpenIds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TeamInfo::GetTeammateOpenIds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateOpenIds");

	UEventDataCollectionKeys_TeamInfo_GetTeammateOpenIds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TeamInfo::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TeamInfo.GetTeamId");

	UEventDataCollectionKeys_TeamInfo_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_EnteringLeavingTeam::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetTeamId");

	UEventDataCollectionKeys_EnteringLeavingTeam_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_EnteringLeavingTeam::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetOpenId");

	UEventDataCollectionKeys_EnteringLeavingTeam_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetAction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_EnteringLeavingTeam::GetAction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetAction");

	UEventDataCollectionKeys_EnteringLeavingTeam_GetAction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetLeaving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_EnteringLeavingTeam_Action::GetLeaving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetLeaving");

	UEventDataCollectionValues_EnteringLeavingTeam_Action_GetLeaving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetEntering
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_EnteringLeavingTeam_Action::GetEntering()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetEntering");

	UEventDataCollectionValues_EnteringLeavingTeam_Action_GetEntering_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_OnOffline.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_OnOffline::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_OnOffline.GetType");

	UEventDataCollectionKeys_OnOffline_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_OnOffline.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_OnOffline::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_OnOffline.GetOpenId");

	UEventDataCollectionKeys_OnOffline_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOnline
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_OnOffline_Type::GetOnline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_OnOffline_Type.GetOnline");

	UEventDataCollectionValues_OnOffline_Type_GetOnline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOffline
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_OnOffline_Type::GetOffline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_OnOffline_Type.GetOffline");

	UEventDataCollectionValues_OnOffline_Type_GetOffline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankList.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankList::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankList.GetType");

	UEventDataCollectionKeys_RankList_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankList.GetState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankList::GetState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankList.GetState");

	UEventDataCollectionKeys_RankList_GetState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_RankList.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_RankList::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_RankList.GetOpenId");

	UEventDataCollectionKeys_RankList_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_RankList_State.GetOn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_RankList_State::GetOn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_RankList_State.GetOn");

	UEventDataCollectionValues_RankList_State_GetOn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_RankList_State.GetOff
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_RankList_State::GetOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_RankList_State.GetOff");

	UEventDataCollectionValues_RankList_State_GetOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TextMessage.GetText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TextMessage::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TextMessage.GetText");

	UEventDataCollectionKeys_TextMessage_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TextMessage.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TextMessage::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TextMessage.GetOpenId");

	UEventDataCollectionKeys_TextMessage_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TextMessage.GetItemPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TextMessage::GetItemPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TextMessage.GetItemPosition");

	UEventDataCollectionKeys_TextMessage_GetItemPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_TextMessage.GetItemId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_TextMessage::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_TextMessage.GetItemId");

	UEventDataCollectionKeys_TextMessage_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PawnState.IsInterestedPawnStates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPawnState                     PawnState                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEventDataCollectionKeys_PawnState::IsInterestedPawnStates(EPawnState PawnState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PawnState.IsInterestedPawnStates");

	UEventDataCollectionKeys_PawnState_IsInterestedPawnStates_Params params;
	params.PawnState = PawnState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PawnState.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PawnState::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PawnState.GetType");

	UEventDataCollectionKeys_PawnState_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PawnState.GetStates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PawnState::GetStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PawnState.GetStates");

	UEventDataCollectionKeys_PawnState_GetStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PawnState.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PawnState::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PawnState.GetOpenId");

	UEventDataCollectionKeys_PawnState_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_PawnState.GetChangedState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_PawnState::GetChangedState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_PawnState.GetChangedState");

	UEventDataCollectionKeys_PawnState_GetChangedState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_PawnState_State.GetLeaving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_PawnState_State::GetLeaving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_PawnState_State.GetLeaving");

	UEventDataCollectionValues_PawnState_State_GetLeaving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_PawnState_State.GetEntering
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_PawnState_State::GetEntering()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_PawnState_State.GetEntering");

	UEventDataCollectionValues_PawnState_State_GetEntering_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetRightState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_OpenCloseDoor::GetRightState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetRightState");

	UEventDataCollectionKeys_OpenCloseDoor_GetRightState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_OpenCloseDoor::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetOpenId");

	UEventDataCollectionKeys_OpenCloseDoor_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetLeftState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_OpenCloseDoor::GetLeftState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetLeftState");

	UEventDataCollectionKeys_OpenCloseDoor_GetLeftState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetOpen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_OpenCloseDoor_RightState::GetOpen()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetOpen");

	UEventDataCollectionValues_OpenCloseDoor_RightState_GetOpen_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetClose
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_OpenCloseDoor_RightState::GetClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetClose");

	UEventDataCollectionValues_OpenCloseDoor_RightState_GetClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetBroken
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionValues_OpenCloseDoor_RightState::GetBroken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetBroken");

	UEventDataCollectionValues_OpenCloseDoor_RightState_GetBroken_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetSpeaker
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MicSpeakerState::GetSpeaker()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MicSpeakerState.GetSpeaker");

	UEventDataCollectionKeys_MicSpeakerState_GetSpeaker_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetOpenId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MicSpeakerState::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MicSpeakerState.GetOpenId");

	UEventDataCollectionKeys_MicSpeakerState_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetMic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_MicSpeakerState::GetMic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_MicSpeakerState.GetMic");

	UEventDataCollectionKeys_MicSpeakerState_GetMic_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_VehicleState.GetWheelStates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_VehicleState::GetWheelStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_VehicleState.GetWheelStates");

	UEventDataCollectionKeys_VehicleState_GetWheelStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_VehicleState.GetHp
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_VehicleState::GetHp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_VehicleState.GetHp");

	UEventDataCollectionKeys_VehicleState_GetHp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_VehicleState.GetFuel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_VehicleState::GetFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_VehicleState.GetFuel");

	UEventDataCollectionKeys_VehicleState_GetFuel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.EventDataCollectionKeys_VehicleState.GetForwardSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FString UEventDataCollectionKeys_VehicleState::GetForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.EventDataCollectionKeys_VehicleState.GetForwardSpeed");

	UEventDataCollectionKeys_VehicleState_GetForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FloatingCapsuleVehicle.VehicleBreakOutVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ApplyVelocity                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bAddVelocity                   (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::VehicleBreakOutVelocity(const struct FVector& ApplyVelocity, bool bAddVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.VehicleBreakOutVelocity");

	AFloatingCapsuleVehicle_VehicleBreakOutVelocity_Params params;
	params.ApplyVelocity = ApplyVelocity;
	params.bAddVelocity = bAddVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.SetTargetFloatState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUpState                       (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::SetTargetFloatState(bool bUpState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.SetTargetFloatState");

	AFloatingCapsuleVehicle_SetTargetFloatState_Params params;
	params.bUpState = bUpState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.SetServerPrecentPenetratingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::SetServerPrecentPenetratingEnabled(bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.SetServerPrecentPenetratingEnabled");

	AFloatingCapsuleVehicle_SetServerPrecentPenetratingEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.ServerBreakOut
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::ServerBreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.ServerBreakOut");

	AFloatingCapsuleVehicle_ServerBreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.OnRep_BreakOutState
// (Final, Native, Protected)
// Parameters:
// bool                           bPrevState                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::OnRep_BreakOutState(bool bPrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.OnRep_BreakOutState");

	AFloatingCapsuleVehicle_OnRep_BreakOutState_Params params;
	params.bPrevState = bPrevState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.MoveWheelHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::MoveWheelHeight(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.MoveWheelHeight");

	AFloatingCapsuleVehicle_MoveWheelHeight_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.GetFloatingVehicleMovement
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USTExtraFloatingVehicleMovementComponentBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTExtraFloatingVehicleMovementComponentBase* AFloatingCapsuleVehicle::GetFloatingVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.GetFloatingVehicleMovement");

	AFloatingCapsuleVehicle_GetFloatingVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FloatingCapsuleVehicle.GetEnterDistanceSq
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFloatingCapsuleVehicle::GetEnterDistanceSq()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.GetEnterDistanceSq");

	AFloatingCapsuleVehicle_GetEnterDistanceSq_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FloatingCapsuleVehicle.DoBreakOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::DoBreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.DoBreakOut");

	AFloatingCapsuleVehicle_DoBreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.BreakOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AFloatingCapsuleVehicle::BreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.BreakOut");

	AFloatingCapsuleVehicle_BreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingCapsuleVehicle.BPTryCheckSimulatePhysics
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AFloatingCapsuleVehicle::BPTryCheckSimulatePhysics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingCapsuleVehicle.BPTryCheckSimulatePhysics");

	AFloatingCapsuleVehicle_BPTryCheckSimulatePhysics_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingMechaAnimInstance.TryUncombineWithMecha
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFloatingMechaAnimInstance::TryUncombineWithMecha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingMechaAnimInstance.TryUncombineWithMecha");

	UFloatingMechaAnimInstance_TryUncombineWithMecha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingMechaAnimInstance.TryCombineWithMecha
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SourceMechaMesh                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InRelativeLocation             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                InRelativeRotation             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UFloatingMechaAnimInstance::TryCombineWithMecha(class USkeletalMeshComponent* SourceMechaMesh, const struct FVector& InRelativeLocation, const struct FRotator& InRelativeRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingMechaAnimInstance.TryCombineWithMecha");

	UFloatingMechaAnimInstance_TryCombineWithMecha_Params params;
	params.SourceMechaMesh = SourceMechaMesh;
	params.InRelativeLocation = InRelativeLocation;
	params.InRelativeRotation = InRelativeRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingMechaAnimInstance.HandleOnPlayerEnterVehicle
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void UFloatingMechaAnimInstance::HandleOnPlayerEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingMechaAnimInstance.HandleOnPlayerEnterVehicle");

	UFloatingMechaAnimInstance_HandleOnPlayerEnterVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingMechaAnimInstance.HandleOnNitrogenAccelStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ENitrogenAccelState            State                          (Parm, ZeroConstructor, IsPlainOldData)
// ENitrogenAccelState            preState                       (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraVehicleBase*     Vehile                         (Parm, ZeroConstructor, IsPlainOldData)

void UFloatingMechaAnimInstance::HandleOnNitrogenAccelStateChanged(ENitrogenAccelState State, ENitrogenAccelState preState, class ASTExtraVehicleBase* Vehile)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingMechaAnimInstance.HandleOnNitrogenAccelStateChanged");

	UFloatingMechaAnimInstance_HandleOnNitrogenAccelStateChanged_Params params;
	params.State = State;
	params.preState = preState;
	params.Vehile = Vehile;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FloatingMechaAnimInstance.GetLuaDebugString
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFloatingMechaAnimInstance::GetLuaDebugString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingMechaAnimInstance.GetLuaDebugString");

	UFloatingMechaAnimInstance_GetLuaDebugString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FloatingVehicleVehicleMovementComponent2.UpdateEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFloatingVehicleVehicleMovementComponent2::UpdateEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingVehicleVehicleMovementComponent2.UpdateEnabled");

	UFloatingVehicleVehicleMovementComponent2_UpdateEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FloatingVehicleVehicleMovementComponent2.EnableUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UFloatingVehicleVehicleMovementComponent2::EnableUpdate(bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FloatingVehicleVehicleMovementComponent2.EnableUpdate");

	UFloatingVehicleVehicleMovementComponent2_EnableUpdate_Params params;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.SetRisingInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UFlyingArmorMoveObj::SetRisingInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.SetRisingInput");

	UFlyingArmorMoveObj_SetRisingInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.SetActiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EFAMActiveState                NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UFlyingArmorMoveObj::SetActiveState(EFAMActiveState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.SetActiveState");

	UFlyingArmorMoveObj_SetActiveState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.OnLeaveFly
// (Event, Public, BlueprintEvent)

void UFlyingArmorMoveObj::OnLeaveFly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.OnLeaveFly");

	UFlyingArmorMoveObj_OnLeaveFly_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.OnEnterFly
// (Event, Public, BlueprintEvent)

void UFlyingArmorMoveObj::OnEnterFly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.OnEnterFly");

	UFlyingArmorMoveObj_OnEnterFly_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.LeaveFly
// (Final, Native, Public, BlueprintCallable)

void UFlyingArmorMoveObj::LeaveFly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.LeaveFly");

	UFlyingArmorMoveObj_LeaveFly_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FlyingArmorMoveObj.EnterFly
// (Final, Native, Public, BlueprintCallable)

void UFlyingArmorMoveObj::EnterFly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FlyingArmorMoveObj.EnterFly");

	UFlyingArmorMoveObj_EnterFly_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.UnbindPlayerInputDelegate
// (Final, Native, Public, BlueprintCallable)

void AFreeViewPawn::UnbindPlayerInputDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.UnbindPlayerInputDelegate");

	AFreeViewPawn_UnbindPlayerInputDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.SetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerController* InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AFreeViewPawn::SetController(class ASTExtraPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.SetController");

	AFreeViewPawn_SetController_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.MoveUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AFreeViewPawn::MoveUp(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.MoveUp");

	AFreeViewPawn_MoveUp_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AFreeViewPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.MoveRight");

	AFreeViewPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AFreeViewPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.MoveForward");

	AFreeViewPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.FreeViewPawn.GetFreeViewOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AFreeViewPawn::GetFreeViewOrigin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.GetFreeViewOrigin");

	AFreeViewPawn_GetFreeViewOrigin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.FreeViewPawn.BindPlayerInputDelegate
// (Final, Native, Public, BlueprintCallable)

void AFreeViewPawn::BindPlayerInputDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.FreeViewPawn.BindPlayerInputDelegate");

	AFreeViewPawn_BindPlayerInputDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.SetBoosting
// (Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringVehicle::SetBoosting(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.SetBoosting");

	AHoveringVehicle_SetBoosting_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.OnVehicleRefuelWhenNoFuel
// (Final, Native, Protected)
// Parameters:
// float                          PreFuel                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Increment                      (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnVehicleRefuelWhenNoFuel(float PreFuel, float Increment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnVehicleRefuelWhenNoFuel");

	AHoveringVehicle_OnVehicleRefuelWhenNoFuel_Params params;
	params.PreFuel = PreFuel;
	params.Increment = Increment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnVehicleFuelRunOut
// (Final, Native, Protected)
// Parameters:
// float                          InMaxFuel                      (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnVehicleFuelRunOut(float InMaxFuel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnVehicleFuelRunOut");

	AHoveringVehicle_OnVehicleFuelRunOut_Params params;
	params.InMaxFuel = InMaxFuel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnSkeletalMeshSleep
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnSkeletalMeshSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnSkeletalMeshSleep");

	AHoveringVehicle_OnSkeletalMeshSleep_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnSkeletalMeshAwake
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnSkeletalMeshAwake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnSkeletalMeshAwake");

	AHoveringVehicle_OnSkeletalMeshAwake_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnRep_SimulateViewData
// (Native, Public)

void AHoveringVehicle::OnRep_SimulateViewData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnRep_SimulateViewData");

	AHoveringVehicle_OnRep_SimulateViewData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnRep_bHoveringActive
// (Final, Native, Protected)
// Parameters:
// bool                           PreHoveringState               (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnRep_bHoveringActive(bool PreHoveringState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnRep_bHoveringActive");

	AHoveringVehicle_OnRep_bHoveringActive_Params params;
	params.PreHoveringState = PreHoveringState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnDriverStateChanged
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isOn                           (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnDriverStateChanged(class ASTExtraPlayerCharacter* Character, bool isOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnDriverStateChanged");

	AHoveringVehicle_OnDriverStateChanged_Params params;
	params.Character = Character;
	params.isOn = isOn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnClientExit
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnClientExit(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnClientExit");

	AHoveringVehicle_OnClientExit_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnClientEnter
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnClientEnter(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnClientEnter");

	AHoveringVehicle_OnClientEnter_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.OnClientChangeSeat
// (Final, Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        OldSeatType                    (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::OnClientChangeSeat(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType OldSeatType, ESTExtraVehicleSeatType NewSeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.OnClientChangeSeat");

	AHoveringVehicle_OnClientChangeSeat_Params params;
	params.Character = Character;
	params.OldSeatType = OldSeatType;
	params.NewSeatType = NewSeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.InitHoveringSpots
// (Native, Protected)

void AHoveringVehicle::InitHoveringSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.InitHoveringSpots");

	AHoveringVehicle_InitHoveringSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.HandleVehicleHealthDestroy
// (Native, Protected)

void AHoveringVehicle::HandleVehicleHealthDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.HandleVehicleHealthDestroy");

	AHoveringVehicle_HandleVehicleHealthDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.HandleOnSeatDetached
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.HandleOnSeatDetached");

	AHoveringVehicle_HandleOnSeatDetached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.HandleOnSeatChanged
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        LastSeatType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSeatIdx                    (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatIdx                     (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.HandleOnSeatChanged");

	AHoveringVehicle_HandleOnSeatChanged_Params params;
	params.Character = Character;
	params.LastSeatType = LastSeatType;
	params.LastSeatIdx = LastSeatIdx;
	params.NewSeatType = NewSeatType;
	params.NewSeatIdx = NewSeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.HandleOnSeatAttached
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringVehicle::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.HandleOnSeatAttached");

	AHoveringVehicle_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.HandleOnMeshHit
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHoveringVehicle::HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.HandleOnMeshHit");

	AHoveringVehicle_HandleOnMeshHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.GetViewRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AHoveringVehicle::GetViewRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.GetViewRotation");

	AHoveringVehicle_GetViewRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.GetSpotLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AHoveringVehicle::GetSpotLocation(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.GetSpotLocation");

	AHoveringVehicle_GetSpotLocation_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.GetHoveringMovement
// (Final, Native, Public, Const)
// Parameters:
// class UHoveringVehicleMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHoveringVehicleMovementComponent* AHoveringVehicle::GetHoveringMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.GetHoveringMovement");

	AHoveringVehicle_GetHoveringMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.GetForwardSpeed
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHoveringVehicle::GetForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.GetForwardSpeed");

	AHoveringVehicle_GetForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.DeactivateHoveringSimulate
// (Final, Native, Protected)

void AHoveringVehicle::DeactivateHoveringSimulate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.DeactivateHoveringSimulate");

	AHoveringVehicle_DeactivateHoveringSimulate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicle.CanActivateHoveringSimulate
// (Final, Native, Protected, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringVehicle::CanActivateHoveringSimulate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.CanActivateHoveringSimulate");

	AHoveringVehicle_CanActivateHoveringSimulate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.CalcFinalMomentum
// (Native, Public)
// Parameters:
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseMomentun                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHoveringVehicle::CalcFinalMomentum(class UClass* DamageTypeClass, float BaseMomentun)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.CalcFinalMomentum");

	AHoveringVehicle_CalcFinalMomentum_Params params;
	params.DamageTypeClass = DamageTypeClass;
	params.BaseMomentun = BaseMomentun;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicle.ActivateHoveringSimulate
// (Final, Native, Protected)

void AHoveringVehicle::ActivateHoveringSimulate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicle.ActivateHoveringSimulate");

	AHoveringVehicle_ActivateHoveringSimulate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.StateToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AHoveringMecha::StateToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.StateToString");

	AHoveringMecha_StateToString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.SetWeaponState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMechaWeaponState> InState                        (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::SetWeaponState(TEnumAsByte<EMechaWeaponState> InState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.SetWeaponState");

	AHoveringMecha_SetWeaponState_Params params;
	params.InState = InState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.SetEnterVehicleDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewEnterDistance             (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::SetEnterVehicleDistance(float InNewEnterDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.SetEnterVehicleDistance");

	AHoveringMecha_SetEnterVehicleDistance_Params params;
	params.InNewEnterDistance = InNewEnterDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.OpenVehicleLogic
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AHoveringMecha::OpenVehicleLogic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.OpenVehicleLogic");

	AHoveringMecha_OpenVehicleLogic_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.OnRep_UncombineHelper
// (Final, Native, Public)
// Parameters:
// struct FUncombineHelper        OldUncombineHelper             (Parm)

void AHoveringMecha::OnRep_UncombineHelper(const struct FUncombineHelper& OldUncombineHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.OnRep_UncombineHelper");

	AHoveringMecha_OnRep_UncombineHelper_Params params;
	params.OldUncombineHelper = OldUncombineHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.OnRep_MechaStates
// (Final, Native, Public)
// Parameters:
// uint32_t                       OldStates                      (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::OnRep_MechaStates(uint32_t OldStates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.OnRep_MechaStates");

	AHoveringMecha_OnRep_MechaStates_Params params;
	params.OldStates = OldStates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.OnRep_CombineProcess
// (Final, Native, Public)
// Parameters:
// float                          OldProcess                     (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::OnRep_CombineProcess(float OldProcess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.OnRep_CombineProcess");

	AHoveringMecha_OnRep_CombineProcess_Params params;
	params.OldProcess = OldProcess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.OnBeCachedCPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SourceCatcher                  (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::OnBeCachedCPlus(class AActor* SourceCatcher)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.OnBeCachedCPlus");

	AHoveringMecha_OnBeCachedCPlus_Params params;
	params.SourceCatcher = SourceCatcher;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.LeaveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::LeaveState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.LeaveState");

	AHoveringMecha_LeaveState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.InterruptState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// EMechaState                    InterruptBy                    (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::InterruptState(EMechaState State, EMechaState InterruptBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.InterruptState");

	AHoveringMecha_InterruptState_Params params;
	params.State = State;
	params.InterruptBy = InterruptBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.InitHoveringSpots
// (Native, Public)

void AHoveringMecha::InitHoveringSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.InitHoveringSpots");

	AHoveringMecha_InitHoveringSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.HasState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringMecha::HasState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.HasState");

	AHoveringMecha_HasState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.HasCombined
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringMecha::HasCombined()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.HasCombined");

	AHoveringMecha_HasCombined_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.GetInVehicleLocalPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* AHoveringMecha::GetInVehicleLocalPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.GetInVehicleLocalPlayer");

	AHoveringMecha_GetInVehicleLocalPlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.GetCombineState
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECombineState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECombineState> AHoveringMecha::GetCombineState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.GetCombineState");

	AHoveringMecha_GetCombineState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.GetCombinedVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* AHoveringMecha::GetCombinedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.GetCombinedVehicle");

	AHoveringMecha_GetCombinedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.GetCombineComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMechaSmoothAttachComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMechaSmoothAttachComponent* AHoveringMecha::GetCombineComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.GetCombineComponent");

	AHoveringMecha_GetCombineComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.EnterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringMecha::EnterState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.EnterState");

	AHoveringMecha_EnterState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringMecha.EnableNitrogenAccelCameraModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* Passenger                      (Parm, ZeroConstructor, IsPlainOldData)

void AHoveringMecha::EnableNitrogenAccelCameraModifier(bool bEnable, class ASTExtraPlayerCharacter* Passenger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.EnableNitrogenAccelCameraModifier");

	AHoveringMecha_EnableNitrogenAccelCameraModifier_Params params;
	params.bEnable = bEnable;
	params.Passenger = Passenger;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.CloseVehicleLogic
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AHoveringMecha::CloseVehicleLogic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.CloseVehicleLogic");

	AHoveringMecha_CloseVehicleLogic_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringMecha.AllowState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHoveringMecha::AllowState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringMecha.AllowState");

	AHoveringMecha_AllowState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateSimulate
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateSimulate(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateSimulate");

	UHoveringVehicleMovementComponent_UpdateSimulate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateSimpleHover
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateSimpleHover(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateSimpleHover");

	UHoveringVehicleMovementComponent_UpdateSimpleHover_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateRotationAutoAdapt
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateRotationAutoAdapt(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateRotationAutoAdapt");

	UHoveringVehicleMovementComponent_UpdateRotationAutoAdapt_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdatePreCheck
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdatePreCheck(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdatePreCheck");

	UHoveringVehicleMovementComponent_UpdatePreCheck_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateNitrogenAccel
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateNitrogenAccel(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateNitrogenAccel");

	UHoveringVehicleMovementComponent_UpdateNitrogenAccel_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateMovement2
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateMovement2(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateMovement2");

	UHoveringVehicleMovementComponent_UpdateMovement2_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateMovement
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateMovement(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateMovement");

	UHoveringVehicleMovementComponent_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateInput
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateInput(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateInput");

	UHoveringVehicleMovementComponent_UpdateInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation_WeakFeedback
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateHoverSimulation_WeakFeedback(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation_WeakFeedback");

	UHoveringVehicleMovementComponent_UpdateHoverSimulation_WeakFeedback_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateHoverSimulation(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation");

	UHoveringVehicleMovementComponent_UpdateHoverSimulation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateDrifting
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateDrifting(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateDrifting");

	UHoveringVehicleMovementComponent_UpdateDrifting_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.UpdateDistToLand
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::UpdateDistToLand(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.UpdateDistToLand");

	UHoveringVehicleMovementComponent_UpdateDistToLand_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::SetThrottleInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.SetThrottleInput");

	UHoveringVehicleMovementComponent_SetThrottleInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::SetSteeringInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.SetSteeringInput");

	UHoveringVehicleMovementComponent_SetSteeringInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.SetNitrogenAccelState
// (Final, Native, Public)
// Parameters:
// ENitrogenAccelState            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::SetNitrogenAccelState(ENitrogenAccelState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.SetNitrogenAccelState");

	UHoveringVehicleMovementComponent_SetNitrogenAccelState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ServerUpdatePassiveAccel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FNitrogenAccelData      NAData                         (ConstParm, Parm, ReferenceParm)

void UHoveringVehicleMovementComponent::ServerUpdatePassiveAccel(const struct FNitrogenAccelData& NAData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ServerUpdatePassiveAccel");

	UHoveringVehicleMovementComponent_ServerUpdatePassiveAccel_Params params;
	params.NAData = NAData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ServerUpdateInput
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// float                          InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InCameraRot                    (Parm, IsPlainOldData)

void UHoveringVehicleMovementComponent::ServerUpdateInput(float InSteeringInput, float InThrottleInput, const struct FRotator& InCameraRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ServerUpdateInput");

	UHoveringVehicleMovementComponent_ServerUpdateInput_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InCameraRot = InCameraRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ServerNitrogenAccel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UHoveringVehicleMovementComponent::ServerNitrogenAccel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ServerNitrogenAccel");

	UHoveringVehicleMovementComponent_ServerNitrogenAccel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.Reset
// (Final, Native, Public)

void UHoveringVehicleMovementComponent::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.Reset");

	UHoveringVehicleMovementComponent_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.OnRep_NitrogenAccelState
// (Final, Native, Protected)
// Parameters:
// ENitrogenAccelState            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::OnRep_NitrogenAccelState(ENitrogenAccelState PrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.OnRep_NitrogenAccelState");

	UHoveringVehicleMovementComponent_OnRep_NitrogenAccelState_Params params;
	params.PrevState = PrevState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.OnRecoverOnServer
// (Native, Public)

void UHoveringVehicleMovementComponent::OnRecoverOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.OnRecoverOnServer");

	UHoveringVehicleMovementComponent_OnRecoverOnServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.IsShouldDsControl
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::IsShouldDsControl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.IsShouldDsControl");

	UHoveringVehicleMovementComponent_IsShouldDsControl_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.IsInNitrogenAccel
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::IsInNitrogenAccel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.IsInNitrogenAccel");

	UHoveringVehicleMovementComponent_IsInNitrogenAccel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.IsHasPower
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::IsHasPower()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.IsHasPower");

	UHoveringVehicleMovementComponent_IsHasPower_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.Internal_DoNitrogenAccel
// (Final, Native, Protected)

void UHoveringVehicleMovementComponent::Internal_DoNitrogenAccel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.Internal_DoNitrogenAccel");

	UHoveringVehicleMovementComponent_Internal_DoNitrogenAccel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.HandleActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHoveringVehicleMovementComponent::HandleActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.HandleActorHit");

	UHoveringVehicleMovementComponent_HandleActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ForceCorrectClientNitroAccelState
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// ENitrogenAccelState            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CD                             (Parm, ZeroConstructor, IsPlainOldData)

void UHoveringVehicleMovementComponent::ForceCorrectClientNitroAccelState(ENitrogenAccelState NewState, float CD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ForceCorrectClientNitroAccelState");

	UHoveringVehicleMovementComponent_ForceCorrectClientNitroAccelState_Params params;
	params.NewState = NewState;
	params.CD = CD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ClientUpdateDistToLand
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 TargetLoc                      (Parm, IsPlainOldData)

void UHoveringVehicleMovementComponent::ClientUpdateDistToLand(const struct FVector& TargetLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ClientUpdateDistToLand");

	UHoveringVehicleMovementComponent_ClientUpdateDistToLand_Params params;
	params.TargetLoc = TargetLoc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.ClientTryNitrogenAccel
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::ClientTryNitrogenAccel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ClientTryNitrogenAccel");

	UHoveringVehicleMovementComponent_ClientTryNitrogenAccel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.ClientAddForceAfterContinuousHit
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FVector                 Force                          (Parm, IsPlainOldData)

void UHoveringVehicleMovementComponent::ClientAddForceAfterContinuousHit(const struct FVector& Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.ClientAddForceAfterContinuousHit");

	UHoveringVehicleMovementComponent_ClientAddForceAfterContinuousHit_Params params;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.HoveringVehicleMovementComponent.CanPassiveNitrogenAccel
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FailedCode                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::CanPassiveNitrogenAccel(struct FString* FailedCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.CanPassiveNitrogenAccel");

	UHoveringVehicleMovementComponent_CanPassiveNitrogenAccel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FailedCode != nullptr)
		*FailedCode = params.FailedCode;

	return params.ReturnValue;
}


// Function Addons.HoveringVehicleMovementComponent.CalculateHoverSimulation
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FHoveringSimulateData   SimData                        (Parm, OutParm)
// struct FVector                 SpotWorldLoc                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OwnerLoc                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoveringVehicleMovementComponent::CalculateHoverSimulation(const struct FVector& SpotWorldLoc, const struct FVector& OwnerLoc, float DeltaTime, struct FHoveringSimulateData* SimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.HoveringVehicleMovementComponent.CalculateHoverSimulation");

	UHoveringVehicleMovementComponent_CalculateHoverSimulation_Params params;
	params.SpotWorldLoc = SpotWorldLoc;
	params.OwnerLoc = OwnerLoc;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SimData != nullptr)
		*SimData = params.SimData;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.StartPhaseMoving
// (Final, Native, Public)

void ULadderMovementComponent::StartPhaseMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.StartPhaseMoving");

	ULadderMovementComponent_StartPhaseMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ShowDebugInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::ShowDebugInformation(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ShowDebugInformation");

	ULadderMovementComponent_ShowDebugInformation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ServerMove
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FLadderMoveData         LadderMoveData                 (Parm)
// int                            MoveDirection                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            EnterOrLeave                   (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::ServerMove(const struct FLadderMoveData& LadderMoveData, int MoveDirection, int EnterOrLeave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ServerMove");

	ULadderMovementComponent_ServerMove_Params params;
	params.LadderMoveData = LadderMoveData;
	params.MoveDirection = MoveDirection;
	params.EnterOrLeave = EnterOrLeave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ServerCheckClientError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLadderMoveData         LadderMoveData                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::ServerCheckClientError(const struct FLadderMoveData& LadderMoveData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ServerCheckClientError");

	ULadderMovementComponent_ServerCheckClientError_Params params;
	params.LadderMoveData = LadderMoveData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.RequestCurrentLadderState
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void ULadderMovementComponent::RequestCurrentLadderState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.RequestCurrentLadderState");

	ULadderMovementComponent_RequestCurrentLadderState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ReceiveExitLadder
// (Native, Event, Public, BlueprintEvent)

void ULadderMovementComponent::ReceiveExitLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ReceiveExitLadder");

	ULadderMovementComponent_ReceiveExitLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ReceiveEnterLadder
// (Native, Event, Public, BlueprintEvent)

void ULadderMovementComponent::ReceiveEnterLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ReceiveEnterLadder");

	ULadderMovementComponent_ReceiveEnterLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.PushBackSimAction
// (Final, Native, Public)
// Parameters:
// struct FLadderMoveData         InData                         (Parm)

void ULadderMovementComponent::PushBackSimAction(const struct FLadderMoveData& InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.PushBackSimAction");

	ULadderMovementComponent_PushBackSimAction_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.PopFirstSimAction
// (Final, Native, Public)

void ULadderMovementComponent::PopFirstSimAction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.PopFirstSimAction");

	ULadderMovementComponent_PopFirstSimAction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.OnRep_NetLadderMoveState
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::OnRep_NetLadderMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.OnRep_NetLadderMoveState");

	ULadderMovementComponent_OnRep_NetLadderMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.OnCharacterExitLadder
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::OnCharacterExitLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.OnCharacterExitLadder");

	ULadderMovementComponent_OnCharacterExitLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.OnCharacterEnterLadder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ALadderActor*            Ladder                         (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::OnCharacterEnterLadder(class ALadderActor* Ladder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.OnCharacterEnterLadder");

	ULadderMovementComponent_OnCharacterEnterLadder_Params params;
	params.Ladder = Ladder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.LadderMoveInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::LadderMoveInput(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.LadderMoveInput");

	ULadderMovementComponent_LadderMoveInput_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.IsLeaving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::IsLeaving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.IsLeaving");

	ULadderMovementComponent_IsLeaving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.IsEntering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::IsEntering()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.IsEntering");

	ULadderMovementComponent_IsEntering_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.InitLadderParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ALadderActor*            Ladder                         (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::InitLadderParams(class ALadderActor* Ladder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.InitLadderParams");

	ULadderMovementComponent_InitLadderParams_Params params;
	params.Ladder = Ladder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.HandleJump
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::HandleJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.HandleJump");

	ULadderMovementComponent_HandleJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.HandleInput
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::HandleInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.HandleInput");

	ULadderMovementComponent_HandleInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.GetStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULadderMovementComponent::GetStateName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.GetStateName");

	ULadderMovementComponent_GetStateName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.GetNextMoveData
// (Final, Native, Public)
// Parameters:
// struct FLadderMoveData         Cur                            (Parm)
// int8_t                         movedir                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLadderMoveData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLadderMoveData ULadderMovementComponent::GetNextMoveData(const struct FLadderMoveData& Cur, int8_t movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.GetNextMoveData");

	ULadderMovementComponent_GetNextMoveData_Params params;
	params.Cur = Cur;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.GetLadderAnimSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* ULadderMovementComponent::GetLadderAnimSequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.GetLadderAnimSequence");

	ULadderMovementComponent_GetLadderAnimSequence_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.GatherCurrentLadderState
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::GatherCurrentLadderState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.GatherCurrentLadderState");

	ULadderMovementComponent_GatherCurrentLadderState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ExitLadder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::ExitLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ExitLadder");

	ULadderMovementComponent_ExitLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.EnterLadder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ALadderActor*            Ladder                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTop                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::EnterLadder(class ALadderActor* Ladder, bool bTop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.EnterLadder");

	ULadderMovementComponent_EnterLadder_Params params;
	params.Ladder = Ladder;
	params.bTop = bTop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.EndPhaseMoving
// (Final, Native, Public)

void ULadderMovementComponent::EndPhaseMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.EndPhaseMoving");

	ULadderMovementComponent_EndPhaseMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.EnableCharacterMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::EnableCharacterMovement(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.EnableCharacterMovement");

	ULadderMovementComponent_EnableCharacterMovement_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ClimbUpOneStepInternal
// (Final, Native, Public)

void ULadderMovementComponent::ClimbUpOneStepInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ClimbUpOneStepInternal");

	ULadderMovementComponent_ClimbUpOneStepInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.ClimbDownOneStepInternal
// (Final, Native, Public)

void ULadderMovementComponent::ClimbDownOneStepInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.ClimbDownOneStepInternal");

	ULadderMovementComponent_ClimbDownOneStepInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.CheckValidPositionOnLadder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Ladder                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StepNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::CheckValidPositionOnLadder(class AActor* Ladder, int StepNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CheckValidPositionOnLadder");

	ULadderMovementComponent_CheckValidPositionOnLadder_Params params;
	params.Ladder = Ladder;
	params.StepNum = StepNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.CheckValidPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Pos                            (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULadderMovementComponent::CheckValidPosition(const struct FVector& Pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CheckValidPosition");

	ULadderMovementComponent_CheckValidPosition_Params params;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.CheckEnterOrExitLadder
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::CheckEnterOrExitLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CheckEnterOrExitLadder");

	ULadderMovementComponent_CheckEnterOrExitLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.CheckAutoEnterLadder
// (Final, Native, Public, BlueprintCallable)

void ULadderMovementComponent::CheckAutoEnterLadder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CheckAutoEnterLadder");

	ULadderMovementComponent_CheckAutoEnterLadder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.CatchUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLadderMoveData         LadderMoveData                 (Parm)

void ULadderMovementComponent::CatchUp(const struct FLadderMoveData& LadderMoveData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CatchUp");

	ULadderMovementComponent_CatchUp_Params params;
	params.LadderMoveData = LadderMoveData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.CalcLocationOnLadder
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Ladder                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            StepNum                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ULadderMovementComponent::CalcLocationOnLadder(class AActor* Ladder, int StepNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.CalcLocationOnLadder");

	ULadderMovementComponent_CalcLocationOnLadder_Params params;
	params.Ladder = Ladder;
	params.StepNum = StepNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.LadderMovementComponent.BuildActionQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLadderMoveData         Target                         (Parm)

void ULadderMovementComponent::BuildActionQueue(const struct FLadderMoveData& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.BuildActionQueue");

	ULadderMovementComponent_BuildActionQueue_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.BindPlayerMoveInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ULadderMovementComponent::BindPlayerMoveInput(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.BindPlayerMoveInput");

	ULadderMovementComponent_BindPlayerMoveInput_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LadderMovementComponent.AdjustClient
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// struct FLadderMoveData         LadderMoveData                 (Parm)

void ULadderMovementComponent::AdjustClient(const struct FLadderMoveData& LadderMoveData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LadderMovementComponent.AdjustClient");

	ULadderMovementComponent_AdjustClient_Params params;
	params.LadderMoveData = LadderMoveData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAimCircle.RefreshActorLocationFromBlackBoard
// (Final, Native, Public, BlueprintCallable)

void AMechaAimCircle::RefreshActorLocationFromBlackBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAimCircle.RefreshActorLocationFromBlackBoard");

	AMechaAimCircle_RefreshActorLocationFromBlackBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAimCircle.HasCharacterInCircle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Raius                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaAimCircle::HasCharacterInCircle(class UObject* ContextObject, const struct FVector& Center, float Raius, float Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAimCircle.HasCharacterInCircle");

	AMechaAimCircle_HasCharacterInCircle_Params params;
	params.ContextObject = ContextObject;
	params.Center = Center;
	params.Raius = Raius;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaAimCircle.GetBlackBoardScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMechaAimCircle::GetBlackBoardScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAimCircle.GetBlackBoardScale");

	AMechaAimCircle_GetBlackBoardScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaAimCircle.CreateNewDecalComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          InSize                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       InMaterial                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InExistsTime                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCustomDecalComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCustomDecalComponent* AMechaAimCircle::CreateNewDecalComponent(const struct FName& InName, float InSize, class UMaterialInstance* InMaterial, float InExistsTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAimCircle.CreateNewDecalComponent");

	AMechaAimCircle_CreateNewDecalComponent_Params params;
	params.InName = InName;
	params.InSize = InSize;
	params.InMaterial = InMaterial;
	params.InExistsTime = InExistsTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaAnimInstanceBase.TryUncombineWithMecha
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UMechaAnimInstanceBase::TryUncombineWithMecha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.TryUncombineWithMecha");

	UMechaAnimInstanceBase_TryUncombineWithMecha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.TryCombineWithMecha
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldPlayAnimation           (Parm, ZeroConstructor, IsPlainOldData)

void UMechaAnimInstanceBase::TryCombineWithMecha(bool bShouldPlayAnimation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.TryCombineWithMecha");

	UMechaAnimInstanceBase_TryCombineWithMecha_Params params;
	params.bShouldPlayAnimation = bShouldPlayAnimation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.StopMechaMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InGroupName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaAnimInstanceBase::StopMechaMontage(const struct FName& InGroupName, float BlendOutTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.StopMechaMontage");

	UMechaAnimInstanceBase_StopMechaMontage_Params params;
	params.InGroupName = InGroupName;
	params.BlendOutTime = BlendOutTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.ResetMechaGlidingToFalling
// (Final, Native, Public)

void UMechaAnimInstanceBase::ResetMechaGlidingToFalling()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.ResetMechaGlidingToFalling");

	UMechaAnimInstanceBase_ResetMechaGlidingToFalling_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.PlayMechaMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UMechaAnimInstanceBase::PlayMechaMontage(class UAnimMontage* Montage, float PlayRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.PlayMechaMontage");

	UMechaAnimInstanceBase_PlayMechaMontage_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.OnMechaStartMoving
// (Native, Event, Public, BlueprintEvent)

void UMechaAnimInstanceBase::OnMechaStartMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.OnMechaStartMoving");

	UMechaAnimInstanceBase_OnMechaStartMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.OnMechaStartFire
// (Final, Native, Public, BlueprintCallable)

void UMechaAnimInstanceBase::OnMechaStartFire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.OnMechaStartFire");

	UMechaAnimInstanceBase_OnMechaStartFire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.OnMechaReloadFinish
// (Final, Native, Public, BlueprintCallable)

void UMechaAnimInstanceBase::OnMechaReloadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.OnMechaReloadFinish");

	UMechaAnimInstanceBase_OnMechaReloadFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.OnMechaHit
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 HitDir                         (Parm, IsPlainOldData)
// bool                           bHugeHit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMechaAnimInstanceBase::OnMechaHit(const struct FVector& HitDir, bool bHugeHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.OnMechaHit");

	UMechaAnimInstanceBase_OnMechaHit_Params params;
	params.HitDir = HitDir;
	params.bHugeHit = bHugeHit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.MechaEnterFlying
// (Final, Native, Public)

void UMechaAnimInstanceBase::MechaEnterFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.MechaEnterFlying");

	UMechaAnimInstanceBase_MechaEnterFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.HandleOnMechaGlidingToFalling
// (Final, Native, Public)

void UMechaAnimInstanceBase::HandleOnMechaGlidingToFalling()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.HandleOnMechaGlidingToFalling");

	UMechaAnimInstanceBase_HandleOnMechaGlidingToFalling_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.HandleOnMechaAirGliding
// (Final, Native, Public)
// Parameters:
// bool                           bAirGliding                    (Parm, ZeroConstructor, IsPlainOldData)

void UMechaAnimInstanceBase::HandleOnMechaAirGliding(bool bAirGliding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.HandleOnMechaAirGliding");

	UMechaAnimInstanceBase_HandleOnMechaAirGliding_Params params;
	params.bAirGliding = bAirGliding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaAnimInstanceBase.GetLuaDebugString
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMechaAnimInstanceBase::GetLuaDebugString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.GetLuaDebugString");

	UMechaAnimInstanceBase_GetLuaDebugString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaAnimInstanceBase.GetActivedMontageNames
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UMechaAnimInstanceBase::GetActivedMontageNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.GetActivedMontageNames");

	UMechaAnimInstanceBase_GetActivedMontageNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaAnimInstanceBase.CanLockFoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMechaAnimInstanceBase::CanLockFoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaAnimInstanceBase.CanLockFoot");

	UMechaAnimInstanceBase_CanLockFoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaDamageComponent.RepulseVehicle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)

void UMechaDamageComponent::RepulseVehicle(class ASTExtraVehicleBase* OtherVehicle, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.RepulseVehicle");

	UMechaDamageComponent_RepulseVehicle_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;
}


// Function Addons.MechaDamageComponent.RepulseCharacter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)

void UMechaDamageComponent::RepulseCharacter(class ASTExtraBaseCharacter* OtherCharacter, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.RepulseCharacter");

	UMechaDamageComponent_RepulseCharacter_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;
}


// Function Addons.MechaDamageComponent.RegisterCollisionShapes
// (Final, Native, Public, BlueprintCallable)

void UMechaDamageComponent::RegisterCollisionShapes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.RegisterCollisionShapes");

	UMechaDamageComponent_RegisterCollisionShapes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaDamageComponent.MulticastRPC_RepulseVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vel                            (Parm, IsPlainOldData)
// struct FVector                 HitPoint                       (Parm, IsPlainOldData)

void UMechaDamageComponent::MulticastRPC_RepulseVehicle(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& Vel, const struct FVector& HitPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.MulticastRPC_RepulseVehicle");

	UMechaDamageComponent_MulticastRPC_RepulseVehicle_Params params;
	params.OtherVehicle = OtherVehicle;
	params.Vel = Vel;
	params.HitPoint = HitPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaDamageComponent.MulticastRPC_RepulseCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vel                            (Parm, IsPlainOldData)
// struct FVector                 HitPoint                       (Parm, IsPlainOldData)

void UMechaDamageComponent::MulticastRPC_RepulseCharacter(class ASTExtraBaseCharacter* OtherCharacter, const struct FVector& Vel, const struct FVector& HitPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.MulticastRPC_RepulseCharacter");

	UMechaDamageComponent_MulticastRPC_RepulseCharacter_Params params;
	params.OtherCharacter = OtherCharacter;
	params.Vel = Vel;
	params.HitPoint = HitPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaDamageComponent.DetectBlockedPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaDamageComponent::DetectBlockedPawn(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.DetectBlockedPawn");

	UMechaDamageComponent_DetectBlockedPawn_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaDamageComponent.DealWithVehicleHit
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     SelfComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)

void UMechaDamageComponent::DealWithVehicleHit(class UPrimitiveComponent* SelfComp, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.DealWithVehicleHit");

	UMechaDamageComponent_DealWithVehicleHit_Params params;
	params.SelfComp = SelfComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;
}


// Function Addons.MechaDamageComponent.DealWithCharacterHit
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     SelfComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)

void UMechaDamageComponent::DealWithCharacterHit(class UPrimitiveComponent* SelfComp, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaDamageComponent.DealWithCharacterHit");

	UMechaDamageComponent_DealWithCharacterHit_Params params;
	params.SelfComp = SelfComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;
}


// Function Addons.MechaMovementComponent.UpdateDistanceToLand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaMovementComponent::UpdateDistanceToLand(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaMovementComponent.UpdateDistanceToLand");

	UMechaMovementComponent_UpdateDistanceToLand_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaMovementComponent.ShouldOptimizeTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMechaMovementComponent::ShouldOptimizeTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaMovementComponent.ShouldOptimizeTick");

	UMechaMovementComponent_ShouldOptimizeTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaMovementComponent.HasContinuousMove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMechaMovementComponent::HasContinuousMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaMovementComponent.HasContinuousMove");

	UMechaMovementComponent_HasContinuousMove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaMovementComponent.DrawDebugInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaMovementComponent::DrawDebugInfo(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaMovementComponent.DrawDebugInfo");

	UMechaMovementComponent_DrawDebugInfo_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaMovementComponent.ApplyContinuousMove
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMechaMovementComponent::ApplyContinuousMove(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaMovementComponent.ApplyContinuousMove");

	UMechaMovementComponent_ApplyContinuousMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSeatComponent.UpdateMechaSeatGUI
// (Final, Native, Public, BlueprintCallable)

void UMechaSeatComponent::UpdateMechaSeatGUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.UpdateMechaSeatGUI");

	UMechaSeatComponent_UpdateMechaSeatGUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSeatComponent.UncombineVehicleSeats
// (Final, Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSeatComponent::UncombineVehicleSeats(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.UncombineVehicleSeats");

	UMechaSeatComponent_UncombineVehicleSeats_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSeatComponent.HandleUncombined
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSeatComponent::HandleUncombined(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.HandleUncombined");

	UMechaSeatComponent_HandleUncombined_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSeatComponent.HandleCombined
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSeatComponent::HandleCombined(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.HandleCombined");

	UMechaSeatComponent_HandleCombined_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSeatComponent.GetVehicleUserComponentBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   SeatOccupier                   (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleUserComponentBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleUserComponentBase* UMechaSeatComponent::GetVehicleUserComponentBase(class ASTExtraBaseCharacter* SeatOccupier)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.GetVehicleUserComponentBase");

	UMechaSeatComponent_GetVehicleUserComponentBase_Params params;
	params.SeatOccupier = SeatOccupier;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSeatComponent.CombineVehicleSeats
// (Final, Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSeatComponent::CombineVehicleSeats(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSeatComponent.CombineVehicleSeats");

	UMechaSeatComponent_CombineVehicleSeats_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaCombineInterface.GetCombineState
// (Native, Public)
// Parameters:
// TEnumAsByte<ECombineState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECombineState> UMechaCombineInterface::GetCombineState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaCombineInterface.GetCombineState");

	UMechaCombineInterface_GetCombineState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaCombineInterface.GetCombinedVehicle
// (Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* UMechaCombineInterface::GetCombinedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaCombineInterface.GetCombinedVehicle");

	UMechaCombineInterface_GetCombinedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaCombineInterface.GetCombineComponent
// (Native, Public)
// Parameters:
// class UMechaSmoothAttachComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMechaSmoothAttachComponent* UMechaCombineInterface::GetCombineComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaCombineInterface.GetCombineComponent");

	UMechaCombineInterface_GetCombineComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.TryUnCombine
// (Native, Public, BlueprintCallable)

void UMechaSmoothAttachComponent::TryUnCombine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.TryUnCombine");

	UMechaSmoothAttachComponent_TryUnCombine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.TryCombine
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::TryCombine(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.TryCombine");

	UMechaSmoothAttachComponent_TryCombine_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ServerTryUnCombine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UMechaSmoothAttachComponent::ServerTryUnCombine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ServerTryUnCombine");

	UMechaSmoothAttachComponent_ServerTryUnCombine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ServerTryCombine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequested                     (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::ServerTryCombine(class ASTExtraVehicleBase* OtherVehicle, bool bRequested)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ServerTryCombine");

	UMechaSmoothAttachComponent_ServerTryCombine_Params params;
	params.OtherVehicle = OtherVehicle;
	params.bRequested = bRequested;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ProcessUncombine
// (Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::ProcessUncombine(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ProcessUncombine");

	UMechaSmoothAttachComponent_ProcessUncombine_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.ProcessCombine
// (Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::ProcessCombine(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ProcessCombine");

	UMechaSmoothAttachComponent_ProcessCombine_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.OnUncombinedFinished
// (Native, Event, Public, BlueprintEvent)

void UMechaSmoothAttachComponent::OnUncombinedFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnUncombinedFinished");

	UMechaSmoothAttachComponent_OnUncombinedFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnUncombined
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OldCombinedMecha               (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnUncombined(class ASTExtraVehicleBase* OldCombinedMecha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnUncombined");

	UMechaSmoothAttachComponent_OnUncombined_Params params;
	params.OldCombinedMecha = OldCombinedMecha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnRep_CombineState
// (Native, Public)
// Parameters:
// TEnumAsByte<ECombineState>     OldCombineState                (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnRep_CombineState(TEnumAsByte<ECombineState> OldCombineState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnRep_CombineState");

	UMechaSmoothAttachComponent_OnRep_CombineState_Params params;
	params.OldCombineState = OldCombineState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnRep_CombinedOtherMecha
// (Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OldCombinedVehicle             (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnRep_CombinedOtherMecha(class ASTExtraVehicleBase* OldCombinedVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnRep_CombinedOtherMecha");

	UMechaSmoothAttachComponent_OnRep_CombinedOtherMecha_Params params;
	params.OldCombinedVehicle = OldCombinedVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnRep_bCanCombine
// (Native, Public)

void UMechaSmoothAttachComponent::OnRep_bCanCombine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnRep_bCanCombine");

	UMechaSmoothAttachComponent_OnRep_bCanCombine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnPreAttachTo
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     AttachedVehicle                (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnPreAttachTo(class ASTExtraVehicleBase* AttachedVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnPreAttachTo");

	UMechaSmoothAttachComponent_OnPreAttachTo_Params params;
	params.AttachedVehicle = AttachedVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnCombinedFinished
// (Native, Event, Public, BlueprintEvent)

void UMechaSmoothAttachComponent::OnCombinedFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnCombinedFinished");

	UMechaSmoothAttachComponent_OnCombinedFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnCombined
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnCombined(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnCombined");

	UMechaSmoothAttachComponent_OnCombined_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.OnAttachedTo
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     AttachedVehicle                (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::OnAttachedTo(class ASTExtraVehicleBase* AttachedVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.OnAttachedTo");

	UMechaSmoothAttachComponent_OnAttachedTo_Params params;
	params.AttachedVehicle = AttachedVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.MulticastSetRequestedCombine
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bRequested                     (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::MulticastSetRequestedCombine(bool bRequested)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.MulticastSetRequestedCombine");

	UMechaSmoothAttachComponent_MulticastSetRequestedCombine_Params params;
	params.bRequested = bRequested;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.LuaCheckUncombinePosition
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 InPosition                     (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMechaSmoothAttachComponent::LuaCheckUncombinePosition(const struct FVector& InPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.LuaCheckUncombinePosition");

	UMechaSmoothAttachComponent_LuaCheckUncombinePosition_Params params;
	params.InPosition = InPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.K2_ProcessUncombine
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::K2_ProcessUncombine(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.K2_ProcessUncombine");

	UMechaSmoothAttachComponent_K2_ProcessUncombine_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.K2_ProcessCombine
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::K2_ProcessCombine(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.K2_ProcessCombine");

	UMechaSmoothAttachComponent_K2_ProcessCombine_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombineState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECombineState>     OldCombineState                (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::K2_OnRep_CombineState(TEnumAsByte<ECombineState> OldCombineState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombineState");

	UMechaSmoothAttachComponent_K2_OnRep_CombineState_Params params;
	params.OldCombineState = OldCombineState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombinedOtherMecha
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OldCombinedVehicle             (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::K2_OnRep_CombinedOtherMecha(class ASTExtraVehicleBase* OldCombinedVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.K2_OnRep_CombinedOtherMecha");

	UMechaSmoothAttachComponent_K2_OnRep_CombinedOtherMecha_Params params;
	params.OldCombinedVehicle = OldCombinedVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.K2_OnRep_bCanCombine
// (Native, Event, Public, BlueprintEvent)

void UMechaSmoothAttachComponent::K2_OnRep_bCanCombine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.K2_OnRep_bCanCombine");

	UMechaSmoothAttachComponent_K2_OnRep_bCanCombine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.HasCombined
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMechaSmoothAttachComponent::HasCombined()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.HasCombined");

	UMechaSmoothAttachComponent_HasCombined_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.HandleOnFatalUncombineError
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     HighPriorityVehicle            (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::HandleOnFatalUncombineError(class ASTExtraVehicleBase* HighPriorityVehicle, class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.HandleOnFatalUncombineError");

	UMechaSmoothAttachComponent_HandleOnFatalUncombineError_Params params;
	params.HighPriorityVehicle = HighPriorityVehicle;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.HandleOnFatalCombineError
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     HighPriorityVehicle            (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::HandleOnFatalCombineError(class ASTExtraVehicleBase* HighPriorityVehicle, class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.HandleOnFatalCombineError");

	UMechaSmoothAttachComponent_HandleOnFatalCombineError_Params params;
	params.HighPriorityVehicle = HighPriorityVehicle;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.GetNearbyValidCombineVehicles
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class ASTExtraVehicleBase*> ValidCombineVehicles           (Parm, OutParm, ZeroConstructor)

void UMechaSmoothAttachComponent::GetNearbyValidCombineVehicles(TArray<class ASTExtraVehicleBase*>* ValidCombineVehicles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.GetNearbyValidCombineVehicles");

	UMechaSmoothAttachComponent_GetNearbyValidCombineVehicles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ValidCombineVehicles != nullptr)
		*ValidCombineVehicles = params.ValidCombineVehicles;
}


// Function Addons.MechaSmoothAttachComponent.GetLuaDebugString
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMechaSmoothAttachComponent::GetLuaDebugString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.GetLuaDebugString");

	UMechaSmoothAttachComponent_GetLuaDebugString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.FindValidateUncombinePosition
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardDirection               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMechaSmoothAttachComponent::FindValidateUncombinePosition(const struct FVector& StartLocation, const struct FVector& ForwardDirection, const struct FVector& BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.FindValidateUncombinePosition");

	UMechaSmoothAttachComponent_FindValidateUncombinePosition_Params params;
	params.StartLocation = StartLocation;
	params.ForwardDirection = ForwardDirection;
	params.BoxExtent = BoxExtent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.ExitFreeCamera
// (Final, Native, Public, BlueprintCallable)

void UMechaSmoothAttachComponent::ExitFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ExitFreeCamera");

	UMechaSmoothAttachComponent_ExitFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugString
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FString                 DebugString                    (Parm, ZeroConstructor)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::ClientDrawDebugString(const struct FString& DebugString, const struct FColor& Color, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ClientDrawDebugString");

	UMechaSmoothAttachComponent_ClientDrawDebugString_Params params;
	params.DebugString = DebugString;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugCapsule
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::ClientDrawDebugCapsule(const struct FVector& Center, float HalfHeight, float Radius, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ClientDrawDebugCapsule");

	UMechaSmoothAttachComponent_ClientDrawDebugCapsule_Params params;
	params.Center = Center;
	params.HalfHeight = HalfHeight;
	params.Radius = Radius;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugBox
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FQuat                   Quat                           (Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::ClientDrawDebugBox(const struct FVector& Center, const struct FVector& Extent, const struct FQuat& Quat, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ClientDrawDebugBox");

	UMechaSmoothAttachComponent_ClientDrawDebugBox_Params params;
	params.Center = Center;
	params.Extent = Extent;
	params.Quat = Quat;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.ClientDrawDebugArrow
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UMechaSmoothAttachComponent::ClientDrawDebugArrow(const struct FVector& from, const struct FVector& to, const struct FColor& Color, float Duration, float Thickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.ClientDrawDebugArrow");

	UMechaSmoothAttachComponent_ClientDrawDebugArrow_Params params;
	params.from = from;
	params.to = to;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSmoothAttachComponent.CanUnCombineWith
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::CanUnCombineWith(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.CanUnCombineWith");

	UMechaSmoothAttachComponent_CanUnCombineWith_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSmoothAttachComponent.CanCombineWith
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMechaSmoothAttachComponent::CanCombineWith(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSmoothAttachComponent.CanCombineWith");

	UMechaSmoothAttachComponent_CanCombineWith_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaSpringArmComponent.HandleUncombined
// (Final, Native, Public, BlueprintCallable)

void UMechaSpringArmComponent::HandleUncombined()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSpringArmComponent.HandleUncombined");

	UMechaSpringArmComponent_HandleUncombined_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaSpringArmComponent.HandleCombined
// (Final, Native, Public, BlueprintCallable)

void UMechaSpringArmComponent::HandleCombined()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaSpringArmComponent.HandleCombined");

	UMechaSpringArmComponent_HandleCombined_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaUtils.GetMeshInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMesh                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMechaUtils::GetMeshInfo(class USkeletalMeshComponent* InSkeletalMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaUtils.GetMeshInfo");

	UMechaUtils_GetMeshInfo_Params params;
	params.InSkeletalMesh = InSkeletalMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.UncombineHealthAndFuel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherHover                     (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::UncombineHealthAndFuel(class ASTExtraVehicleBase* OtherHover)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.UncombineHealthAndFuel");

	AMechaVehicle_UncombineHealthAndFuel_Params params;
	params.OtherHover = OtherHover;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.StopMechaMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::StopMechaMontage(float BlendOutTime, class UAnimMontage* Montage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.StopMechaMontage");

	AMechaVehicle_StopMechaMontage_Params params;
	params.BlendOutTime = BlendOutTime;
	params.Montage = Montage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.StateToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMechaVehicle::StateToString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.StateToString");

	AMechaVehicle_StateToString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.StartAirGliding
// (Final, Native, Public, BlueprintCallable)

void AMechaVehicle::StartAirGliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.StartAirGliding");

	AMechaVehicle_StartAirGliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.ShouldApplyVehicleImpulse
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     MyPrimComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::ShouldApplyVehicleImpulse(class ASTExtraVehicleBase* OtherVehicle, class UPrimitiveComponent* MyPrimComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.ShouldApplyVehicleImpulse");

	AMechaVehicle_ShouldApplyVehicleImpulse_Params params;
	params.OtherVehicle = OtherVehicle;
	params.MyPrimComp = MyPrimComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.SetWeaponState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMechaWeaponState> InState                        (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::SetWeaponState(TEnumAsByte<EMechaWeaponState> InState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.SetWeaponState");

	AMechaVehicle_SetWeaponState_Params params;
	params.InState = InState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.ServerUpdateControlRotation
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FRotator                ControlRotation                (Parm, IsPlainOldData)

void AMechaVehicle::ServerUpdateControlRotation(const struct FRotator& ControlRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.ServerUpdateControlRotation");

	AMechaVehicle_ServerUpdateControlRotation_Params params;
	params.ControlRotation = ControlRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.ProcessAirGlidingLanded
// (Native, Event, Public, BlueprintEvent)

void AMechaVehicle::ProcessAirGlidingLanded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.ProcessAirGlidingLanded");

	AMechaVehicle_ProcessAirGlidingLanded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.PlayMechaMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::PlayMechaMontage(class UAnimMontage* Montage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.PlayMechaMontage");

	AMechaVehicle_PlayMechaMontage_Params params;
	params.Montage = Montage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnRep_NetControlRotation
// (Final, Native, Public)

void AMechaVehicle::OnRep_NetControlRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnRep_NetControlRotation");

	AMechaVehicle_OnRep_NetControlRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnRep_MechaStates
// (Final, Native, Public)
// Parameters:
// uint32_t                       OldStates                      (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnRep_MechaStates(uint32_t OldStates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnRep_MechaStates");

	AMechaVehicle_OnRep_MechaStates_Params params;
	params.OldStates = OldStates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnRep_bAirGliding
// (Final, Native, Public, BlueprintCallable)

void AMechaVehicle::OnRep_bAirGliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnRep_bAirGliding");

	AMechaVehicle_OnRep_bAirGliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnPlayerExitMecha
// (Final, Native, Private)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnPlayerExitMecha(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnPlayerExitMecha");

	AMechaVehicle_OnPlayerExitMecha_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnPlayerEnterMecha
// (Final, Native, Private)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnPlayerEnterMecha(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnPlayerEnterMecha");

	AMechaVehicle_OnPlayerEnterMecha_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnDriverLeaveMecha
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraCharacter*       LeaveDriver                    (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnDriverLeaveMecha(class ASTExtraCharacter* LeaveDriver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnDriverLeaveMecha");

	AMechaVehicle_OnDriverLeaveMecha_Params params;
	params.LeaveDriver = LeaveDriver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnDriverEnterMecha
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraCharacter*       EnterDriver                    (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnDriverEnterMecha(class ASTExtraCharacter* EnterDriver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnDriverEnterMecha");

	AMechaVehicle_OnDriverEnterMecha_Params params;
	params.EnterDriver = EnterDriver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnDeadMechaFallingToGrounded
// (Native, Event, Public, BlueprintEvent)

void AMechaVehicle::OnDeadMechaFallingToGrounded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnDeadMechaFallingToGrounded");

	AMechaVehicle_OnDeadMechaFallingToGrounded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.OnBeCachedCPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SourceCatcher                  (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::OnBeCachedCPlus(class AActor* SourceCatcher)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.OnBeCachedCPlus");

	AMechaVehicle_OnBeCachedCPlus_Params params;
	params.SourceCatcher = SourceCatcher;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.MulticastRPC_AddContinuousMove
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class UCurveFloat*             MoveCurve                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 movedir                        (Parm, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::MulticastRPC_AddContinuousMove(class UCurveFloat* MoveCurve, float Speed, const struct FVector& movedir, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.MulticastRPC_AddContinuousMove");

	AMechaVehicle_MulticastRPC_AddContinuousMove_Params params;
	params.MoveCurve = MoveCurve;
	params.Speed = Speed;
	params.movedir = movedir;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.MulticastDrawDebugBox
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutonomousOnly                (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::MulticastDrawDebugBox(const struct FVector& Center, const struct FVector& Extent, const struct FQuat& Rotation, const struct FColor& Color, float LifeTime, float Thickness, bool bAutonomousOnly)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.MulticastDrawDebugBox");

	AMechaVehicle_MulticastDrawDebugBox_Params params;
	params.Center = Center;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;
	params.bAutonomousOnly = bAutonomousOnly;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.MulticastDrawDebugArrow
// (Net, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 LineStart                      (Parm, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, IsPlainOldData)
// float                          ArrowSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutonomousOnly                (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::MulticastDrawDebugArrow(const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FColor& Color, float Duration, float Thickness, bool bAutonomousOnly)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.MulticastDrawDebugArrow");

	AMechaVehicle_MulticastDrawDebugArrow_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.ArrowSize = ArrowSize;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.bAutonomousOnly = bAutonomousOnly;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.MulticastDoJump
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AMechaVehicle::MulticastDoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.MulticastDoJump");

	AMechaVehicle_MulticastDoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.LeaveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::LeaveState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.LeaveState");

	AMechaVehicle_LeaveState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.InterruptState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// EMechaState                    InterruptBy                    (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::InterruptState(EMechaState State, EMechaState InterruptBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.InterruptState");

	AMechaVehicle_InterruptState_Params params;
	params.State = State;
	params.InterruptBy = InterruptBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.HasState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::HasState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.HasState");

	AMechaVehicle_HasState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.HasCombined
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::HasCombined()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.HasCombined");

	AMechaVehicle_HasCombined_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.HandleOnDestroyBy
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::HandleOnDestroyBy(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.HandleOnDestroyBy");

	AMechaVehicle_HandleOnDestroyBy_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.GetMechaMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMechaMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMechaMovementComponent* AMechaVehicle::GetMechaMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetMechaMovement");

	AMechaVehicle_GetMechaMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.GetInVehicleLocalPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* AMechaVehicle::GetInVehicleLocalPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetInVehicleLocalPlayer");

	AMechaVehicle_GetInVehicleLocalPlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.GetHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMechaVehicle::GetHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetHeight");

	AMechaVehicle_GetHeight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.GetCombineState
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECombineState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECombineState> AMechaVehicle::GetCombineState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetCombineState");

	AMechaVehicle_GetCombineState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.GetCombinedVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* AMechaVehicle::GetCombinedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetCombinedVehicle");

	AMechaVehicle_GetCombinedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.GetCombineComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMechaSmoothAttachComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMechaSmoothAttachComponent* AMechaVehicle::GetCombineComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.GetCombineComponent");

	AMechaVehicle_GetCombineComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.EnterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::EnterState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.EnterState");

	AMechaVehicle_EnterState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.EndAirGliding
// (Final, Native, Public, BlueprintCallable)

void AMechaVehicle::EndAirGliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.EndAirGliding");

	AMechaVehicle_EndAirGliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.EnableMechaResolvePenetration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::EnableMechaResolvePenetration(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.EnableMechaResolvePenetration");

	AMechaVehicle_EnableMechaResolvePenetration_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.DrawDebugInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::DrawDebugInfo(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.DrawDebugInfo");

	AMechaVehicle_DrawDebugInfo_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.DoJump
// (Final, Native, Public)

void AMechaVehicle::DoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.DoJump");

	AMechaVehicle_DoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.CombineHealthAndFuel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherHover                     (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::CombineHealthAndFuel(class ASTExtraVehicleBase* OtherHover)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.CombineHealthAndFuel");

	AMechaVehicle_CombineHealthAndFuel_Params params;
	params.OtherHover = OtherHover;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.CheckDriverState
// (Final, Native, Public)

void AMechaVehicle::CheckDriverState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.CheckDriverState");

	AMechaVehicle_CheckDriverState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.CanHitVehicle
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     HitVehicle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::CanHitVehicle(class ASTExtraVehicleBase* HitVehicle, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.CanHitVehicle");

	AMechaVehicle_CanHitVehicle_Params params;
	params.HitVehicle = HitVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.CanHitCharacter
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   HitCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::CanHitCharacter(class ASTExtraBaseCharacter* HitCharacter, struct FHitResult* InHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.CanHitCharacter");

	AMechaVehicle_CanHitCharacter_Params params;
	params.HitCharacter = HitCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InHit != nullptr)
		*InHit = params.InHit;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.CacheMaxHealthAndFuel
// (Final, Native, Public, BlueprintCallable)

void AMechaVehicle::CacheMaxHealthAndFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.CacheMaxHealthAndFuel");

	AMechaVehicle_CacheMaxHealthAndFuel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.ApplyVehicleImpulse
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ApplyImpulse                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::ApplyVehicleImpulse(const struct FVector& ApplyImpulse, bool bVelocityChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.ApplyVehicleImpulse");

	AMechaVehicle_ApplyVehicleImpulse_Params params;
	params.ApplyImpulse = ApplyImpulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.AllowState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMechaState                    State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMechaVehicle::AllowState(EMechaState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.AllowState");

	AMechaVehicle_AllowState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.MechaVehicle.AddContinuousSpeedMove
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 movedir                        (Parm, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::AddContinuousSpeedMove(float Speed, const struct FVector& movedir, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.AddContinuousSpeedMove");

	AMechaVehicle_AddContinuousSpeedMove_Params params;
	params.Speed = Speed;
	params.movedir = movedir;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MechaVehicle.AddContinuousCurveMove
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UCurveFloat*             MoveCurve                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 movedir                        (Parm, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AMechaVehicle::AddContinuousCurveMove(class UCurveFloat* MoveCurve, const struct FVector& movedir, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MechaVehicle.AddContinuousCurveMove");

	AMechaVehicle_AddContinuousCurveMove_Params params;
	params.MoveCurve = MoveCurve;
	params.movedir = movedir;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex
// (Final, Native, Public)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UMonsterRaptorAnimInstance::OnResetPlayedIdleIndex(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex");

	UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ServerGetBackPackInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOBHttpComponent::ServerGetBackPackInfo(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ServerGetBackPackInfo");

	UOBHttpComponent_ServerGetBackPackInfo_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ServerGetAllPlayerThrowInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UOBHttpComponent::ServerGetAllPlayerThrowInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ServerGetAllPlayerThrowInfo");

	UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.PostTeamWeaponInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TeamWeaponInfoJsonStr          (Parm, ZeroConstructor)

void UOBHttpComponent::PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.PostTeamWeaponInfo");

	UOBHttpComponent_PostTeamWeaponInfo_Params params;
	params.TeamWeaponInfoJsonStr = TeamWeaponInfoJsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.PostTeamBackPackInfoByTeamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOBHttpComponent::PostTeamBackPackInfoByTeamID(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.PostTeamBackPackInfoByTeamID");

	UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.PostTDMResultInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TDMResultInfoJsonStr           (Parm, ZeroConstructor)

void UOBHttpComponent::PostTDMResultInfo(const struct FString& TDMResultInfoJsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.PostTDMResultInfo");

	UOBHttpComponent_PostTDMResultInfo_Params params;
	params.TDMResultInfoJsonStr = TDMResultInfoJsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.PostPlayersAMInfo
// (Final, Native, Public)
// Parameters:
// struct FString                 PlayerAMInfoJsonStr            (Parm, ZeroConstructor)

void UOBHttpComponent::PostPlayersAMInfo(const struct FString& PlayerAMInfoJsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.PostPlayersAMInfo");

	UOBHttpComponent_PostPlayersAMInfo_Params params;
	params.PlayerAMInfoJsonStr = PlayerAMInfoJsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.OnRep_RealTimeAPIList
// (Final, Native, Public)

void UOBHttpComponent::OnRep_RealTimeAPIList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.OnRep_RealTimeAPIList");

	UOBHttpComponent_OnRep_RealTimeAPIList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.OnRep_AfterMatchAPIList
// (Final, Native, Public)

void UOBHttpComponent::OnRep_AfterMatchAPIList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.OnRep_AfterMatchAPIList");

	UOBHttpComponent_OnRep_AfterMatchAPIList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ClientUpdateTeammateItemList
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)

void UOBHttpComponent::ClientUpdateTeammateItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ClientUpdateTeammateItemList");

	UOBHttpComponent_ClientUpdateTeammateItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ClientGetPlayerUseSightInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FPlayerSightUsageInfoCompress> PlayerSightUsageInfoCompress   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetPlayerUseSightInfo(TArray<struct FPlayerSightUsageInfoCompress> PlayerSightUsageInfoCompress)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ClientGetPlayerUseSightInfo");

	UOBHttpComponent_ClientGetPlayerUseSightInfo_Params params;
	params.PlayerSightUsageInfoCompress = PlayerSightUsageInfoCompress;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ClientGetBackPackInfo
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// TArray<struct FPlayerBackPackInfo> TeamBackPackInfo               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ClientGetBackPackInfo");

	UOBHttpComponent_ClientGetBackPackInfo_Params params;
	params.TeamBackPackInfo = TeamBackPackInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ClientGetAllPlayerThrowInfo
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo             (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ClientGetAllPlayerThrowInfo");

	UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params params;
	params.AllPlayerThrowInfo = AllPlayerThrowInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.OBHttpComponent.ClientGetAirDropBoxInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// unsigned char                  AirDropId                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAirDropBoxDataItem> AirDropBoxDataList             (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetAirDropBoxInfo(unsigned char AirDropId, TArray<struct FAirDropBoxDataItem> AirDropBoxDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.OBHttpComponent.ClientGetAirDropBoxInfo");

	UOBHttpComponent_ClientGetAirDropBoxInfo_Params params;
	params.AirDropId = AirDropId;
	params.AirDropBoxDataList = AirDropBoxDataList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ObserverProbeComponent.PostInfoAfterMatch
// (Final, Native, Private)

void UObserverProbeComponent::PostInfoAfterMatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ObserverProbeComponent.PostInfoAfterMatch");

	UObserverProbeComponent_PostInfoAfterMatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ObserverProbeComponent.OnTerminatorEndGame
// (Final, Native, Public)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExtraParam                     (Parm, ZeroConstructor, IsPlainOldData)

void UObserverProbeComponent::OnTerminatorEndGame(class AController* Killer, class AController* Victim, int DamageType, int ExtraParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ObserverProbeComponent.OnTerminatorEndGame");

	UObserverProbeComponent_OnTerminatorEndGame_Params params;
	params.Killer = Killer;
	params.Victim = Victim;
	params.DamageType = DamageType;
	params.ExtraParam = ExtraParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ObserverProbeComponent.CollectSightUseTime
// (Final, Native, Private)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SightId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (Parm, ZeroConstructor, IsPlainOldData)

void UObserverProbeComponent::CollectSightUseTime(uint32_t PlayerKey, int SightId, bool bUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ObserverProbeComponent.CollectSightUseTime");

	UObserverProbeComponent_CollectSightUseTime_Params params;
	params.PlayerKey = PlayerKey;
	params.SightId = SightId;
	params.bUse = bUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PCOBCommonComponent.TrackingEnd
// (Final, Native, Public)

void UPCOBCommonComponent::TrackingEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PCOBCommonComponent.TrackingEnd");

	UPCOBCommonComponent_TrackingEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PCOBCommonComponent.PCOBTerminator
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UPCOBCommonComponent::PCOBTerminator(class ASTExtraBaseCharacter* Causer, class ASTExtraBaseCharacter* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PCOBCommonComponent.PCOBTerminator");

	UPCOBCommonComponent_PCOBTerminator_Params params;
	params.Causer = Causer;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PCOBCommonComponent.OnLoadAllLevelChanged
// (Final, Native, Public)
// Parameters:
// bool                           bLoadAllLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void UPCOBCommonComponent::OnLoadAllLevelChanged(bool bLoadAllLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PCOBCommonComponent.OnLoadAllLevelChanged");

	UPCOBCommonComponent_OnLoadAllLevelChanged_Params params;
	params.bLoadAllLevel = bLoadAllLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurAnimInstance.ResetStartFlying
// (Final, Native, Public)

void UPterosaurAnimInstance::ResetStartFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurAnimInstance.ResetStartFlying");

	UPterosaurAnimInstance_ResetStartFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurAnimInstance.OnStartFlying
// (Final, Native, Public)

void UPterosaurAnimInstance::OnStartFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurAnimInstance.OnStartFlying");

	UPterosaurAnimInstance_OnStartFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.UpdateVerticalHeight
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::UpdateVerticalHeight(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.UpdateVerticalHeight");

	UPterosaurMovementComponent_UpdateVerticalHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartTakingOff
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::StartTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartTakingOff");

	UPterosaurMovementComponent_StartTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartSwoopDown
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void UPterosaurMovementComponent::StartSwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartSwoopDown");

	UPterosaurMovementComponent_StartSwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartLanding
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::StartLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartLanding");

	UPterosaurMovementComponent_StartLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartFlyingDive
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::StartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartFlyingDive");

	UPterosaurMovementComponent_StartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetServerDiveDirection
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 Direction                      (Parm, IsPlainOldData)

void UPterosaurMovementComponent::SetServerDiveDirection(const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetServerDiveDirection");

	UPterosaurMovementComponent_SetServerDiveDirection_Params params;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetMovementMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetMovementMode");

	UPterosaurMovementComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetAutoLanding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::SetAutoLanding(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetAutoLanding");

	UPterosaurMovementComponent_SetAutoLanding_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.IsTakingOff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsTakingOff");

	UPterosaurMovementComponent_IsTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsSwoopDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsSwoopDown");

	UPterosaurMovementComponent_IsSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsSwoopCatching
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsSwoopCatching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsSwoopCatching");

	UPterosaurMovementComponent_IsSwoopCatching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsStrugglingToLand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsStrugglingToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsStrugglingToLand");

	UPterosaurMovementComponent_IsStrugglingToLand_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLocalSwoopingDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown");

	UPterosaurMovementComponent_IsLocalSwoopingDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLandingWalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLandingWalking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLandingWalking");

	UPterosaurMovementComponent_IsLandingWalking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLanding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLanding");

	UPterosaurMovementComponent_IsLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsDiving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsDiving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsDiving");

	UPterosaurMovementComponent_IsDiving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsCurveMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsCurveMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsCurveMoving");

	UPterosaurMovementComponent_IsCurveMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.GetMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPterosaurMoveMode             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPterosaurMoveMode UPterosaurMovementComponent::GetMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.GetMoveState");

	UPterosaurMovementComponent_GetMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.GetDistanceToLand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPterosaurMovementComponent::GetDistanceToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.GetDistanceToLand");

	UPterosaurMovementComponent_GetDistanceToLand_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.ExitSwoopDown
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::ExitSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.ExitSwoopDown");

	UPterosaurMovementComponent_ExitSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.ExitLanding
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::ExitLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.ExitLanding");

	UPterosaurMovementComponent_ExitLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndTakingOff
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::EndTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndTakingOff");

	UPterosaurMovementComponent_EndTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndSwoopDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRestVelocity                  (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::EndSwoopDown(bool bRestVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndSwoopDown");

	UPterosaurMovementComponent_EndSwoopDown_Params params;
	params.bRestVelocity = bRestVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndLanding
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::EndLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndLanding");

	UPterosaurMovementComponent_EndLanding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndFlyingDive
// (Final, Native, Public, BlueprintCallable)

void UPterosaurMovementComponent::EndFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndFlyingDive");

	UPterosaurMovementComponent_EndFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.DealWithCustomAction
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::DealWithCustomAction(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.DealWithCustomAction");

	UPterosaurMovementComponent_DealWithCustomAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::CheckCanStartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive");

	UPterosaurMovementComponent_CheckCanStartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateFlyingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity");

	UPterosaurMovementComponent_CalculateFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateFlyingAcceleration(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration");

	UPterosaurMovementComponent_CalculateFlyingAcceleration_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CalculateDivingVelocity
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateDivingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateDivingVelocity");

	UPterosaurMovementComponent_CalculateDivingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.TryFlyingDive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTry                           (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::TryFlyingDive(bool bTry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.TryFlyingDive");

	APterosaurVehicle_TryFlyingDive_Params params;
	params.bTry = bTry;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.TryCancelSwoopDown
// (Final, Native, Public, BlueprintCallable)

void APterosaurVehicle::TryCancelSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.TryCancelSwoopDown");

	APterosaurVehicle_TryCancelSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.ServerSwoopDown
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           IsForceEnd                     (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ServerSwoopDown");

	APterosaurVehicle_ServerSwoopDown_Params params;
	params.TargetLocation = TargetLocation;
	params.IsForceEnd = IsForceEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.ServerReleaseCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class ASTExtraBaseCharacter*   Requester                      (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ServerReleaseCharacter");

	APterosaurVehicle_ServerReleaseCharacter_Params params;
	params.Requester = Requester;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState
// (Event, Protected, BlueprintEvent)

void APterosaurVehicle::OnRep_SyncSwoopCatchState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState");

	APterosaurVehicle_OnRep_SyncSwoopCatchState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// EPterosaurSwoopStage           NewStage                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void APterosaurVehicle::OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged");

	APterosaurVehicle_OnPterosaurSwoopStateChanged_Params params;
	params.NewStage = NewStage;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch
// (Final, Native, Public)

void APterosaurVehicle::OnPterosaurPrepareCatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch");

	APterosaurVehicle_OnPterosaurPrepareCatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnClientExitFromPterosaur
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnClientExitFromPterosaur");

	APterosaurVehicle_OnClientExitFromPterosaur_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.MultiCast_SwoopDown
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void APterosaurVehicle::MultiCast_SwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.MultiCast_SwoopDown");

	APterosaurVehicle_MultiCast_SwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.MultiCast_SplineCorrect
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SyncLocation                   (Parm, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// TArray<struct FVector>         SplinePoints                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void APterosaurVehicle::MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.MultiCast_SplineCorrect");

	APterosaurVehicle_MultiCast_SplineCorrect_Params params;
	params.SyncLocation = SyncLocation;
	params.TargetLocation = TargetLocation;
	params.SplinePoints = SplinePoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.IsSwoopDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopDown");

	APterosaurVehicle_IsSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.IsSwoopCoolDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopCoolDown");

	APterosaurVehicle_IsSwoopCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.IsSwoopCatching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopCatching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopCatching");

	APterosaurVehicle_IsSwoopCatching_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.HandleOnSeatDetached
// (Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.HandleOnSeatDetached");

	APterosaurVehicle_HandleOnSeatDetached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.HandleOnSeatAttached
// (Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.HandleOnSeatAttached");

	APterosaurVehicle_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.GetPterosaurMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPterosaurMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPterosaurMovementComponent* APterosaurVehicle::GetPterosaurMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.GetPterosaurMovementComponent");

	APterosaurVehicle_GetPterosaurMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.GetConsumeFuelRate
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APterosaurVehicle::GetConsumeFuelRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.GetConsumeFuelRate");

	APterosaurVehicle_GetConsumeFuelRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.ForceCatchCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::ForceCatchCharacter(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ForceCatchCharacter");

	APterosaurVehicle_ForceCatchCharacter_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.DoSwoopDown
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::DoSwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.DoSwoopDown");

	APterosaurVehicle_DoSwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.CanConsumeFuel
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::CanConsumeFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.CanConsumeFuel");

	APterosaurVehicle_CanConsumeFuel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APterosaurVehicle::BroadCastOnPterosaurPrepareCatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch");

	APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// unsigned char                  NewStage                       (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::BPOnPterosaurSwoopStateChanged(unsigned char NewStage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged");

	APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params params;
	params.NewStage = NewStage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorMovementComponent.GetWalkingAccResistance
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaptorMovementComponent::GetWalkingAccResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorMovementComponent.GetWalkingAccResistance");

	URaptorMovementComponent_GetWalkingAccResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorMovementComponent.GetMaxAcceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaptorMovementComponent::GetMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorMovementComponent.GetMaxAcceleration");

	URaptorMovementComponent_GetMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorVehicle.SetHandBrake
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::SetHandBrake(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.SetHandBrake");

	ARaptorVehicle_SetHandBrake_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.ServerSetHandBrake
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::ServerSetHandBrake(float rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.ServerSetHandBrake");

	ARaptorVehicle_ServerSetHandBrake_Params params;
	params.rate = rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.MulticastDoJump
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ARaptorVehicle::MulticastDoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.MulticastDoJump");

	ARaptorVehicle_MulticastDoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.GetRaptorMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URaptorMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URaptorMovementComponent* ARaptorVehicle::GetRaptorMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.GetRaptorMovementComponent");

	ARaptorVehicle_GetRaptorMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorVehicle.DoJump
// (Final, Native, Public, BlueprintCallable)

void ARaptorVehicle::DoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.DoJump");

	ARaptorVehicle_DoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RegionOverlapComponent.SetPlayAreaComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     AreaComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URegionOverlapComponent::SetPlayAreaComponent(class UPrimitiveComponent* AreaComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RegionOverlapComponent.SetPlayAreaComponent");

	URegionOverlapComponent_SetPlayAreaComponent_Params params;
	params.AreaComponent = AreaComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RegionOverlapComponent.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass*                  ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceQuery                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)

void URegionOverlapComponent::GetOverlappingActors(class UClass* ClassFilter, bool bForceQuery, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*>* OverlappingActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RegionOverlapComponent.GetOverlappingActors");

	URegionOverlapComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;
	params.bForceQuery = bForceQuery;
	params.CollisionChannel = CollisionChannel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Addons.ReindeerBioVehicle.TryAttachToOtherVehicle
// (Final, Native, Public, BlueprintCallable)

void AReindeerBioVehicle::TryAttachToOtherVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.TryAttachToOtherVehicle");

	AReindeerBioVehicle_TryAttachToOtherVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.OnClientExitFromAttachedVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerBioVehicle::OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.OnClientExitFromAttachedVehicle");

	AReindeerBioVehicle_OnClientExitFromAttachedVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.MulticastDoJump
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AReindeerBioVehicle::MulticastDoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.MulticastDoJump");

	AReindeerBioVehicle_MulticastDoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.K2_OnClientAttachWithReindeerCart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerBioVehicle::K2_OnClientAttachWithReindeerCart(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.K2_OnClientAttachWithReindeerCart");

	AReindeerBioVehicle_K2_OnClientAttachWithReindeerCart_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.HandleVehicleHealthDestroy
// (Native, Public)

void AReindeerBioVehicle::HandleVehicleHealthDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.HandleVehicleHealthDestroy");

	AReindeerBioVehicle_HandleVehicleHealthDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.GetVehicleAttachState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AReindeerBioVehicle::GetVehicleAttachState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.GetVehicleAttachState");

	AReindeerBioVehicle_GetVehicleAttachState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerBioVehicle.GetVehicleAttachComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleAttachmentComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleAttachmentComponent* AReindeerBioVehicle::GetVehicleAttachComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.GetVehicleAttachComp");

	AReindeerBioVehicle_GetVehicleAttachComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerBioVehicle.GetBioFlyMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBioFlyMovementComponentBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBioFlyMovementComponentBase* AReindeerBioVehicle::GetBioFlyMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.GetBioFlyMovementComponent");

	AReindeerBioVehicle_GetBioFlyMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerBioVehicle.GetAttachedVehicle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* AReindeerBioVehicle::GetAttachedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.GetAttachedVehicle");

	AReindeerBioVehicle_GetAttachedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerBioVehicle.DoJump
// (Final, Native, Public, BlueprintCallable)

void AReindeerBioVehicle::DoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.DoJump");

	AReindeerBioVehicle_DoJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerBioVehicle.DoAttachLogic
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerBioVehicle::DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerBioVehicle.DoAttachLogic");

	AReindeerBioVehicle_DoAttachLogic_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.UpdateParticleState
// (Final, Native, Public)

void AReindeerCartVehicle::UpdateParticleState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.UpdateParticleState");

	AReindeerCartVehicle_UpdateParticleState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.TryAttachToOtherVehicle
// (Final, Native, Public, BlueprintCallable)

void AReindeerCartVehicle::TryAttachToOtherVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.TryAttachToOtherVehicle");

	AReindeerCartVehicle_TryAttachToOtherVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.SetMovingParticleActived
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Inactive                       (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::SetMovingParticleActived(bool Inactive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.SetMovingParticleActived");

	AReindeerCartVehicle_SetMovingParticleActived_Params params;
	params.Inactive = Inactive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.SetFloatingParticleActived
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Inactive                       (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::SetFloatingParticleActived(bool Inactive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.SetFloatingParticleActived");

	AReindeerCartVehicle_SetFloatingParticleActived_Params params;
	params.Inactive = Inactive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.OnParticleEffectLoadingFinished
// (Final, Native, Public)

void AReindeerCartVehicle::OnParticleEffectLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.OnParticleEffectLoadingFinished");

	AReindeerCartVehicle_OnParticleEffectLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.OnClientExitFromAttachedVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.OnClientExitFromAttachedVehicle");

	AReindeerCartVehicle_OnClientExitFromAttachedVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.LoadParticleEffect
// (Final, Native, Public)

void AReindeerCartVehicle::LoadParticleEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.LoadParticleEffect");

	AReindeerCartVehicle_LoadParticleEffect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.K2_OnClientAttachToReindeer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::K2_OnClientAttachToReindeer(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.K2_OnClientAttachToReindeer");

	AReindeerCartVehicle_K2_OnClientAttachToReindeer_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.HandleVehicleHealthDestroy
// (Native, Public)

void AReindeerCartVehicle::HandleVehicleHealthDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.HandleVehicleHealthDestroy");

	AReindeerCartVehicle_HandleVehicleHealthDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.HandleOnSeatAttached
// (Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.HandleOnSeatAttached");

	AReindeerCartVehicle_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.GetVehicleAttachState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AReindeerCartVehicle::GetVehicleAttachState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.GetVehicleAttachState");

	AReindeerCartVehicle_GetVehicleAttachState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerCartVehicle.GetVehicleAttachComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleAttachmentComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleAttachmentComponent* AReindeerCartVehicle::GetVehicleAttachComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.GetVehicleAttachComp");

	AReindeerCartVehicle_GetVehicleAttachComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerCartVehicle.GetForwardSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AReindeerCartVehicle::GetForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.GetForwardSpeed");

	AReindeerCartVehicle_GetForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerCartVehicle.GetAttachedVehicle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* AReindeerCartVehicle::GetAttachedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.GetAttachedVehicle");

	AReindeerCartVehicle_GetAttachedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ReindeerCartVehicle.DoAttachLogic
// (Final, Native, Protected)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void AReindeerCartVehicle::DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.DoAttachLogic");

	AReindeerCartVehicle_DoAttachLogic_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.DestroyAllCachedParticleEffect
// (Final, Native, Public, BlueprintCallable)

void AReindeerCartVehicle::DestroyAllCachedParticleEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.DestroyAllCachedParticleEffect");

	AReindeerCartVehicle_DestroyAllCachedParticleEffect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerCartVehicle.CloseWheelsCollision
// (Final, Native, Protected)

void AReindeerCartVehicle::CloseWheelsCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerCartVehicle.CloseWheelsCollision");

	AReindeerCartVehicle_CloseWheelsCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.ReindeerSeatComponent.GetTotalSeatsNum
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UReindeerSeatComponent::GetTotalSeatsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ReindeerSeatComponent.GetTotalSeatsNum");

	UReindeerSeatComponent_GetTotalSeatsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.ScanAvatar.ScanAndPrint
// (Final, Native, Public, BlueprintCallable)

void AScanAvatar::ScanAndPrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.ScanAvatar.ScanAndPrint");

	AScanAvatar_ScanAndPrint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.UpdateTuring
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::UpdateTuring(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.UpdateTuring");

	USplineMoveObj_UpdateTuring_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.UpdateSplineMoveTurning
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::UpdateSplineMoveTurning(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.UpdateSplineMoveTurning");

	USplineMoveObj_UpdateSplineMoveTurning_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.UpdateMoveSound
// (Final, Native, Public, BlueprintCallable)

void USplineMoveObj::UpdateMoveSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.UpdateMoveSound");

	USplineMoveObj_UpdateMoveSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.UpdateFocusRotation
// (Final, Native, Public, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::UpdateFocusRotation(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.UpdateFocusRotation");

	USplineMoveObj_UpdateFocusRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.UpdateCameraLag
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::UpdateCameraLag(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.UpdateCameraLag");

	USplineMoveObj_UpdateCameraLag_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.TryEnterSpline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USplineMoveObj::TryEnterSpline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.TryEnterSpline");

	USplineMoveObj_TryEnterSpline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.StopMoveSound
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::StopMoveSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.StopMoveSound");

	USplineMoveObj_StopMoveSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.StartSplineMoveCameraLag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::StartSplineMoveCameraLag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.StartSplineMoveCameraLag");

	USplineMoveObj_StartSplineMoveCameraLag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.SplineMoveTurningEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::SplineMoveTurningEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.SplineMoveTurningEnd");

	USplineMoveObj_SplineMoveTurningEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.SplineMoveTurningBegin
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InTargetDir                    (Parm, IsPlainOldData)
// bool                           bIsLeft                        (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::SplineMoveTurningBegin(const struct FVector& InTargetDir, bool bIsLeft)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.SplineMoveTurningBegin");

	USplineMoveObj_SplineMoveTurningBegin_Params params;
	params.InTargetDir = InTargetDir;
	params.bIsLeft = bIsLeft;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.SetSplineMoveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECustomMovmentMode> InMoveState                    (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::SetSplineMoveState(TEnumAsByte<ECustomMovmentMode> InMoveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.SetSplineMoveState");

	USplineMoveObj_SetSplineMoveState_Params params;
	params.InMoveState = InMoveState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.SetSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USplineMoveObj::SetSpline(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.SetSpline");

	USplineMoveObj_SetSpline_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.ServerPlayerTryEnterSpline
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 EnterLocation                  (Parm, IsPlainOldData)
// struct FRotator                EnterRot                       (Parm, IsPlainOldData)

void USplineMoveObj::ServerPlayerTryEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLocation, const struct FRotator& EnterRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.ServerPlayerTryEnterSpline");

	USplineMoveObj_ServerPlayerTryEnterSpline_Params params;
	params.InSpline = InSpline;
	params.EnterLocation = EnterLocation;
	params.EnterRot = EnterRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.PlayMoveSound
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::PlayMoveSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.PlayMoveSound");

	USplineMoveObj_PlayMoveSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.PlayerLeaveSpline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EMovementMode>     InMovementMode                 (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::PlayerLeaveSpline(class USplineComponent* InSpline, TEnumAsByte<EMovementMode> InMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.PlayerLeaveSpline");

	USplineMoveObj_PlayerLeaveSpline_Params params;
	params.InSpline = InSpline;
	params.InMovementMode = InMovementMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.PlayerEnterSpline
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 EnterLoc                       (Parm, IsPlainOldData)
// struct FRotator                EnterRot                       (Parm, IsPlainOldData)

void USplineMoveObj::PlayerEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLoc, const struct FRotator& EnterRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.PlayerEnterSpline");

	USplineMoveObj_PlayerEnterSpline_Params params;
	params.InSpline = InSpline;
	params.EnterLoc = EnterLoc;
	params.EnterRot = EnterRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OwnerJump
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::OwnerJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OwnerJump");

	USplineMoveObj_OwnerJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OwnerHasWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USplineMoveObj::OwnerHasWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OwnerHasWeapon");

	USplineMoveObj_OwnerHasWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.OnSplineMoveHit
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USplineMoveObj::OnSplineMoveHit(const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnSplineMoveHit");

	USplineMoveObj_OnSplineMoveHit_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnSpecialMoveCharacterJump
// (Native, Event, Public, BlueprintEvent)

void USplineMoveObj::OnSpecialMoveCharacterJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnSpecialMoveCharacterJump");

	USplineMoveObj_OnSpecialMoveCharacterJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnSimulateCharStateChanged
// (Final, Native, Public)
// Parameters:
// uint64_t                       InCurrentStates                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InPrevStates                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::OnSimulateCharStateChanged(uint64_t InCurrentStates, uint64_t InPrevStates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnSimulateCharStateChanged");

	USplineMoveObj_OnSimulateCharStateChanged_Params params;
	params.InCurrentStates = InCurrentStates;
	params.InPrevStates = InPrevStates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnPlayerRespawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AUAEPlayerController*    PC                             (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::OnPlayerRespawn(class AUAEPlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnPlayerRespawn");

	USplineMoveObj_OnPlayerRespawn_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnPawnStateInterrupted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (Parm, ZeroConstructor, IsPlainOldData)
// EPawnState                     InterruptedBy                  (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::OnPawnStateInterrupted(EPawnState State, EPawnState InterruptedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnPawnStateInterrupted");

	USplineMoveObj_OnPawnStateInterrupted_Params params;
	params.State = State;
	params.InterruptedBy = InterruptedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnPawnLeaveState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPawnState                     LeaveState                     (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::OnPawnLeaveState(EPawnState LeaveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnPawnLeaveState");

	USplineMoveObj_OnPawnLeaveState_Params params;
	params.LeaveState = LeaveState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.OnPawnEnterState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPawnState                     EnterState                     (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::OnPawnEnterState(EPawnState EnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.OnPawnEnterState");

	USplineMoveObj_OnPawnEnterState_Params params;
	params.EnterState = EnterState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.MoveAlongSplineError
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::MoveAlongSplineError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.MoveAlongSplineError");

	USplineMoveObj_MoveAlongSplineError_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.InteractEnterSpline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USplineMoveObj::InteractEnterSpline(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.InteractEnterSpline");

	USplineMoveObj_InteractEnterSpline_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.InSplineMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USplineMoveObj::InSplineMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.InSplineMoveState");

	USplineMoveObj_InSplineMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.HandleBeginTouchScreen
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               Loc                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USplineMoveObj::HandleBeginTouchScreen(const struct FVector2D& Loc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.HandleBeginTouchScreen");

	USplineMoveObj_HandleBeginTouchScreen_Params params;
	params.Loc = Loc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.GetSplineMoveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECustomMovmentMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECustomMovmentMode> USplineMoveObj::GetSplineMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetSplineMoveState");

	USplineMoveObj_GetSplineMoveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetProjectionLocationOnSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InLocation                     (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector USplineMoveObj::GetProjectionLocationOnSpline(class USplineComponent* InSpline, const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetProjectionLocationOnSpline");

	USplineMoveObj_GetProjectionLocationOnSpline_Params params;
	params.InSpline = InSpline;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetPlayerEnterSplineRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator USplineMoveObj::GetPlayerEnterSplineRotation(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetPlayerEnterSplineRotation");

	USplineMoveObj_GetPlayerEnterSplineRotation_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetPlayerEnterSplineLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector USplineMoveObj::GetPlayerEnterSplineLocation(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetPlayerEnterSplineLocation");

	USplineMoveObj_GetPlayerEnterSplineLocation_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetDistanceAlongSplineAtWorldLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InLoc                          (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USplineMoveObj::GetDistanceAlongSplineAtWorldLocation(class USplineComponent* InSpline, const struct FVector& InLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetDistanceAlongSplineAtWorldLocation");

	USplineMoveObj_GetDistanceAlongSplineAtWorldLocation_Params params;
	params.InSpline = InSpline;
	params.InLoc = InLoc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USplineMoveObj::GetCurrentTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetCurrentTime");

	USplineMoveObj_GetCurrentTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.GetCharacterOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* USplineMoveObj::GetCharacterOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.GetCharacterOwner");

	USplineMoveObj_GetCharacterOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.ForceLeaveSpline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USplineMoveObj::ForceLeaveSpline(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.ForceLeaveSpline");

	USplineMoveObj_ForceLeaveSpline_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.EndSplineMoveCameraLag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USplineMoveObj::EndSplineMoveCameraLag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.EndSplineMoveCameraLag");

	USplineMoveObj_EndSplineMoveCameraLag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.EnableFocusRotation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void USplineMoveObj::EnableFocusRotation(bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.EnableFocusRotation");

	USplineMoveObj_EnableFocusRotation_Params params;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.CustomModeIsSplineMove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  InCustomMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USplineMoveObj::CustomModeIsSplineMove(unsigned char InCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.CustomModeIsSplineMove");

	USplineMoveObj_CustomModeIsSplineMove_Params params;
	params.InCustomMode = InCustomMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.SplineMoveObj.ClientPlayerLeaveSpline
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USplineMoveObj::ClientPlayerLeaveSpline(class USplineComponent* InSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.ClientPlayerLeaveSpline");

	USplineMoveObj_ClientPlayerLeaveSpline_Params params;
	params.InSpline = InSpline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.AsyncLoadSoundResourceFinish
// (Final, Native, Public, BlueprintCallable)

void USplineMoveObj::AsyncLoadSoundResourceFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.AsyncLoadSoundResourceFinish");

	USplineMoveObj_AsyncLoadSoundResourceFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.AsyncLoadSoundResource
// (Final, Native, Public, BlueprintCallable)

void USplineMoveObj::AsyncLoadSoundResource()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.AsyncLoadSoundResource");

	USplineMoveObj_AsyncLoadSoundResource_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.SplineMoveObj.AllowTryEnterSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USplineMoveObj::AllowTryEnterSpline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.SplineMoveObj.AllowTryEnterSpline");

	USplineMoveObj_AllowTryEnterSpline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraVehicleBase*     OverlappedVehicle              (Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         DamageCollision                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FOverlapResult          OverlapResult                  (Parm, OutParm, IsPlainOldData)

void UTRexVehicleDamageComponent::HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle");

	UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params params;
	params.OverlappedVehicle = OverlappedVehicle;
	params.DamageCollision = DamageCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OverlapResult != nullptr)
		*OverlapResult = params.OverlapResult;
}


// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   OverlappedCharacter            (Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         DamageCollision                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FOverlapResult          OverlapResult                  (Parm, OutParm, IsPlainOldData)

void UTRexVehicleDamageComponent::HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter");

	UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params params;
	params.OverlappedCharacter = OverlappedCharacter;
	params.DamageCollision = DamageCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OverlapResult != nullptr)
		*OverlapResult = params.OverlapResult;
}


// Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving
// (Final, Native, Private)

void UTyrannosaurusRexAnimInstance::ResetStartMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving");

	UTyrannosaurusRexAnimInstance_ResetStartMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips
// (Native, Event, Public, BlueprintEvent)

void ATyrannosaurusRexVehicle::ShowRoarOverSpeedTips()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips");

	ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UClass*                  CameraShakeClass               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera");

	ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params params;
	params.CameraShakeClass = CameraShakeClass;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerStopRoar
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void ATyrannosaurusRexVehicle::ServerStopRoar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerStopRoar");

	ATyrannosaurusRexVehicle_ServerStopRoar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerRoar
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void ATyrannosaurusRexVehicle::ServerRoar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerRoar");

	ATyrannosaurusRexVehicle_ServerRoar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerBreakOut
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ServerBreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerBreakOut");

	ATyrannosaurusRexVehicle_ServerBreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack
// (Final, Native, Public)

void ATyrannosaurusRexVehicle::PrepareApplyRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack");

	ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged
// (Final, Native, Public)
// Parameters:
// float                          NewHP                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HPMax                          (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::OnTRexHPCHanged(float NewHP, float HPMax)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged");

	ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params params;
	params.NewHP = NewHP;
	params.HPMax = HPMax;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnRoarFinished
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBioVehicleSkillStopReason> Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnRoarFinished");

	ATyrannosaurusRexVehicle_OnRoarFinished_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring
// (Final, Native, Public)

void ATyrannosaurusRexVehicle::OnRep_bIsRoaring()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring");

	ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URaptorMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URaptorMovementComponent* ATyrannosaurusRexVehicle::GetVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement");

	ATyrannosaurusRexVehicle_GetVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::GetVehicleBreakOutState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState");

	ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASTExtraBaseCharacter*> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers");

	ATyrannosaurusRexVehicle_GetNearlyPlayers_Params params;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.EndRoarAttack
// (Final, Native, Public)

void ATyrannosaurusRexVehicle::EndRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.EndRoarAttack");

	ATyrannosaurusRexVehicle_EndRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           VehicleDeadDirection           (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ClientHandleVehicleDead(bool VehicleDeadDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead");

	ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params params;
	params.VehicleDeadDirection = VehicleDeadDirection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo");

	ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere");

	ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params params;
	params.Location = Location;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ATyrannosaurusRexVehicle::BroadCastStopMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage");

	ATyrannosaurusRexVehicle_BroadCastStopMontage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ATyrannosaurusRexVehicle::BroadCastPlayRoarMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage");

	ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::BroadCastClientDrawSphere(const struct FVector& Center, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere");

	ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BreakOut
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::BreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BreakOut");

	ATyrannosaurusRexVehicle_BreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter");

	ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack
// (Final, Native, Public)

void ATyrannosaurusRexVehicle::ApplyRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack");

	ATyrannosaurusRexVehicle_ApplyRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAERotatingMovementComponent.SetRotationToTarget
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                InTargetRotation               (Parm, IsPlainOldData)
// float                          MoveSeconds                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void UUAERotatingMovementComponent::SetRotationToTarget(const struct FRotator& InTargetRotation, float MoveSeconds, const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAERotatingMovementComponent.SetRotationToTarget");

	UUAERotatingMovementComponent_SetRotationToTarget_Params params;
	params.InTargetRotation = InTargetRotation;
	params.MoveSeconds = MoveSeconds;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAERotatingMovementComponent.FaceToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   InTargetCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void UUAERotatingMovementComponent::FaceToTarget(class ASTExtraBaseCharacter* InTargetCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAERotatingMovementComponent.FaceToTarget");

	UUAERotatingMovementComponent_FaceToTarget_Params params;
	params.InTargetCharacter = InTargetCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAERotatingMovementComponent.EnableRotationToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UUAERotatingMovementComponent::EnableRotationToTarget(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAERotatingMovementComponent.EnableRotationToTarget");

	UUAERotatingMovementComponent_EnableRotationToTarget_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAERotatingMovementComponent.EnableRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UUAERotatingMovementComponent::EnableRotation(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAERotatingMovementComponent.EnableRotation");

	UUAERotatingMovementComponent_EnableRotation_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_ActorJump.OnActorLanded
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              InHitResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_ActorJump::OnActorLanded(const struct FHitResult& InHitResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_ActorJump.OnActorLanded");

	UUAESkillAction_ActorJump_OnActorLanded_Params params;
	params.InHitResult = InHitResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_ActorJump.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_ActorJump::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_ActorJump.HandleOnActorHit");

	UUAESkillAction_ActorJump_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_ActorMove.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_ActorMove::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_ActorMove.HandleOnActorHit");

	UUAESkillAction_ActorMove_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_ActorMoveToLocation.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_ActorMoveToLocation::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_ActorMoveToLocation.HandleOnActorHit");

	UUAESkillAction_ActorMoveToLocation_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_BindDelegate.OnDelegateBindCallback
// (Final, Native, Public)

void UUAESkillAction_BindDelegate::OnDelegateBindCallback()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_BindDelegate.OnDelegateBindCallback");

	UUAESkillAction_BindDelegate_OnDelegateBindCallback_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_CharMoveByPath.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_CharMoveByPath::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_CharMoveByPath.HandleOnActorHit");

	UUAESkillAction_CharMoveByPath_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_ConsumeHandleItem.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUAESkillAction_ConsumeHandleItem::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_ConsumeHandleItem.PostInitSkill");

	UUAESkillAction_ConsumeHandleItem_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_EnableMove.UndoAction_Internal
// (Native, Public)

void UUAESkillAction_EnableMove::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_EnableMove.UndoAction_Internal");

	UUAESkillAction_EnableMove_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_EnableMove.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_EnableMove::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_EnableMove.RealDoAction_Internal");

	UUAESkillAction_EnableMove_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_FaceTarget.OnFaceActionEnd
// (Final, Native, Private)
// Parameters:
// class UUTSkillManagerComponent* SkillMgr                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAESkillAction_FaceTarget::OnFaceActionEnd(class UUTSkillManagerComponent* SkillMgr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_FaceTarget.OnFaceActionEnd");

	UUAESkillAction_FaceTarget_OnFaceActionEnd_Params params;
	params.SkillMgr = SkillMgr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_FollowMoveActor.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_FollowMoveActor::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_FollowMoveActor.HandleOnActorHit");

	UUAESkillAction_FollowMoveActor_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_Invincible.UndoAction_Internal
// (Native, Public)

void UUAESkillAction_Invincible::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_Invincible.UndoAction_Internal");

	UUAESkillAction_Invincible_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_Invincible.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_Invincible::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_Invincible.RealDoAction_Internal");

	UUAESkillAction_Invincible_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_JumpByStages.Rising
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_JumpByStages::Rising()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.Rising");

	UUAESkillAction_JumpByStages_Rising_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_JumpByStages.OnActorLanded
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FHitResult              InHitResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_JumpByStages::OnActorLanded(const struct FHitResult& InHitResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.OnActorLanded");

	UUAESkillAction_JumpByStages_OnActorLanded_Params params;
	params.InHitResult = InHitResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_JumpByStages.Hovering
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_JumpByStages::Hovering()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.Hovering");

	UUAESkillAction_JumpByStages_Hovering_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_JumpByStages.HandleOnActorHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_JumpByStages::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.HandleOnActorHit");

	UUAESkillAction_JumpByStages_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_JumpByStages.FreeFalling
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_JumpByStages::FreeFalling()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.FreeFalling");

	UUAESkillAction_JumpByStages_FreeFalling_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_JumpByStages.Diving
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_JumpByStages::Diving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpByStages.Diving");

	UUAESkillAction_JumpByStages_Diving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_JumpPhaseWithState.HandleChangeCurrentUsingWeapon
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<ESurviveWeaponPropSlot> TargetChangeSlot               (Parm, ZeroConstructor, IsPlainOldData)

void UUAESkillAction_JumpPhaseWithState::HandleChangeCurrentUsingWeapon(TEnumAsByte<ESurviveWeaponPropSlot> TargetChangeSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_JumpPhaseWithState.HandleChangeCurrentUsingWeapon");

	UUAESkillAction_JumpPhaseWithState_HandleChangeCurrentUsingWeapon_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_Log.UndoAction_Internal
// (Native, Public)

void UUAESkillAction_Log::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_Log.UndoAction_Internal");

	UUAESkillAction_Log_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_MarkCurrentUseWeapon.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_MarkCurrentUseWeapon::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_MarkCurrentUseWeapon.RealDoAction_Internal");

	UUAESkillAction_MarkCurrentUseWeapon_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_MoveToRelativeLocation.HandleOnActorHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAESkillAction_MoveToRelativeLocation::HandleOnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_MoveToRelativeLocation.HandleOnActorHit");

	UUAESkillAction_MoveToRelativeLocation_HandleOnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_PeriodAction.UndoPeriodAction
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAESkillAction_PeriodAction::UndoPeriodAction(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_PeriodAction.UndoPeriodAction");

	UUAESkillAction_PeriodAction_UndoPeriodAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_PeriodAction.DoPeriodAction
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAESkillAction_PeriodAction::DoPeriodAction(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_PeriodAction.DoPeriodAction");

	UUAESkillAction_PeriodAction_DoPeriodAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_PlayAvatarAction.OnAsyncLoadHandlesDone
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            InAsyncLoadIndex               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBattleItemHandleBase*> AvatarHandles                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FItemDefineID>   DefineIDList                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAESkillAction_PlayAvatarAction::OnAsyncLoadHandlesDone(int InAsyncLoadIndex, TArray<class UBattleItemHandleBase*> AvatarHandles, TArray<struct FItemDefineID> DefineIDList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_PlayAvatarAction.OnAsyncLoadHandlesDone");

	UUAESkillAction_PlayAvatarAction_OnAsyncLoadHandlesDone_Params params;
	params.InAsyncLoadIndex = InAsyncLoadIndex;
	params.AvatarHandles = AvatarHandles;
	params.DefineIDList = DefineIDList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_PlayMontage_IsArmed.OnAsyncLoadAnimResFinished
// (Final, Native, Public)
// Parameters:
// struct FPlayMontageAsyncloadParams LoadParams                     (Parm)

void UUAESkillAction_PlayMontage_IsArmed::OnAsyncLoadAnimResFinished(const struct FPlayMontageAsyncloadParams& LoadParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_PlayMontage_IsArmed.OnAsyncLoadAnimResFinished");

	UUAESkillAction_PlayMontage_IsArmed_OnAsyncLoadAnimResFinished_Params params;
	params.LoadParams = LoadParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_PlayMontage_Pose_IsArmed.OnAsyncLoadAnimResFinished
// (Final, Native, Public)
// Parameters:
// struct FPlayMontageAsyncloadParams LoadParams                     (Parm)

void UUAESkillAction_PlayMontage_Pose_IsArmed::OnAsyncLoadAnimResFinished(const struct FPlayMontageAsyncloadParams& LoadParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_PlayMontage_Pose_IsArmed.OnAsyncLoadAnimResFinished");

	UUAESkillAction_PlayMontage_Pose_IsArmed_OnAsyncLoadAnimResFinished_Params params;
	params.LoadParams = LoadParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_SetCameraData.ResetCameraData
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         NewOwnerActorComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAESkillAction_SetCameraData::ResetCameraData(class UActorComponent* NewOwnerActorComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_SetCameraData.ResetCameraData");

	UUAESkillAction_SetCameraData_ResetCameraData_Params params;
	params.NewOwnerActorComponent = NewOwnerActorComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_UIMessage.UndoAction_Internal
// (Native, Public)

void UUAESkillAction_UIMessage::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_UIMessage.UndoAction_Internal");

	UUAESkillAction_UIMessage_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UAESkillAction_UIMessage.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAESkillAction_UIMessage::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_UIMessage.RealDoAction_Internal");

	UUAESkillAction_UIMessage_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UAESkillAction_UIMessage.GetOwernPawnController
// (Final, Native, Private)
// Parameters:
// class ASTExtraPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerController* UUAESkillAction_UIMessage::GetOwernPawnController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UAESkillAction_UIMessage.GetOwernPawnController");

	UUAESkillAction_UIMessage_GetOwernPawnController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UTSkillAppearance_AddParticle.UndoAction_Internal
// (Native, Public)

void UUTSkillAppearance_AddParticle::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_AddParticle.UndoAction_Internal");

	UUTSkillAppearance_AddParticle_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_AddParticle.Reset_Internal
// (Native, Public)

void UUTSkillAppearance_AddParticle::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_AddParticle.Reset_Internal");

	UUTSkillAppearance_AddParticle_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_AddParticle.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_AddParticle::OnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_AddParticle.OnParticleSystemFinished");

	UUTSkillAppearance_AddParticle_OnParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_ParticleSystem.StopParticleSystem
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_ParticleSystem::StopParticleSystem(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_ParticleSystem.StopParticleSystem");

	UUTSkillAppearance_ParticleSystem_StopParticleSystem_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_ParticleSystem.RealDoActionWrapper
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_ParticleSystem::RealDoActionWrapper(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_ParticleSystem.RealDoActionWrapper");

	UUTSkillAppearance_ParticleSystem_RealDoActionWrapper_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_ParticleSystem.OnHurtAppearanceParticleSystemFinished
// (Native, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_ParticleSystem::OnHurtAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_ParticleSystem.OnHurtAppearanceParticleSystemFinished");

	UUTSkillAppearance_ParticleSystem_OnHurtAppearanceParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_ParticleSystem.OnAppearanceParticleSystemFinished
// (Native, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_ParticleSystem::OnAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_ParticleSystem.OnAppearanceParticleSystemFinished");

	UUTSkillAppearance_ParticleSystem_OnAppearanceParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_ParticleSystem.GetPlayRateScale
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillAppearance_ParticleSystem::GetPlayRateScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_ParticleSystem.GetPlayRateScale");

	UUTSkillAppearance_ParticleSystem_GetPlayRateScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UTSkillAppearance_RemoveAllParticle.UndoAction_Internal
// (Native, Public)

void UUTSkillAppearance_RemoveAllParticle::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RemoveAllParticle.UndoAction_Internal");

	UUTSkillAppearance_RemoveAllParticle_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_RemoveAllParticle.Reset_Internal
// (Native, Public)

void UUTSkillAppearance_RemoveAllParticle::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RemoveAllParticle.Reset_Internal");

	UUTSkillAppearance_RemoveAllParticle_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_RemoveAllParticle.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAppearance_RemoveAllParticle::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RemoveAllParticle.RealDoAction_Internal");

	UUTSkillAppearance_RemoveAllParticle_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UTSkillAppearance_RomoveParticle.UndoAction_Internal
// (Native, Public)

void UUTSkillAppearance_RomoveParticle::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RomoveParticle.UndoAction_Internal");

	UUTSkillAppearance_RomoveParticle_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_RomoveParticle.Reset_Internal
// (Native, Public)

void UUTSkillAppearance_RomoveParticle::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RomoveParticle.Reset_Internal");

	UUTSkillAppearance_RomoveParticle_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_RomoveParticle.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAppearance_RomoveParticle::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_RomoveParticle.RealDoAction_Internal");

	UUTSkillAppearance_RomoveParticle_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.UTSkillAppearance_SimpleParticleSystem.RealDoActionWrapper
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAppearance_SimpleParticleSystem::RealDoActionWrapper(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_SimpleParticleSystem.RealDoActionWrapper");

	UUTSkillAppearance_SimpleParticleSystem_RealDoActionWrapper_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.UTSkillAppearance_SkillWarning.UndoAction_Internal
// (Native, Public)

void UUTSkillAppearance_SkillWarning::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.UTSkillAppearance_SkillWarning.UndoAction_Internal");

	UUTSkillAppearance_SkillWarning_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.TryToAttachOtherVehicle
// (Final, Native, Public, BlueprintCallable)

void UVehicleAttachmentComponent::TryToAttachOtherVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.TryToAttachOtherVehicle");

	UVehicleAttachmentComponent_TryToAttachOtherVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.SetAttachState
// (Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAttachmentComponent::SetAttachState(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.SetAttachState");

	UVehicleAttachmentComponent_SetAttachState_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.ServerDoAttachVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAttachmentComponent::ServerDoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.ServerDoAttachVehicle");

	UVehicleAttachmentComponent_ServerDoAttachVehicle_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.OnRep_AttachedVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     PrevVehicle                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAttachmentComponent::OnRep_AttachedVehicle(class ASTExtraVehicleBase* PrevVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.OnRep_AttachedVehicle");

	UVehicleAttachmentComponent_OnRep_AttachedVehicle_Params params;
	params.PrevVehicle = PrevVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.GetAttachState
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAttachmentComponent::GetAttachState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.GetAttachState");

	UVehicleAttachmentComponent_GetAttachState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.GetAttachedVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraVehicleBase* UVehicleAttachmentComponent::GetAttachedVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.GetAttachedVehicle");

	UVehicleAttachmentComponent_GetAttachedVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.DoAttachVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAttachmentComponent::DoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.DoAttachVehicle");

	UVehicleAttachmentComponent_DoAttachVehicle_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.CheckSurroundingVehicle
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAttachmentComponent::CheckSurroundingVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.CheckSurroundingVehicle");

	UVehicleAttachmentComponent_CheckSurroundingVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.CanInteractedByOther
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAttachmentComponent::CanInteractedByOther()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.CanInteractedByOther");

	UVehicleAttachmentComponent_CanInteractedByOther_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.CanAttachVehicle
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAttachmentComponent::CanAttachVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.CanAttachVehicle");

	UVehicleAttachmentComponent_CanAttachVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleAttachmentComponent.CallServerToAttach
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UVehicleAttachmentComponent::CallServerToAttach()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.CallServerToAttach");

	UVehicleAttachmentComponent_CallServerToAttach_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleAttachmentComponent.BroadcastClientVehicleAttachment
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAttachmentComponent::BroadcastClientVehicleAttachment(class ASTExtraVehicleBase* OtherVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleAttachmentComponent.BroadcastClientVehicleAttachment");

	UVehicleAttachmentComponent_BroadcastClientVehicleAttachment_Params params;
	params.OtherVehicle = OtherVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleRubberDuck.GetVehicleMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFloatingVehicleVehicleMovementComponent2* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFloatingVehicleVehicleMovementComponent2* AVehicleRubberDuck::GetVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleRubberDuck.GetVehicleMovement");

	AVehicleRubberDuck_GetVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleRubberDuck.GetForwardSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVehicleRubberDuck::GetForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleRubberDuck.GetForwardSpeed");

	AVehicleRubberDuck_GetForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.VehicleSyncComponent_Hover.SendServerHoverMoveToClient
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float                          ServerAcceleration             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMaxSpeed                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMaxAcceleration          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSyncComponent_Hover::SendServerHoverMoveToClient(float ServerAcceleration, float ServerMaxSpeed, float ServerMaxAcceleration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleSyncComponent_Hover.SendServerHoverMoveToClient");

	UVehicleSyncComponent_Hover_SendServerHoverMoveToClient_Params params;
	params.ServerAcceleration = ServerAcceleration;
	params.ServerMaxSpeed = ServerMaxSpeed;
	params.ServerMaxAcceleration = ServerMaxAcceleration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.VehicleSyncComponent_Hover.Correct
// (Native, Protected)
// Parameters:
// bool                           bIsSnap                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayerChannel                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZAdjustValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSyncComponent_Hover::Correct(bool bIsSnap, bool bPlayerChannel, float ZAdjustValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.VehicleSyncComponent_Hover.Correct");

	UVehicleSyncComponent_Hover_Correct_Params params;
	params.bIsSnap = bIsSnap;
	params.bPlayerChannel = bPlayerChannel;
	params.ZAdjustValue = ZAdjustValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

