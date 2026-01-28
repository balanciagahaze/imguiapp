#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TPlanGame.BackpackComponentTPlan
// 0x0000 (0x03B8 - 0x03B8)
class UBackpackComponentTPlan : public UBackpackComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackComponentTPlan");
		return pStaticClass;
	}


	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
};


// Class TPlanGame.BackpackTPlanUtils
// 0x0000 (0x0020 - 0x0020)
class UBackpackTPlanUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackTPlanUtils");
		return pStaticClass;
	}


	static void UnRegisterInvokeClass();
	static void RegisterInvokeClass();
	static class UBackpackBlueprintTPlanUtils* RealGetBPUtils();
};


// Class TPlanGame.BackpackBlueprintTPlanUtils
// 0x0000 (0x0848 - 0x0848)
class UBackpackBlueprintTPlanUtils : public UBackpackBlueprintUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.BackpackBlueprintTPlanUtils");
		return pStaticClass;
	}

};


// Class TPlanGame.MetroStoreComponent
// 0x0040 (0x0190 - 0x0150)
class UMetroStoreComponent : public ULuaActorComponent
{
public:
	int                                                StoreID;                                                  // 0x0150(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Status;                                                   // 0x0154(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BuyFrequence;                                             // 0x0158(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FCurrencyInfo>                       CurrencyList;                                             // 0x015C(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGoodsInfo>                          GoodsList;                                                // 0x0168(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsListNum;                                             // 0x0174(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsNum;                                                 // 0x0180(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.MetroStoreComponent");
		return pStaticClass;
	}


	void OnRep_StoreID();
	void OnRep_Status();
	void OnRep_GoodsNum();
	void OnRep_GoodsListNum();
	void OnRep_GoodsList();
	void OnRep_CurrencyList();
	void OnRep_BuyFrequence();
};


// Class TPlanGame.TPlanPickupItemUsefulProxy
// 0x0000 (0x01D8 - 0x01D8)
class UTPlanPickupItemUsefulProxy : public UPickupItemUsefulProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.TPlanPickupItemUsefulProxy");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameMode
// 0x0040 (0x1820 - 0x17E0)
class AXTGameMode : public ABattleRoyaleGameModeTeam
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x17E0(0x0008) MISSED OFFSET
	TArray<class ASTExtraPlayerStartGroup*>            UnOccupiedPlayerStartGroupList;                           // 0x17E8(0x000C) (ZeroConstructor)
	bool                                               IsResetPlayerStart;                                       // 0x17F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x17F5(0x0003) MISSED OFFSET
	float                                              LastCheckAITime;                                          // 0x17F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveInterval;                                    // 0x17FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveRange;                                       // 0x1800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                DogTagID;                                                 // 0x1804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropID;                                           // 0x1808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropDot;                                          // 0x180C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreSpawnPlayers;                                         // 0x1810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEcapedPlayerInTeam;                                // 0x1811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1812(0x0002) MISSED OFFSET
	TArray<struct FName>                               LoadingPlayerState;                                       // 0x1814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameMode");
		return pStaticClass;
	}


	void SetStateLeftTime(int LeftTime);
	void SetPlayerStartOccupied(class AActor* PlayerStart);
	void RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	bool IsNeedRestPlayerStart(class AController* Player);
	void GMShowSpawner();
	void GMShowEnterExit();
	void GMShowAssetBox();
	void GMSetPVEAIMax(int Num);
	TArray<class AActor*> GetOccupiedPlayerStartGroupList();
	bool CheckNoHumanExist();
	void CheckAIActive();
};


// Class TPlanGame.XTGameModeStateFightingTeam
// 0x0000 (0x0090 - 0x0090)
class UXTGameModeStateFightingTeam : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateFightingTeam");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameModeStateFinished
// 0x0000 (0x0088 - 0x0088)
class UXTGameModeStateFinished : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateFinished");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameModeStateReady
// 0x0000 (0x00C8 - 0x00C8)
class UXTGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameModeStateReady");
		return pStaticClass;
	}

};


// Class TPlanGame.XTGameState
// 0x0040 (0x0F90 - 0x0F50)
class AXTGameState : public ASTExtraGameStateBase
{
public:
	float                                              LastLeaveTime;                                            // 0x0F50(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     PreciousItemMap;                                          // 0x0F54(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTGameState");
		return pStaticClass;
	}


	void ResetLeftTime();
	void PreLoadPreciousItemsMap();
	void OnRep_LastLeaveTime();
	int CheckPreciousItemPrice(int TypeSpecificID);
	void BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor);
};


// Class TPlanGame.XTPlayerState
// 0x0038 (0x15E0 - 0x15A8)
class AXTPlayerState : public ASTExtraPlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x15A8(0x0008) MISSED OFFSET
	TArray<struct FVector>                             EscapePosi;                                               // 0x15B0(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	int                                                BetrayDefaultTime;                                        // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint64_t                                           Gold;                                                     // 0x15C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEscaped;                                               // 0x15C8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRunAway;                                               // 0x15C9(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x15CA(0x0002) MISSED OFFSET
	TArray<int>                                        AssetPointsCheckedByTeammate;                             // 0x15CC(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	struct FXTBetrayInfo                               BetrayInfo;                                               // 0x15D8(0x0008) (BlueprintVisible, Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanGame.XTPlayerState");
		return pStaticClass;
	}


	void OnRepXTBetrayInfo();
	void OnRepRelevantPlayerTaskNotifyBP();
	void OnRepEscapePosition();
	void OnRepAssetPointsCheckedByTeammate();
	void OnRep_RelevantPlayerTaskNotify();
	void OnRep_IsRunAway();
	void OnRep_IsEscaped();
	void OnRep_Gold();
	void OnRep_EscapePosiNotify();
	void OnRep_BetrayInfo();
	void OnRep_AssetPointsCheckedByTeammate();
	void OnPlayerEscaped();
	bool IsInGame();
	bool IsInBetrayState();
	TArray<struct FPreciousItem> GetAllPreciousItemsList();
};


}

