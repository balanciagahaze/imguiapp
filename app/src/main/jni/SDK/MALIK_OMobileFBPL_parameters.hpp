#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OMobileFBPL.OMobileFBPL.IsRunningOnBattery
struct UOMobileFBPL_IsRunningOnBattery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.IsBatteryStateCharging
struct UOMobileFBPL_IsBatteryStateCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetVolumeState
struct UOMobileFBPL_GetVolumeState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetDeviceName
struct UOMobileFBPL_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature
struct UOMobileFBPL_GetBatteryTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryLevel
struct UOMobileFBPL_GetBatteryLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn
struct UOMobileFBPL_AreHeadphonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

