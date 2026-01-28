#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
struct Ubp_pluginBPLibrary_bp_pluginSendEvent_Params
{
	struct FString                                     jsonEventCmd;                                             // (Parm, ZeroConstructor)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
struct Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params
{
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
struct Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType
struct Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

