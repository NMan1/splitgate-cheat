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

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChaosPhysicsCollisionInfo PhysicsCollision               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UChaosSolverEngineBlueprintLibrary::STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult");

	UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params params;
	params.PhysicsCollision = PhysicsCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AChaosSolverActor::SetSolverActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	AChaosSolverActor_SetSolverActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (Final, Native, Public, BlueprintCallable)
void AChaosSolverActor::SetAsCurrentWorldSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	AChaosSolverActor_SetAsCurrentWorldSolver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
