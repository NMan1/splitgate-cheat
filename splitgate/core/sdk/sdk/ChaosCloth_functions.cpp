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

// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 LinearVelocityScale            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AngularVelocityScale           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FictitiousAngularScale         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale");

	UChaosClothingInteractor_SetVelocityScale_Params params;
	params.LinearVelocityScale = LinearVelocityScale;
	params.AngularVelocityScale = AngularVelocityScale;
	params.FictitiousAngularScale = FictitiousAngularScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          EdgeStiffness                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BendingStiffness               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AreaStiffness                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear");

	UChaosClothingInteractor_SetMaterialLinear_Params params;
	params.EdgeStiffness = EdgeStiffness;
	params.BendingStiffness = BendingStiffness;
	params.AreaStiffness = AreaStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TetherStiffness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear");

	UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params params;
	params.TetherStiffness = TetherStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          GravityScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsGravityOverridden           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 GravityOverride                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetGravity");

	UChaosClothingInteractor_SetGravity_Params params;
	params.GravityScale = GravityScale;
	params.bIsGravityOverridden = bIsGravityOverridden;
	params.GravityOverride = GravityOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DampingCoefficient             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetDamping(float DampingCoefficient)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetDamping");

	UChaosClothingInteractor_SetDamping_Params params;
	params.DampingCoefficient = DampingCoefficient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          CollisionThickness             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrictionCoefficient            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseCCD                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SelfCollisionThickness         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetCollision");

	UChaosClothingInteractor_SetCollision_Params params;
	params.CollisionThickness = CollisionThickness;
	params.FrictionCoefficient = FrictionCoefficient;
	params.bUseCCD = bUseCCD;
	params.SelfCollisionThickness = SelfCollisionThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AnimDriveStiffness             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear");

	UChaosClothingInteractor_SetAnimDriveLinear_Params params;
	params.AnimDriveStiffness = AnimDriveStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               AnimDriveStiffness             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               AnimDriveDamping               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive");

	UChaosClothingInteractor_SetAnimDrive_Params params;
	params.AnimDriveStiffness = AnimDriveStiffness;
	params.AnimDriveDamping = AnimDriveDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DragCoefficient                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LiftCoefficient                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics");

	UChaosClothingInteractor_SetAerodynamics_Params params;
	params.DragCoefficient = DragCoefficient;
	params.LiftCoefficient = LiftCoefficient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport");

	UChaosClothingInteractor_ResetAndTeleport_Params params;
	params.bReset = bReset;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
