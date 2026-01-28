#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:56 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QDevKit.FirebaseHelper
// 0x0024 (0x0040 - 0x001C)
class UFirebaseHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x001C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseHelper");
		return pStaticClass;
	}


	void SetConsent(TMap<int, int> InConsent);
	bool IsNotificationLaunchApp();
	struct FString GetNotificationLaunchAppExtraData(const struct FString& InKey);
	static class UFirebaseHelper* GetInstance();
	struct FString GetFIRInstallId();
	struct FString GetFIRAppInstanceId();
	struct FString GetFCMToken();
	void ConsumeNotificationLaunchApp();
};


// Class QDevKit.FirebaseRemoteConfigImpl
// 0x0054 (0x0070 - 0x001C)
class UFirebaseRemoteConfigImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             QueryConfigNamesArray;                                    // 0x0020(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x44];                                      // 0x002C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseRemoteConfigImpl");
		return pStaticClass;
	}


	EQFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	static class UFirebaseRemoteConfigImpl* GetInstance();
};


// Class QDevKit.PhotoAlbumHelper
// 0x001C (0x0038 - 0x001C)
class UPhotoAlbumHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    GenerateImageFromAlbumCompleteCallback;                   // 0x0028(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.PhotoAlbumHelper");
		return pStaticClass;
	}


	void Initialize();
	static class UPhotoAlbumHelper* GetInstance();
	int GenerateImageFromAlbum(const struct FString& InFilePath, const struct FString& InThumbFilePath, int InThumbnailWidth, int InThumbnailHeight, bool InForceJPG, bool InOverride);
	void FetchAlbumImageInfo(int InStartIndex, int InLimitNum, int InThumbWidth, int InThumbHeight, const struct FString& InThumbPath, const struct FString& InExtraJson);
};


// Class QDevKit.SystemPermissionHelper
// 0x004C (0x0068 - 0x001C)
class USystemPermissionHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x001C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.SystemPermissionHelper");
		return pStaticClass;
	}


	bool RequestPermissions(int InPermissionType, int InRequestCode);
	bool IsPermissionGranted(int InPermissionType);
	void Initialize();
	static class USystemPermissionHelper* GetInstance();
	bool AndroidShouldShowRequestPermissionRationale(const struct FString& InPermission);
	bool AndroidRequestPermissions(const struct FString& InPermission, int InRequestCode);
	bool AndroidIsPermissionGranted(const struct FString& InPermission);
	bool AndroidHasDefinePermission(const struct FString& InPermssionName);
};


}

