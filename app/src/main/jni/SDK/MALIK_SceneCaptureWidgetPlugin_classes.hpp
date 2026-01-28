#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:55 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D
// 0x0020 (0x0910 - 0x08F0)
class UWidgetCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D");
		return pStaticClass;
	}

};


// Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor
// 0x0010 (0x08A0 - 0x0890)
class ASceneCaptureCameraActor : public ACameraActor
{
public:
	class UWidgetCaptureComponent2D*                   SceneCaptureComponent;                                    // 0x0890(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0894(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor");
		return pStaticClass;
	}

};


// Class SceneCaptureWidgetPlugin.SceneCaptureWidget
// 0x00B0 (0x0180 - 0x00D0)
class USceneCaptureWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x00D0(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ASceneCaptureCameraActor*                    SceneCaptureCameraActor;                                  // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x016C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureWidget");
		return pStaticClass;
	}


	void SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor);
};


}

