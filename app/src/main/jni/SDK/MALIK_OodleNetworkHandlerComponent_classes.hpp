#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// 0x0018 (0x0078 - 0x0060)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	int                                                DictionarySize;                                           // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionaryTrials;                                         // 0x0064(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialRandomness;                                          // 0x0068(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialGenerations;                                         // 0x006C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoTrials;                                                // 0x0070(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
		return pStaticClass;
	}

};


}

