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

// Function ImgMedia.ImgMediaSource.SetSequencePath
struct UImgMediaSource_SetSequencePath_Params
{
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
struct UImgMediaSource_SetMipLevelDistance_Params
{
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.RemoveTargetObject
struct UImgMediaSource_RemoveTargetObject_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
struct UImgMediaSource_RemoveGlobalCamera_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetSequencePath
struct UImgMediaSource_GetSequencePath_Params
{
	struct FString                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetProxies
struct UImgMediaSource_GetProxies_Params
{
	TArray<struct FString>                             OutProxies;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.AddTargetObject
struct UImgMediaSource_AddTargetObject_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.AddGlobalCamera
struct UImgMediaSource_AddGlobalCamera_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
