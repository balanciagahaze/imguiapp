#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:57 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0014 (0x0030 - 0x001C)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return pStaticClass;
	}

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return pStaticClass;
	}


	static bool CheckPermission(const struct FString& permission);
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
};


}

