#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZLevel.ZLevelData
// 0x00B0 (0x03E8 - 0x0338)
class AZLevelData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	TArray<struct FString>                             TargetClassPaths;                                         // 0x0348(0x000C) (Edit, ZeroConstructor)
	struct FString                                     LeveDirectorFilePath;                                     // 0x0354(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              // 0x0360(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	struct FString                                     EndCondPar;                                               // 0x0364(0x000C) (Edit, ZeroConstructor)
	bool                                               IsLastLevel;                                              // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                DiffcultPerc;                                             // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UZPVECircle*>                         PVECircleConfigs;                                         // 0x0378(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZPVERelifePoint*>                    PVERelifePoints;                                          // 0x0384(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZMonsterSpotGroup*>                  MonsterSpotGroups;                                        // 0x0390(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FVector>                             TaskPointLocations;                                       // 0x039C(0x000C) (Edit, ZeroConstructor)
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      // 0x03A8(0x000C) (Edit, ZeroConstructor)
	TArray<struct FPVECircle>                          PVECircleInfo;                                            // 0x03B4(0x000C) (Edit, ZeroConstructor)
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           // 0x03C0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FLevelData>                          CfgList;                                                  // 0x03CC(0x000C) (Edit, ZeroConstructor)
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             // 0x03D8(0x000C) (Edit, ZeroConstructor)
	int                                                CurComponentNameIndex;                                    // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZLevelData");
		return pStaticClass;
	}


	void ReBindLevelDataComponent();
	void CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup);
};


// Class ZLevel.ZSpotSceneComponent
// 0x0000 (0x02D0 - 0x02D0)
class UZSpotSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZSpotSceneComponent");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterRoadPoint
// 0x0010 (0x02E0 - 0x02D0)
class UZMonsterRoadPoint : public UZSpotSceneComponent
{
public:
	int                                                Radius;                                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterRoadPoint");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpot
// 0x0020 (0x02F0 - 0x02D0)
class UZMonsterSpot : public UZSpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	unsigned char                                      MonsterSpotType;                                          // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	TArray<class UZMonsterRoadPoint*>                  RoadPointList;                                            // 0x02DC(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      SpotRadius;                                               // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpot");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpotGroup
// 0x0020 (0x02F0 - 0x02D0)
class UZMonsterSpotGroup : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	TArray<class UZMonsterSpot*>                       SpotList;                                                 // 0x02D8(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpotGroup");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVECircle
// 0x0020 (0x02F0 - 0x02D0)
class UZPVECircle : public UZSpotSceneComponent
{
public:
	struct FVector2D                                   targetPos;                                                // 0x02D0(0x0008) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pain;                                                     // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVECircle");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVERelifePoint
// 0x0010 (0x02E0 - 0x02D0)
class UZPVERelifePoint : public UZSpotSceneComponent
{
public:
	bool                                               IsActivePoint;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVERelifePoint");
		return pStaticClass;
	}

};


}

