#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:25:02 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GlobalLuaWidget.GlobalLuaWidget_C
// 0x0000 (0x0250 - 0x0250)
class UGlobalLuaWidget_C : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalLuaWidget.GlobalLuaWidget_C");
		return pStaticClass;
	}


	void GetNewLevelTaskData(const struct FString& TaskId, bool* Has, struct FBP_STRUCT_NewLevelTask_type* BP_STRUCT_NewLevelTask_type);
};


}

