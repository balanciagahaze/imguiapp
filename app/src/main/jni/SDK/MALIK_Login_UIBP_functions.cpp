// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:25:07 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Login_UIBP.Login_UIBP_C.SetRenderTransformWheniPhone
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_UIBP_C::SetRenderTransformWheniPhone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIBP.Login_UIBP_C.SetRenderTransformWheniPhone");

	ULogin_UIBP_C_SetRenderTransformWheniPhone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_UIBP.Login_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULogin_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIBP.Login_UIBP_C.Construct");

	ULogin_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_UIBP.Login_UIBP_C.ExecuteUbergraph_Login_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_UIBP_C::ExecuteUbergraph_Login_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIBP.Login_UIBP_C.ExecuteUbergraph_Login_UIBP");

	ULogin_UIBP_C_ExecuteUbergraph_Login_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

