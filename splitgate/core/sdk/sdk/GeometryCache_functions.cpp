﻿#include "..\..\pch.h"



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

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	AGeometryCacheActor_GetGeometryCacheComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInIsRunning                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInBackwards                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInIsLooping                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	UGeometryCacheComponent_TickAtThisTime_Params params;
	params.Time = Time;
	params.bInIsRunning = bInIsRunning;
	params.bInBackwards = bInBackwards;
	params.bInIsLooping = bInIsLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	UGeometryCacheComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTimeOffset             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	UGeometryCacheComponent_SetStartTimeOffset_Params params;
	params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	UGeometryCacheComponent_SetPlaybackSpeed_Params params;
	params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewMotionVectorScale           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale");

	UGeometryCacheComponent_SetMotionVectorScale_Params params;
	params.NewMotionVectorScale = NewMotionVectorScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLooping                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetLooping(bool bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	UGeometryCacheComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*          NewGeomCache                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	UGeometryCacheComponent_SetGeometryCache_Params params;
	params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewExtrapolating              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames");

	UGeometryCacheComponent_SetExtrapolateFrames_Params params;
	params.bNewExtrapolating = bNewExtrapolating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	UGeometryCacheComponent_PlayReversedFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	UGeometryCacheComponent_PlayReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	UGeometryCacheComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	UGeometryCacheComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	UGeometryCacheComponent_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlayingReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	UGeometryCacheComponent_IsPlayingReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	UGeometryCacheComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	UGeometryCacheComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsExtrapolatingFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames");

	UGeometryCacheComponent_IsExtrapolatingFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetStartTimeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	UGeometryCacheComponent_GetStartTimeOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	UGeometryCacheComponent_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetPlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	UGeometryCacheComponent_GetPlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGeometryCacheComponent::GetNumberOfFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	UGeometryCacheComponent_GetNumberOfFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetMotionVectorScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale");

	UGeometryCacheComponent_GetMotionVectorScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	UGeometryCacheComponent_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetAnimationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	UGeometryCacheComponent_GetAnimationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  MeshData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params;
	params.MeshData = MeshData;
	params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");

	UGeometryCacheTrack_TransformAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");

	UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
