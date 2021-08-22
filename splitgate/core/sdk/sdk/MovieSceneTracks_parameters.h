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

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID                  InConstraintBindingID;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
	struct FFrameNumber                                InStartOffset;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
	class USoundBase*                                  InSound;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
	struct FFrameNumber                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
	class USoundBase*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID                  InCameraBindingID;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
	struct FString                                     InShotDisplayName;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
	MovieSceneTracks_ELevelVisibility                  InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
	TArray<struct FName>                               InLevelNames;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
	MovieSceneTracks_ELevelVisibility                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  InValue;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
	struct FName                                       InParameterName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                InTime;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
