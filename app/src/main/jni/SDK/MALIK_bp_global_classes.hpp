#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:25:01 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x006C (0x03D4 - 0x0368)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     GLOBAL_USE_ITEM;                                          // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x0378(0x0004) (Edit, BlueprintVisible)
	int                                                BP_StartUpType;                                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Share_Platform;                                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform;                                              // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x038B(0x0001) MISSED OFFSET
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_PreviewItemId;                                  // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x0395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x0396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x0397(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventComMsgBoxSluaClickUrl_NoFetch();
	void EventComMsgBoxSluaClickUrl();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void UserConstructionScript();
};


}

