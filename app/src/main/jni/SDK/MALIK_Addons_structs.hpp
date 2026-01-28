#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Addons.ESnowMoveType
enum class ESnowMoveType : uint8_t
{
	ESnowMoveType__None            = 0,
	ESnowMoveType__Idel            = 1,
	ESnowMoveType__Move            = 2,
	ESnowMoveType__Jump            = 3,
	ESnowMoveType__ESnowMoveType_MAX = 4
};


// Enum Addons.EPterosaurSwoopStage
enum class EPterosaurSwoopStage : uint8_t
{
	EPterosaurSwoopStage__ESwoopStage_None = 0,
	EPterosaurSwoopStage__ESwoopStage_Ready = 1,
	EPterosaurSwoopStage__ESwoopStage_DirectionCorrect = 2,
	EPterosaurSwoopStage__ESwoopStage_SwoopMove = 3,
	EPterosaurSwoopStage__ESwoopStage_PreCatch = 4,
	EPterosaurSwoopStage__ESwoopStage_Catch = 5,
	EPterosaurSwoopStage__ESwoopStage_Finish = 6,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatch = 7,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatchWithHit = 8,
	EPterosaurSwoopStage__ESwoopStage_MAX = 9
};


// Enum Addons.EBlanketDanceState
enum class EBlanketDanceState : uint8_t
{
	EBDS_Locomotion                = 0,
	EBDS_ReadyToDance              = 1,
	EBDS_Dancing                   = 2,
	EBDS_Idle                      = 3,
	EBDS_MAX                       = 4
};


// Enum Addons.EBlankVehicleSwitchFailedReason
enum class EBlankVehicleSwitchFailedReason : uint8_t
{
	EBlankVehicleSwitchFailedReason__ESwitchTraceInvalid = 0,
	EBlankVehicleSwitchFailedReason__ESwitchInterrupted = 1,
	EBlankVehicleSwitchFailedReason__EBlankVehicleSwitchFailedReason_MAX = 2
};


// Enum Addons.ENitrogenAccelState
enum class ENitrogenAccelState : uint8_t
{
	ENitrogenAccelState__None      = 0,
	ENitrogenAccelState__Ready     = 1,
	ENitrogenAccelState__Bounce    = 2,
	ENitrogenAccelState__SideAccel = 3,
	ENitrogenAccelState__Accel     = 4,
	ENitrogenAccelState__CoolDown  = 5,
	ENitrogenAccelState__ENitrogenAccelState_MAX = 6
};


// Enum Addons.EMechaWeaponState
enum class EMechaWeaponState : uint8_t
{
	EMWS_None                      = 0,
	EMWS_Magnet                    = 1,
	EMWS_Missile                   = 2,
	EMWS_Speed                     = 3,
	EMWS_Boxing                    = 4,
	EMWS_MagnetToMissile           = 5,
	EMWS_MagnetToSpeed             = 6,
	EMWS_MagnetToBoxing            = 7,
	EMWS_MissileToMagnet           = 8,
	EMWS_MissileToBoxing           = 9,
	EMWS_SpeedToMagnet             = 10,
	EMWS_BoxingToMagnet            = 11,
	EMWS_BoxingToMissile           = 12,
	EMWS_MAX                       = 13
};


// Enum Addons.EMechaState
enum class EMechaState : uint8_t
{
	EMechaState__Normal            = 0,
	EMechaState__Jump              = 1,
	EMechaState__Fire              = 2,
	EMechaState__Stumble           = 3,
	EMechaState__Aim               = 4,
	EMechaState__Dance             = 5,
	EMechaState__Landing           = 6,
	EMechaState__AirGliding        = 7,
	EMechaState__Combine           = 8,
	EMechaState__Uncombine         = 9,
	EMechaState__Catch             = 10,
	EMechaState__BeCatched         = 11,
	EMechaState__Melee             = 12,
	EMechaState__LaunchState       = 13,
	EMechaState__Exploded          = 14,
	EMechaState____MAX             = 15,
	EMechaState__EMechaState_MAX   = 16
};


// Enum Addons.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	EInertializationSpace__WorldSpace = 1,
	EInertializationSpace__WorldRotation = 2,
	EInertializationSpace__EInertializationSpace_MAX = 3
};


// Enum Addons.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	EInertializationBoneState__Valid = 1,
	EInertializationBoneState__Excluded = 2,
	EInertializationBoneState__EInertializationBoneState_MAX = 3
};


// Enum Addons.EInertializationState
enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	EInertializationState__Pending = 1,
	EInertializationState__Active  = 2,
	EInertializationState__EInertializationState_MAX = 3
};


// Enum Addons.EFlyBioVehicleBaseMoveMode
enum class EFlyBioVehicleBaseMoveMode : uint8_t
{
	EFlyBioVehicleBaseMoveMode__EMove_TakingOff = 0,
	EFlyBioVehicleBaseMoveMode__EMove_RegularFlying = 1,
	EFlyBioVehicleBaseMoveMode__EMove_Landing = 2,
	EFlyBioVehicleBaseMoveMode__EMove_MAX = 3
};


// Enum Addons.EFlyBioVehicleMoveMode
enum class EFlyBioVehicleMoveMode : uint8_t
{
	EFlyBioVehicleMoveMode__EMove_TakingOff = 0,
	EFlyBioVehicleMoveMode__EMove_RegularFlying = 1,
	EFlyBioVehicleMoveMode__EMove_MAX = 2
};


// Enum Addons.EBlankVehicleBaseMoveMode
enum class EBlankVehicleBaseMoveMode : uint8_t
{
	EBlankVehicleBaseMoveMode__EMove_LowFlying = 0,
	EBlankVehicleBaseMoveMode__EMove_HighFlying = 1,
	EBlankVehicleBaseMoveMode__EMove_RiseToHigh = 2,
	EBlankVehicleBaseMoveMode__EMove_DropToLow = 3,
	EBlankVehicleBaseMoveMode__EMove_Diving = 4,
	EBlankVehicleBaseMoveMode__EMove_MAX = 5
};


