#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameRobotSync2.MyAutoTest3
// 0x002C (0x0048 - 0x001C)
class UMyAutoTest3 : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x001C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameRobotSync2.MyAutoTest3");
		return pStaticClass;
	}

};


}

