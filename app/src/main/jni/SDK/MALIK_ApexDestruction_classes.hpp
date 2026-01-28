#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// 0x0010 (0x0348 - 0x0338)
class ADestructibleActor : public AActor
{
public:
	unsigned char                                      bAffectNavigation : 1;                                    // 0x0338(0x0001) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorFracture;                                          // 0x033C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return pStaticClass;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00B0 (0x0900 - 0x0850)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0850(0x0004) MISSED OFFSET
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x0854(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0858(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x0864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x086C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      // 0x0878(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x7C];                                      // 0x0884(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return pStaticClass;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0054 (0x0070 - 0x001C)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x0020(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0048(0x000C) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0058(0x000C) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0064(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return pStaticClass;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x0088 (0x0308 - 0x0280)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0280(0x0078) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x02F8(0x000C) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0304(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return pStaticClass;
	}

};


}