// Enum Addons.EBlanketFlyingState
enum class EBlanketFlyingState : uint8_t
{
	EBFS_LOW                       = 0,
	EBFS_LOW_TO_HIGH               = 1,
	EBFS_HIGH                      = 2,
	EBFS_HIGH_TO_LOW               = 3,
	EBFS_DIVING                    = 4,
	EBFS_MAX                       = 5
};


// Enum Addons.ECollectedEventDataEventId
enum class ECollectedEventDataEventId : uint8_t
{
	ECollectedEventDataEventId__GameStatus = 0,
	ECollectedEventDataEventId__StartMatching = 1,
	ECollectedEventDataEventId__PlaneCarrying = 2,
	ECollectedEventDataEventId__PuttingDownCakeFireWorks = 3,
	ECollectedEventDataEventId__RankingScore = 4,
	ECollectedEventDataEventId__TakeDropItem = 5,
	ECollectedEventDataEventId__UsingItem = 6,
	ECollectedEventDataEventId__Falling = 7,
	ECollectedEventDataEventId__Climbing = 8,
	ECollectedEventDataEventId__InFieldOfView = 9,
	ECollectedEventDataEventId__UnderEnermyAttack = 10,
	ECollectedEventDataEventId__TakingDamage = 11,
	ECollectedEventDataEventId__ReducingSignalValue = 12,
	ECollectedEventDataEventId__CircleReducing = 13,
	ECollectedEventDataEventId__CircleChange = 14,
	ECollectedEventDataEventId__Rescue = 15,
	ECollectedEventDataEventId__DrivingVehicle = 16,
	ECollectedEventDataEventId__ReloadingBullet = 17,
	ECollectedEventDataEventId__AirDrop = 18,
	ECollectedEventDataEventId__PlayerPos = 19,
	ECollectedEventDataEventId__WeaponUsage = 20,
	ECollectedEventDataEventId__ItemPackageCreate = 21,
	ECollectedEventDataEventId__ItemAttach = 22,
	ECollectedEventDataEventId__ItemDetach = 23,
	ECollectedEventDataEventId__PlayerInfo = 24,
	ECollectedEventDataEventId__MiniMapShowInfo = 25,
	ECollectedEventDataEventId__Following = 26,
	ECollectedEventDataEventId__MiniMapPinning = 27,
	ECollectedEventDataEventId__Blocking = 28,
	ECollectedEventDataEventId__Dancing = 29,
	ECollectedEventDataEventId__PickingupTombBox = 30,
	ECollectedEventDataEventId__AirAttacking = 31,
	ECollectedEventDataEventId__CurrentWeapon = 32,
	ECollectedEventDataEventId__SceneInfo = 33,
	ECollectedEventDataEventId__TeamInfo = 34,
	ECollectedEventDataEventId__EnteringLeavingTeam = 35,
	ECollectedEventDataEventId__OnOffline = 36,
	ECollectedEventDataEventId__RankList = 37,
	ECollectedEventDataEventId__TextMessage = 38,
	ECollectedEventDataEventId__PawnState = 39,
	ECollectedEventDataEventId__OpenCloseDoor = 40,
	ECollectedEventDataEventId__MicSpeakerState = 41,
	ECollectedEventDataEventId__VehicleState = 42,
	ECollectedEventDataEventId__EnumMax = 43,
	ECollectedEventDataEventId__ECollectedEventDataEventId_MAX = 44
};


// Enum Addons.EDancingState
enum class EDancingState : uint8_t
{
	DancingState_Default           = 0,
	DancingState_PrepareMove       = 1,
	DancingState_DanceMoving       = 2,
	DancingState_EndMove           = 3,
	DancingState_Dancing           = 4,
	DancingState_Battle            = 5,
	DancingState_MAX               = 6
};


// Enum Addons.EEventDataCollectionValues_MicSpeakerState_Speaker
enum class EEventDataCollectionValues_MicSpeakerState_Speaker : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Speaker__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Speaker__EEventDataCollectionValues_MicSpeakerState_MAX = 3
};


// Enum Addons.EEventDataCollectionValues_MicSpeakerState_Mic
enum class EEventDataCollectionValues_MicSpeakerState_Mic : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Mic__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Mic__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Mic__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyLbs = 3,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyTeam = 4,
	EEventDataCollectionValues_MicSpeakerState_Mic__EEventDataCollectionValues_MicSpeakerState_MAX = 5
};


// Enum Addons.EEventDataCollectionValues_RankList_Type
enum class EEventDataCollectionValues_RankList_Type : uint8_t
{
	EEventDataCollectionValues_RankList_Type__None = 0,
	EEventDataCollectionValues_RankList_Type__Hot = 1,
	EEventDataCollectionValues_RankList_Type__Lucky = 2,
	EEventDataCollectionValues_RankList_Type__EEventDataCollectionValues_RankList_MAX = 3
};


// Enum Addons.EFAMActiveState
enum class EFAMActiveState : uint8_t
{
	EFAMActiveState__None          = 0,
	EFAMActiveState__Magnet        = 1,
	EFAMActiveState__EFAMActiveState_MAX = 2
};


// Enum Addons.EFAMFlyModeType
enum class EFAMFlyModeType : uint8_t
{
	EFAMFlyModeType__None          = 0,
	EFAMFlyModeType__Normal        = 1,
	EFAMFlyModeType__HighSpeed     = 2,
	EFAMFlyModeType__EFAMFlyModeType_MAX = 3
};


// Enum Addons.EHoverSimulateState
enum class EHoverSimulateState : uint8_t
{
	EHoverSimulateState__Idle      = 0,
	EHoverSimulateState__Simple    = 1,
	EHoverSimulateState__Complex   = 2,
	EHoverSimulateState__EHoverSimulateState_MAX = 3
};


