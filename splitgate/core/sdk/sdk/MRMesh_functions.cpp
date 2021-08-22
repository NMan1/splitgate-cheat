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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::StopReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");

	UMeshReconstructorBase_StopReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::StartReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");

	UMeshReconstructorBase_StartReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::PauseReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");

	UMeshReconstructorBase_PauseReconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");

	UMeshReconstructorBase_IsReconstructionStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");

	UMeshReconstructorBase_IsReconstructionPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (Native, Public)
void UMeshReconstructorBase::DisconnectMRMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");

	UMeshReconstructorBase_DisconnectMRMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (Native, Public)
// Parameters:
// class UMRMeshComponent*        Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	UMeshReconstructorBase_ConnectMRMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                  Confidence                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params params;
	params.Index = Index;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	UMockDataMeshTrackerComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	UMockDataMeshTrackerComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.SetWireframeMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      InMaterial                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetWireframeMaterial(class UMaterialInterface* InMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeMaterial");

	UMRMeshComponent_SetWireframeMaterial_Params params;
	params.InMaterial = InMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.SetWireframeColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetWireframeColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeColor");

	UMRMeshComponent_SetWireframeColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.SetUseWireframe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseWireframe                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetUseWireframe(bool bUseWireframe)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetUseWireframe");

	UMRMeshComponent_SetUseWireframe_Params params;
	params.bUseWireframe = bUseWireframe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion");

	UMRMeshComponent_SetEnableMeshOcclusion_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	UMRMeshComponent_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetWireframeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UMRMeshComponent::GetWireframeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetWireframeColor");

	UMRMeshComponent_GetWireframeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetUseWireframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::GetUseWireframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetUseWireframe");

	UMRMeshComponent_GetUseWireframe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::GetEnableMeshOcclusion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion");

	UMRMeshComponent_GetEnableMeshOcclusion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (Final, Native, Public, BlueprintCallable)
void UMRMeshComponent::ForceNavMeshUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	UMRMeshComponent_ForceNavMeshUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MRMesh.MRMeshComponent.Clear
// (Final, Native, Public, BlueprintCallable)
void UMRMeshComponent::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	UMRMeshComponent_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
