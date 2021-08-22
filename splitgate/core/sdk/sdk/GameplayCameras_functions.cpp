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

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent* SourceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_ECameraShakePlaySpace   PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, Engine_ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource");

	UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.SourceComponent = SourceComponent;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    PlayerCameraManager            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_ECameraShakePlaySpace   PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, Engine_ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake");

	UMatineeCameraShake_StartMatineeCameraShake_Params params;
	params.PlayerCameraManager = PlayerCameraManager;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveStopShake");

	UMatineeCameraShake_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceivePlayShake");

	UMatineeCameraShake_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatineeCameraShake::ReceiveIsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished");

	UMatineeCameraShake_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo        POV                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo        ModifiedPOV                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake");

	UMatineeCameraShake_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.Alpha = Alpha;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;

}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*        CameraShake                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::STATIC_Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake");

	UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params params;
	params.CameraShake = CameraShake;

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
