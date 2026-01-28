#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Ninja.BattleFieldCircle
// 0x0090 (0x0450 - 0x03C0)
class ABattleFieldCircle : public ALuaActor
{
public:
	struct FCircleMoveInfo                             CircleMoveInfo;                                           // 0x03C0(0x0024) (BlueprintVisible, Net)
	float                                              CircleInterval;                                           // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurRadius;                                                // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FName                                       OnlyCheckPlayerTag;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaEventType;                                             // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaEventID;                                               // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<uint32_t, bool>                               PlayerKeyCache;                                           // 0x0410(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Ninja.BattleFieldCircle");
		return pStaticClass;
	}


	void StartMove(const struct FVector& StartCircle, const struct FVector& EndCircle, float MoveTime);
	void SetCircle(const struct FVector& circle);
	void OnRep_CircleMoveInfo();
	bool IsInBlueCircle(class AActor* uActor);
	void InitCircle(const struct FVector& InitCircle);
	TArray<uint32_t> GetAllPlayerInCircle();
	void CircleMove();
	void CheckInCircle();
};


}

