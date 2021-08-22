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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
struct UMagicLeapARPinComponent_UnPin_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
struct UMagicLeapARPinComponent_TryGetPinData_Params
{
	class UClass*                                      InPinDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutPinDataValid;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
struct UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
struct UMagicLeapARPinComponent_PinToID_Params
{
	struct FGuid                                       PinId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
struct UMagicLeapARPinComponent_PinToBestFit_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
struct UMagicLeapARPinComponent_PinSceneComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
struct UMagicLeapARPinComponent_PinRestoredOrSynced_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
struct UMagicLeapARPinComponent_PinActor_Params
{
	class AActor*                                      ActorToPin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
{
	bool                                               bRestoredOrSynced;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
{
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
struct UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params
{
	bool                                               bDataRestored;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
struct UMagicLeapARPinComponent_IsPinned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
struct UMagicLeapARPinComponent_GetPinState_Params
{
	struct FMagicLeapARPinState                        State;                                                     // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
struct UMagicLeapARPinComponent_GetPinnedPinID_Params
{
	struct FGuid                                       PinId;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
struct UMagicLeapARPinComponent_GetPinData_Params
{
	class UClass*                                      PinDataClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
struct UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
struct UMagicLeapARPinComponent_AttemptPinDataRestoration_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
struct UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params
{
	struct FMagicLeapARPinQuery                        InGlobalFilter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
struct UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params
{
	int                                                UserIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
struct UMagicLeapARPinFunctionLibrary_QueryARPins_Params
{
	struct FMagicLeapARPinQuery                        Query;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               Pins;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
struct UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params
{
	struct FString                                     PinIdString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ARPinId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
struct UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
struct UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params
{
	struct FMagicLeapARPinQuery                        CurrentGlobalFilter;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
struct UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
struct UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params
{
	struct FVector                                     SearchPoint;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       PinId;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
{
	int                                                NumRequested;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               Pins;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
struct UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params
{
	struct FMagicLeapARPinState                        State;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
struct UMagicLeapARPinFunctionLibrary_GetARPinState_Params
{
	struct FGuid                                       PinId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        State;                                                     // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params
{
	struct FGuid                                       PinId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               PinFoundInEnvironment;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
{
	struct FGuid                                       PinId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               PinFoundInEnvironment;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
struct UMagicLeapARPinFunctionLibrary_DestroyTracker_Params
{
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
struct UMagicLeapARPinFunctionLibrary_CreateTracker_Params
{
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
struct UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params
{
	struct FGuid                                       ARPinId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
struct AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
struct AMagicLeapARPinRenderer_SetVisibilityOverride_Params
{
	bool                                               InVisibilityOverride;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
