#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AutoRobot.EAutoRunTestFlag
enum class EAutoRunTestFlag : uint8_t
{
	Game4Win                       = 0,
	PVEBattleTest                  = 1,
	EAutoRunTestFlag_MAX           = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutoRobot.BulletImpactAutoTestData
// 0x001C
struct FBulletImpactAutoTestData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

}

