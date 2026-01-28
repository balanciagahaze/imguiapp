#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Ninja.CircleMoveInfo
// 0x0024
struct FCircleMoveInfo
{
	struct FVector                                     StartCircle;                                              // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     EndCircle;                                                // 0x000C(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bMove;                                                    // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              EndTimeStamp;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeStamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

