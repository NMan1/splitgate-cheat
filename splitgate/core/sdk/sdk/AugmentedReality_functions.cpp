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

// Function AugmentedReality.ARActor.AddARComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  InComponentClass               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   NativeID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARComponent* AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARActor.AddARComponent");

	AARActor_AddARComponent_Params params;
	params.InComponentClass = InComponentClass;
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToUnpin               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	UARBlueprintLibrary_UnpinComponent_Params params;
	params.ComponentToUnpin = ComponentToUnpin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bOnOff                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AugmentedReality_EARCaptureType CaptureType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_ToggleARCapture(bool bOnOff, AugmentedReality_EARCaptureType CaptureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture");

	UARBlueprintLibrary_ToggleARCapture_Params params;
	params.bOnOff = bOnOff;
	params.CaptureType = CaptureType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (Final, Native, Static, Public, BlueprintCallable)
void UARBlueprintLibrary::STATIC_StopARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	UARBlueprintLibrary_StopARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_StartARSession(class UARSessionConfig* SessionConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	UARBlueprintLibrary_StartARSession_Params params;
	params.SessionConfig = SessionConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bOnOff                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_SetEnabledXRCamera(bool bOnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera");

	UARBlueprintLibrary_SetEnabledXRCamera_Params params;
	params.bOnOff = bOnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InWorldScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_SetARWorldScale(float InWorldScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale");

	UARBlueprintLibrary_SetARWorldScale_Params params;
	params.InWorldScale = InWorldScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OriginLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                OriginRotation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIsTransformInWorldSpace       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMaintainUpDirection           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation");

	UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params params;
	params.OriginLocation = OriginLocation;
	params.OriginRotation = OriginRotation;
	params.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
	params.bMaintainUpDirection = bMaintainUpDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InAlignmentTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	UARBlueprintLibrary_SetAlignmentTransform_Params params;
	params.InAlignmentTransform = InAlignmentTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSaveName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  InPin                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_SaveARPinToLocalStore(const struct FName& InSaveName, class UARPin* InPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore");

	UARBlueprintLibrary_SaveARPinToLocalStore_Params params;
	params.InSaveName = InSaveName;
	params.InPin = InPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint               InSize                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UARBlueprintLibrary::STATIC_ResizeXRCamera(const struct FIntPoint& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera");

	UARBlueprintLibrary_ResizeXRCamera_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARPin*                  PinToRemove                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_RemovePin(class UARPin* PinToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	UARBlueprintLibrary_RemovePin_Params params;
	params.PinToRemove = PinToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSaveName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_RemoveARPinFromLocalStore(const struct FName& InSaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore");

	UARBlueprintLibrary_RemoveARPinFromLocalStore_Params params;
	params.InSaveName = InSaveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
void UARBlueprintLibrary::STATIC_RemoveAllARPinsFromLocalStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore");

	UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	UARBlueprintLibrary_PinComponentToTraceResult_Params params;
	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  Pin                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin");

	UARBlueprintLibrary_PinComponentToARPin_Params params;
	params.ComponentToPin = ComponentToPin;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              PinToWorldTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	UARBlueprintLibrary_PinComponent_Params params;
	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (Final, Native, Static, Public, BlueprintCallable)
void UARBlueprintLibrary::STATIC_PauseARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	UARBlueprintLibrary_PauseARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<struct FName, class UARPin*> ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FName, class UARPin*> UARBlueprintLibrary::STATIC_LoadARPinsFromLocalStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore");

	UARBlueprintLibrary_LoadARPinsFromLocalStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params;
	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ScreenCoord                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	UARBlueprintLibrary_LineTraceTrackedObjects_Params params;
	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	UARBlueprintLibrary_IsSessionTypeSupported_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");

	UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params;
	params.SessionType = SessionType;
	params.SessionTrackingFeature = SessionTrackingFeature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AugmentedReality_EARSceneReconstruction SceneReconstructionMethod      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsSceneReconstructionSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSceneReconstruction SceneReconstructionMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported");

	UARBlueprintLibrary_IsSceneReconstructionSupported_Params params;
	params.SessionType = SessionType;
	params.SceneReconstructionMethod = SceneReconstructionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsARSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	UARBlueprintLibrary_IsARSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsARPinLocalStoreSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported");

	UARBlueprintLibrary_IsARPinLocalStoreSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsARPinLocalStoreReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady");

	UARBlueprintLibrary_IsARPinLocalStoreReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARWorldMappingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldMappingState UARBlueprintLibrary::STATIC_GetWorldMappingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	UARBlueprintLibrary_GetWorldMappingStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARTrackingQualityReason ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingQualityReason UARBlueprintLibrary::STATIC_GetTrackingQualityReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	UARBlueprintLibrary_GetTrackingQualityReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AugmentedReality_EARTrackingQuality ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingQuality UARBlueprintLibrary::STATIC_GetTrackingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	UARBlueprintLibrary_GetTrackingQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARVideoFormat>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARVideoFormat> UARBlueprintLibrary::STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	UARBlueprintLibrary_GetSupportedVideoFormats_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARSessionConfig*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSessionConfig* UARBlueprintLibrary::STATIC_GetSessionConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	UARBlueprintLibrary_GetSessionConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARBlueprintLibrary::STATIC_GetPointCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	UARBlueprintLibrary_GetPointCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::STATIC_GetPersonSegmentationImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");

	UARBlueprintLibrary_GetPersonSegmentationImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::STATIC_GetPersonSegmentationDepthImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");

	UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWorldLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AugmentedReality_EARObjectClassification OutClassification              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutClassificationLocation      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxLocationDiff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation");

	UARBlueprintLibrary_GetObjectClassificationAtLocation_Params params;
	params.InWorldLocation = InWorldLocation;
	params.MaxLocationDiff = MaxLocationDiff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClassification != nullptr)
		*OutClassification = params.OutClassification;
	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = params.OutClassificationLocation;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARBlueprintLibrary::STATIC_GetNumberOfTrackedFacesSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported");

	UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARLightEstimate*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARLightEstimate* UARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	UARBlueprintLibrary_GetCurrentLightEstimate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FARCameraIntrinsics     OutCameraIntrinsics            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics");

	UARBlueprintLibrary_GetCameraIntrinsics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCameraIntrinsics != nullptr)
		*OutCameraIntrinsics = params.OutCameraIntrinsics;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetCameraImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	UARBlueprintLibrary_GetCameraImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraDepth*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraDepth* UARBlueprintLibrary::STATIC_GetCameraDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	UARBlueprintLibrary_GetCameraDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBlueprintLibrary::STATIC_GetARWorldScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale");

	UARBlueprintLibrary_GetARWorldScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARTextureType TextureType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARTexture*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::STATIC_GetARTexture(AugmentedReality_EARTextureType TextureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARTexture");

	UARBlueprintLibrary_GetARTexture_Params params;
	params.TextureType = TextureType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARSessionStatus        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FARSessionStatus UARBlueprintLibrary::STATIC_GetARSessionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	UARBlueprintLibrary_GetARSessionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPose*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPose*> UARBlueprintLibrary::STATIC_GetAllTrackedPoses()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");

	UARBlueprintLibrary_GetAllTrackedPoses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_GetAllTrackedPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	UARBlueprintLibrary_GetAllTrackedPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPlaneGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPlaneGeometry*> UARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	UARBlueprintLibrary_GetAllTrackedPlanes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedImage*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedImage*> UARBlueprintLibrary::STATIC_GetAllTrackedImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	UARBlueprintLibrary_GetAllTrackedImages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAREnvironmentCaptureProbe*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FARPose2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARPose2D> UARBlueprintLibrary::STATIC_GetAllTracked2DPoses()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");

	UARBlueprintLibrary_GetAllTracked2DPoses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPin*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPin*> UARBlueprintLibrary::STATIC_GetAllPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	UARBlueprintLibrary_GetAllPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GeometryClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UARTrackedGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometriesByClass(class UClass* GeometryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass");

	UARBlueprintLibrary_GetAllGeometriesByClass_Params params;
	params.GeometryClass = GeometryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometries()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	UARBlueprintLibrary_GetAllGeometries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARBlueprintLibrary::STATIC_GetAlignmentTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform");

	UARBlueprintLibrary_GetAlignmentTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PointName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UARTrackedPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_FindTrackedPointsByName(const struct FString& PointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName");

	UARBlueprintLibrary_FindTrackedPointsByName_Params params;
	params.PointName = PointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*      TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params;
	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARPin*                  ARPin                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	UARBlueprintLibrary_DebugDrawPin_Params params;
	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         StartPoints                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         EndPoints                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 ClosestIntersection            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection");

	UARBlueprintLibrary_CalculateClosestIntersection_Params params;
	params.StartPoints = StartPoints;
	params.EndPoints = EndPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClosestIntersection != nullptr)
		*ClosestIntersection = params.ClosestIntersection;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              TransformInFirstCoordinateSystem (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              TransformInSecondCoordinateSystem (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              AlignmentTransform             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform");

	UARBlueprintLibrary_CalculateAlignmentTransform_Params params;
	params.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
	params.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AlignmentTransform != nullptr)
		*AlignmentTransform = params.AlignmentTransform;

}


// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              WorldTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PointName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeletePointsWithSameName      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_AddTrackedPointWithName(const struct FTransform& WorldTransform, const struct FString& PointName, bool bDeletePointsWithSameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName");

	UARBlueprintLibrary_AddTrackedPointWithName_Params params;
	params.WorldTransform = WorldTransform;
	params.PointName = PointName;
	params.bDeletePointsWithSameName = bDeletePointsWithSameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	UARBlueprintLibrary_AddRuntimeCandidateImage_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	UARTraceResultLibrary_GetTrackedGeometry_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AugmentedReality_EARLineTraceChannels ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLineTraceChannels UARTraceResultLibrary::STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	UARTraceResultLibrary_GetTraceChannel_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::STATIC_GetLocalTransform(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform");

	UARTraceResultLibrary_GetLocalTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	UARTraceResultLibrary_GetLocalToWorldTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	UARTraceResultLibrary_GetLocalToTrackingTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	UARTraceResultLibrary_GetDistanceFromCamera_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARComponent.UpdateVisualization
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UARComponent::UpdateVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.UpdateVisualization");

	UARComponent_UpdateVisualization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARComponent.SetNativeID
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   NativeID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARComponent::SetNativeID(const struct FGuid& NativeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.SetNativeID");

	UARComponent_SetNativeID_Params params;
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARComponent.ReceiveRemove
// (Event, Public, BlueprintEvent)
void UARComponent::ReceiveRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.ReceiveRemove");

	UARComponent_ReceiveRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARComponent.OnRep_Payload
// (Native, Protected)
void UARComponent::OnRep_Payload()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.OnRep_Payload");

	UARComponent_OnRep_Payload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARComponent.GetMRMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMRMeshComponent* UARComponent::GetMRMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.GetMRMesh");

	UARComponent_GetMRMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EPlaneComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPlaneComponent::STATIC_SetPlaneComponentDebugMode(AugmentedReality_EPlaneComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode");

	UARPlaneComponent_SetPlaneComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::STATIC_SetObjectClassificationDebugColors(TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors");

	UARPlaneComponent_SetObjectClassificationDebugColors_Params params;
	params.InColors = InColors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPlaneUpdatePayload   NewPayload                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload");

	UARPlaneComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate");

	UARPlaneComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPlaneComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveAdd");

	UARPlaneComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> UARPlaneComponent::STATIC_GetObjectClassificationDebugColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors");

	UARPlaneComponent_GetObjectClassificationDebugColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPointComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPointUpdatePayload   NewPayload                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ServerUpdatePayload");

	UARPointComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPointComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveUpdate");

	UARPointComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPointComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveAdd");

	UARPointComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EFaceComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFaceComponent::STATIC_SetFaceComponentDebugMode(AugmentedReality_EFaceComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode");

	UARFaceComponent_SetFaceComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARFaceUpdatePayload    NewPayload                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload");

	UARFaceComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARFaceComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveUpdate");

	UARFaceComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARFaceComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveAdd");

	UARFaceComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EImageComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARImageComponent::STATIC_SetImageComponentDebugMode(AugmentedReality_EImageComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode");

	UARImageComponent_SetImageComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARImageComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARImageUpdatePayload   NewPayload                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ServerUpdatePayload");

	UARImageComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARImageComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveUpdate");

	UARImageComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARImageComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload   Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveAdd");

	UARImageComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EQRCodeComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARQRCodeComponent::STATIC_SetQRCodeComponentDebugMode(AugmentedReality_EQRCodeComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode");

	UARQRCodeComponent_SetQRCodeComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARQRCodeUpdatePayload  NewPayload                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload");

	UARQRCodeComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload  Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate");

	UARQRCodeComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload  Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd");

	UARQRCodeComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EPoseComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPoseComponent::STATIC_SetPoseComponentDebugMode(AugmentedReality_EPoseComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode");

	UARPoseComponent_SetPoseComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPoseUpdatePayload    NewPayload                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload");

	UARPoseComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPoseComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveUpdate");

	UARPoseComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARPoseComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveAdd");

	UARPoseComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FAREnvironmentProbeUpdatePayload NewPayload                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload");

	UAREnvironmentProbeComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayload Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate");

	UAREnvironmentProbeComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayload Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd");

	UAREnvironmentProbeComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARObjectUpdatePayload  NewPayload                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload");

	UARObjectComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARObjectComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload  Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveUpdate");

	UARObjectComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARObjectComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload  Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveAdd");

	UARObjectComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARMeshUpdatePayload    NewPayload                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload");

	UARMeshComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARMeshComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveUpdate");

	UARMeshComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARMeshComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload    Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveAdd");

	UARMeshComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EGeoAnchorComponentDebugMode NewDebugMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::STATIC_SetGeoAnchorComponentDebugMode(AugmentedReality_EGeoAnchorComponentDebugMode NewDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode");

	UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params params;
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARGeoAnchorUpdatePayload NewPayload                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload");

	UARGeoAnchorComponent_ServerUpdatePayload_Params params;
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate");

	UARGeoAnchorComponent_ReceiveUpdate_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload Payload                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd");

	UARGeoAnchorComponent_ReceiveAdd_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent");

	UARDependencyHandler_StartARSessionLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SessionConfig = SessionConfig;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// AugmentedReality_EARServicePermissionRequestResult OutPermissionResult            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServicePermissionRequestResult* OutPermissionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission");

	UARDependencyHandler_RequestARSessionPermission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SessionConfig = SessionConfig;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPermissionResult != nullptr)
		*OutPermissionResult = params.OutPermissionResult;

}


// Function AugmentedReality.ARDependencyHandler.InstallARService
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// AugmentedReality_EARServiceInstallRequestResult OutInstallResult               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceInstallRequestResult* OutInstallResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.InstallARService");

	UARDependencyHandler_InstallARService_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInstallResult != nullptr)
		*OutInstallResult = params.OutInstallResult;

}


// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARDependencyHandler*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARDependencyHandler* UARDependencyHandler::STATIC_GetARDependencyHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler");

	UARDependencyHandler_GetARDependencyHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// AugmentedReality_EARServiceAvailability OutAvailability                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceAvailability* OutAvailability)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability");

	UARDependencyHandler_CheckARServiceAvailability_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAvailability != nullptr)
		*OutAvailability = params.OutAvailability;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARGeoTrackingSupport*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARGeoTrackingSupport* UARGeoTrackingSupport::STATIC_GetGeoTrackingSupport()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport");

	UARGeoTrackingSupport_GetGeoTrackingSupport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARGeoTrackingStateReason ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason");

	UARGeoTrackingSupport_GetGeoTrackingStateReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARGeoTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState");

	UARGeoTrackingSupport_GetGeoTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARGeoTrackingAccuracy ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy");

	UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Longitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Latitude                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AltitudeMeters                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OptionalAnchorName             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const struct FString& OptionalAnchorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude");

	UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params params;
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.AltitudeMeters = AltitudeMeters;
	params.OptionalAnchorName = OptionalAnchorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Longitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Latitude                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OptionalAnchorName             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const struct FString& OptionalAnchorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation");

	UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params params;
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.OptionalAnchorName = OptionalAnchorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bIsAvailable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Error                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params params;
	params.bIsAvailable = bIsAvailable;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Longitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Latitude                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::STATIC_CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Longitude = Longitude;
	params.Latitude = Latitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::STATIC_CheckGeoTrackingAvailability(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          Longitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Latitude                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Altitude                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Error                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature");

	UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params params;
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.Altitude = Altitude;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::STATIC_GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition");

	UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   NativeID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor");

	UARLifeCycleComponent_ServerSpawnARActor_Params params;
	params.ComponentClass = ComponentClass;
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AARActor*                Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor");

	UARLifeCycleComponent_ServerDestroyARActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AARActor*                Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature");

	UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasDefaults)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   NativeID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AARActor*                SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature");

	UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params params;
	params.ComponentClass = ComponentClass;
	params.NativeID = NativeID;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UARBasicLightEstimate_GetAmbientColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARPin::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UARPin_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UARPin_GetTrackedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UARPin::GetPinnedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UARPin_GetPinnedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UARPin_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UARPin_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARPin::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UARPin_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UARPin_DebugDraw_Params params;
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UARSessionConfig_ShouldResetTrackedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UARSessionConfig_ShouldResetCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UARSessionConfig_ShouldRenderCameraOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UARSessionConfig_ShouldEnableCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UARSessionConfig_ShouldEnableAutoFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          WorldMapData                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UARSessionConfig_SetWorldMapData_Params params;
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params;
	params.InSessionTrackingFeature = InSessionTrackingFeature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARSceneReconstruction InSceneReconstructionMethod    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetSceneReconstructionMethod(AugmentedReality_EARSceneReconstruction InSceneReconstructionMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod");

	UARSessionConfig_SetSceneReconstructionMethod_Params params;
	params.InSceneReconstructionMethod = InSceneReconstructionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UARSessionConfig_SetResetTrackedObjects_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UARSessionConfig_SetResetCameraTracking_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARFaceTrackingUpdate InUpdate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UARSessionConfig_SetFaceTrackingUpdate_Params params;
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AugmentedReality_EARFaceTrackingDirection InDirection                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UARSessionConfig_SetFaceTrackingDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UARSessionConfig_SetEnableAutoFocus_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FARVideoFormat          NewFormat                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UARSessionConfig_SetDesiredVideoFormat_Params params;
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*> InCandidateObjects             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UARSessionConfig_SetCandidateObjectList_Params params;
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UARSessionConfig_GetWorldMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARWorldAlignment ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UARSessionConfig_GetWorldAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARSessionType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSessionType UARSessionConfig::GetSessionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UARSessionConfig_GetSessionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARSceneReconstruction ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod");

	UARSessionConfig_GetSceneReconstructionMethod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARPlaneDetectionMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UARSessionConfig_GetPlaneDetectionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARLightEstimationMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UARSessionConfig_GetLightEstimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARFrameSyncMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UARSessionConfig_GetFrameSyncMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARFaceTrackingUpdate ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UARSessionConfig_GetFaceTrackingUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARFaceTrackingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UARSessionConfig_GetFaceTrackingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EAREnvironmentCaptureProbeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARSessionTrackingFeature ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	UARSessionConfig_GetEnabledSessionTrackingFeature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARVideoFormat          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UARSessionConfig_GetDesiredVideoFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateObject*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UARSessionConfig_GetCandidateObjectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateImage*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UARSessionConfig_GetCandidateImageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateObject*      CandidateObject                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UARSessionConfig_AddCandidateObject_Params params;
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateImage*       NewCandidateImage              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UARSessionConfig_AddCandidateImage_Params params;
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ImageData                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AARSharedWorldGameMode_SetPreviewImageData_Params params;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ARWorldData                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AARSharedWorldGameMode_SetARSharedWorldData_Params params;
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)
void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            PreviewImageSize               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ARWorldDataSize                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	AARSharedWorldPlayerController_ClientInitSharedWorld_Params params;
	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe* InCaptureProbe                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AARSkyLight_SetEnvironmentCaptureProbe_Params params;
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARTrackedGeometry::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedGeometry_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UARTrackedGeometry_GetUnderlyingMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedGeometry_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARObjectClassification ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARObjectClassification UARTrackedGeometry::GetObjectClassification()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UARTrackedGeometry_GetObjectClassification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARTrackedGeometry::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetName");

	UARTrackedGeometry_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedGeometry_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARTrackedGeometry::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedGeometry_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UARPlaneGeometry_GetSubsumedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARPlaneOrientation ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARPlaneOrientation UARPlaneGeometry::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	UARPlaneGeometry_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UARPlaneGeometry_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UARPlaneGeometry_GetCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UARTrackedImage_GetEstimateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UARTrackedImage_GetDetectedImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EAREye        Eye                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EAREye        Eye                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARFaceBlendShape BlendShape                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARFaceGeometry::GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UARFaceGeometry_GetBlendShapeValue_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<AugmentedReality_EARFaceBlendShape, float> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<AugmentedReality_EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UARFaceGeometry_GetBlendShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAREnvironmentCaptureProbe_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UARTrackedObject_GetDetectedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARPose3D               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FARPose3D UARTrackedPose::GetTrackedPoseData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");

	UARTrackedPose_GetTrackedPoseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWorldLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AugmentedReality_EARObjectClassification OutClassification              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutClassificationLocation      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxLocationDiff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation");

	UARMeshGeometry_GetObjectClassificationAtLocation_Params params;
	params.InWorldLocation = InWorldLocation;
	params.MaxLocationDiff = MaxLocationDiff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClassification != nullptr)
		*OutClassification = params.OutClassification;
	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = params.OutClassificationLocation;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoAnchor.GetLongitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetLongitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLongitude");

	UARGeoAnchor_GetLongitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoAnchor.GetLatitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetLatitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLatitude");

	UARGeoAnchor_GetLatitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARAltitudeSource ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource");

	UARGeoAnchor_GetAltitudeSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetAltitudeMeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters");

	UARGeoAnchor_GetAltitudeMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UARCandidateImage_GetPhysicalWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UARCandidateImage_GetPhysicalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AugmentedReality_EARCandidateImageOrientation ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UARCandidateImage_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateImage::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UARCandidateImage_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UARCandidateImage_GetCandidateTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARCandidateObject::SetFriendlyName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	UARCandidateObject_SetFriendlyName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          InCandidateObject              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UARCandidateObject_SetCandidateObjectData_Params params;
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    InBoundingBox                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UARCandidateObject_SetBoundingBox_Params params;
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateObject::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UARCandidateObject_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UARCandidateObject_GetCandidateObjectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FBox UARCandidateObject::GetBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UARCandidateObject_GetBoundingBox_Params params;

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