// Enum Addons.ELadderMoveType
enum class ELadderMoveType : uint8_t
{
	ELadderMove_None               = 0,
	ELadderMove_Idle               = 1,
	ELadderMove_Up                 = 2,
	ELadderMove_Down               = 3,
	ELadderMove_JumpToTop          = 4,
	ELadderMove_ExitFromBottom     = 5,
	ELadderMove_EnterFromTop       = 6,
	ELadderMove_EnterFromBottom    = 7,
	ELadderMove_MAX                = 8
};


// Enum Addons.EMoveDirection
enum class EMoveDirection : uint8_t
{
	EMD_F                          = 0,
	EMD_B                          = 1,
	EMD_L                          = 2,
	EMD_R                          = 3,
	EMD_MAX                        = 4
};


// Enum Addons.EMechaMoveCustomMode
enum class EMechaMoveCustomMode : uint8_t
{
	EMechaMoveCustomMode__EMove_None = 0,
	EMechaMoveCustomMode__EMove_Glide = 1,
	EMechaMoveCustomMode__EMove_Landing = 2,
	EMechaMoveCustomMode__EMove_MAX = 3
};


// Enum Addons.ECombineState
enum class ECombineState : uint8_t
{
	ECS_COMBINE                    = 0,
	ECS_UNCOMBINE                  = 1,
	ECS_None                       = 2,
	ECS_MAX                        = 3
};


// Enum Addons.EPterosaurMoveMode
enum class EPterosaurMoveMode : uint8_t
{
	EPterosaurMoveMode__EMove_Idle = 0,
	EPterosaurMoveMode__EMove_TakingOff = 1,
	EPterosaurMoveMode__EMove_RegularFlying = 2,
	EPterosaurMoveMode__EMove_Diving = 3,
	EPterosaurMoveMode__EMove_Landing = 4,
	EPterosaurMoveMode__EMove_SwoopDown = 5,
	EPterosaurMoveMode__EMove_MAX  = 6
};


// Enum Addons.EBioVehicleSkillStopReason
enum class EBioVehicleSkillStopReason : uint8_t
{
	StopReason_FINISH              = 0,
	StopReason_INTERRUPT           = 1,
	StopReason_MAX                 = 2
};


// Enum Addons.ETyranState
enum class ETyranState : uint8_t
{
	ETyranState__None              = 0,
	ETyranState__Normal            = 1,
	ETyranState__BreakOut          = 2,
	ETyranState__ETyranState_MAX   = 3
};


// Enum Addons.EVehicleWeaponBoardDataType
enum class EVehicleWeaponBoardDataType : uint8_t
{
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_None = 0,
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_MuzzlePos = 1,
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_MAX = 2
};


// Enum Addons.EDelegateBindType
enum class EDelegateBindType : uint8_t
{
	EDelegateBindType__BINDTYPE_NONE = 0,
	EDelegateBindType__BINDTYPE_DYNAMIC = 1,
	EDelegateBindType__BINDTYPE_DYNAMIC_MULTICAST = 2,
	EDelegateBindType__BINDTYPE_LUAEVENT = 3,
	EDelegateBindType__BINDTYPE_MAX = 4
};


// Enum Addons.ECarryBackDirection
enum class ECarryBackDirection : uint8_t
{
	ECarryBackDirection__ECarryBackDirection_NONE = 0,
	ECarryBackDirection__ECarryBackDirection_Front = 1,
	ECarryBackDirection__ECarryBackDirection_Back = 2,
	ECarryBackDirection__ECarryBackDirection_Left = 3,
	ECarryBackDirection__ECarryBackDirection_Right = 4,
	ECarryBackDirection__ECarryBackDirection_MAX = 5
};


// Enum Addons.ECarryBackSkillActionType
enum class ECarryBackSkillActionType : uint8_t
{
	ECarryBackSkillActionType__ECBSAT_START = 0,
	ECarryBackSkillActionType__ECBSAT_CARRYBACK = 1,
	ECarryBackSkillActionType__ECBSAT_END = 2,
	ECarryBackSkillActionType__ECBSAT_FAILED = 3,
	ECarryBackSkillActionType__ECBSAT_NONE = 4,
	ECarryBackSkillActionType__ECBSAT_MAX = 5
};


// Enum Addons.ECarryToVehicleActionState
enum class ECarryToVehicleActionState : uint8_t
{
	ECarryToVehicleActionState__ECTV_PREPARE = 0,
	ECarryToVehicleActionState__ECTV_UPDATE = 1,
	ECarryToVehicleActionState__ECTV_FINISH = 2,
	ECarryToVehicleActionState__ECTV_FAILED = 3,
	ECarryToVehicleActionState__ECTV_NONE = 4,
	ECarryToVehicleActionState__ECTV_MAX = 5
};


// Enum Addons.EBSSkillActionType
enum class EBSSkillActionType : uint8_t
{
	EBSSAT_START                   = 0,
	EBSSAT_PLACE                   = 1,
	EBSSAT_END                     = 2,
	EBSSAT_CHECK                   = 3,
	EBSSAT_PLACE_RELATIVE          = 4,
	EBSSAT_NONE                    = 5,
	EBSSAT_MAX                     = 6
};


// Enum Addons.EJumpStage
enum class EJumpStage : uint8_t
{
	EJumpStage__EJumpStage_Rising  = 0,
	EJumpStage__EJumpStage_Hovering = 1,
	EJumpStage__EJumpStage_Diving  = 2,
	EJumpStage__EJumpStage_MAX     = 3
};


// Enum Addons.EPVEProjectileInitLocationType
enum class EPVEProjectileInitLocationType : uint8_t
{
	EPVEProjectileInitLocationType__UseOwnerLocation = 0,
	EPVEProjectileInitLocationType__UseTargetLocation = 1,
	EPVEProjectileInitLocationType__UseSocketLocation = 2,
	EPVEProjectileInitLocationType__EPVEProjectileInitLocationType_MAX = 3
};


// Enum Addons.ELockPPType
enum class ELockPPType : uint8_t
{
	ELPPT_FPP                      = 0,
	ELPPT_TPP                      = 1,
	ELPPT_MAX                      = 2
};


