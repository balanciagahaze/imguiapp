#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UAEStateMachine.UAETransitionState
// 0x000C
struct FUAETransitionState
{
	struct FString                                     StateName;                                                // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct UAEStateMachine.UAEStateMachineTransition
// 0x0020
struct FUAEStateMachineTransition
{
	TArray<struct FUAETransitionState>                 TransiteFromStates;                                       // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FUAETransitionState                         TransitToState;                                           // 0x000C(0x000C) (Edit)
	float                                              AutoFiredDelayTime;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoFiredForcedTransit;                                   // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct UAEStateMachine.UAEStatesGather
// 0x000C
struct FUAEStatesGather
{
	TArray<class UUAEState*>                           States;                                                   // 0x0000(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

}

