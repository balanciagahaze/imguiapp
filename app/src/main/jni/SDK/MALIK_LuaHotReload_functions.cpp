// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate
// (Final, Native, Public)
// Parameters:
// struct FString                 NotifyMessage                  (Parm, ZeroConstructor)

void ULuaHotReloadHelper::OnLuaFileHotUpdate(const struct FString& NotifyMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate");

	ULuaHotReloadHelper_OnLuaFileHotUpdate_Params params;
	params.NotifyMessage = NotifyMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

