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

// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::SetMipLevelDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetMipLevelDistance");

	UImgMediaSource_SetMipLevelDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::RemoveTargetObject(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.RemoveTargetObject");

	UImgMediaSource_RemoveTargetObject_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::RemoveGlobalCamera(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.RemoveGlobalCamera");

	UImgMediaSource_RemoveGlobalCamera_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UImgMediaSource::GetSequencePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         OutProxies                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	UImgMediaSource_GetProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;

}


// Function ImgMedia.ImgMediaSource.AddTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::AddTargetObject(class AActor* InActor, float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.AddTargetObject");

	UImgMediaSource_AddTargetObject_Params params;
	params.InActor = InActor;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::AddGlobalCamera(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.AddGlobalCamera");

	UImgMediaSource_AddGlobalCamera_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
