#pragma once

#include "..\..\pch.h"


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class NVIDIAGfepch.highlightsFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsFunctionLibrary");
		return ptr;
	}



	void STATIC_Poll();
	void STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, NVIDIAGfeSDK_EGfeSDKPermission* Video, NVIDIAGfeSDK_EGfeSDKPermission* Screenshots);
};

// Class NVIDIAGfeSDK.InitHighlights
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UInitHighlights : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JPX[0xB0];                                    // 0x0050(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.InitHighlights");
		return ptr;
	}



	class UInitHighlights* STATIC_InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots);
};

// Class NVIDIAGfepch.highlightsConfigureAsync
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TA3[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsConfigureAsync");
		return ptr;
	}



	class UHighlightsConfigureAsync* STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams);
};

// Class NVIDIAGfepch.highlightsOpenGroupAsync
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYC5[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsOpenGroupAsync");
		return ptr;
	}



	class UHighlightsOpenGroupAsync* STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params);
};

// Class NVIDIAGfepch.highlightsCloseGroupAsync
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YHCI[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsCloseGroupAsync");
		return ptr;
	}



	class UHighlightsCloseGroupAsync* STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights);
};

// Class NVIDIAGfepch.highlightsSetScreenshotAsync
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPN5[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsSetScreenshotAsync");
		return ptr;
	}



	class UHighlightsSetScreenshotAsync* STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId);
};

// Class NVIDIAGfepch.highlightsSetVideoAsync
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWTN[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsSetVideoAsync");
		return ptr;
	}



	class UHighlightsSetVideoAsync* STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta);
};

// Class NVIDIAGfepch.highlightsSummaryAsync
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWV6[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsSummaryAsync");
		return ptr;
	}



	class UHighlightsSummaryAsync* STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params);
};

// Class NVIDIAGfepch.highlightsGetNumberAsync
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6M7[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfepch.highlightsGetNumberAsync");
		return ptr;
	}



	class UHighlightsGetNumberAsync* STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, NVIDIAGfeSDK_EGfeSDKHighlightType TagFilter, NVIDIAGfeSDK_EGfeSDKHighlightSignificance SignificanceFilter);
};

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHC5[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.RequestPermissionsAsync");
		return ptr;
	}



	class URequestPermissionsAsync* STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
