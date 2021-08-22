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

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InConstraintBindingID          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InStartOffset                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	UMovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              InSound                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	UMovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	UMovieSceneAudioSection_GetStartOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	UMovieSceneAudioSection_GetSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InCameraBindingID              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	UMovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	UMovieSceneCameraCutSection_GetCameraBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InShotDisplayName              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// MovieSceneTracks_ELevelVisibility InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	UMovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           InLevelNames                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// MovieSceneTracks_ELevelVisibility ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieSceneTracks_ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	UMovieSceneLevelVisibilitySection_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveVectorParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter");

	UMovieSceneParameterSection_RemoveVectorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveVector2DParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter");

	UMovieSceneParameterSection_RemoveVector2DParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveTransformParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter");

	UMovieSceneParameterSection_RemoveTransformParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveScalarParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter");

	UMovieSceneParameterSection_RemoveScalarParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveColorParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter");

	UMovieSceneParameterSection_RemoveColorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveBoolParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter");

	UMovieSceneParameterSection_RemoveBoolParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
void UMovieSceneParameterSection::GetParameterNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames");

	UMovieSceneParameterSection_GetParameterNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey");

	UMovieSceneParameterSection_AddVectorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey");

	UMovieSceneParameterSection_AddVector2DParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey");

	UMovieSceneParameterSection_AddTransformParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey");

	UMovieSceneParameterSection_AddScalarParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey");

	UMovieSceneParameterSection_AddColorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey");

	UMovieSceneParameterSection_AddBoolParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
