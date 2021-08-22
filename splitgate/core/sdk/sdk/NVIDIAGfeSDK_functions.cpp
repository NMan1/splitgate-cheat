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
// Functions
//---------------------------------------------------------------------------

// Function NVIDIAGfepch.highlightsFunctionLibrary.Poll
// (Final, Native, Static, Public, BlueprintCallable)
void UHighlightsFunctionLibrary::STATIC_Poll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsFunctionLibrary.Poll");

	UHighlightsFunctionLibrary_Poll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfepch.highlightsFunctionLibrary.ChekIfHighlightsAvailable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGfeSDKCreateResponse   InitProperties                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           VideoGranted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ScreenshotsGranted             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// NVIDIAGfeSDK_EGfeSDKPermission Video                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// NVIDIAGfeSDK_EGfeSDKPermission Screenshots                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHighlightsFunctionLibrary::STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, NVIDIAGfeSDK_EGfeSDKPermission* Video, NVIDIAGfeSDK_EGfeSDKPermission* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsFunctionLibrary.ChekIfHighlightsAvailable");

	UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params params;
	params.InitProperties = InitProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VideoGranted != nullptr)
		*VideoGranted = params.VideoGranted;
	if (ScreenshotsGranted != nullptr)
		*ScreenshotsGranted = params.ScreenshotsGranted;
	if (Video != nullptr)
		*Video = params.Video;
	if (Screenshots != nullptr)
		*Screenshots = params.Screenshots;

}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InGameName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInitHighlights*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInitHighlights* UInitHighlights::STATIC_InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");

	UInitHighlights_InitHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InGameName = InGameName;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsConfigureAsync.HighlightsConfigure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightConfigParams ConfigParams                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsConfigureAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsConfigureAsync* UHighlightsConfigureAsync::STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsConfigureAsync.HighlightsConfigure");

	UHighlightsConfigureAsync_HighlightsConfigure_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConfigParams = ConfigParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsOpenGroupAsync.HighlightsOpenGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightOpenGroupParams Params                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsOpenGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsOpenGroupAsync.HighlightsOpenGroup");

	UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsCloseGroupAsync.HighlightsCloseGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DestroyHighlights              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsCloseGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsCloseGroupAsync.HighlightsCloseGroup");

	UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.DestroyHighlights = DestroyHighlights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsSetScreenshotAsync.HighlightsSetScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 HighlightId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetScreenshotAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsSetScreenshotAsync.HighlightsSetScreenshot");

	UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsSetVideoAsync.HighlightsSetVideo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 HighlightId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDelta                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetVideoAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsSetVideoAsync.HighlightsSetVideo");

	UHighlightsSetVideoAsync_HighlightsSetVideo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;
	params.StartDelta = StartDelta;
	params.EndDelta = EndDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsSummaryAsync.HighlightsOpenSummary
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightSummaryParams Params                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsSummaryAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsSummaryAsync* UHighlightsSummaryAsync::STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsSummaryAsync.HighlightsOpenSummary");

	UHighlightsSummaryAsync_HighlightsOpenSummary_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfepch.highlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// NVIDIAGfeSDK_EGfeSDKHighlightType TagFilter                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// NVIDIAGfeSDK_EGfeSDKHighlightSignificance SignificanceFilter             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsGetNumberAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, NVIDIAGfeSDK_EGfeSDKHighlightType TagFilter, NVIDIAGfeSDK_EGfeSDKHighlightSignificance SignificanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfepch.highlightsGetNumberAsync.HighlightsGetNumberOfHighlights");

	UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.TagFilter = TagFilter;
	params.SignificanceFilter = SignificanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestPermissionsAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URequestPermissionsAsync* URequestPermissionsAsync::STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");

	URequestPermissionsAsync_GFERequestPermissions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
