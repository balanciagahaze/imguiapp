// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 jsonEventCmd                   (Parm, ZeroConstructor)

void Ubp_pluginBPLibrary::bp_pluginSendEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent");

	Ubp_pluginBPLibrary_bp_pluginSendEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Param                          (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubp_pluginBPLibrary::bp_pluginLaunchMeemoFunction(const struct FString& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction");

	Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubp_pluginBPLibrary::bp_pluginIsInForeground()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground");

	Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Ubp_pluginBPLibrary::bp_pluginGetInstalledWidgetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType");

	Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

