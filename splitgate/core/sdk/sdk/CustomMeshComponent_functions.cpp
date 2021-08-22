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

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");

	UCustomMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");

	UCustomMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");

	UCustomMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
