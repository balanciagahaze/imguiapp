#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCache.GeometryCache
// 0x002C (0x0048 - 0x001C)
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCache");
		return pStaticClass;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x0000 (0x0338 - 0x0338)
class AGeometryCacheActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return pStaticClass;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};


// Class GeometryCache.GeometryCacheComponent
// 0x0060 (0x0740 - 0x06E0)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	float                                              StartTimeOffset;                                          // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTracks;                                                // 0x06E8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x06EC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x06F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return pStaticClass;
	}


	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};


// Class GeometryCache.GeometryCacheTrack
// 0x001C (0x0038 - 0x001C)
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return pStaticClass;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0020 (0x0058 - 0x0038)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return pStaticClass;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0040 (0x0078 - 0x0038)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0040 (0x0078 - 0x0038)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


}

