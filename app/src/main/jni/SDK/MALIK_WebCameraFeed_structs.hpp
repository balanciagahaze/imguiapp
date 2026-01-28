#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WebCameraFeed.EVideoPixelFormat
enum class EVideoPixelFormat : uint8_t
{
	EVideoPixelFormat__GrayScale   = 0,
	EVideoPixelFormat__Rgb         = 1,
	EVideoPixelFormat__Rgba        = 2,
	EVideoPixelFormat__EVideoPixelFormat_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WebCameraFeed.WebCameraDeviceId
// 0x0004
struct FWebCameraDeviceId
{
	int                                                selectedDevice;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WebCameraFeed.VideoDevice
// 0x0038
struct FVideoDevice
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct WebCameraFeed.VideoFormat
// 0x0018
struct FVideoFormat
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

