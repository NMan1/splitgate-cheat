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

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	ACameraRig_Rail_GetRailSplineComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCineCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	UCineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	UCineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFocalLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	UCineCameraComponent_SetCurrentFocalLength_Params params;
	params.InFocalLength = InFocalLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedLensPreset> UCineCameraComponent::STATIC_GetLensPresetsCopy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	UCineCameraComponent_GetLensPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetLensPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	UCineCameraComponent_GetLensPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedFilmbackPreset> UCineCameraComponent::STATIC_GetFilmbackPresetsCopy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy");

	UCineCameraComponent_GetFilmbackPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	UCineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetDefaultFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	UCineCameraComponent_GetDefaultFilmbackPresetName_Params params;

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