// Enum Addons.ESkillModifyPropertyType
enum class ESkillModifyPropertyType : uint8_t
{
	ESMPT_Bool                     = 0,
	ESMPT_Int                      = 1,
	ESMPT_Float                    = 2,
	ESMPT_String                   = 3,
	ESMPT_MAX                      = 4
};


// Enum Addons.AnimMontageTypeAndPosture
enum class EAnimMontageTypeAndPosture : uint8_t
{
	AnimMontageTypeAndPosture__FPS_Stand = 0,
	AnimMontageTypeAndPosture__FPS_Crouch = 1,
	AnimMontageTypeAndPosture__FPS_Prone = 2,
	AnimMontageTypeAndPosture__FPS_Vehicle = 3,
	AnimMontageTypeAndPosture__FPS_Max = 4,
	AnimMontageTypeAndPosture__TPS_Stand = 5,
	AnimMontageTypeAndPosture__TPS_Crouch = 6,
	AnimMontageTypeAndPosture__TPS_Prone = 7,
	AnimMontageTypeAndPosture__TPS_Vehicle = 8,
	AnimMontageTypeAndPosture__TPS_Max = 9,
	AnimMontageTypeAndPosture__AnimMontageTypeAndPosture_MAX = 10
};


// Enum Addons.EPutDownDirection
enum class EPutDownDirection : uint8_t
{
	EPutDownDirection__EPutDownDirection_NONE = 0,
	EPutDownDirection__EPutDownDirection_Front = 1,
	EPutDownDirection__EPutDownDirection_Back = 2,
	EPutDownDirection__EPutDownDirection_MAX = 3
};


// Enum Addons.EPutDownSkillActionType
enum class EPutDownSkillActionType : uint8_t
{
	EPutDownSkillActionType__EPDSAT_START = 0,
	EPutDownSkillActionType__EPDSAT_PUTDOWN = 1,
	EPutDownSkillActionType__EPDSAT_END = 2,
	EPutDownSkillActionType__EPDSAT_FAILED = 3,
	EPutDownSkillActionType__EPDSAT_NONE = 4,
	EPutDownSkillActionType__EPDSAT_MAX = 5
};


// Enum Addons.ESkillTouchEvent
enum class ESkillTouchEvent : uint8_t
{
	ESkillTouchEvent__ESkillTouchEvent_KEY_DOWN = 0,
	ESkillTouchEvent__ESkillTouchEvent_KEY_UP = 1,
	ESkillTouchEvent__ESkillTouchEvent_KEY_MAX = 2
};


// Enum Addons.EBeamEffectDataFromType
enum class EBeamEffectDataFromType : uint8_t
{
	EBeamEffectDataFromType__FixedPoint = 0,
	EBeamEffectDataFromType__BlackBoard = 1,
	EBeamEffectDataFromType__AttachPoint = 2,
	EBeamEffectDataFromType__EBeamEffectDataFromType_MAX = 3
};


// Enum Addons.EUAESkillCheckItemType
enum class EUAESkillCheckItemType : uint8_t
{
	EUAESkillCheckItemType__EUAESkillCheckItemType_Or = 0,
	EUAESkillCheckItemType__EUAESkillCheckItemType_And = 1,
	EUAESkillCheckItemType__EUAESkillCheckItemType_MAX = 2
};


// Enum Addons.ESkillConditionIsInHouseCheckType
enum class ESkillConditionIsInHouseCheckType : uint8_t
{
	ESkillConditionIsInHouseCheckType__In = 0,
	ESkillConditionIsInHouseCheckType__NotIn = 1,
	ESkillConditionIsInHouseCheckType__ESkillConditionIsInHouseCheckType_MAX = 2
};


// Enum Addons.ESkillConditionIsInHouseCheckTarget
enum class ESkillConditionIsInHouseCheckTarget : uint8_t
{
	ESkillConditionIsInHouseCheckTarget__Self = 0,
	ESkillConditionIsInHouseCheckTarget__SelfForward = 1,
	ESkillConditionIsInHouseCheckTarget__ESkillConditionIsInHouseCheckTarget_MAX = 2
};


// Enum Addons.EAxisType
enum class EAxisType : uint8_t
{
	EAxis_X                        = 0,
	EAxis_Y                        = 1,
	EAxis_Z                        = 2,
	EAxis_MAX                      = 3
};


// Enum Addons.ESCRotatorAngleType
enum class ESCRotatorAngleType : uint8_t
{
	ESCRotatorAngleType__ESCRotatorAngleType_Character = 0,
	ESCRotatorAngleType__ESCRotatorAngleType_Controller = 1,
	ESCRotatorAngleType__ESCRotatorAngleType_Camera = 2,
	ESCRotatorAngleType__ESCRotatorAngleType_FreeCamera = 3,
	ESCRotatorAngleType__ESCRotatorAngleType_Max = 4
};


// Enum Addons.ESettingConfigType
enum class ESettingConfigType : uint8_t
{
	SCT_Int                        = 0,
	SCT_UInt                       = 1,
	SCT_Float                      = 2,
	SCT_Bool                       = 3,
	SCT_String                     = 4,
	SCT_MAX                        = 5
};


// Enum Addons.EAnimHurtingTarget
enum class EAnimHurtingTarget : uint8_t
{
	EAnimHurtingTarget__PlayerCharacter = 0,
	EAnimHurtingTarget__SimpleCharacter = 1,
	EAnimHurtingTarget__AllCharacter = 2,
	EAnimHurtingTarget__EAnimHurtingTarget_MAX = 3
};


// Enum Addons.EHurtApperanceRotateType
enum class EHurtApperanceRotateType : uint8_t
{
	EHurtApperanceRotateType__ERotateToCaster = 0,
	EHurtApperanceRotateType__EHurtApperanceRotateType_MAX = 1
};


