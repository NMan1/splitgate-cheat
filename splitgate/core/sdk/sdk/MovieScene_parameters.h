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

// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieSceneSection_SetRowIndex_Params
{
	int                                                NewRowIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieSceneSection_SetPreRollFrames_Params
{
	int                                                InPreRollFrames;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieSceneSection_SetPostRollFrames_Params
{
	int                                                InPostRollFrames;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieSceneSection_SetOverlapPriority_Params
{
	int                                                NewPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieSceneSection_SetIsLocked_Params
{
	bool                                               bInIsLocked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieSceneSection_SetIsActive_Params
{
	bool                                               bInIsActive;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetCompletionMode
struct UMovieSceneSection_SetCompletionMode_Params
{
	MovieScene_EMovieSceneCompletionMode               InCompletionMode;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetBlendType
struct UMovieSceneSection_SetBlendType_Params
{
	MovieScene_EMovieSceneBlendType                    InBlendType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieSceneSection_IsLocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.IsActive
struct UMovieSceneSection_IsActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieSceneSection_GetRowIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieSceneSection_GetPreRollFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieSceneSection_GetPostRollFrames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieSceneSection_GetOverlapPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetCompletionMode
struct UMovieSceneSection_GetCompletionMode_Params
{
	MovieScene_EMovieSceneCompletionMode               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetBlendType
struct UMovieSceneSection_GetBlendType_Params
{
	struct FOptionalMovieSceneBlendType                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct UMovieSceneSequence_FindBindingsByTag_Params
{
	struct FName                                       InBindingName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequence.FindBindingByTag
struct UMovieSceneSequence_FindBindingByTag_Params
{
	struct FName                                       InBindingName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
struct UMovieSceneSequencePlayer_StopAtCurrentTime_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieSceneSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieSceneSequencePlayer_SetTimeRange_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	struct FMovieSceneSequencePlaybackParams           PlaybackParams;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieSceneSequencePlayer_SetFrameRate_Params
{
	struct FFrameRate                                  FrameRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieSceneSequencePlayer_SetFrameRange_Params
{
	int                                                StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SubFrames;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
	bool                                               bInDisableCameraCuts;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
{
	float                                              TimeInSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieSceneSequencePlayer_ScrubToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UMovieSceneSequencePlayer_Scrub_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params
{
	struct FFrameTime                                  StoppedTime;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
	MovieScene_EUpdatePositionMethod                   Method;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  RelevantTime;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieSceneSequencePlayer_PlayToSeconds_Params
{
	float                                              TimeInSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieSceneSequencePlayer_PlayToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayTo
struct UMovieSceneSequencePlayer_PlayTo_Params
{
	struct FMovieSceneSequencePlaybackParams           PlaybackParams;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieSceneSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieSceneSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieSceneSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieSceneSequencePlayer_JumpToSeconds_Params
{
	float                                              TimeInSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieSceneSequencePlayer_JumpToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UMovieSceneSequencePlayer_IsReversed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieSceneSequencePlayer_GetStartTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UMovieSceneSequencePlayer_GetObjectBindings_Params
{
	class UObject*                                     InObject;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieSceneSequencePlayer_GetFrameRate_Params
{
	struct FFrameRate                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieSceneSequencePlayer_GetFrameDuration_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieSceneSequencePlayer_GetEndTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieSceneSequencePlayer_GetDuration_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieSceneSequencePlayer_GetCurrentTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};

// Function MovieScene.MovieSceneSubSection.SetSequence
struct UMovieSceneSubSection_SetSequence_Params
{
	class UMovieSceneSequence*                         Sequence;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSubSection.GetSequence
struct UMovieSceneSubSection_GetSequence_Params
{
	class UMovieSceneSequence*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnTick
struct UMovieSceneCustomClockSource_OnTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InPlayRate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
struct UMovieSceneCustomClockSource_OnStopPlaying_Params
{
	struct FQualifiedFrameTime                         InStopTime;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
struct UMovieSceneCustomClockSource_OnStartPlaying_Params
{
	struct FQualifiedFrameTime                         InStartTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
struct UMovieSceneCustomClockSource_OnRequestCurrentTime_Params
{
	struct FQualifiedFrameTime                         InCurrentTime;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InPlayRate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct UMovieSceneEasingFunction_OnEvaluate_Params
{
	float                                              Interp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
