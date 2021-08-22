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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData> TrailingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	UChaosDestructionListener_SortTrailingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData> CollisionEvents                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	UChaosDestructionListener_SortCollisionEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData> BreakingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	UChaosDestructionListener_SortBreakingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	UChaosDestructionListener_SetTrailingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	UChaosDestructionListener_SetTrailingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	UChaosDestructionListener_SetCollisionEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	UChaosDestructionListener_SetCollisionEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	UChaosDestructionListener_SetBreakingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	UChaosDestructionListener_SetBreakingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	UChaosDestructionListener_RemoveGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	UChaosDestructionListener_RemoveChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChaosDestructionListener::IsEventListening()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	UChaosDestructionListener_IsEventListening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	UChaosDestructionListener_AddGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	UChaosDestructionListener_AddChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionActor_RaycastSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewNotifyBreaks               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	UGeometryCollectionComponent_SetNotifyBreaks_Params params;
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	UGeometryCollectionComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGeometryCollectionRepData OldData                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::OnRep_RepData(const struct FGeometryCollectionRepData& OldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData");

	UGeometryCollectionComponent_OnRep_RepData_Params params;
	params.OldData = OldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NetAbandonCluster(int TransformIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster");

	UGeometryCollectionComponent_NetAbandonCluster_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Chaos_EGeometryCollectionPhysicsTypeEnum Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, Chaos_EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	UGeometryCollectionComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	UGeometryCollectionComponent_ApplyKinematicField_Params params;
	params.Radius = Radius;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UStaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
// (Final, Native, Public, BlueprintCallable)
void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