// Enum Addons.UTSkill_SoundCue_ListenType
enum class EUTSkill_SoundCue_ListenType : uint8_t
{
	UTSkill_SoundCue_ListenType__Listen_SelfOnly = 0,
	UTSkill_SoundCue_ListenType__Listen_Teammate = 1,
	UTSkill_SoundCue_ListenType__Listen_Target = 2,
	UTSkill_SoundCue_ListenType__Listen_AllTarget = 3,
	UTSkill_SoundCue_ListenType__Listen_All = 4,
	UTSkill_SoundCue_ListenType__Listen_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Addons.BeamEmitterData
// 0x000C
struct FBeamEmitterData
{
	int                                                BeamEmitterIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeamEmitterSourceIndex;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeamEmitterTargetIndex;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.BioVehicleMovementPostPhysicsTickFunction
// 0x0004 (0x003C - 0x0038)
struct FBioVehicleMovementPostPhysicsTickFunction : public FTickFunction
{
	class UBioVehicleMovementComponent*                Target;                                                   // 0x0038(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Addons.FlyBioVehicleFlyingConfig
// 0x0028
struct FFlyBioVehicleFlyingConfig
{
	float                                              MaxUpSpeed;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyBackSpeed;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyAcceleration;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FlySteeringRotationSpeedCurve;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.FlyBioVehicleLandingConfig
// 0x0014
struct FFlyBioVehicleLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLandingTime;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingToGroundTime;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceToGroundInFixedTime;                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.FlyBioVehicleUpdateDistanceToLandConfig
// 0x000C
struct FFlyBioVehicleUpdateDistanceToLandConfig
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.FootStepEffect
// 0x0030
struct FFootStepEffect
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.FootStepEffect.ParticleTemplate
	int                                                EnableDeviceLevel;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Addons.BlanketDanceData
// 0x0008
struct FBlanketDanceData
{
	TEnumAsByte<EBlanketDanceState>                    BlanketDanceState;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class ASTExtraBaseCharacter*                       LookAtCharacter;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.UncombineHelper
// 0x0040
struct FUncombineHelper
{
	bool                                               bReset;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  NewTransform;                                             // 0x0010(0x0030) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Addons.MechaStateSet
// 0x003C
struct FMechaStateSet
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) UNKNOWN PROPERTY: SetProperty Addons.MechaStateSet.States
};

// ScriptStruct Addons.ReplicatedHoverSimData
// 0x0028
struct FReplicatedHoverSimData
{
	float                                              HoverDelta;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      SimForce;                                                 // 0x0004(0x000C)
	struct FVector_NetQuantize100                      TraceHitLocation;                                         // 0x0010(0x000C)
	struct FVector_NetQuantize100                      HoverSpotRelativeLoc;                                     // 0x001C(0x000C)
};

// ScriptStruct Addons.HoveringSimulateData
// 0x0040
struct FHoveringSimulateData
{
	float                                              HoverDelta;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HoverDelta_Predict;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HoverDelta_Old;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SimForce;                                                 // 0x000C(0x000C) (IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUnderground;                                             // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInWater;                                                 // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPenetration;                                             // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceHitLocation;                                         // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     SpotWorldLocation_Last;                                   // 0x0028(0x000C) (IsPlainOldData)
	struct FVector                                     HoverSpotRelativeLoc;                                     // 0x0034(0x000C) (IsPlainOldData)
};

// ScriptStruct Addons.HoveringBodyData
// 0x001C
struct FHoveringBodyData
{
	float                                              DistanceToGround;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceToGround_Old;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceHitLocation;                                         // 0x0008(0x000C) (IsPlainOldData)
	float                                              BadStatusTime;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUnderground;                                             // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPenetration;                                             // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInWater;                                                 // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.NitrogenAccelData
// 0x001C
struct FNitrogenAccelData
{
	struct FVector                                     LocationT0;                                               // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    RotationT0;                                               // 0x000C(0x000C) (IsPlainOldData)
	bool                                               IsSideOverlap;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLeftSideOverlap;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct Addons.LadderMoveData
// 0x000C
struct FLadderMoveData
{
	bool                                               bOnLadder;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class ALadderActor*                                Ladder;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderMoveType>                       LadderMoveType;                                           // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LadderStep;                                               // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Addons.FootLockData
// 0x0038
struct FFootLockData
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IkBoneName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockAlpha;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LockedLocation;                                           // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LockedRotator;                                            // 0x0028(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              CurveValueLastFrame;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.MechaCameraModifier
// 0x0050
struct FMechaCameraModifier
{
	float                                              ArmLengthAddSpeed;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmLengthAddTarget;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmLengthAddCurrent;                                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FovAddSpeed;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FovAddTarget;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FovAddCurrent;                                            // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SocketOffsetAddSpeed;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffsetAddTarget;                                    // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SocketOffsetAddCurrent;                                   // 0x0028(0x000C) (Transient, IsPlainOldData)
	float                                              TargetOffsetAddSpeed;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffsetAddTarget;                                    // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetOffsetAddCurrent;                                   // 0x0044(0x000C) (Transient, IsPlainOldData)
};

// ScriptStruct Addons.ViewPoint
// 0x001C
struct FViewPoint
{
	bool                                               bHasSaved;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct Addons.PterosaurUpdateDistanceToLandConfig
// 0x000C
struct FPterosaurUpdateDistanceToLandConfig
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.PterosaurLandingConfig
// 0x0014
struct FPterosaurLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLandingTime;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingToGroundTime;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceToGroundInFixedTime;                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.BunchAction
// 0x0008
struct FBunchAction
{
	class UUTSkillEffect*                              Effect;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bExeReset;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExeUndo;                                                 // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Addons.ViewInfoCurve
// 0x05A0
struct FViewInfoCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            AdditiveCameraViewInfo;                                   // 0x0010(0x0580) (Edit, BlueprintVisible)
	class UCurveFloat*                                 FovCurve;                                                 // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0594(0x000C) MISSED OFFSET
};

// ScriptStruct Addons.RandomBuffItem
// 0x0020
struct FRandomBuffItem
{
	int                                                Probability;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       BuffName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BuffID;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddLayerCount;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Addons.VehicleWeaponBoardDataConfigItem
// 0x0018
struct FVehicleWeaponBoardDataConfigItem
{
	int                                                SeatID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WeaponListID;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EVehicleWeaponBoardDataType                        DataType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   BlackboardKey;                                            // 0x0010(0x0008) (Edit)
};

// ScriptStruct Addons.SkillAction_AttachActorCreateData
// 0x0030
struct FSkillAction_AttachActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DestroyAfterSkill;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyAfterPhase;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToTargetIncludingScale;                               // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              DestroyAfterTime;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.AirAttackConfig
// 0x0014
struct FAirAttackConfig
{
	float                                              AttackLastingTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAreaRadius;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TotalBombs;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BombsRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BombActorTemplate;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SpawnVehicleConfig
// 0x0014
struct FSpawnVehicleConfig
{
	int                                                VehicleSpawnID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AutoEnterVehicle;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.AKSwitchParam
// 0x0018
struct FAKSwitchParam
{
	struct FString                                     SwitchGroup;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SwitchState;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Addons.AKRTPCParam
// 0x001C
struct FAKRTPCParam
{
	struct FString                                     RTPC;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ValueCurve;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedTick;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.DisablePawnStateInfo
// 0x0003
struct FDisablePawnStateInfo
{
	EPawnState                                         State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNewDisable;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnEnable;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SkillAction_DropItemData
// 0x0008
struct FSkillAction_DropItemData
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SkillAction_HideMainUIData
// 0x000C
struct FSkillAction_HideMainUIData
{
	struct FString                                     RegistUIName;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Addons.CollisionChannelResModify
// 0x0002
struct FCollisionChannelResModify
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ModifyResponse;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.MoveSpeedCurve
// 0x0008
struct FMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LaunchSpeedCurve;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.PlayMontageAsyncloadParams
// 0x0038
struct FPlayMontageAsyncloadParams
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Addons.WeaponStateToAnimPair
// 0x01A8
struct FWeaponStateToAnimPair
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponTypeNew;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSkillPoseMontageData                       PoseMontageData;                                          // 0x0008(0x00D0) (Edit)
	struct FSkillPoseMontageData                       FPPPoseMontageData;                                       // 0x00D8(0x00D0) (Edit)
};

// ScriptStruct Addons.AvatarSlotAnimData
// 0x0038
struct FAvatarSlotAnimData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.AvatarSlotAnimData.PropAnim
	float                                              PlayRate;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SkillAction_SequenceCreateData
// 0x0058
struct FSkillAction_SequenceCreateData
{
	struct FSoftClassPath                              SequenceActorTemplate;                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseSelfTransformOrigin;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPickFromTarget;                                          // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0038(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSetLocationToBB;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       BBName;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyedAtSkillEnd;                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDestroyedAtSkillEnd;                                // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   CachedSpawnActorKey;                                      // 0x0050(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Addons.RandomActionGroup
// 0x000C
struct FRandomActionGroup
{
	TArray<class UUTSkillAction*>                      Actions;                                                  // 0x0000(0x000C) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Addons.SkillAction_ShowMainUIData
// 0x0010
struct FSkillAction_ShowMainUIData
{
	struct FString                                     RegistUIName;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AutoHideOnPhaseEnd;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.SkillAction_SpawnActorCreateData
// 0x00B0
struct FSkillAction_SpawnActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0004(0x0028) UNKNOWN PROPERTY: SoftClassProperty Addons.SkillAction_SpawnActorCreateData.SoftActorTemplate
	bool                                               bPickFromTarget;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0034(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSetLocationToBB;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetLocationToSkillBB;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FName                                       BBName;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceGround;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     TraceGroundOffset;                                        // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLocalSpawn;                                              // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientSpawn;                                             // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyedAtSkillEnd;                                     // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDestroyedAtSkillEnd;                                // 0x005F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOffsetWithOutLocationPicker;                          // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOffsetWithDamagePicker;                               // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttach;                                            // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignMainMesh;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignRotation;                                           // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignScale3D;                                            // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	struct FVector                                     OffsetLocationStand;                                      // 0x0074(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationCrouch;                                     // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationProne;                                      // 0x008C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0098(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAllowChangePoseWillUpdating;                             // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   CachedSpawnActorKey;                                      // 0x00A8(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Addons.BeamEffectData
// 0x0030
struct FBeamEffectData
{
	EBeamEffectDataFromType                            DataFromType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       BlackBoardParam;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SpawnMonsterConfig
// 0x0014
struct FSpawnMonsterConfig
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // 0x0004(0x000C) (Edit, IsPlainOldData)
	bool                                               bIsRelativePos;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.SkillAction_SpawnProjectileCreateData
// 0x001C
struct FSkillAction_SpawnProjectileCreateData
{
	class UClass*                                      ProjectileTemplate;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Addons.UAESkillCheckItemInfo
// 0x0010
struct FUAESkillCheckItemInfo
{
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                NeedItemNum;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.CharPoseSwitch
// 0x0002
struct FCharPoseSwitch
{
	TEnumAsByte<ECharacterPoseType>                    from;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    to;                                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.UTSkillAppearance_ParticleSystem_Item
// 0x00F0
struct FUTSkillAppearance_ParticleSystem_Item
{
	class UUTSkillPicker*                              TargetPicker;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeam_Effect;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateEnermyTeam_Effect;                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeamFPP_Effect;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_ParticleSystem_Item.TemplateSelfTeam_Effect_Soft
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_ParticleSystem_Item.TemplateEnermyTeam_Effect_Soft
	unsigned char                                      UnknownData02[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_ParticleSystem_Item.TemplateSelfTeamFPP_Effect_Soft
	bool                                               bLoop;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopAfterPhase;                                           // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              Scale;                                                    // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RefSocketName;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x00A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x00AC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LocationOffsetTPP;                                        // 0x00B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffsetTPP;                                        // 0x00C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ScaleTPP;                                                 // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FName                                       HurtRotationSocketName;                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoDispearTime;                                          // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToPawn;                                            // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedEmitter;                                             // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableOnLowCPU;                                          // 0x00E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x00E7(0x0001) MISSED OFFSET
	struct FName                                       DamageableInterfaceTag;                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.UTSkillAppearance_SoundCue_Item
// 0x0060
struct FUTSkillAppearance_SoundCue_Item
{
	EUTSkill_SoundCue_ListenType                       ListenType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_SoundCue_Item.AkEvent_SoftPtr
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.UTSkillAppearance_SoundCue_Item.StopAkEvent_SoftPtr
	bool                                               bLoop;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AngularRangeLimit
// 0x0030
struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FBoneReference                              Bone;                                                     // 0x0018(0x0018) (Edit)
};

// ScriptStruct Addons.AnimNode_ApplyLimits
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       // 0x0058(0x000C) (Edit, ZeroConstructor)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x0064(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Addons.AnimNode_CCDIK
// 0x00C8 (0x0120 - 0x0058)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x0058(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0070(0x0060) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x00D0(0x0018) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x00E8(0x0018) (Edit)
	float                                              Precision;                                                // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x010C(0x000C) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.CCDIKChainLink
// 0x0080
struct FCCDIKChainLink
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_DistanceMatching
// 0x0098 (0x00F8 - 0x0060)
struct FAnimNode_DistanceMatching : public FAnimNode_SequencePlayer
{
	float                                              Distance;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RootBoneName;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptedDistanceError;                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0078(0x0070)
	bool                                               bHasValidDistanceCurve;                                   // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00E9(0x000F) MISSED OFFSET
};

// ScriptStruct Addons.BoneDeclare
// 0x0060
struct FBoneDeclare
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FVector                                     ForwardAxis;                                              // 0x0018(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightAxis;                                                // 0x0024(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UpAxis;                                                   // 0x0030(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PitchAxis;                                                // 0x003C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    YawAxis;                                                  // 0x0048(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RollAxis;                                                 // 0x0054(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Addons.AnimNode_FourLeggedIK
// 0x0A18 (0x0A70 - 0x0058)
struct FAnimNode_FourLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableSlopeAdapt;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableLegAdapt;                                          // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       // 0x005C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceUpOffset;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxPitch;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxZ;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptLerpSpeed;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKAdaptMaxZ;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKLerpSpeed;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBoneDeclare                                AdaptBone;                                                // 0x0088(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                NeckBone;                                                 // 0x00E8(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                LClavicleBone;                                            // 0x0148(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                RClavicleBone;                                            // 0x01A8(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                LThighBone;                                               // 0x0208(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                RThighBone;                                               // 0x0268(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneReference                              LeftHandBone;                                             // 0x02C8(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              RightHandBone;                                            // 0x02E0(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              LeftFootBone;                                             // 0x02F8(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              RightFootBone;                                            // 0x0310(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         LeftHandIK;                                               // 0x0330(0x01A0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         RightHandIK;                                              // 0x04D0(0x01A0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         LeftFootIK;                                               // 0x0670(0x01A0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         RightFootIK;                                              // 0x0810(0x01A0) (Edit, DisableEditOnInstance)
	float                                              DebugSphereRadius;                                        // 0x09B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugLineWidth;                                           // 0x09B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugArrowSize;                                           // 0x09B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugNegativeColor;                                       // 0x09BC(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugPositiveColor;                                       // 0x09C0(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugInfoColor;                                           // 0x09C4(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DebugTextSize;                                            // 0x09C8(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x09D0(0x00A0) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_HumanoidLeggedIK
// 0x04E8 (0x0540 - 0x0058)
struct FAnimNode_HumanoidLeggedIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 // 0x0058(0x0018) (Edit)
	struct FBoneDeclare                                LeftFootBone;                                             // 0x0070(0x0060) (Edit)
	struct FBoneDeclare                                RightFootBone;                                            // 0x00D0(0x0060) (Edit)
	bool                                               bEnableRootAdaption;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFootAdaption;                                      // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       // 0x0134(0x000C) (Edit, ZeroConstructor)
	float                                              FootTraceUpOffset;                                        // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceDownOffset;                                      // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceSphereRadius;                                    // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootPositionLerpSpeed;                                    // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootPositionLerpSpeed;                                    // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationLerpSpeed;                                    // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootHeightOffsetScale;                                    // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootMaxHeightOffset;                                      // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxHeightOffset;                                      // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxPitchOffset;                                       // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxRollOffset;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         LeftFootIKNode;                                           // 0x0170(0x01A0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         RightFootIKNode;                                          // 0x0310(0x01A0) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x90];                                      // 0x04B0(0x0090) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_Inertialization
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_Inertialization : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x002C(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
};

// ScriptStruct Addons.InertializationPoseDiff
// 0x001C
struct FInertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Addons.InertializationCurveDiff
// 0x0008
struct FInertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.InertializationBoneDiff
// 0x003C
struct FInertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Addons.InertializationPose
// 0x0080
struct FInertializationPose
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Addons.MyVectorCurve
// 0x0150
struct FMyVectorCurve
{
	struct FFloatCurve                                 FloatCurves[0x3];                                         // 0x0000(0x0070)
};

// ScriptStruct Addons.JointCurveData
// 0x02A8
struct FJointCurveData
{
	struct FName                                       JointName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMyVectorCurve                              PositionCurve;                                            // 0x0008(0x0150)
	struct FMyVectorCurve                              VelocityCurve;                                            // 0x0158(0x0150)
};

// ScriptStruct Addons.AnimJointData
// 0x00B8
struct FAnimJointData
{
	int                                                AnimID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, struct FJointCurveData>                  JointCurveDatas;                                          // 0x0004(0x0050) (ZeroConstructor)
	bool                                               bHasValidDistanceCurve;                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0048(0x0070)
};

// ScriptStruct Addons.AnimNode_MultiPoseDistanceMatching
// 0x0038 (0x0130 - 0x00F8)
struct FAnimNode_MultiPoseDistanceMatching : public FAnimNode_DistanceMatching
{
	TArray<class UAnimSequence*>                       CandidateSequences;                                       // 0x00F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneReference>                      ConsideredBones;                                          // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PositionWeight;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityWeight;                                           // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseInterval;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimPoseRecorder*                           PoseRecorder;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimJointData>                      AnimJointDatas;                                           // 0x011C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_PoseRecorder
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_PoseRecorder : public FAnimNode_Base
{
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      RecordedBones;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPoseLink                                   Source;                                                   // 0x003C(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Addons.AnimNode_SyncBlendSpacePlayer
// 0x0010 (0x0100 - 0x00F0)
struct FAnimNode_SyncBlendSpacePlayer : public FAnimNode_BlendSpacePlayer
{
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroupName;                                            // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncBlendSpacePlayerSafety
// 0x0010 (0x0100 - 0x00F0)
struct FAnimNode_SyncBlendSpacePlayerSafety : public FAnimNode_BlendSpacePlayer
{
	struct FName                                       SyncGroupName;                                            // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncSequencePlayer
// 0x0018 (0x0078 - 0x0060)
struct FAnimNode_SyncSequencePlayer : public FAnimNode_SequencePlayer
{
	class UAssetPlayerSyncNode*                        SyncNode;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       SyncGroupName;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncSequencePlayerSafety
// 0x0010 (0x0070 - 0x0060)
struct FAnimNode_SyncSequencePlayerSafety : public FAnimNode_SequencePlayer
{
	struct FName                                       SyncGroupName;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_TwoLeggedIK
// 0x05D8 (0x0630 - 0x0058)
struct FAnimNode_TwoLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableRootAdaption;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FBoneReference                              Root;                                                     // 0x0060(0x0018) (Edit)
	float                                              RootTraceUpOffset;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceDownOffset;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceSphereRadius;                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootPositionLerpSpeed;                                    // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootMaxHeightOffset;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             SlopeAdaption_ObjectTypesToQuery;                         // 0x008C(0x000C) (Edit, ZeroConstructor)
	bool                                               bEnableSlopeAdaption;                                     // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBoneReference                              SpineRoot;                                                // 0x00A0(0x0018) (Edit)
	struct FBoneReference                              TailRoot;                                                 // 0x00B8(0x0018) (Edit)
	float                                              SlopeMaxPitchOffset;                                      // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeRotationLerpSpeed;                                   // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             FootAdaption_ObjectTypesToQuery;                          // 0x00D8(0x000C) (Edit, ZeroConstructor)
	bool                                               bEnableFootPositionAdaption;                              // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFootRotationAdaption;                              // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E6(0x0002) MISSED OFFSET
	struct FBoneReference                              IKBone_L;                                                 // 0x00E8(0x0018) (Edit)
	struct FBoneReference                              FootBone_L;                                               // 0x0100(0x0018) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget_L;                                            // 0x0120(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_L;                                    // 0x0180(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FBoneReference                              IKBone_R;                                                 // 0x0190(0x0018) (Edit)
	struct FBoneReference                              FootBone_R;                                               // 0x01A8(0x0018) (Edit)
	struct FBoneSocketTarget                           JointTarget_R;                                            // 0x01C0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_R;                                    // 0x0220(0x000C) (Edit, IsPlainOldData)
	float                                              FootTraceUpOffset;                                        // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceDownOffset;                                      // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceSphereRadius;                                    // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootPositionLerpSpeed;                                    // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationLerpSpeed;                                    // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxPitchOffset;                                       // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxRollOffset;                                        // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxHeightOffset;                                      // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SkipEvaluateTimes;                                        // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnimNode_TwoBoneIK                         LegAdapting_L;                                            // 0x0250(0x01A0)
	struct FAnimNode_TwoBoneIK                         LegAdapting_R;                                            // 0x03F0(0x01A0)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x0590(0x00A0) MISSED OFFSET
};

// ScriptStruct Addons.CachedPoseMotionData
// 0x007C
struct FCachedPoseMotionData
{
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0000(0x007C) MISSED OFFSET
};

// ScriptStruct Addons.CachedBoneMotionData
// 0x0070
struct FCachedBoneMotionData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Addons.CollectedEventKeysValues
// 0x0018
struct FCollectedEventKeysValues
{
	TArray<struct FString>                             Keys;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Values;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Addons.CollectedEventData
// 0x003C
struct FCollectedEventData
{
	TMap<struct FString, struct FString>               KeyValueMap;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Addons.AddCameraViewInfoStruct
// 0x0014
struct FAddCameraViewInfoStruct
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	class UCurveFloat*                                 CurFOVCurve;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct Addons.AddMapMarkInstanceStruct
// 0x0070
struct FAddMapMarkInstanceStruct
{
	struct FMarkDispatchAction                         MarkDispatchAction;                                       // 0x0000(0x0070)
};

// ScriptStruct Addons.SAAllowPawnStateInstanceStruct
// 0x0008
struct FSAAllowPawnStateInstanceStruct
{
	TWeakObjectPtr<class ASTExtraCharacter>            TargetCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SAAttachPawnPlayMontageInstanceStruct
// 0x0008
struct FSAAttachPawnPlayMontageInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SABindDelegateInstanceStruct
// 0x000C
struct FSABindDelegateInstanceStruct
{
	TWeakObjectPtr<class UObject>                      TargetObject;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LuaEventHandle;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.ChangeAkRT
// 0x0008
struct FChangeAkRT
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	class UAkComponent*                                CachedAK;                                                 // 0x0004(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Addons.FollowMovePitchLimit
// 0x0008
struct FFollowMovePitchLimit
{
	float                                              RelativeRotMin;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RelativeRotMax;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SALaunchMove
// 0x003C
struct FSALaunchMove
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.LockCameraViewTypeData
// 0x0008
struct FLockCameraViewTypeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.SAPlayMontageInstanceStruct
// 0x0008
struct FSAPlayMontageInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.SAPlayMontageWeaponStateInstanceStruct
// 0x0008
struct FSAPlayMontageWeaponStateInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.CurPlayingAKEvent
// 0x0004
struct FCurPlayingAKEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

}

