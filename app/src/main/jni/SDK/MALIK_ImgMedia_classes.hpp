#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMedia.ImgMediaSource
// 0x0020 (0x0048 - 0x0028)
class UImgMediaSource : public UBaseMediaSource
{
public:
	float                                              FramesPerSecondOverride;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ProxyOverride;                                            // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDirectoryPath                              SequencePath;                                             // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return pStaticClass;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

