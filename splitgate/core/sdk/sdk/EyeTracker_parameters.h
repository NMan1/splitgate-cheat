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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
struct UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
struct UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
struct UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
struct UEyeTrackerFunctionLibrary_GetStereoGazeData_Params
{
	struct FEyeTrackerStereoGazeData                   OutGazeData;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
struct UEyeTrackerFunctionLibrary_GetGazeData_Params
{
	struct FEyeTrackerGazeData                         OutGazeData;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
