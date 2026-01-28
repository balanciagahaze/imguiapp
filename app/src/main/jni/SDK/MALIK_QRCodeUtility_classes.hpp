#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QRCodeUtility.ZXingScanner
// 0x0000 (0x0020 - 0x0020)
class UZXingScanner : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QRCodeUtility.ZXingScanner");
		return pStaticClass;
	}


	static class UTexture2D* Encode(const struct FString& Text);
	static bool Decode(class UTexture2D* Texture, const struct FVector4& InRect, struct FZXingScanResult* OutResult);
};


}

