#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Intl.StatManager
// 0x0124 (0x0140 - 0x001C)
class UStatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x124];                                     // 0x001C(0x0124) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Intl.StatManager");
		return pStaticClass;
	}


	void ReportEventWithString(int EventType, const struct FString& _eventBody, bool isRealTime);
	void ReportEventWithParam(int EventType, TMap<struct FString, struct FString> _params, bool isRealTime);
	void ReportEventWithNoParam(int EventType, bool isRealTime);
	static class UStatManager* GetInstance();
};


}

