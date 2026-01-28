#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x001C (0x0038 - 0x001C)
class UClothingAssetBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FGuid                                       AssetGuid;                                                // 0x0028(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0004 (0x0020 - 0x001C)
class UClothingSimulationFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return pStaticClass;
	}

};


}

