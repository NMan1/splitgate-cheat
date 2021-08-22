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

// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
struct UChaosClothingInteractor_SetVelocityScale_Params
{
	struct FVector                                     LinearVelocityScale;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularVelocityScale;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FictitiousAngularScale;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
struct UChaosClothingInteractor_SetMaterialLinear_Params
{
	float                                              EdgeStiffness;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BendingStiffness;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AreaStiffness;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
struct UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params
{
	float                                              TetherStiffness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetGravity
struct UChaosClothingInteractor_SetGravity_Params
{
	float                                              GravityScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGravityOverridden;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GravityOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetDamping
struct UChaosClothingInteractor_SetDamping_Params
{
	float                                              DampingCoefficient;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetCollision
struct UChaosClothingInteractor_SetCollision_Params
{
	float                                              CollisionThickness;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrictionCoefficient;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCCD;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionThickness;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
struct UChaosClothingInteractor_SetAnimDriveLinear_Params
{
	float                                              AnimDriveStiffness;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
struct UChaosClothingInteractor_SetAnimDrive_Params
{
	struct FVector2D                                   AnimDriveStiffness;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   AnimDriveDamping;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
struct UChaosClothingInteractor_SetAerodynamics_Params
{
	float                                              DragCoefficient;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LiftCoefficient;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
struct UChaosClothingInteractor_ResetAndTeleport_Params
{
	bool                                               bReset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
