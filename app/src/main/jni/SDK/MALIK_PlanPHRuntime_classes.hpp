#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlanPHRuntime.BinFileHelper
// 0x0004 (0x0020 - 0x001C)
class UBinFileHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanPHRuntime.MapBarrierWidget
// 0x0028 (0x00F8 - 0x00D0)
class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
		return pStaticClass;
	}


	void SetMapStructureData(TArray<struct FStructureData> InMapStructureData);
	void SetMapMidPoint(struct FVector2D* InMapMidPoint);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
};


// Class PlanPHRuntime.PlanPH_GameMode
// 0x0000 (0x1728 - 0x1728)
class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanPHRuntime.PlanPH_GameModeState_Active
// 0x0000 (0x0088 - 0x0088)
class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// 0x0000 (0x0090 - 0x0090)
class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameState
// 0x0010 (0x0F60 - 0x0F50)
class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             // 0x0F50(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F5C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_PlayerState
// 0x0000 (0x15A8 - 0x15A8)
class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
		return pStaticClass;
	}


	void OnRep_LandId();
	void InitLandId();
};


// Class PlanPHRuntime.PlanPHDoor
// 0x0018 (0x03D8 - 0x03C0)
class APlanPHDoor : public ALuaActor
{
public:
	struct FVector                                     WrapExtentsOffset;                                        // 0x03C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TransformDirVector;                                       // 0x03CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
		return pStaticClass;
	}


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};


// Class PlanPHRuntime.PlanPHGameplayStatics
// 0x0000 (0x0020 - 0x0020)
class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float blendTime);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanPHRuntime.PlanPHHomeArea
// 0x0038 (0x03F8 - 0x03C0)
class APlanPHHomeArea : public ALuaActor
{
public:
	struct FVector                                     BlockDimension;                                           // 0x03C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  BlockNumXYZ;                                              // 0x03CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MinGridIndexXYZ;                                          // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MaxGridIndexXYZ;                                          // 0x03E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
		return pStaticClass;
	}


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};


// Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// 0x0010 (0x06D0 - 0x06C0)
class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
};


// Class PlanPHRuntime.PlanPHMapData
// 0x0018 (0x0088 - 0x0070)
class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0070(0x000C) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x007C(0x000C) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanPHRuntime.PlanPHSpectatorPawn
// 0x0058 (0x03E8 - 0x0390)
class APlanPHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0390(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


}

