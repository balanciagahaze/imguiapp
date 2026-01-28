#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:58 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0004 (0x033C - 0x0338)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void SetFpsByIndex(int idx);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

