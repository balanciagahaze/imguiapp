#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:25:00 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C
// 0x0000 (0x0108 - 0x0108)
class UGameLogicManagerBase_C : public UGameBusinessManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C");
		return pStaticClass;
	}

};


}

