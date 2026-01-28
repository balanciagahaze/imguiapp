#pragma once

// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:24:53 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScriptPlugin.NetInterface
// 0x0000 (0x0020 - 0x0020)
class UNetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.NetInterface");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaContext
// 0x0008 (0x0340 - 0x0338)
class ALuaContext : public AActor
{
public:
	class UObject*                                     OwningObject;                                             // 0x0338(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UScriptContextComponent*                     ScriptContextComponent;                                   // 0x033C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaContext");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptProfiler
// 0x0014 (0x0030 - 0x001C)
class UScriptProfiler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptProfiler");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaStateWrapper
// 0x009C (0x00B8 - 0x001C)
class ULuaStateWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x001C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaStateWrapper");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprint
// 0x0018 (0x00B0 - 0x0098)
class UScriptBlueprint : public UBlueprint
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0098(0x000C) (ZeroConstructor)
	struct FString                                     SourceCode;                                               // 0x00A4(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0020 (0x0220 - 0x0200)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	struct FString                                     SourceCode;                                               // 0x0208(0x000C) (ZeroConstructor)
	TArray<class UProperty*>                           ScriptProperties;                                         // 0x0214(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptContext
// 0x0004 (0x0020 - 0x001C)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return pStaticClass;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0008 (0x00D0 - 0x00C8)
class UScriptContextComponent : public UActorComponent
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return pStaticClass;
	}


	void PushScriptArrayIndexData(const struct FString& ParamName, int Index);
	void PushOneScriptPropertyValues(const struct FString& ParamName);
	void PushAllScriptPropertyValues();
	void FetchScriptArrayIndexData(const struct FString& ParamName, int Index);
	void FetchOneScriptPropertyValues(const struct FString& ParamName);
	void FetchAllScriptPropertyValues();
	void CallScriptFunctionWithoutFetch(const struct FString& FunctionName);
	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptHelperNetInterface
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperNetInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptHelperNetInterface");
		return pStaticClass;
	}


	static int SendPacket_LuaState();
	static void Disconnect(TScriptInterface<class UNetInterface>* NetInterface);
	static void Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface);
};


// Class ScriptPlugin.ScriptPluginComponent
// 0x0004 (0x0020 - 0x001C)
class UScriptPluginComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptPluginComponent");
		return pStaticClass;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0010 (0x0348 - 0x0338)
class AScriptTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	float                                              TestValue;                                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0345(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return pStaticClass;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


// Class ScriptPlugin.LuaClassBaseObj
// 0x0000 (0x0338 - 0x0338)
class ALuaClassBaseObj : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaClassBaseObj");
		return pStaticClass;
	}


	struct FString ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2);
	void HandleUIMessage(const struct FString& UIMessage);
	struct FString GetGameStatus();
};


}

