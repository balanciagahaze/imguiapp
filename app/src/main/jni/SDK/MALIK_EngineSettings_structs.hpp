#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:54 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 2
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x001C
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     Desc;                                                     // 0x000C(0x000C) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x0028
struct FGameModeName
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSoftClassPath                              GameMode;                                                 // 0x0010(0x0018) (Edit)
};

}

