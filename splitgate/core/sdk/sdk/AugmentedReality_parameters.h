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
// Parameters
//---------------------------------------------------------------------------

// Function AugmentedReality.ARActor.AddARComponent
struct AARActor_AddARComponent_Params
{
	class UClass*                                      InComponentClass;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       NativeID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARComponent*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UARBlueprintLibrary_UnpinComponent_Params
{
	class USceneComponent*                             ComponentToUnpin;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
struct UARBlueprintLibrary_ToggleARCapture_Params
{
	bool                                               bOnOff;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARCaptureType                    CaptureType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.StopARSession
struct UARBlueprintLibrary_StopARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UARBlueprintLibrary_StartARSession_Params
{
	class UARSessionConfig*                            SessionConfig;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
struct UARBlueprintLibrary_SetEnabledXRCamera_Params
{
	bool                                               bOnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
struct UARBlueprintLibrary_SetARWorldScale_Params
{
	float                                              InWorldScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
struct UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params
{
	struct FVector                                     OriginLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OriginRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsTransformInWorldSpace;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainUpDirection;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UARBlueprintLibrary_SetAlignmentTransform_Params
{
	struct FTransform                                  InAlignmentTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
struct UARBlueprintLibrary_SaveARPinToLocalStore_Params
{
	struct FName                                       InSaveName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      InPin;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
struct UARBlueprintLibrary_ResizeXRCamera_Params
{
	struct FIntPoint                                   InSize;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UARBlueprintLibrary_RemovePin_Params
{
	class UARPin*                                      PinToRemove;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
struct UARBlueprintLibrary_RemoveARPinFromLocalStore_Params
{
	struct FName                                       InSaveName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
struct UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UARBlueprintLibrary_PinComponentToTraceResult_Params
{
	class USceneComponent*                             ComponentToPin;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       DebugName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
struct UARBlueprintLibrary_PinComponentToARPin_Params
{
	class USceneComponent*                             ComponentToPin;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      Pin;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UARBlueprintLibrary_PinComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  PinToWorldTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                          TrackedGeometry;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DebugName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
struct UARBlueprintLibrary_PauseARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
struct UARBlueprintLibrary_LoadARPinsFromLocalStore_Params
{
	TMap<struct FName, class UARPin*>                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct UARBlueprintLibrary_LineTraceTrackedObjects3D_Params
{
	struct FVector                                     Start;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestFeaturePoints;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestGroundPlane;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneExtents;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneBoundaryPolygon;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
{
	struct FVector2D                                   ScreenCoord;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestFeaturePoints;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestGroundPlane;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneExtents;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneBoundaryPolygon;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UARBlueprintLibrary_IsSessionTypeSupported_Params
{
	AugmentedReality_EARSessionType                    SessionType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
struct UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params
{
	AugmentedReality_EARSessionType                    SessionType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARSessionTrackingFeature         SessionTrackingFeature;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
struct UARBlueprintLibrary_IsSceneReconstructionSupported_Params
{
	AugmentedReality_EARSessionType                    SessionType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARSceneReconstruction            SceneReconstructionMethod;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct UARBlueprintLibrary_IsARSupported_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
struct UARBlueprintLibrary_IsARPinLocalStoreSupported_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
struct UARBlueprintLibrary_IsARPinLocalStoreReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct UARBlueprintLibrary_GetWorldMappingStatus_Params
{
	AugmentedReality_EARWorldMappingState              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct UARBlueprintLibrary_GetTrackingQualityReason_Params
{
	AugmentedReality_EARTrackingQualityReason          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UARBlueprintLibrary_GetTrackingQuality_Params
{
	AugmentedReality_EARTrackingQuality                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct UARBlueprintLibrary_GetSupportedVideoFormats_Params
{
	AugmentedReality_EARSessionType                    SessionType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARVideoFormat>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UARBlueprintLibrary_GetSessionConfig_Params
{
	class UARSessionConfig*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct UARBlueprintLibrary_GetPointCloud_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
struct UARBlueprintLibrary_GetPersonSegmentationImage_Params
{
	class UARTexture*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
struct UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
{
	class UARTexture*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
struct UARBlueprintLibrary_GetObjectClassificationAtLocation_Params
{
	struct FVector                                     InWorldLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARObjectClassification           OutClassification;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutClassificationLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLocationDiff;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
struct UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
{
	class UARLightEstimate*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
struct UARBlueprintLibrary_GetCameraIntrinsics_Params
{
	struct FARCameraIntrinsics                         OutCameraIntrinsics;                                       // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct UARBlueprintLibrary_GetCameraImage_Params
{
	class UARTextureCameraImage*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct UARBlueprintLibrary_GetCameraDepth_Params
{
	class UARTextureCameraDepth*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
struct UARBlueprintLibrary_GetARWorldScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
struct UARBlueprintLibrary_GetARTexture_Params
{
	AugmentedReality_EARTextureType                    TextureType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARTexture*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UARBlueprintLibrary_GetARSessionStatus_Params
{
	struct FARSessionStatus                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
struct UARBlueprintLibrary_GetAllTrackedPoses_Params
{
	TArray<class UARTrackedPose*>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct UARBlueprintLibrary_GetAllTrackedPoints_Params
{
	TArray<class UARTrackedPoint*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct UARBlueprintLibrary_GetAllTrackedPlanes_Params
{
	TArray<class UARPlaneGeometry*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct UARBlueprintLibrary_GetAllTrackedImages_Params
{
	TArray<class UARTrackedImage*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
{
	TArray<class UAREnvironmentCaptureProbe*>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
struct UARBlueprintLibrary_GetAllTracked2DPoses_Params
{
	TArray<struct FARPose2D>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UARBlueprintLibrary_GetAllPins_Params
{
	TArray<class UARPin*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
struct UARBlueprintLibrary_GetAllGeometriesByClass_Params
{
	class UClass*                                      GeometryClass;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UARTrackedGeometry*>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UARBlueprintLibrary_GetAllGeometries_Params
{
	TArray<class UARTrackedGeometry*>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
struct UARBlueprintLibrary_GetAlignmentTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
struct UARBlueprintLibrary_FindTrackedPointsByName_Params
{
	struct FString                                     PointName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UARTrackedPoint*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
	class UARTrackedGeometry*                          TrackedGeometry;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UARBlueprintLibrary_DebugDrawPin_Params
{
	class UARPin*                                      ARPin;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
struct UARBlueprintLibrary_CalculateClosestIntersection_Params
{
	TArray<struct FVector>                             StartPoints;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             EndPoints;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     ClosestIntersection;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
struct UARBlueprintLibrary_CalculateAlignmentTransform_Params
{
	struct FTransform                                  TransformInFirstCoordinateSystem;                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformInSecondCoordinateSystem;                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  AlignmentTransform;                                        // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
struct UARBlueprintLibrary_AddTrackedPointWithName_Params
{
	struct FTransform                                  WorldTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     PointName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeletePointsWithSameName;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct UARBlueprintLibrary_AddRuntimeCandidateImage_Params
{
	class UARSessionConfig*                            SessionConfig;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CandidateTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicalWidth;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARCandidateImage*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UARTraceResultLibrary_GetTrackedGeometry_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UARTraceResultLibrary_GetTraceChannel_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	AugmentedReality_EARLineTraceChannels              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
struct UARTraceResultLibrary_GetLocalTransform_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UARTraceResultLibrary_GetDistanceFromCamera_Params
{
	struct FARTraceResult                              TraceResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARComponent.UpdateVisualization
struct UARComponent_UpdateVisualization_Params
{
};

// Function AugmentedReality.ARComponent.SetNativeID
struct UARComponent_SetNativeID_Params
{
	struct FGuid                                       NativeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARComponent.ReceiveRemove
struct UARComponent_ReceiveRemove_Params
{
};

// Function AugmentedReality.ARComponent.OnRep_Payload
struct UARComponent_OnRep_Payload_Params
{
};

// Function AugmentedReality.ARComponent.GetMRMesh
struct UARComponent_GetMRMesh_Params
{
	class UMRMeshComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
struct UARPlaneComponent_SetPlaneComponentDebugMode_Params
{
	AugmentedReality_EPlaneComponentDebugMode          NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
struct UARPlaneComponent_SetObjectClassificationDebugColors_Params
{
	TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
struct UARPlaneComponent_ServerUpdatePayload_Params
{
	struct FARPlaneUpdatePayload                       NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
struct UARPlaneComponent_ReceiveUpdate_Params
{
	struct FARPlaneUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.ReceiveAdd
struct UARPlaneComponent_ReceiveAdd_Params
{
	struct FARPlaneUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
struct UARPlaneComponent_GetObjectClassificationDebugColors_Params
{
	TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPointComponent.ServerUpdatePayload
struct UARPointComponent_ServerUpdatePayload_Params
{
	struct FARPointUpdatePayload                       NewPayload;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPointComponent.ReceiveUpdate
struct UARPointComponent_ReceiveUpdate_Params
{
	struct FARPointUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPointComponent.ReceiveAdd
struct UARPointComponent_ReceiveAdd_Params
{
	struct FARPointUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
struct UARFaceComponent_SetFaceComponentDebugMode_Params
{
	AugmentedReality_EFaceComponentDebugMode           NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
struct UARFaceComponent_ServerUpdatePayload_Params
{
	struct FARFaceUpdatePayload                        NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceComponent.ReceiveUpdate
struct UARFaceComponent_ReceiveUpdate_Params
{
	struct FARFaceUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceComponent.ReceiveAdd
struct UARFaceComponent_ReceiveAdd_Params
{
	struct FARFaceUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
struct UARImageComponent_SetImageComponentDebugMode_Params
{
	AugmentedReality_EImageComponentDebugMode          NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARImageComponent.ServerUpdatePayload
struct UARImageComponent_ServerUpdatePayload_Params
{
	struct FARImageUpdatePayload                       NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARImageComponent.ReceiveUpdate
struct UARImageComponent_ReceiveUpdate_Params
{
	struct FARImageUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARImageComponent.ReceiveAdd
struct UARImageComponent_ReceiveAdd_Params
{
	struct FARImageUpdatePayload                       Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
struct UARQRCodeComponent_SetQRCodeComponentDebugMode_Params
{
	AugmentedReality_EQRCodeComponentDebugMode         NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
struct UARQRCodeComponent_ServerUpdatePayload_Params
{
	struct FARQRCodeUpdatePayload                      NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
struct UARQRCodeComponent_ReceiveUpdate_Params
{
	struct FARQRCodeUpdatePayload                      Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
struct UARQRCodeComponent_ReceiveAdd_Params
{
	struct FARQRCodeUpdatePayload                      Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
struct UARPoseComponent_SetPoseComponentDebugMode_Params
{
	AugmentedReality_EPoseComponentDebugMode           NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
struct UARPoseComponent_ServerUpdatePayload_Params
{
	struct FARPoseUpdatePayload                        NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPoseComponent.ReceiveUpdate
struct UARPoseComponent_ReceiveUpdate_Params
{
	struct FARPoseUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPoseComponent.ReceiveAdd
struct UARPoseComponent_ReceiveAdd_Params
{
	struct FARPoseUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
struct UAREnvironmentProbeComponent_ServerUpdatePayload_Params
{
	struct FAREnvironmentProbeUpdatePayload            NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
struct UAREnvironmentProbeComponent_ReceiveUpdate_Params
{
	struct FAREnvironmentProbeUpdatePayload            Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
struct UAREnvironmentProbeComponent_ReceiveAdd_Params
{
	struct FAREnvironmentProbeUpdatePayload            Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
struct UARObjectComponent_ServerUpdatePayload_Params
{
	struct FARObjectUpdatePayload                      NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARObjectComponent.ReceiveUpdate
struct UARObjectComponent_ReceiveUpdate_Params
{
	struct FARObjectUpdatePayload                      Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARObjectComponent.ReceiveAdd
struct UARObjectComponent_ReceiveAdd_Params
{
	struct FARObjectUpdatePayload                      Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
struct UARMeshComponent_ServerUpdatePayload_Params
{
	struct FARMeshUpdatePayload                        NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARMeshComponent.ReceiveUpdate
struct UARMeshComponent_ReceiveUpdate_Params
{
	struct FARMeshUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARMeshComponent.ReceiveAdd
struct UARMeshComponent_ReceiveAdd_Params
{
	struct FARMeshUpdatePayload                        Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
struct UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params
{
	AugmentedReality_EGeoAnchorComponentDebugMode      NewDebugMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
struct UARGeoAnchorComponent_ServerUpdatePayload_Params
{
	struct FARGeoAnchorUpdatePayload                   NewPayload;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
struct UARGeoAnchorComponent_ReceiveUpdate_Params
{
	struct FARGeoAnchorUpdatePayload                   Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
struct UARGeoAnchorComponent_ReceiveAdd_Params
{
	struct FARGeoAnchorUpdatePayload                   Payload;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
struct UARDependencyHandler_StartARSessionLatent_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSessionConfig*                            SessionConfig;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
struct UARDependencyHandler_RequestARSessionPermission_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSessionConfig*                            SessionConfig;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARServicePermissionRequestResult OutPermissionResult;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARDependencyHandler.InstallARService
struct UARDependencyHandler_InstallARService_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARServiceInstallRequestResult    OutInstallResult;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
struct UARDependencyHandler_GetARDependencyHandler_Params
{
	class UARDependencyHandler*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
struct UARDependencyHandler_CheckARServiceAvailability_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARServiceAvailability            OutAvailability;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
struct UARGeoTrackingSupport_GetGeoTrackingSupport_Params
{
	class UARGeoTrackingSupport*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
struct UARGeoTrackingSupport_GetGeoTrackingStateReason_Params
{
	AugmentedReality_EARGeoTrackingStateReason         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
struct UARGeoTrackingSupport_GetGeoTrackingState_Params
{
	AugmentedReality_EARGeoTrackingState               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
struct UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params
{
	AugmentedReality_EARGeoTrackingAccuracy            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
struct UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params
{
	float                                              Longitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latitude;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AltitudeMeters;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OptionalAnchorName;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
struct UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params
{
	float                                              Longitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latitude;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OptionalAnchorName;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params
{
	bool                                               bIsAvailable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Longitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latitude;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params
{
	float                                              Longitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latitude;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Altitude;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldPosition;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetGeoLocationAsyncTaskBlueprintProxy*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
struct UARLifeCycleComponent_ServerSpawnARActor_Params
{
	class UClass*                                      ComponentClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       NativeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
struct UARLifeCycleComponent_ServerDestroyARActor_Params
{
	class AARActor*                                    Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
struct UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params
{
	class AARActor*                                    Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
struct UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params
{
	class UClass*                                      ComponentClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       NativeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AARActor*                                    SpawnedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
	AugmentedReality_EARTrackingState                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
	class UARTrackedGeometry*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UARSessionConfig_ShouldResetTrackedObjects_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UARSessionConfig_ShouldResetCameraTracking_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UARSessionConfig_ShouldRenderCameraOverlay_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UARSessionConfig_ShouldEnableCameraTracking_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UARSessionConfig_ShouldEnableAutoFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UARSessionConfig_SetWorldMapData_Params
{
	TArray<unsigned char>                              WorldMapData;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
struct UARSessionConfig_SetSessionTrackingFeatureToEnable_Params
{
	AugmentedReality_EARSessionTrackingFeature         InSessionTrackingFeature;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
struct UARSessionConfig_SetSceneReconstructionMethod_Params
{
	AugmentedReality_EARSceneReconstruction            InSceneReconstructionMethod;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UARSessionConfig_SetResetTrackedObjects_Params
{
	bool                                               bNewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UARSessionConfig_SetResetCameraTracking_Params
{
	bool                                               bNewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UARSessionConfig_SetFaceTrackingUpdate_Params
{
	AugmentedReality_EARFaceTrackingUpdate             InUpdate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UARSessionConfig_SetFaceTrackingDirection_Params
{
	AugmentedReality_EARFaceTrackingDirection          InDirection;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UARSessionConfig_SetEnableAutoFocus_Params
{
	bool                                               bNewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UARSessionConfig_SetDesiredVideoFormat_Params
{
	struct FARVideoFormat                              NewFormat;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UARSessionConfig_SetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>                  InCandidateObjects;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UARSessionConfig_GetWorldMapData_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UARSessionConfig_GetWorldAlignment_Params
{
	AugmentedReality_EARWorldAlignment                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UARSessionConfig_GetSessionType_Params
{
	AugmentedReality_EARSessionType                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
struct UARSessionConfig_GetSceneReconstructionMethod_Params
{
	AugmentedReality_EARSceneReconstruction            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UARSessionConfig_GetPlaneDetectionMode_Params
{
	AugmentedReality_EARPlaneDetectionMode             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UARSessionConfig_GetLightEstimationMode_Params
{
	AugmentedReality_EARLightEstimationMode            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UARSessionConfig_GetFrameSyncMode_Params
{
	AugmentedReality_EARFrameSyncMode                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UARSessionConfig_GetFaceTrackingUpdate_Params
{
	AugmentedReality_EARFaceTrackingUpdate             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UARSessionConfig_GetFaceTrackingDirection_Params
{
	AugmentedReality_EARFaceTrackingDirection          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
	AugmentedReality_EAREnvironmentCaptureProbeType    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
struct UARSessionConfig_GetEnabledSessionTrackingFeature_Params
{
	AugmentedReality_EARSessionTrackingFeature         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UARSessionConfig_GetDesiredVideoFormat_Params
{
	struct FARVideoFormat                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UARSessionConfig_GetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UARSessionConfig_GetCandidateImageList_Params
{
	TArray<class UARCandidateImage*>                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UARSessionConfig_AddCandidateObject_Params
{
	class UARCandidateObject*                          CandidateObject;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UARSessionConfig_AddCandidateImage_Params
{
	class UARCandidateImage*                           NewCandidateImage;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AARSharedWorldGameMode_SetPreviewImageData_Params
{
	TArray<unsigned char>                              ImageData;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
struct AARSharedWorldGameMode_SetARWorldSharingIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AARSharedWorldGameMode_SetARSharedWorldData_Params
{
	TArray<unsigned char>                              ARWorldData;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
	class AARSharedWorldGameState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
struct AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
struct AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
{
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
{
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct AARSharedWorldPlayerController_ClientInitSharedWorld_Params
{
	int                                                PreviewImageSize;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldDataSize;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AARSkyLight_SetEnvironmentCaptureProbe_Params
{
	class UAREnvironmentCaptureProbe*                  InCaptureProbe;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedGeometry_IsTracked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
struct UARTrackedGeometry_GetUnderlyingMesh_Params
{
	class UMRMeshComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
	AugmentedReality_EARTrackingState                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
struct UARTrackedGeometry_GetObjectClassification_Params
{
	AugmentedReality_EARObjectClassification           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetName
struct UARTrackedGeometry_GetName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
	class UARPlaneGeometry*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetOrientation
struct UARPlaneGeometry_GetOrientation_Params
{
	AugmentedReality_EARPlaneOrientation               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UARTrackedImage_GetEstimateSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UARTrackedImage_GetDetectedImage_Params
{
	class UARCandidateImage*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
	AugmentedReality_EAREye                            Eye;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
	AugmentedReality_EAREye                            Eye;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
	AugmentedReality_EARFaceBlendShape                 BlendShape;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
	TMap<AugmentedReality_EARFaceBlendShape, float>    ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAREnvironmentCaptureProbe_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
	class UAREnvironmentCaptureProbeTexture*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UARTrackedObject_GetDetectedObject_Params
{
	class UARCandidateObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
struct UARTrackedPose_GetTrackedPoseData_Params
{
	struct FARPose3D                                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
struct UARMeshGeometry_GetObjectClassificationAtLocation_Params
{
	struct FVector                                     InWorldLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARObjectClassification           OutClassification;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutClassificationLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLocationDiff;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchor.GetLongitude
struct UARGeoAnchor_GetLongitude_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchor.GetLatitude
struct UARGeoAnchor_GetLatitude_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
struct UARGeoAnchor_GetAltitudeSource_Params
{
	AugmentedReality_EARAltitudeSource                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
struct UARGeoAnchor_GetAltitudeMeters_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UARCandidateImage_GetPhysicalWidth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UARCandidateImage_GetPhysicalHeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UARCandidateImage_GetOrientation_Params
{
	AugmentedReality_EARCandidateImageOrientation      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UARCandidateImage_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UARCandidateImage_GetCandidateTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.SetFriendlyName
struct UARCandidateObject_SetFriendlyName_Params
{
	struct FString                                     NewName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UARCandidateObject_SetCandidateObjectData_Params
{
	TArray<unsigned char>                              InCandidateObject;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UARCandidateObject_SetBoundingBox_Params
{
	struct FBox                                        InBoundingBox;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UARCandidateObject_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UARCandidateObject_GetCandidateObjectData_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UARCandidateObject_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
