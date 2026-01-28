#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0020 - 0x0020)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return pStaticClass;
	}


	static bool IsRunningOnBattery();
	static bool IsBatteryStateCharging();
	static int GetVolumeState();
	static struct FString GetDeviceName();
	static float GetBatteryTemperature();
	static int GetBatteryLevel();
	static bool AreHeadphonesPluggedIn();
};


}

