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

// Function PortalWars.AmbianceVolume.OnOverlapEnd
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAmbianceVolume::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.AmbianceVolume.OnOverlapEnd");

	AAmbianceVolume_OnOverlapEnd_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.AmbianceVolume.OnOverlapBegin
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAmbianceVolume::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.AmbianceVolume.OnOverlapBegin");

	AAmbianceVolume_OnOverlapBegin_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.BaseGun.UpdateSkins
// (Native, Protected)
void ABaseGun::UpdateSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.BaseGun.UpdateSkins");

	ABaseGun_UpdateSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.BaseGun.getMesh1P
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* ABaseGun::getMesh1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.BaseGun.getMesh1P");

	ABaseGun_getMesh1P_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.BaseGun.GetControllingTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABaseGun::GetControllingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.BaseGun.GetControllingTeam");

	ABaseGun_GetControllingTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.BaseGun.ClientRemoved
// (Net, NetReliable, Native, Event, Protected, NetClient)
void ABaseGun::ClientRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.BaseGun.ClientRemoved");

	ABaseGun_ClientRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.ServerGoToState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// PortalWars_EWeaponState        NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGun::ServerGoToState(PortalWars_EWeaponState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.ServerGoToState");

	AGun_ServerGoToState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.PlayWeaponSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGun::PlayWeaponSound(class UAkAudioEvent* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.PlayWeaponSound");

	AGun_PlayWeaponSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.OnRep_CurrentState
// (Final, Native, Protected)
// Parameters:
// PortalWars_EWeaponState        PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGun::OnRep_CurrentState(PortalWars_EWeaponState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.OnRep_CurrentState");

	AGun_OnRep_CurrentState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.OnRep_AmmoInClip
// (Native, Protected)
void AGun::OnRep_AmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.OnRep_AmmoInClip");

	AGun_OnRep_AmmoInClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.OnRep_Ammo
// (Native, Protected)
void AGun::OnRep_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.OnRep_Ammo");

	AGun_OnRep_Ammo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.OnGunImageLoaded
// (Final, Native, Protected)
void AGun::OnGunImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.OnGunImageLoaded");

	AGun_OnGunImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.LoopWeaponSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsFiring                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGun::LoopWeaponSound(bool IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.LoopWeaponSound");

	AGun_LoopWeaponSound_Params params;
	params.IsFiring = IsFiring;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Gun.GetCanZoom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGun::GetCanZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.GetCanZoom");

	AGun_GetCanZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.Gun.GetAkComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPortalWarsAkComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsAkComponent* AGun::GetAkComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.GetAkComponent");

	AGun_GetAkComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.Gun.ClientStartReload
// (Net, NetReliable, Native, Event, Public, NetClient)
void AGun::ClientStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Gun.ClientStartReload");

	AGun_ClientStartReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.LineTraceGun.ServerNotifyMiss
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<struct FLineTraceInfo>  bulletTraces                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ALineTraceGun::ServerNotifyMiss(TArray<struct FLineTraceInfo> bulletTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.LineTraceGun.ServerNotifyMiss");

	ALineTraceGun_ServerNotifyMiss_Params params;
	params.bulletTraces = bulletTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.LineTraceGun.ServerNotifyHit
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FLineTraceHitResult     lineHit                        (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                          ReticleSpread                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLineTraceInfo>  bulletTraces                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ALineTraceGun::ServerNotifyHit(const struct FLineTraceHitResult& lineHit, float ReticleSpread, TArray<struct FLineTraceInfo> bulletTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.LineTraceGun.ServerNotifyHit");

	ALineTraceGun_ServerNotifyHit_Params params;
	params.lineHit = lineHit;
	params.ReticleSpread = ReticleSpread;
	params.bulletTraces = bulletTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.LineTraceGun.PlayBulletWhiz
// (Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartPoint                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EndPoint                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALineTraceGun::PlayBulletWhiz(const struct FVector& StartPoint, const struct FVector& EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.LineTraceGun.PlayBulletWhiz");

	ALineTraceGun_PlayBulletWhiz_Params params;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.LineTraceGun.OnRep_BulletNotify
// (Native, Protected)
void ALineTraceGun::OnRep_BulletNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.LineTraceGun.OnRep_BulletNotify");

	ALineTraceGun_OnRep_BulletNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.LineTraceGun.GetCurrentSpread
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ALineTraceGun::GetCurrentSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.LineTraceGun.GetCurrentSpread");

	ALineTraceGun_GetCurrentSpread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.SetPortalEnemy
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InFocusLoc                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsAIController::SetPortalEnemy(class APawn* InPawn, const struct FVector& InFocusLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.SetPortalEnemy");

	APortalWarsAIController_SetPortalEnemy_Params params;
	params.InPawn = InPawn;
	params.InFocusLoc = InFocusLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.SetNearPortalWall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APortalWall*             Wall                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsAIController::SetNearPortalWall(class APortalWall* Wall)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.SetNearPortalWall");

	APortalWarsAIController_SetNearPortalWall_Params params;
	params.Wall = Wall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.SetLeftPortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APortal*                 InPortal                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsAIController::SetLeftPortal(class APortal* InPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.SetLeftPortal");

	APortalWarsAIController_SetLeftPortal_Params params;
	params.InPortal = InPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.SetEnemy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsAIController::SetEnemy(class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.SetEnemy");

	APortalWarsAIController_SetEnemy_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.ResetHeardSounds
// (Final, Native, Public, BlueprintCallable, Const)
void APortalWarsAIController::ResetHeardSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.ResetHeardSounds");

	APortalWarsAIController_ResetHeardSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.ReloadGun
// (Final, Native, Public, BlueprintCallable, Const)
void APortalWarsAIController::ReloadGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.ReloadGun");

	APortalWarsAIController_ReloadGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.ReceivedKills
// (Final, Native, Public)
void APortalWarsAIController::ReceivedKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.ReceivedKills");

	APortalWarsAIController_ReceivedKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAIController.PortalLineOfSightTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APortalWarsCharacter*    Enemy                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutFocusLoc                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortal*                 Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsAIController::PortalLineOfSightTo(class APortalWarsCharacter* Enemy, struct FVector* OutFocusLoc, class APortal* Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.PortalLineOfSightTo");

	APortalWarsAIController_PortalLineOfSightTo_Params params;
	params.Enemy = Enemy;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFocusLoc != nullptr)
		*OutFocusLoc = params.OutFocusLoc;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.GetTargetLoc
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector APortalWarsAIController::GetTargetLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.GetTargetLoc");

	APortalWarsAIController_GetTargetLoc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.GetNavRecoveryDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector APortalWarsAIController::GetNavRecoveryDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.GetNavRecoveryDestination");

	APortalWarsAIController_GetNavRecoveryDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.GetLeftPortal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APortal*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortal* APortalWarsAIController::GetLeftPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.GetLeftPortal");

	APortalWarsAIController_GetLeftPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.GetGoalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector APortalWarsAIController::GetGoalLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.GetGoalLocation");

	APortalWarsAIController_GetGoalLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.GetEnemy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APortalWarsCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsCharacter* APortalWarsAIController::GetEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.GetEnemy");

	APortalWarsAIController_GetEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.FindPortalEnemyThruPortal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OutPortalEnemyLoc              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortal*                 Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsCharacter* APortalWarsAIController::FindPortalEnemyThruPortal(struct FVector* OutPortalEnemyLoc, class APortal* Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.FindPortalEnemyThruPortal");

	APortalWarsAIController_FindPortalEnemyThruPortal_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPortalEnemyLoc != nullptr)
		*OutPortalEnemyLoc = params.OutPortalEnemyLoc;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.FindPortalEnemy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OutLocationThroughPortal       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortal*                 OutPortalChecked               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsCharacter* APortalWarsAIController::FindPortalEnemy(struct FVector* OutLocationThroughPortal, class APortal** OutPortalChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.FindPortalEnemy");

	APortalWarsAIController_FindPortalEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLocationThroughPortal != nullptr)
		*OutLocationThroughPortal = params.OutLocationThroughPortal;
	if (OutPortalChecked != nullptr)
		*OutPortalChecked = params.OutPortalChecked;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAIController.FindClosestVisibleEnemy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithLOS                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsCharacter* APortalWarsAIController::FindClosestVisibleEnemy(bool bWithLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAIController.FindClosestVisibleEnemy");

	APortalWarsAIController_FindClosestVisibleEnemy_Params params;
	params.bWithLOS = bWithLOS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.DominationHill.OnRep_IsActive
// (Final, Native, Protected)
void ADominationHill::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.DominationHill.OnRep_IsActive");

	ADominationHill_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.DominationHill.OnRep_HillState
// (Final, Native, Public)
// Parameters:
// PortalWars_EDOMHillState       PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADominationHill::OnRep_HillState(PortalWars_EDOMHillState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.DominationHill.OnRep_HillState");

	ADominationHill_OnRep_HillState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.DominationHill.getTimeToCaptureHill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ADominationHill::getTimeToCaptureHill()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.DominationHill.getTimeToCaptureHill");

	ADominationHill_getTimeToCaptureHill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.DominationHill.getTimeCapturingHill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ADominationHill::getTimeCapturingHill()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.DominationHill.getTimeCapturingHill");

	ADominationHill_getTimeCapturingHill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.DominationHill.GetControllingTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ADominationHill::GetControllingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.DominationHill.GetControllingTeam");

	ADominationHill_GetControllingTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.Projectile.OnRep_ProjectileID
// (Native, Protected)
void AProjectile::OnRep_ProjectileID()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Projectile.OnRep_ProjectileID");

	AProjectile_OnRep_ProjectileID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Projectile.OnRep_Exploded
// (Native, Protected)
void AProjectile::OnRep_Exploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Projectile.OnRep_Exploded");

	AProjectile_OnRep_Exploded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Projectile.OnImpact
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AProjectile::OnImpact(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Projectile.OnImpact");

	AProjectile_OnImpact_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Projectile.DisableAndDestroy
// (Final, Native, Public)
void AProjectile::DisableAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Projectile.DisableAndDestroy");

	AProjectile_DisableAndDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.FlagItem.OnRep_Team
// (Final, Native, Protected)
void AFlagItem::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.FlagItem.OnRep_Team");

	AFlagItem_OnRep_Team_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGunPickup.OnGunImageLoaded
// (Final, Native, Protected)
void APortalWarsGunPickup::OnGunImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGunPickup.OnGunImageLoaded");

	APortalWarsGunPickup_OnGunImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGunPickup.OnComponentHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsGunPickup::OnComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGunPickup.OnComponentHit");

	APortalWarsGunPickup_OnComponentHit_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.FlagItemPickup.OnRep_Team
// (Final, Native, Protected)
void AFlagItemPickup::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.FlagItemPickup.OnRep_Team");

	AFlagItemPickup_OnRep_Team_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.ProjectileGun.ServerSpawnProjectile
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     Origin                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal Dir                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ProjectileID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AProjectileGun::ServerSpawnProjectile(const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantizeNormal& Dir, unsigned char ProjectileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.ProjectileGun.ServerSpawnProjectile");

	AProjectileGun_ServerSpawnProjectile_Params params;
	params.Origin = Origin;
	params.Dir = Dir;
	params.ProjectileID = ProjectileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.ProjectileGun.ServerHandleExplosionLocal
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// unsigned char                  ProjectileID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AProjectileGun::ServerHandleExplosionLocal(const struct FHitResult& Impact, unsigned char ProjectileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.ProjectileGun.ServerHandleExplosionLocal");

	AProjectileGun_ServerHandleExplosionLocal_Params params;
	params.Impact = Impact;
	params.ProjectileID = ProjectileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetValue");

	UIntegerSpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetMinValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetMinValue");

	UIntegerSpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetMinSliderValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetMinSliderValue");

	UIntegerSpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetMaxValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetMaxValue");

	UIntegerSpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetMaxSliderValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetMaxSliderValue");

	UIntegerSpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm, NativeAccessSpecifierPublic)
void UIntegerSpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.SetForegroundColor");

	UIntegerSpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(int InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	UIntegerSpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIntegerSpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	UIntegerSpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UIntegerSpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	UIntegerSpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UIntegerSpinBox::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.GetValue");

	UIntegerSpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.IntegerSpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UIntegerSpinBox::GetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.GetMinValue");

	UIntegerSpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.IntegerSpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UIntegerSpinBox::GetMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.GetMinSliderValue");

	UIntegerSpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.IntegerSpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UIntegerSpinBox::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.GetMaxValue");

	UIntegerSpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.IntegerSpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UIntegerSpinBox::GetMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.GetMaxSliderValue");

	UIntegerSpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.IntegerSpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
void UIntegerSpinBox::ClearMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.ClearMinValue");

	UIntegerSpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
void UIntegerSpinBox::ClearMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.ClearMinSliderValue");

	UIntegerSpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
void UIntegerSpinBox::ClearMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.ClearMaxValue");

	UIntegerSpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.IntegerSpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
void UIntegerSpinBox::ClearMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.IntegerSpinBox.ClearMaxSliderValue");

	UIntegerSpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.MainMenuGameMode.OnPartyUpdate
// (Final, Native, Protected)
void AMainMenuGameMode::OnPartyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.MainMenuGameMode.OnPartyUpdate");

	AMainMenuGameMode_OnPartyUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBasePlayerController.ServerKickForInactivity
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void APortalWarsBasePlayerController::ServerKickForInactivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBasePlayerController.ServerKickForInactivity");

	APortalWarsBasePlayerController_ServerKickForInactivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBasePlayerController.KickForInactivity
// (Final, Native, Protected)
void APortalWarsBasePlayerController::KickForInactivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBasePlayerController.KickForInactivity");

	APortalWarsBasePlayerController_KickForInactivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.MainMenuPlayerController.InitMainMenu
// (Final, Native, Public)
void AMainMenuPlayerController::InitMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.MainMenuPlayerController.InitMainMenu");

	AMainMenuPlayerController_InitMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.MainMenuPlayerController.InitEquippedSkins
// (Final, Native, Public, Const)
void AMainMenuPlayerController::InitEquippedSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.MainMenuPlayerController.InitEquippedSkins");

	AMainMenuPlayerController_InitEquippedSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.MainMenuPlayerController.ClientReturnedToMenus
// (Final, Native, Public)
void AMainMenuPlayerController::ClientReturnedToMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.MainMenuPlayerController.ClientReturnedToMenus");

	AMainMenuPlayerController_ClientReturnedToMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.MultiKillGun.ServerNotifyHits
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FLineTraceHitResult> lineHits                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReticleSpread                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLineTraceInfo>  bulletTraces                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AMultiKillGun::ServerNotifyHits(TArray<struct FLineTraceHitResult> lineHits, float ReticleSpread, TArray<struct FLineTraceInfo> bulletTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.MultiKillGun.ServerNotifyHits");

	AMultiKillGun_ServerNotifyHits_Params params;
	params.lineHits = lineHits;
	params.ReticleSpread = ReticleSpread;
	params.bulletTraces = bulletTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PlasmaRifle.OnRep_CurrentHeatLevel
// (Final, Native, Public)
void APlasmaRifle::OnRep_CurrentHeatLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PlasmaRifle.OnRep_CurrentHeatLevel");

	APlasmaRifle_OnRep_CurrentHeatLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.UpdateSkins
// (Final, Native, Public)
void APortal::UpdateSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.UpdateSkins");

	APortal_UpdateSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.portalShrink_StartAnim
// (Final, Native, Public)
void APortal::portalShrink_StartAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.portalShrink_StartAnim");

	APortal_portalShrink_StartAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.portalGrow_StartAnim
// (Final, Native, Public)
void APortal::portalGrow_StartAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.portalGrow_StartAnim");

	APortal_portalGrow_StartAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.OnRep_MyPawn
// (Final, Native, Public)
void APortal::OnRep_MyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.OnRep_MyPawn");

	APortal_OnRep_MyPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.initializePortalColor
// (Final, Native, Public)
void APortal::initializePortalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.initializePortalColor");

	APortal_initializePortalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.initializePortal
// (Final, Native, Public)
void APortal::initializePortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.initializePortal");

	APortal_initializePortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.EndOverlapSmallBox
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortal::EndOverlapSmallBox(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.EndOverlapSmallBox");

	APortal_EndOverlapSmallBox_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.EndOverlapLargeBox
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortal::EndOverlapLargeBox(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.EndOverlapLargeBox");

	APortal_EndOverlapLargeBox_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.BeginOverlapSmallBox
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortal::BeginOverlapSmallBox(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.BeginOverlapSmallBox");

	APortal_BeginOverlapSmallBox_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Portal.BeginOverlapLargeBox
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortal::BeginOverlapLargeBox(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Portal.BeginOverlapLargeBox");

	APortal_BeginOverlapLargeBox_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalLauncher.spawnPortalFX_Multicast
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FVector_NetQuantize     EndPoint                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLeftPortal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalLauncher::spawnPortalFX_Multicast(const struct FVector_NetQuantize& EndPoint, bool bIsLeftPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalLauncher.spawnPortalFX_Multicast");

	APortalLauncher_spawnPortalFX_Multicast_Params params;
	params.EndPoint = EndPoint;
	params.bIsLeftPortal = bIsLeftPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalLauncher.ServerClosePortal
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsLeftPortal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalLauncher::ServerClosePortal(bool bIsLeftPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalLauncher.ServerClosePortal");

	APortalLauncher_ServerClosePortal_Params params;
	params.bIsLeftPortal = bIsLeftPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalLauncher.ServerAttemptToSpawnPortal
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// bool                           bIsLeftPortal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     StartTrace                     (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ShootDir                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalLauncher::ServerAttemptToSpawnPortal(bool bIsLeftPortal, const struct FVector_NetQuantize& StartTrace, const struct FVector& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalLauncher.ServerAttemptToSpawnPortal");

	APortalLauncher_ServerAttemptToSpawnPortal_Params params;
	params.bIsLeftPortal = bIsLeftPortal;
	params.StartTrace = StartTrace;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalLauncher.DelaySpawnPortalFX
// (Final, Native, Protected)
// Parameters:
// struct FVector_NetQuantize     EndPoint                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLeftPortal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalLauncher::DelaySpawnPortalFX(const struct FVector_NetQuantize& EndPoint, bool bIsLeftPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalLauncher.DelaySpawnPortalFX");

	APortalLauncher_DelaySpawnPortalFX_Params params;
	params.EndPoint = EndPoint;
	params.bIsLeftPortal = bIsLeftPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWall.disablePortalWall
// (Native, Protected)
void APortalWall::disablePortalWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWall.disablePortalWall");

	APortalWall_disablePortalWall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.UpdateControllerVisibility
// (Final, Native, Protected, BlueprintCallable)
void UPortalWarsUserWidget::UpdateControllerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.UpdateControllerVisibility");

	UPortalWarsUserWidget_UpdateControllerVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsUsingController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsUserWidget::OnControllerStatusChanged_BP(bool bIsUsingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged_BP");

	UPortalWarsUserWidget_OnControllerStatusChanged_BP_Params params;
	params.bIsUsingController = bIsUsingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged
// (Native, Protected)
void UPortalWarsUserWidget::OnControllerStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged");

	UPortalWarsUserWidget_OnControllerStatusChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusReceived
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsUserWidget::OnChildWidgetFocusReceived(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusReceived");

	UPortalWarsUserWidget_OnChildWidgetFocusReceived_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusLost
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsUserWidget::OnChildWidgetFocusLost(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusLost");

	UPortalWarsUserWidget_OnChildWidgetFocusLost_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusReceived
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsUserWidget::OnChildButtonFocusReceived(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusReceived");

	UPortalWarsUserWidget_OnChildButtonFocusReceived_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusLost
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsUserWidget::OnChildButtonFocusLost(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusLost");

	UPortalWarsUserWidget_OnChildButtonFocusLost_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUserWidget.IsLocalPlayerUsingController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsUserWidget::IsLocalPlayerUsingController()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.IsLocalPlayerUsingController");

	UPortalWarsUserWidget_IsLocalPlayerUsingController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsUserWidget.GetWidgetToFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPortalWarsUserWidget::GetWidgetToFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.GetWidgetToFocus");

	UPortalWarsUserWidget_GetWidgetToFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsUserWidget.GetControllerVisibility
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsUserWidget::GetControllerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUserWidget.GetControllerVisibility");

	UPortalWarsUserWidget_GetControllerVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsMenuWidget.OnMenuOpenedBP
// (Event, Protected, BlueprintEvent)
void UPortalWarsMenuWidget::OnMenuOpenedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnMenuOpenedBP");

	UPortalWarsMenuWidget_OnMenuOpenedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnMenuOpened
// (Native, Public, BlueprintCallable)
void UPortalWarsMenuWidget::OnMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnMenuOpened");

	UPortalWarsMenuWidget_OnMenuOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnMenuClosedBP
// (Event, Protected, BlueprintEvent)
void UPortalWarsMenuWidget::OnMenuClosedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnMenuClosedBP");

	UPortalWarsMenuWidget_OnMenuClosedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnMenuClosed
// (Native, Public, BlueprintCallable)
void UPortalWarsMenuWidget::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnMenuClosed");

	UPortalWarsMenuWidget_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnChildMenuWidgetCreated
// (Native, Protected)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsMenuWidget::OnChildMenuWidgetCreated(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnChildMenuWidgetCreated");

	UPortalWarsMenuWidget_OnChildMenuWidgetCreated_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnChildMenuBackButtonClicked
// (Native, Protected)
void UPortalWarsMenuWidget::OnChildMenuBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnChildMenuBackButtonClicked");

	UPortalWarsMenuWidget_OnChildMenuBackButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.OnBackButtonClickedInternal
// (Native, Protected)
void UPortalWarsMenuWidget::OnBackButtonClickedInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.OnBackButtonClickedInternal");

	UPortalWarsMenuWidget_OnBackButtonClickedInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.GoToState
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsMenuWidget::GoToState(unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.GoToState");

	UPortalWarsMenuWidget_GoToState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuWidget.ForceAnimationToEnd
// (Final, Native, Protected)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsMenuWidget::ForceAnimationToEnd(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuWidget.ForceAnimationToEnd");

	UPortalWarsMenuWidget_ForceAnimationToEnd_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.UpdateFriendCodeText
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::UpdateFriendCodeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.UpdateFriendCodeText");

	UPortalWarsAddFriendsWidget_UpdateFriendCodeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.RefreshWidget");

	UPortalWarsAddFriendsWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.RefreshSendRequestButton
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::RefreshSendRequestButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.RefreshSendRequestButton");

	UPortalWarsAddFriendsWidget_RefreshSendRequestButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.RefreshFriendRequests
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::RefreshFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.RefreshFriendRequests");

	UPortalWarsAddFriendsWidget_RefreshFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnSendRequestButtonClicked
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::OnSendRequestButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnSendRequestButtonClicked");

	UPortalWarsAddFriendsWidget_OnSendRequestButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryDeclined
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAddFriendsWidget::OnRequestEntryDeclined(class UPortalWarsEntryWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryDeclined");

	UPortalWarsAddFriendsWidget_OnRequestEntryDeclined_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryAccepted
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAddFriendsWidget::OnRequestEntryAccepted(class UPortalWarsEntryWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryAccepted");

	UPortalWarsAddFriendsWidget_OnRequestEntryAccepted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnPrivelegesUpdated
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::OnPrivelegesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnPrivelegesUpdated");

	UPortalWarsAddFriendsWidget_OnPrivelegesUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnFriendCodeTextInputFocusChanged
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAddFriendsWidget::OnFriendCodeTextInputFocusChanged(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnFriendCodeTextInputFocusChanged");

	UPortalWarsAddFriendsWidget_OnFriendCodeTextInputFocusChanged_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.OnCopyButtonClicked
// (Final, Native, Protected)
void UPortalWarsAddFriendsWidget::OnCopyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.OnCopyButtonClicked");

	UPortalWarsAddFriendsWidget_OnCopyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAddFriendsWidget.GetSendRequestButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsAddFriendsWidget::GetSendRequestButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAddFriendsWidget.GetSendRequestButtonEnabled");

	UPortalWarsAddFriendsWidget_GetSendRequestButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsAnimInstance.PlayWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAnimInstance::PlayWwiseEvent(class UAkAudioEvent* WwiseEvent, class UPortalWarsAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstance.PlayWwiseEvent");

	UPortalWarsAnimInstance_PlayWwiseEvent_Params params;
	params.WwiseEvent = WwiseEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstance.FootstepEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isLanding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAnimInstance::FootstepEvent(bool isLanding, class UAkAudioEvent* WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstance.FootstepEvent");

	UPortalWarsAnimInstance_FootstepEvent_Params params;
	params.isLanding = isLanding;
	params.WwiseEvent = WwiseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.PlayWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAnimInstanceV2::PlayWwiseEvent(class UAkAudioEvent* WwiseEvent, class UPortalWarsAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.PlayWwiseEvent");

	UPortalWarsAnimInstanceV2_PlayWwiseEvent_Params params;
	params.WwiseEvent = WwiseEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.FootstepEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsLanding                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsAnimInstanceV2::FootstepEvent(bool bIsLanding)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.FootstepEvent");

	UPortalWarsAnimInstanceV2_FootstepEvent_Params params;
	params.bIsLanding = bIsLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Unland
// (Final, Native, Protected)
void UPortalWarsAnimInstanceV2::AnimNotify_Unland()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Unland");

	UPortalWarsAnimInstanceV2_AnimNotify_Unland_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Land
// (Final, Native, Protected)
void UPortalWarsAnimInstanceV2::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Land");

	UPortalWarsAnimInstanceV2_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CanTurn
// (Final, Native, Protected)
void UPortalWarsAnimInstanceV2::AnimNotify_CanTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CanTurn");

	UPortalWarsAnimInstanceV2_AnimNotify_CanTurn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CantTurn
// (Final, Native, Protected)
void UPortalWarsAnimInstanceV2::AnimNotify_CantTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CantTurn");

	UPortalWarsAnimInstanceV2_AnimNotify_CantTurn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSettingsSubWidget.ResetToDefaults
// (Native, Public)
void UPortalWarsSettingsSubWidget::ResetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSettingsSubWidget.ResetToDefaults");

	UPortalWarsSettingsSubWidget_ResetToDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSettingsSubWidget.OnValueChanged
// (Native, Protected)
void UPortalWarsSettingsSubWidget::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSettingsSubWidget.OnValueChanged");

	UPortalWarsSettingsSubWidget_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSettingsSubWidget.OnDiscardAccepted
// (Final, Native, Protected)
void UPortalWarsSettingsSubWidget::OnDiscardAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSettingsSubWidget.OnDiscardAccepted");

	UPortalWarsSettingsSubWidget_OnDiscardAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSettingsSubWidget.ApplySettings
// (Native, Public)
void UPortalWarsSettingsSubWidget::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSettingsSubWidget.ApplySettings");

	UPortalWarsSettingsSubWidget_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDialogWidget.SetCloseButtonsEnabled
// (Native, Protected)
// Parameters:
// bool                           InIsEnabled                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsDialogWidget::SetCloseButtonsEnabled(bool InIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDialogWidget.SetCloseButtonsEnabled");

	UPortalWarsDialogWidget_SetCloseButtonsEnabled_Params params;
	params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDialogWidget.OnMinLifetimeReached
// (Final, Native, Protected)
void UPortalWarsDialogWidget::OnMinLifetimeReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDialogWidget.OnMinLifetimeReached");

	UPortalWarsDialogWidget_OnMinLifetimeReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDialogWidget.CloseDialog
// (Native, Public, BlueprintCallable)
void UPortalWarsDialogWidget::CloseDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDialogWidget.CloseDialog");

	UPortalWarsDialogWidget_CloseDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBaseGameState.OnRepRemainingTime
// (Native, Protected)
void APortalWarsBaseGameState::OnRepRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBaseGameState.OnRepRemainingTime");

	APortalWarsBaseGameState_OnRepRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBaseGameState.OnRep_GameConfig
// (Native, Protected)
void APortalWarsBaseGameState::OnRep_GameConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBaseGameState.OnRep_GameConfig");

	APortalWarsBaseGameState_OnRep_GameConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBaseGameState.GetSortedPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSortByScore                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APortalWarsPlayerState*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class APortalWarsPlayerState*> APortalWarsBaseGameState::GetSortedPlayers(int TeamNum, bool bSortByScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBaseGameState.GetSortedPlayers");

	APortalWarsBaseGameState_GetSortedPlayers_Params params;
	params.TeamNum = TeamNum;
	params.bSortByScore = bSortByScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBaseGameState.GetRemainingTime
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APortalWarsBaseGameState::GetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBaseGameState.GetRemainingTime");

	APortalWarsBaseGameState_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBaseGameState.GetNumberOfPlayersOnTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APortalWarsBaseGameState::GetNumberOfPlayersOnTeam(int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBaseGameState.GetNumberOfPlayersOnTeam");

	APortalWarsBaseGameState_GetNumberOfPlayersOnTeam_Params params;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsButtonWidget.SetNewItems_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            InNewItems                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsButtonWidget::SetNewItems_BP(int InNewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.SetNewItems_BP");

	UPortalWarsButtonWidget_SetNewItems_BP_Params params;
	params.InNewItems = InNewItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.RefreshEnabledState
// (Native, Protected)
void UPortalWarsButtonWidget::RefreshEnabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.RefreshEnabledState");

	UPortalWarsButtonWidget_RefreshEnabledState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.OnGamepadButtonPressed
// (Final, Native, Private)
void UPortalWarsButtonWidget::OnGamepadButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.OnGamepadButtonPressed");

	UPortalWarsButtonWidget_OnGamepadButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.OnButtonUnhovered
// (Native, Protected)
void UPortalWarsButtonWidget::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.OnButtonUnhovered");

	UPortalWarsButtonWidget_OnButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.OnButtonHovered
// (Native, Protected)
void UPortalWarsButtonWidget::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.OnButtonHovered");

	UPortalWarsButtonWidget_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.OnButtonDoubleClicked
// (Native, Protected)
void UPortalWarsButtonWidget::OnButtonDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.OnButtonDoubleClicked");

	UPortalWarsButtonWidget_OnButtonDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.OnButtonClicked
// (Native, Protected)
void UPortalWarsButtonWidget::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.OnButtonClicked");

	UPortalWarsButtonWidget_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsButtonWidget.IsEnabled
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsButtonWidget::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.IsEnabled");

	UPortalWarsButtonWidget_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsButtonWidget.GetNewVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsButtonWidget::GetNewVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.GetNewVisibility");

	UPortalWarsButtonWidget_GetNewVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsButtonWidget.GetNewText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsButtonWidget::GetNewText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.GetNewText");

	UPortalWarsButtonWidget_GetNewText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsButtonWidget.GetGamepadKeyIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsButtonWidget::GetGamepadKeyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsButtonWidget.GetGamepadKeyIcon");

	UPortalWarsButtonWidget_GetGamepadKeyIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsEntryWidget.RefreshEntry_BP
// (Event, Public, BlueprintEvent)
void UPortalWarsEntryWidget::RefreshEntry_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEntryWidget.RefreshEntry_BP");

	UPortalWarsEntryWidget_RefreshEntry_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEntryWidget.RefreshEntry
// (Native, Public)
void UPortalWarsEntryWidget::RefreshEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEntryWidget.RefreshEntry");

	UPortalWarsEntryWidget_RefreshEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardVisibility
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsRewardEntryWidget::GetRewardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardVisibility");

	UPortalWarsRewardEntryWidget_GetRewardVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardValueText
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardEntryWidget::GetRewardValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardValueText");

	UPortalWarsRewardEntryWidget_GetRewardValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardTitleText
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardEntryWidget::GetRewardTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardTitleText");

	UPortalWarsRewardEntryWidget_GetRewardTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardEntryWidget::GetRewardRarityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityText");

	UPortalWarsRewardEntryWidget_GetRewardRarityText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsRewardEntryWidget::GetRewardRarityIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityIcon");

	UPortalWarsRewardEntryWidget_GetRewardRarityIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsRewardEntryWidget::GetRewardRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityColor");

	UPortalWarsRewardEntryWidget_GetRewardRarityColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardFullTitleText
// (Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardEntryWidget::GetRewardFullTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardFullTitleText");

	UPortalWarsRewardEntryWidget_GetRewardFullTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardDescriptionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardEntryWidget::GetRewardDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRewardDescriptionText");

	UPortalWarsRewardEntryWidget_GetRewardDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityTitleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsRewardEntryWidget::GetRarityTitleColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRarityTitleColor");

	UPortalWarsRewardEntryWidget_GetRarityTitleColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityScrim
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsRewardEntryWidget::GetRarityScrim()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRarityScrim");

	UPortalWarsRewardEntryWidget_GetRarityScrim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBorderColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsRewardEntryWidget::GetRarityBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBorderColor");

	UPortalWarsRewardEntryWidget_GetRarityBorderColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBG
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsRewardEntryWidget::GetRarityBG()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBG");

	UPortalWarsRewardEntryWidget_GetRarityBG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardPassEntryWidget.GetLockedVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsRewardPassEntryWidget::GetLockedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassEntryWidget.GetLockedVisibility");

	UPortalWarsRewardPassEntryWidget_GetLockedVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardPassEntryWidget.GetLevelText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardPassEntryWidget::GetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassEntryWidget.GetLevelText");

	UPortalWarsRewardPassEntryWidget_GetLevelText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.RefreshWidget
// (Native, Protected)
void UPortalWarsCareerProgressWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.RefreshWidget");

	UPortalWarsCareerProgressWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCareerProgressWidget.InitProfileData
// (Final, Native, Protected)
void UPortalWarsCareerProgressWidget::InitProfileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.InitProfileData");

	UPortalWarsCareerProgressWidget_InitProfileData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionProgressPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsCareerProgressWidget::GetProgressionProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionProgressPercent");

	UPortalWarsCareerProgressWidget_GetProgressionProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionMaxLevelVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCareerProgressWidget::GetProgressionMaxLevelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionMaxLevelVisibility");

	UPortalWarsCareerProgressWidget_GetProgressionMaxLevelVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelTotalText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCareerProgressWidget::GetProgressionLevelTotalText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelTotalText");

	UPortalWarsCareerProgressWidget_GetProgressionLevelTotalText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelProgressText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCareerProgressWidget::GetProgressionLevelProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelProgressText");

	UPortalWarsCareerProgressWidget_GetProgressionLevelProgressText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsCareerProgressWidget::GetProgressionLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevel");

	UPortalWarsCareerProgressWidget_GetProgressionLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassProgressPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsCareerProgressWidget::GetBattlePassProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassProgressPercent");

	UPortalWarsCareerProgressWidget_GetBattlePassProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassMaxLevelVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCareerProgressWidget::GetBattlePassMaxLevelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassMaxLevelVisibility");

	UPortalWarsCareerProgressWidget_GetBattlePassMaxLevelVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelTotalText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCareerProgressWidget::GetBattlePassLevelTotalText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelTotalText");

	UPortalWarsCareerProgressWidget_GetBattlePassLevelTotalText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelProgressText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCareerProgressWidget::GetBattlePassLevelProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelProgressText");

	UPortalWarsCareerProgressWidget_GetBattlePassLevelProgressText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsCareerProgressWidget::GetBattlePassLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevel");

	UPortalWarsCareerProgressWidget_GetBattlePassLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBattlePassPanelWidget.OnViewBattlePassClicked
// (Final, Native, Protected)
void UPortalWarsBattlePassPanelWidget::OnViewBattlePassClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBattlePassPanelWidget.OnViewBattlePassClicked");

	UPortalWarsBattlePassPanelWidget_OnViewBattlePassClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBattlePassPanelWidget.GetUnlockedText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsBattlePassPanelWidget::GetUnlockedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBattlePassPanelWidget.GetUnlockedText");

	UPortalWarsBattlePassPanelWidget_GetUnlockedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBattlePassPanelWidget.GetRewardTitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsBattlePassPanelWidget::GetRewardTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBattlePassPanelWidget.GetRewardTitleText");

	UPortalWarsBattlePassPanelWidget_GetRewardTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInspectWidget.UpdatePreview
// (Native, Public)
// Parameters:
// bool                           bClearPrevious                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsInspectWidget::UpdatePreview(bool bClearPrevious)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.UpdatePreview");

	UPortalWarsInspectWidget_UpdatePreview_Params params;
	params.bClearPrevious = bClearPrevious;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInspectWidget.UpdateEquipState
// (Native, Protected)
void UPortalWarsInspectWidget::UpdateEquipState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.UpdateEquipState");

	UPortalWarsInspectWidget_UpdateEquipState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInspectWidget.PreviewItem
// (Native, Public)
void UPortalWarsInspectWidget::PreviewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.PreviewItem");

	UPortalWarsInspectWidget_PreviewItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInspectWidget.OnEquipButtonClicked
// (Native, Protected)
void UPortalWarsInspectWidget::OnEquipButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.OnEquipButtonClicked");

	UPortalWarsInspectWidget_OnEquipButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInspectWidget.OnCustomizationsUpdate
// (Native, Protected)
void UPortalWarsInspectWidget::OnCustomizationsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.OnCustomizationsUpdate");

	UPortalWarsInspectWidget_OnCustomizationsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInspectWidget.GetRarityText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsInspectWidget::GetRarityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.GetRarityText");

	UPortalWarsInspectWidget_GetRarityText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInspectWidget.GetRarityIcon
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsInspectWidget::GetRarityIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.GetRarityIcon");

	UPortalWarsInspectWidget_GetRarityIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInspectWidget.GetRarityColor
// (Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsInspectWidget::GetRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.GetRarityColor");

	UPortalWarsInspectWidget_GetRarityColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInspectWidget.GetDisplayName
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsInspectWidget::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInspectWidget.GetDisplayName");

	UPortalWarsInspectWidget_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRewardPassWidget::OnRewardEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntrySelected");

	UPortalWarsRewardPassWidget_OnRewardEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntryScrolledTo
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRewardPassWidget::OnRewardEntryScrolledTo(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntryScrolledTo");

	UPortalWarsRewardPassWidget_OnRewardEntryScrolledTo_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardPassWidget.OnProgressionUpdate
// (Native, Protected)
void UPortalWarsRewardPassWidget::OnProgressionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.OnProgressionUpdate");

	UPortalWarsRewardPassWidget_OnProgressionUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardPassWidget.GetSelectedRewardData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRewardData             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FRewardData UPortalWarsRewardPassWidget::GetSelectedRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.GetSelectedRewardData");

	UPortalWarsRewardPassWidget_GetSelectedRewardData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardPassWidget.GetRewardEntryWidget
// (Final, Native, Protected)
// Parameters:
// struct FString                 WidgetId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPortalWarsRewardPassWidget::GetRewardEntryWidget(const struct FString& WidgetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.GetRewardEntryWidget");

	UPortalWarsRewardPassWidget_GetRewardEntryWidget_Params params;
	params.WidgetId = WidgetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardPassWidget.GetCurrentLevelText
// (Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRewardPassWidget::GetCurrentLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardPassWidget.GetCurrentLevelText");

	UPortalWarsRewardPassWidget_GetCurrentLevelText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsBattlePassWidget::GetPurchaseButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonVisibility");

	UPortalWarsBattlePassWidget_GetPurchaseButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsBattlePassWidget::GetPurchaseButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonEnabled");

	UPortalWarsBattlePassWidget_GetPurchaseButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBlockedPlayersWidget.RefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsBlockedPlayersWidget::RefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBlockedPlayersWidget.RefreshPlayersList");

	UPortalWarsBlockedPlayersWidget_RefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBlockedPlayersWidget.OnPlayerEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsBlockedPlayersWidget::OnPlayerEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBlockedPlayersWidget.OnPlayerEntrySelected");

	UPortalWarsBlockedPlayersWidget_OnPlayerEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBlockedPlayersWidget.GetRefreshButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsBlockedPlayersWidget::GetRefreshButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBlockedPlayersWidget.GetRefreshButtonEnabled");

	UPortalWarsBlockedPlayersWidget_GetRefreshButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBlockedPlayersWidget.DelayedRefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsBlockedPlayersWidget::DelayedRefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBlockedPlayersWidget.DelayedRefreshPlayersList");

	UPortalWarsBlockedPlayersWidget_DelayedRefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.UpdateSkins
// (Final, Native, Protected)
void APortalWarsCharacter::UpdateSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.UpdateSkins");

	APortalWarsCharacter_UpdateSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.updateCollisionProfiles
// (Final, Native, Protected)
void APortalWarsCharacter::updateCollisionProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.updateCollisionProfiles");

	APortalWarsCharacter_updateCollisionProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.StopEmoteInMenu
// (Final, Native, Protected)
void APortalWarsCharacter::StopEmoteInMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.StopEmoteInMenu");

	APortalWarsCharacter_StopEmoteInMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.StopEmote
// (Final, Native, Protected)
void APortalWarsCharacter::StopEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.StopEmote");

	APortalWarsCharacter_StopEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.SpawnSpray_Multicast
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsCharacter::SpawnSpray_Multicast(const struct FVector_NetQuantize& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.SpawnSpray_Multicast");

	APortalWarsCharacter_SpawnSpray_Multicast_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerTeleport
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FTransform_NetQuantize  CharacterTransform_world       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     NewVel                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   NewControlRotation             (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class APortal*                 PortalUsed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerTeleport(const struct FTransform_NetQuantize& CharacterTransform_world, const struct FVector_NetQuantize& NewVel, const struct FQuat& NewControlRotation, class APortal* PortalUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerTeleport");

	APortalWarsCharacter_ServerTeleport_Params params;
	params.CharacterTransform_world = CharacterTransform_world;
	params.NewVel = NewVel;
	params.NewControlRotation = NewControlRotation;
	params.PortalUsed = PortalUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerStartMelee
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APortalWarsCharacter*    InEnemyToMelee                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     InVelocity                     (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerStartMelee(class APortalWarsCharacter* InEnemyToMelee, const struct FVector_NetQuantize& InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerStartMelee");

	APortalWarsCharacter_ServerStartMelee_Params params;
	params.InEnemyToMelee = InEnemyToMelee;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerSpawnSpray
// (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerSpawnSpray(const struct FVector_NetQuantize& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerSpawnSpray");

	APortalWarsCharacter_ServerSpawnSpray_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerSetZooming
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bNewZooming                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerSetZooming(bool bNewZooming)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerSetZooming");

	APortalWarsCharacter_ServerSetZooming_Params params;
	params.bNewZooming = bNewZooming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerSetOverlappingPortalCollisionProfiles
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void APortalWarsCharacter::ServerSetOverlappingPortalCollisionProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerSetOverlappingPortalCollisionProfiles");

	APortalWarsCharacter_ServerSetOverlappingPortalCollisionProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerSetDefaultCollisionProfiles
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void APortalWarsCharacter::ServerSetDefaultCollisionProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerSetDefaultCollisionProfiles");

	APortalWarsCharacter_ServerSetDefaultCollisionProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerRequestSuicide
// (Net, Native, Event, Public, NetServer, NetValidate)
void APortalWarsCharacter::ServerRequestSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerRequestSuicide");

	APortalWarsCharacter_ServerRequestSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerPlayEmote
// (Net, Native, Event, Protected, NetServer, NetValidate)
void APortalWarsCharacter::ServerPlayEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerPlayEmote");

	APortalWarsCharacter_ServerPlayEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerInterruptEmote
// (Net, Native, Event, Protected, NetServer, NetValidate)
void APortalWarsCharacter::ServerInterruptEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerInterruptEmote");

	APortalWarsCharacter_ServerInterruptEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerHandleTeabagging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<class APortalWarsCharacter*> deadBodies                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerHandleTeabagging(TArray<class APortalWarsCharacter*> deadBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerHandleTeabagging");

	APortalWarsCharacter_ServerHandleTeabagging_Params params;
	params.deadBodies = deadBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerFinishMelee
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize100  EndingLocation                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerFinishMelee(const struct FVector_NetQuantize100& EndingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerFinishMelee");

	APortalWarsCharacter_ServerFinishMelee_Params params;
	params.EndingLocation = EndingLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerEquipWeapon
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AGun*                    NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerEquipWeapon(class AGun* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerEquipWeapon");

	APortalWarsCharacter_ServerEquipWeapon_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerAttemptManualPickup
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APortalWarsGunPickup*    GunPickup                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     CurrentWeaponLocation          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal CurrentWeaponRotation          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerAttemptManualPickup(class APortalWarsGunPickup* GunPickup, const struct FVector_NetQuantize& CurrentWeaponLocation, const struct FVector_NetQuantizeNormal& CurrentWeaponRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerAttemptManualPickup");

	APortalWarsCharacter_ServerAttemptManualPickup_Params params;
	params.GunPickup = GunPickup;
	params.CurrentWeaponLocation = CurrentWeaponLocation;
	params.CurrentWeaponRotation = CurrentWeaponRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ServerApplyMeleeDamage
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APortalWarsCharacter*    EnemyToDamage                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ServerApplyMeleeDamage(class APortalWarsCharacter* EnemyToDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ServerApplyMeleeDamage");

	APortalWarsCharacter_ServerApplyMeleeDamage_Params params;
	params.EnemyToDamage = EnemyToDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.RequestSuicide
// (Final, Native, Public, BlueprintCallable)
void APortalWarsCharacter::RequestSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.RequestSuicide");

	APortalWarsCharacter_RequestSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.PlayMeleeCameraShake
// (Final, Native, Protected)
void APortalWarsCharacter::PlayMeleeCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.PlayMeleeCameraShake");

	APortalWarsCharacter_PlayMeleeCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.PlayEmoteInMenu_Internal
// (Final, Native, Protected)
void APortalWarsCharacter::PlayEmoteInMenu_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.PlayEmoteInMenu_Internal");

	APortalWarsCharacter_PlayEmoteInMenu_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.PlayEmote_Multicast
// (Net, Native, Event, NetMulticast, Protected)
void APortalWarsCharacter::PlayEmote_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.PlayEmote_Multicast");

	APortalWarsCharacter_PlayEmote_Multicast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnSpray
// (Native, Public)
void APortalWarsCharacter::OnSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnSpray");

	APortalWarsCharacter_OnSpray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnReplayCameraModeChanged
// (Final, Native, Public)
// Parameters:
// PortalWars_EReplayCameraMode   NewReplayCameraMode            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::OnReplayCameraModeChanged(PortalWars_EReplayCameraMode NewReplayCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnReplayCameraModeChanged");

	APortalWarsCharacter_OnReplayCameraModeChanged_Params params;
	params.NewReplayCameraMode = NewReplayCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_PortalGun
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_PortalGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_PortalGun");

	APortalWarsCharacter_OnRep_PortalGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_LastCausedHitInfo
// (Final, Native, Public)
void APortalWarsCharacter::OnRep_LastCausedHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_LastCausedHitInfo");

	APortalWarsCharacter_OnRep_LastCausedHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_IsZooming
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_IsZooming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_IsZooming");

	APortalWarsCharacter_OnRep_IsZooming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_IsThrusting
// (Native, Public)
void APortalWarsCharacter::OnRep_IsThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_IsThrusting");

	APortalWarsCharacter_OnRep_IsThrusting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_IsSprinting
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_IsSprinting");

	APortalWarsCharacter_OnRep_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_Inventory
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_Inventory");

	APortalWarsCharacter_OnRep_Inventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_IgnoreServerCorrections
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_IgnoreServerCorrections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_IgnoreServerCorrections");

	APortalWarsCharacter_OnRep_IgnoreServerCorrections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_Health
// (Final, Native, Public)
void APortalWarsCharacter::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_Health");

	APortalWarsCharacter_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_GrenadeLauncher
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_GrenadeLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_GrenadeLauncher");

	APortalWarsCharacter_OnRep_GrenadeLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_CurTimeOutOfBounds
// (Final, Native, Protected)
void APortalWarsCharacter::OnRep_CurTimeOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_CurTimeOutOfBounds");

	APortalWarsCharacter_OnRep_CurTimeOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnRep_CurrentWeapon
// (Final, Native, Protected)
// Parameters:
// class AGun*                    LastWeapon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::OnRep_CurrentWeapon(class AGun* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnRep_CurrentWeapon");

	APortalWarsCharacter_OnRep_CurrentWeapon_Params params;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnKillcamStarted
// (Final, Native, Public)
void APortalWarsCharacter::OnKillcamStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnKillcamStarted");

	APortalWarsCharacter_OnKillcamStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnKillcamEnded
// (Final, Native, Public)
void APortalWarsCharacter::OnKillcamEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnKillcamEnded");

	APortalWarsCharacter_OnKillcamEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnGlobalVisionChanged
// (Final, Native, Public)
void APortalWarsCharacter::OnGlobalVisionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnGlobalVisionChanged");

	APortalWarsCharacter_OnGlobalVisionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnGameConfigUpdated
// (Native, Protected)
void APortalWarsCharacter::OnGameConfigUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnGameConfigUpdated");

	APortalWarsCharacter_OnGameConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnDeath
// (Final, Native, Public)
void APortalWarsCharacter::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnDeath");

	APortalWarsCharacter_OnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.OnComponentHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsCharacter::OnComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.OnComponentHit");

	APortalWarsCharacter_OnComponentHit_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.MoveAndPostToMoveableAk
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::MoveAndPostToMoveableAk(class UAkAudioEvent* AkEvent, const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.MoveAndPostToMoveableAk");

	APortalWarsCharacter_MoveAndPostToMoveableAk_Params params;
	params.AkEvent = AkEvent;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.IsZooming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsZooming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsZooming");

	APortalWarsCharacter_IsZooming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsThirdPerson
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsThirdPerson");

	APortalWarsCharacter_IsThirdPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsSprinting");

	APortalWarsCharacter_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsRecentlyRendered(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsRecentlyRendered");

	APortalWarsCharacter_IsRecentlyRendered_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsLocallyViewed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsLocallyViewed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsLocallyViewed");

	APortalWarsCharacter_IsLocallyViewed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsFirstPerson
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsFirstPerson");

	APortalWarsCharacter_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsFiring
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsFiring");

	APortalWarsCharacter_IsFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsEnemyFor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APortalWarsCharacter*    Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsEnemyFor(class APortalWarsCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsEnemyFor");

	APortalWarsCharacter_IsEnemyFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsDead");

	APortalWarsCharacter_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsCharacter::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.IsAlive");

	APortalWarsCharacter_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.InterruptEmote_Multicast
// (Net, Native, Event, NetMulticast, Protected)
void APortalWarsCharacter::InterruptEmote_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.InterruptEmote_Multicast");

	APortalWarsCharacter_InterruptEmote_Multicast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.GetWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGun*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGun* APortalWarsCharacter::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetWeapon");

	APortalWarsCharacter_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.GetTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char APortalWarsCharacter::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetTeamNum");

	APortalWarsCharacter_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.GetSprintingSpeedModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float APortalWarsCharacter::GetSprintingSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetSprintingSpeedModifier");

	APortalWarsCharacter_GetSprintingSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.GetSecondaryWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGun*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGun* APortalWarsCharacter::GetSecondaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetSecondaryWeapon");

	APortalWarsCharacter_GetSecondaryWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.getMesh1P
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* APortalWarsCharacter::getMesh1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.getMesh1P");

	APortalWarsCharacter_getMesh1P_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.GetAkComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AkName                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsAkComponent* APortalWarsCharacter::GetAkComponent(const struct FName& AkName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetAkComponent");

	APortalWarsCharacter_GetAkComponent_Params params;
	params.AkName = AkName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.GetAimOffsets
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator APortalWarsCharacter::GetAimOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.GetAimOffsets");

	APortalWarsCharacter_GetAimOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCharacter.DestroyPortals
// (Final, Native, Public)
void APortalWarsCharacter::DestroyPortals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.DestroyPortals");

	APortalWarsCharacter_DestroyPortals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.DelayedServerFinishMelee
// (Final, Native, Protected)
void APortalWarsCharacter::DelayedServerFinishMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.DelayedServerFinishMelee");

	APortalWarsCharacter_DelayedServerFinishMelee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ClientNotifyAlive
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AController*             C                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ClientNotifyAlive(class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ClientNotifyAlive");

	APortalWarsCharacter_ClientNotifyAlive_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ClientFailedPickupAttempt
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsCharacter::ClientFailedPickupAttempt()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ClientFailedPickupAttempt");

	APortalWarsCharacter_ClientFailedPickupAttempt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ClientEquipWeapon
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class AGun*                    NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ClientEquipWeapon(class AGun* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ClientEquipWeapon");

	APortalWarsCharacter_ClientEquipWeapon_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.ClientDropSpecialItem
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ASpecialItem*            SpecialItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCharacter::ClientDropSpecialItem(class ASpecialItem* SpecialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.ClientDropSpecialItem");

	APortalWarsCharacter_ClientDropSpecialItem_Params params;
	params.SpecialItem = SpecialItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.applyShotgunPointImpulsesToCorpseMulticast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FPWPointDamageEvent> DamageEvents                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsCharacter::applyShotgunPointImpulsesToCorpseMulticast(TArray<struct FPWPointDamageEvent> DamageEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.applyShotgunPointImpulsesToCorpseMulticast");

	APortalWarsCharacter_applyShotgunPointImpulsesToCorpseMulticast_Params params;
	params.DamageEvents = DamageEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.applyRadialImpulseToCorpseMulticast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPWRadialDamageEvent    RadialDamageEvent              (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsCharacter::applyRadialImpulseToCorpseMulticast(const struct FPWRadialDamageEvent& RadialDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.applyRadialImpulseToCorpseMulticast");

	APortalWarsCharacter_applyRadialImpulseToCorpseMulticast_Params params;
	params.RadialDamageEvent = RadialDamageEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCharacter.applyPointImpulseToCorpseMulticast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPWPointDamageEvent     PointDamageEvent               (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsCharacter::applyPointImpulseToCorpseMulticast(const struct FPWPointDamageEvent& PointDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCharacter.applyPointImpulseToCorpseMulticast");

	APortalWarsCharacter_applyPointImpulseToCorpseMulticast_Params params;
	params.PointDamageEvent = PointDamageEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBot.StopWeaponFire
// (Final, Native, Public, BlueprintCallable)
void APortalWarsBot::StopWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBot.StopWeaponFire");

	APortalWarsBot_StopWeaponFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBot.StartWeaponFire
// (Final, Native, Public, BlueprintCallable)
void APortalWarsBot::StartWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBot.StartWeaponFire");

	APortalWarsBot_StartWeaponFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionTimedOut
// (Native, Protected)
void UPortalWarsTxnDialogWidget::OnTransactionTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionTimedOut");

	UPortalWarsTxnDialogWidget_OnTransactionTimedOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionFailed
// (Native, Protected, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsTxnDialogWidget::OnTransactionFailed(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionFailed");

	UPortalWarsTxnDialogWidget_OnTransactionFailed_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompletedParams
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsTxnDialogWidget::OnTransactionCompletedParams(bool bWasSuccessful, const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompletedParams");

	UPortalWarsTxnDialogWidget_OnTransactionCompletedParams_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompleted
// (Native, Protected)
void UPortalWarsTxnDialogWidget::OnTransactionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompleted");

	UPortalWarsTxnDialogWidget_OnTransactionCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.OnConfirmButtonSelected
// (Native, Protected)
void UPortalWarsTxnDialogWidget::OnConfirmButtonSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.OnConfirmButtonSelected");

	UPortalWarsTxnDialogWidget_OnConfirmButtonSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTxnDialogWidget.GetSuccessText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsTxnDialogWidget::GetSuccessText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.GetSuccessText");

	UPortalWarsTxnDialogWidget_GetSuccessText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsTxnDialogWidget.GetProcessingText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsTxnDialogWidget::GetProcessingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.GetProcessingText");

	UPortalWarsTxnDialogWidget_GetProcessingText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsTxnDialogWidget.GetConfirmButtonEnabled
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsTxnDialogWidget::GetConfirmButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTxnDialogWidget.GetConfirmButtonEnabled");

	UPortalWarsTxnDialogWidget_GetConfirmButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyPremiumButtonClicked
// (Final, Native, Protected)
void UPortalWarsBPPurchaseDialogWidget::OnBuyPremiumButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyPremiumButtonClicked");

	UPortalWarsBPPurchaseDialogWidget_OnBuyPremiumButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyLevelsButtonClicked
// (Final, Native, Protected)
void UPortalWarsBPPurchaseDialogWidget::OnBuyLevelsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyLevelsButtonClicked");

	UPortalWarsBPPurchaseDialogWidget_OnBuyLevelsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyBundleButtonClicked
// (Final, Native, Protected)
void UPortalWarsBPPurchaseDialogWidget::OnBuyBundleButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyBundleButtonClicked");

	UPortalWarsBPPurchaseDialogWidget_OnBuyBundleButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPurchaseButtonWidget.GetCurrencyCostText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPurchaseButtonWidget::GetCurrencyCostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPurchaseButtonWidget.GetCurrencyCostText");

	UPortalWarsPurchaseButtonWidget_GetCurrencyCostText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsBPRedeemableButton.InitUserInfo
// (Final, Native, Protected)
void UPortalWarsBPRedeemableButton::InitUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsBPRedeemableButton.InitUserInfo");

	UPortalWarsBPRedeemableButton_InitUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCancelButtonWidget.OnRankIconLoaded
// (Final, Native, Protected)
void UPortalWarsCancelButtonWidget::OnRankIconLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.OnRankIconLoaded");

	UPortalWarsCancelButtonWidget_OnRankIconLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCancelButtonWidget.OnClientSessionStateChanged
// (Final, Native, Protected)
void UPortalWarsCancelButtonWidget::OnClientSessionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.OnClientSessionStateChanged");

	UPortalWarsCancelButtonWidget_OnClientSessionStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCancelButtonWidget::GetSessionQueryTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryTitleText");

	UPortalWarsCancelButtonWidget_GetSessionQueryTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryDescriptionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCancelButtonWidget::GetSessionQueryDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryDescriptionText");

	UPortalWarsCancelButtonWidget_GetSessionQueryDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCancelButtonWidget.GetRankIconVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCancelButtonWidget::GetRankIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.GetRankIconVisibility");

	UPortalWarsCancelButtonWidget_GetRankIconVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCancelButtonWidget.GetRankIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsCancelButtonWidget::GetRankIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCancelButtonWidget.GetRankIcon");

	UPortalWarsCancelButtonWidget_GetRankIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCareerWidget.GoToStatsState
// (Final, Native, Protected)
void UPortalWarsCareerWidget::GoToStatsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerWidget.GoToStatsState");

	UPortalWarsCareerWidget_GoToStatsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCareerWidget.GoToReplaysState
// (Final, Native, Protected)
void UPortalWarsCareerWidget::GoToReplaysState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerWidget.GoToReplaysState");

	UPortalWarsCareerWidget_GoToReplaysState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCareerWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsCareerWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerWidget.GoToMainState");

	UPortalWarsCareerWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCareerWidget.GoToLeaderboardsState
// (Final, Native, Protected)
void UPortalWarsCareerWidget::GoToLeaderboardsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCareerWidget.GoToLeaderboardsState");

	UPortalWarsCareerWidget_GoToLeaderboardsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeButtonWidget.UpdateTimeText
// (Final, Native, Protected)
void UPortalWarsChallengeButtonWidget::UpdateTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeButtonWidget.UpdateTimeText");

	UPortalWarsChallengeButtonWidget_UpdateTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteTextVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsChallengeButtonWidget::GetNoteTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteTextVisibility");

	UPortalWarsChallengeButtonWidget_GetNoteTextVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengeButtonWidget::GetNoteText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteText");

	UPortalWarsChallengeButtonWidget_GetNoteText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeEntryWidget.OnActionButtonClicked
// (Final, Native, Protected)
void UPortalWarsChallengeEntryWidget::OnActionButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeEntryWidget.OnActionButtonClicked");

	UPortalWarsChallengeEntryWidget_OnActionButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeEntryWidget.GetValueText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengeEntryWidget::GetValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeEntryWidget.GetValueText");

	UPortalWarsChallengeEntryWidget_GetValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeEntryWidget.GetTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengeEntryWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeEntryWidget.GetTitleText");

	UPortalWarsChallengeEntryWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeEntryWidget.GetProgressPercent
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsChallengeEntryWidget::GetProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeEntryWidget.GetProgressPercent");

	UPortalWarsChallengeEntryWidget_GetProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeEntryWidget.GetCompletedVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsChallengeEntryWidget::GetCompletedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeEntryWidget.GetCompletedVisibility");

	UPortalWarsChallengeEntryWidget_GetCompletedVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationStarted
// (Final, Native, Public)
void UPortalWarsChallengeCompleteEntry::OnProgressAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationStarted");

	UPortalWarsChallengeCompleteEntry_OnProgressAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationEnded
// (Final, Native, Public)
void UPortalWarsChallengeCompleteEntry::OnProgressAnimationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationEnded");

	UPortalWarsChallengeCompleteEntry_OnProgressAnimationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeCompleteEntry.BroadcastAnimationComplete
// (Final, Native, Protected)
void UPortalWarsChallengeCompleteEntry::BroadcastAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeCompleteEntry.BroadcastAnimationComplete");

	UPortalWarsChallengeCompleteEntry_BroadcastAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeDialogWidget.RefreshEntries
// (Final, Native, Protected)
void UPortalWarsChallengeDialogWidget::RefreshEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeDialogWidget.RefreshEntries");

	UPortalWarsChallengeDialogWidget_RefreshEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengeDialogWidget.ProcessNextChallengeUpdate
// (Final, Native, Protected)
void UPortalWarsChallengeDialogWidget::ProcessNextChallengeUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengeDialogWidget.ProcessNextChallengeUpdate");

	UPortalWarsChallengeDialogWidget_ProcessNextChallengeUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengePanelWidget.UpdateTimeText
// (Final, Native, Protected)
void UPortalWarsChallengePanelWidget::UpdateTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.UpdateTimeText");

	UPortalWarsChallengePanelWidget_UpdateTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengePanelWidget.OnProgressionUpdate
// (Final, Native, Protected)
void UPortalWarsChallengePanelWidget::OnProgressionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.OnProgressionUpdate");

	UPortalWarsChallengePanelWidget_OnProgressionUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengePanelWidget.OnChallengesButtonClicked
// (Final, Native, Protected)
void UPortalWarsChallengePanelWidget::OnChallengesButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.OnChallengesButtonClicked");

	UPortalWarsChallengePanelWidget_OnChallengesButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsChallengePanelWidget::GetChallengesDisabledVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledVisibility");

	UPortalWarsChallengePanelWidget_GetChallengesDisabledVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengePanelWidget::GetChallengesDisabledText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledText");

	UPortalWarsChallengePanelWidget_GetChallengesDisabledText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengePanelWidget::GetChallengesButtonTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonTitleText");

	UPortalWarsChallengePanelWidget_GetChallengesButtonTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsChallengePanelWidget::GetChallengesButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonEnabled");

	UPortalWarsChallengePanelWidget_GetChallengesButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengesInspectWidget.RefreshChallenge
// (Final, Native, Protected)
void UPortalWarsChallengesInspectWidget::RefreshChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesInspectWidget.RefreshChallenge");

	UPortalWarsChallengesInspectWidget_RefreshChallenge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesInspectWidget::OnItemEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntrySelected");

	UPortalWarsChallengesInspectWidget_OnItemEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntryScrolledTo
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesInspectWidget::OnItemEntryScrolledTo(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntryScrolledTo");

	UPortalWarsChallengesInspectWidget_OnItemEntryScrolledTo_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.UpdateTimeText
// (Final, Native, Protected)
void UPortalWarsChallengesSubWidget::UpdateTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.UpdateTimeText");

	UPortalWarsChallengesSubWidget_UpdateTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.RefreshPremiumButton
// (Final, Native, Protected)
void UPortalWarsChallengesSubWidget::RefreshPremiumButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.RefreshPremiumButton");

	UPortalWarsChallengesSubWidget_RefreshPremiumButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.RefreshNewItems
// (Native, Public)
void UPortalWarsChallengesSubWidget::RefreshNewItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.RefreshNewItems");

	UPortalWarsChallengesSubWidget_RefreshNewItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnViewButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesSubWidget::OnViewButtonClicked(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnViewButtonClicked");

	UPortalWarsChallengesSubWidget_OnViewButtonClicked_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnInspectButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesSubWidget::OnInspectButtonClicked(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnInspectButtonClicked");

	UPortalWarsChallengesSubWidget_OnInspectButtonClicked_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnClaimChallengeComplete
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsChallengesSubWidget::OnClaimChallengeComplete(bool bWasSuccessful, const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnClaimChallengeComplete");

	UPortalWarsChallengesSubWidget_OnClaimChallengeComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnClaimButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesSubWidget::OnClaimButtonClicked(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnClaimButtonClicked");

	UPortalWarsChallengesSubWidget_OnClaimButtonClicked_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnChallengesUpdate
// (Native, Public)
void UPortalWarsChallengesSubWidget::OnChallengesUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnChallengesUpdate");

	UPortalWarsChallengesSubWidget_OnChallengesUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.OnBuyPremiumButtonClicked
// (Final, Native, Protected)
void UPortalWarsChallengesSubWidget::OnBuyPremiumButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.OnBuyPremiumButtonClicked");

	UPortalWarsChallengesSubWidget_OnBuyPremiumButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.GoToPhase
// (Final, Native, Protected)
// Parameters:
// unsigned char                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesSubWidget::GoToPhase(unsigned char NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.GoToPhase");

	UPortalWarsChallengesSubWidget_GoToPhase_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesSubWidget.GetTitleText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengesSubWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.GetTitleText");

	UPortalWarsChallengesSubWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengesSubWidget.GetTimeVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsChallengesSubWidget::GetTimeVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.GetTimeVisibility");

	UPortalWarsChallengesSubWidget_GetTimeVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengesSubWidget.GetTimeDescriptionText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChallengesSubWidget::GetTimeDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesSubWidget.GetTimeDescriptionText");

	UPortalWarsChallengesSubWidget_GetTimeDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChallengesWidget.OnChallengeButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChallengesWidget::OnChallengeButtonSelected(class UPortalWarsEntryWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesWidget.OnChallengeButtonSelected");

	UPortalWarsChallengesWidget_OnChallengeButtonSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsChallengesWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesWidget.GoToMainState");

	UPortalWarsChallengesWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChallengesWidget.GoToInspectState
// (Final, Native, Protected)
void UPortalWarsChallengesWidget::GoToInspectState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChallengesWidget.GoToInspectState");

	UPortalWarsChallengesWidget_GoToInspectState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChatEntryWidget.UpdatePlayerInfo
// (Final, Native, Protected)
void UPortalWarsChatEntryWidget::UpdatePlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatEntryWidget.UpdatePlayerInfo");

	UPortalWarsChatEntryWidget_UpdatePlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChatEntryWidget.GetPlayerNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChatEntryWidget::GetPlayerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatEntryWidget.GetPlayerNameText");

	UPortalWarsChatEntryWidget_GetPlayerNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChatEntryWidget.GetPlayerAvatar
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UPortalWarsChatEntryWidget::GetPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatEntryWidget.GetPlayerAvatar");

	UPortalWarsChatEntryWidget_GetPlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChatEntryWidget.GetChatText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsChatEntryWidget::GetChatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatEntryWidget.GetChatText");

	UPortalWarsChatEntryWidget_GetChatText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsChatWidget.ShowChat
// (Final, Native, Protected)
void UPortalWarsChatWidget::ShowChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatWidget.ShowChat");

	UPortalWarsChatWidget_ShowChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChatWidget.OnChatTextChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsChatWidget::OnChatTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatWidget.OnChatTextChanged");

	UPortalWarsChatWidget_OnChatTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChatWidget.OnChatInputCommitted
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsChatWidget::OnChatInputCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatWidget.OnChatInputCommitted");

	UPortalWarsChatWidget_OnChatInputCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsChatWidget.HideChat
// (Final, Native, Protected)
void UPortalWarsChatWidget::HideChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsChatWidget.HideChat");

	UPortalWarsChatWidget_HideChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInputWidget.OnValueChanged
// (Native, Protected)
void UPortalWarsInputWidget::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputWidget.OnValueChanged");

	UPortalWarsInputWidget_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInputWidget.OnAdminReceived
// (Native, Protected)
void UPortalWarsInputWidget::OnAdminReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputWidget.OnAdminReceived");

	UPortalWarsInputWidget_OnAdminReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInputWidget.IsEnabled
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsInputWidget::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputWidget.IsEnabled");

	UPortalWarsInputWidget_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInputWidget.InitPlayerState
// (Final, Native, Protected)
void UPortalWarsInputWidget::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputWidget.InitPlayerState");

	UPortalWarsInputWidget_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInputWidget.GetInputVisibility
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsInputWidget::GetInputVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputWidget.GetInputVisibility");

	UPortalWarsInputWidget_GetInputVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCheckBoxWidget.OnCheckedStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCheckBoxWidget::OnCheckedStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckBoxWidget.OnCheckedStateChanged");

	UPortalWarsCheckBoxWidget_OnCheckedStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCheckInDialogWidget.RefreshRewards
// (Final, Native, Public)
void UPortalWarsCheckInDialogWidget::RefreshRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckInDialogWidget.RefreshRewards");

	UPortalWarsCheckInDialogWidget_RefreshRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCheckInDialogWidget::GetCurrencyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyVisibility");

	UPortalWarsCheckInDialogWidget_GetCurrencyVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCheckInDialogWidget::GetCurrencyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyText");

	UPortalWarsCheckInDialogWidget_GetCurrencyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCheckInDialogWidget.GetActionTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCheckInDialogWidget::GetActionTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckInDialogWidget.GetActionTitleText");

	UPortalWarsCheckInDialogWidget_GetActionTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCheckInRewardWidget.GetDayText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCheckInRewardWidget::GetDayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCheckInRewardWidget.GetDayText");

	UPortalWarsCheckInRewardWidget_GetDayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsClaimChallengeIndicatorWidget.RefreshWidget
// (Final, Native, Public)
void UPortalWarsClaimChallengeIndicatorWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsClaimChallengeIndicatorWidget.RefreshWidget");

	UPortalWarsClaimChallengeIndicatorWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsColorPickerWidget.OnSliderToggleStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsColorPickerWidget::OnSliderToggleStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsColorPickerWidget.OnSliderToggleStateChanged");

	UPortalWarsColorPickerWidget_OnSliderToggleStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsColorPickerWidget.GetSliderVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsColorPickerWidget::GetSliderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsColorPickerWidget.GetSliderVisibility");

	UPortalWarsColorPickerWidget_GetSliderVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsColorPickerWidget.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsColorPickerWidget::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsColorPickerWidget.GetColor");

	UPortalWarsColorPickerWidget_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialRightText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetSpecialRightText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialRightText");

	UPortalWarsControllerPresetWidget_GetSpecialRightText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialLeftText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetSpecialLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialLeftText");

	UPortalWarsControllerPresetWidget_GetSpecialLeftText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetRightTriggerText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetRightTriggerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetRightTriggerText");

	UPortalWarsControllerPresetWidget_GetRightTriggerText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetRightStickText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickText");

	UPortalWarsControllerPresetWidget_GetRightStickText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickDownText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetRightStickDownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickDownText");

	UPortalWarsControllerPresetWidget_GetRightStickDownText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetRightShoulderText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetRightShoulderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetRightShoulderText");

	UPortalWarsControllerPresetWidget_GetRightShoulderText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftTriggerText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetLeftTriggerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetLeftTriggerText");

	UPortalWarsControllerPresetWidget_GetLeftTriggerText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetLeftStickText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickText");

	UPortalWarsControllerPresetWidget_GetLeftStickText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickDownText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetLeftStickDownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickDownText");

	UPortalWarsControllerPresetWidget_GetLeftStickDownText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftShoulderText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetLeftShoulderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetLeftShoulderText");

	UPortalWarsControllerPresetWidget_GetLeftShoulderText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonTopText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetFaceButtonTopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonTopText");

	UPortalWarsControllerPresetWidget_GetFaceButtonTopText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonRightText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetFaceButtonRightText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonRightText");

	UPortalWarsControllerPresetWidget_GetFaceButtonRightText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonLeftText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetFaceButtonLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonLeftText");

	UPortalWarsControllerPresetWidget_GetFaceButtonLeftText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonBottomText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetFaceButtonBottomText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonBottomText");

	UPortalWarsControllerPresetWidget_GetFaceButtonBottomText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadUpText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetDPadUpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetDPadUpText");

	UPortalWarsControllerPresetWidget_GetDPadUpText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadRightText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetDPadRightText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetDPadRightText");

	UPortalWarsControllerPresetWidget_GetDPadRightText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadLeftText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetDPadLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetDPadLeftText");

	UPortalWarsControllerPresetWidget_GetDPadLeftText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadDownText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsControllerPresetWidget::GetDPadDownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsControllerPresetWidget.GetDPadDownText");

	UPortalWarsControllerPresetWidget_GetDPadDownText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCopyButtonWidget.ResetTitleText
// (Final, Native, Protected)
void UPortalWarsCopyButtonWidget::ResetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCopyButtonWidget.ResetTitleText");

	UPortalWarsCopyButtonWidget_ResetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCountdownWidget.OnGameConfigReceived
// (Native, Protected)
void UPortalWarsCountdownWidget::OnGameConfigReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.OnGameConfigReceived");

	UPortalWarsCountdownWidget_OnGameConfigReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownUpdate
// (Final, Native, Public)
// Parameters:
// int                            TimeRemaining                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCountdownWidget::NotifyCountdownUpdate(int TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownUpdate");

	UPortalWarsCountdownWidget_NotifyCountdownUpdate_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownStarted
// (Final, Native, Public)
void UPortalWarsCountdownWidget::NotifyCountdownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownStarted");

	UPortalWarsCountdownWidget_NotifyCountdownStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCountdownWidget.GetScoreText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCountdownWidget::GetScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.GetScoreText");

	UPortalWarsCountdownWidget_GetScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCountdownWidget.GetMinutesText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCountdownWidget::GetMinutesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.GetMinutesText");

	UPortalWarsCountdownWidget_GetMinutesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCountdownWidget.GetMapNameText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCountdownWidget::GetMapNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.GetMapNameText");

	UPortalWarsCountdownWidget_GetMapNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCountdownWidget.GetGameModeNameText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCountdownWidget::GetGameModeNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.GetGameModeNameText");

	UPortalWarsCountdownWidget_GetGameModeNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCountdownWidget.GetGameModeDescriptionText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCountdownWidget::GetGameModeDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCountdownWidget.GetGameModeDescriptionText");

	UPortalWarsCountdownWidget_GetGameModeDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCrosshairSelectWidget.OnCrosshairSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCrosshairSelectWidget::OnCrosshairSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCrosshairSelectWidget.OnCrosshairSelectionChanged");

	UPortalWarsCrosshairSelectWidget_OnCrosshairSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameMode.IsWinner
// (Native, Public, BlueprintCallable)
// Parameters:
// class APortalWarsPlayerState*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsGameMode::IsWinner(class APortalWarsPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameMode.IsWinner");

	APortalWarsGameMode_IsWinner_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameMode.IsTie
// (Native, Public, BlueprintCallable)
// Parameters:
// class APortalWarsPlayerState*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsGameMode::IsTie(class APortalWarsPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameMode.IsTie");

	APortalWarsGameMode_IsTie_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameMode.GetPlacement
// (Native, Public, BlueprintCallable)
// Parameters:
// class APortalWarsPlayerState*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APortalWarsGameMode::GetPlacement(class APortalWarsPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameMode.GetPlacement");

	APortalWarsGameMode_GetPlacement_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameMode.ForceEndMatch
// (Final, Exec, Native, Public)
void APortalWarsGameMode::ForceEndMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameMode.ForceEndMatch");

	APortalWarsGameMode_ForceEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameState.OnRep_TeamGame
// (Final, Native, Protected)
void APortalWarsGameState::OnRep_TeamGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameState.OnRep_TeamGame");

	APortalWarsGameState_OnRep_TeamGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameState.OnRep_Score
// (Final, Native, Protected)
void APortalWarsGameState::OnRep_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameState.OnRep_Score");

	APortalWarsGameState_OnRep_Score_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameState.AreEnemyPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APortalWarsCharacter*    PS1                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsCharacter*    PS2                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsGameState::AreEnemyPlayers(class APortalWarsCharacter* PS1, class APortalWarsCharacter* PS2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameState.AreEnemyPlayers");

	APortalWarsGameState_AreEnemyPlayers_Params params;
	params.PS1 = PS1;
	params.PS2 = PS2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameState.AreEnemies
// (Native, Public, BlueprintCallable)
// Parameters:
// class APortalWarsPlayerState*  PS1                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsPlayerState*  PS2                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsGameState::AreEnemies(class APortalWarsPlayerState* PS1, class APortalWarsPlayerState* PS2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameState.AreEnemies");

	APortalWarsGameState_AreEnemies_Params params;
	params.PS1 = PS1;
	params.PS2 = PS2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCTFGameState.SpawnFlag
// (Final, Native, Public)
// Parameters:
// unsigned char                  TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCTFGameState::SpawnFlag(unsigned char TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCTFGameState.SpawnFlag");

	APortalWarsCTFGameState_SpawnFlag_Params params;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlagState
// (Final, Native, Protected)
// Parameters:
// PortalWars_EFlagState          PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCTFGameState::OnRep_BravoFlagState(PortalWars_EFlagState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlagState");

	APortalWarsCTFGameState_OnRep_BravoFlagState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlag
// (Final, Native, Protected)
void APortalWarsCTFGameState::OnRep_BravoFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlag");

	APortalWarsCTFGameState_OnRep_BravoFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlagState
// (Final, Native, Protected)
// Parameters:
// PortalWars_EFlagState          PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsCTFGameState::OnRep_AlphaFlagState(PortalWars_EFlagState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlagState");

	APortalWarsCTFGameState_OnRep_AlphaFlagState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlag
// (Final, Native, Protected)
void APortalWarsCTFGameState::OnRep_AlphaFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlag");

	APortalWarsCTFGameState_OnRep_AlphaFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.UpdateChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTextChatData           InData                         (Parm, NativeAccessSpecifierPublic)
void APortalWarsHUD::UpdateChat(const struct FTextChatData& InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.UpdateChat");

	APortalWarsHUD_UpdateChat_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowScoreboardWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowScoreboardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowScoreboardWidget");

	APortalWarsHUD_ShowScoreboardWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowMatchResultWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowMatchResultWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowMatchResultWidget");

	APortalWarsHUD_ShowMatchResultWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowMatchCancelledWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowMatchCancelledWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowMatchCancelledWidget");

	APortalWarsHUD_ShowMatchCancelledWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowHUDWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowHUDWidget");

	APortalWarsHUD_ShowHUDWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowFullScoreboard
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowFullScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowFullScoreboard");

	APortalWarsHUD_ShowFullScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowFullEmoteWheel
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowFullEmoteWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowFullEmoteWheel");

	APortalWarsHUD_ShowFullEmoteWheel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowEmoteWheelWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowEmoteWheelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowEmoteWheelWidget");

	APortalWarsHUD_ShowEmoteWheelWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ShowCountdownWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::ShowCountdownWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ShowCountdownWidget");

	APortalWarsHUD_ShowCountdownWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.SetMatchResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsTie                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Placement                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsHUD::SetMatchResult(bool bIsWinner, bool bIsTie, int Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.SetMatchResult");

	APortalWarsHUD_SetMatchResult_Params params;
	params.bIsWinner = bIsWinner;
	params.bIsTie = bIsTie;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveScoreboardWidget
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveScoreboardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveScoreboardWidget");

	APortalWarsHUD_RemoveScoreboardWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveMatchResultWidget
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveMatchResultWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveMatchResultWidget");

	APortalWarsHUD_RemoveMatchResultWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveMatchCancelledWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveMatchCancelledWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveMatchCancelledWidget");

	APortalWarsHUD_RemoveMatchCancelledWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveHUDWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveHUDWidget");

	APortalWarsHUD_RemoveHUDWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveEmoteWheelWidget
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveEmoteWheelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveEmoteWheelWidget");

	APortalWarsHUD_RemoveEmoteWheelWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.RemoveCountdownWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::RemoveCountdownWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.RemoveCountdownWidget");

	APortalWarsHUD_RemoveCountdownWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.ReceivedMedal
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MedalName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsHUD::ReceivedMedal(const struct FString& MedalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.ReceivedMedal");

	APortalWarsHUD_ReceivedMedal_Params params;
	params.MedalName = MedalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.PerformEmoteWheelTask
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::PerformEmoteWheelTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.PerformEmoteWheelTask");

	APortalWarsHUD_PerformEmoteWheelTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.OpenChat
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.OpenChat");

	APortalWarsHUD_OpenChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.HideScoreboardWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::HideScoreboardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.HideScoreboardWidget");

	APortalWarsHUD_HideScoreboardWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.HideHUDWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::HideHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.HideHUDWidget");

	APortalWarsHUD_HideHUDWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.HideFullScoreboard
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::HideFullScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.HideFullScoreboard");

	APortalWarsHUD_HideFullScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.HideFullEmoteWheel
// (Native, Public, BlueprintCallable)
void APortalWarsHUD::HideFullEmoteWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.HideFullEmoteWheel");

	APortalWarsHUD_HideFullEmoteWheel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUD.HideEmoteWheelWidget
// (Final, Native, Public, BlueprintCallable)
void APortalWarsHUD::HideEmoteWheelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUD.HideEmoteWheelWidget");

	APortalWarsHUD_HideEmoteWheelWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.SetTeamNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  NewTeamNumber                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::SetTeamNum(unsigned char NewTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.SetTeamNum");

	APortalWarsPlayerState_SetTeamNum_Params params;
	params.NewTeamNumber = NewTeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.SetPlayerAvatar
// (Final, Native, Public)
// Parameters:
// class UTexture*                avatar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::SetPlayerAvatar(class UTexture* avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.SetPlayerAvatar");

	APortalWarsPlayerState_SetPlayerAvatar_Params params;
	params.avatar = avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_Team
// (Native, Protected)
void APortalWarsPlayerState::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_Team");

	APortalWarsPlayerState_OnRep_Team_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_ReadyForNextMatch
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_ReadyForNextMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_ReadyForNextMatch");

	APortalWarsPlayerState_OnRep_ReadyForNextMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_Ranks
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_Ranks()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_Ranks");

	APortalWarsPlayerState_OnRep_Ranks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_Progression
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_Progression()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_Progression");

	APortalWarsPlayerState_OnRep_Progression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_PlayerStats
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_PlayerStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_PlayerStats");

	APortalWarsPlayerState_OnRep_PlayerStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_PlayerCustomizations
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_PlayerCustomizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_PlayerCustomizations");

	APortalWarsPlayerState_OnRep_PlayerCustomizations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_PartyChatOnly
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_PartyChatOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_PartyChatOnly");

	APortalWarsPlayerState_OnRep_PartyChatOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_MultiKillCounter
// (Final, Native, Protected)
// Parameters:
// unsigned char                  OldMultiKillCounter            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::OnRep_MultiKillCounter(unsigned char OldMultiKillCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_MultiKillCounter");

	APortalWarsPlayerState_OnRep_MultiKillCounter_Params params;
	params.OldMultiKillCounter = OldMultiKillCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_KillStreak
// (Final, Native, Protected)
// Parameters:
// unsigned char                  OldKillStreak                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::OnRep_KillStreak(unsigned char OldKillStreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_KillStreak");

	APortalWarsPlayerState_OnRep_KillStreak_Params params;
	params.OldKillStreak = OldKillStreak;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_JoinedInProgress
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_JoinedInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_JoinedInProgress");

	APortalWarsPlayerState_OnRep_JoinedInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_IsFlagged
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_IsFlagged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_IsFlagged");

	APortalWarsPlayerState_OnRep_IsFlagged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_IsAdmin
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_IsAdmin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_IsAdmin");

	APortalWarsPlayerState_OnRep_IsAdmin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_DefaultProfile
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_DefaultProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_DefaultProfile");

	APortalWarsPlayerState_OnRep_DefaultProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_DailyStreak
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_DailyStreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_DailyStreak");

	APortalWarsPlayerState_OnRep_DailyStreak_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnRep_AnonymousMode
// (Final, Native, Protected)
void APortalWarsPlayerState::OnRep_AnonymousMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnRep_AnonymousMode");

	APortalWarsPlayerState_OnRep_AnonymousMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnPlayerAvatarLoaded
// (Final, Native, Public)
// Parameters:
// class UTexture*                avatar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::OnPlayerAvatarLoaded(class UTexture* avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnPlayerAvatarLoaded");

	APortalWarsPlayerState_OnPlayerAvatarLoaded_Params params;
	params.avatar = avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnDefaultAvatarLoaded
// (Final, Native, Protected)
void APortalWarsPlayerState::OnDefaultAvatarLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnDefaultAvatarLoaded");

	APortalWarsPlayerState_OnDefaultAvatarLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.OnCustomizationsLoaded
// (Final, Native, Protected)
void APortalWarsPlayerState::OnCustomizationsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.OnCustomizationsLoaded");

	APortalWarsPlayerState_OnCustomizationsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.LoadPlayerAvatar
// (Final, Native, Protected)
void APortalWarsPlayerState::LoadPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.LoadPlayerAvatar");

	APortalWarsPlayerState_LoadPlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.GetTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char APortalWarsPlayerState::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.GetTeamNum");

	APortalWarsPlayerState_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerState.GetShortPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString APortalWarsPlayerState::GetShortPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.GetShortPlayerName");

	APortalWarsPlayerState_GetShortPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerState.ClientTriggerEvents
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// TArray<struct FName>           EventNames                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::ClientTriggerEvents(TArray<struct FName> EventNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.ClientTriggerEvents");

	APortalWarsPlayerState_ClientTriggerEvents_Params params;
	params.EventNames = EventNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.ClientTriggerEvent
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FName                   EventName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::ClientTriggerEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.ClientTriggerEvent");

	APortalWarsPlayerState_ClientTriggerEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.ClientReconnected
// (Net, NetReliable, Native, Event, Protected, NetClient)
void APortalWarsPlayerState::ClientReconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.ClientReconnected");

	APortalWarsPlayerState_ClientReconnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.ClientReceivedMedals
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// TArray<struct FName>           MedalNames                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::ClientReceivedMedals(TArray<struct FName> MedalNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.ClientReceivedMedals");

	APortalWarsPlayerState_ClientReceivedMedals_Params params;
	params.MedalNames = MedalNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.ClientReceivedMedal
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FName                   MedalName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::ClientReceivedMedal(const struct FName& MedalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.ClientReceivedMedal");

	APortalWarsPlayerState_ClientReceivedMedal_Params params;
	params.MedalName = MedalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerState.BroadcastDeath_Multicast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class APortalWarsPlayerState*  KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*             KillerDamageType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsPlayerState*  KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bThruPortal                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          KillerLastTeleportTime         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APortalWarsPlayerState*> DamagePlayerStates             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                  DamagePlayerDamages            (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPlayerState::BroadcastDeath_Multicast(class APortalWarsPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class APortalWarsPlayerState* KilledPlayerState, bool bIsHeadshot, bool bThruPortal, float KillerLastTeleportTime, TArray<class APortalWarsPlayerState*> DamagePlayerStates, TArray<float> DamagePlayerDamages)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerState.BroadcastDeath_Multicast");

	APortalWarsPlayerState_BroadcastDeath_Multicast_Params params;
	params.KillerPlayerState = KillerPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.KilledPlayerState = KilledPlayerState;
	params.bIsHeadshot = bIsHeadshot;
	params.bThruPortal = bThruPortal;
	params.KillerLastTeleportTime = KillerLastTeleportTime;
	params.DamagePlayerStates = DamagePlayerStates;
	params.DamagePlayerDamages = DamagePlayerDamages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningTextVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCurrencyPurchaseDialog::GetWarningTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningTextVisibility");

	UPortalWarsCurrencyPurchaseDialog_GetWarningTextVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCurrencyPurchaseDialog::GetWarningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningText");

	UPortalWarsCurrencyPurchaseDialog_GetWarningText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetBonusVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCurrencyPurchaseDialog::GetBonusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetBonusVisibility");

	UPortalWarsCurrencyPurchaseDialog_GetBonusVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCurrencyStoreEntry.GetTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsCurrencyStoreEntry::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCurrencyStoreEntry.GetTitleText");

	UPortalWarsCurrencyStoreEntry_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopSectionWidget.RefreshSeparators
// (Final, Native, Public)
void UPortalWarsItemShopSectionWidget::RefreshSeparators()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopSectionWidget.RefreshSeparators");

	UPortalWarsItemShopSectionWidget_RefreshSeparators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopSectionWidget.OnEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopSectionWidget::OnEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopSectionWidget.OnEntrySelected");

	UPortalWarsItemShopSectionWidget_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopSectionWidget.GetTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopSectionWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopSectionWidget.GetTitleText");

	UPortalWarsItemShopSectionWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopSectionWidget.GetExpiresInText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopSectionWidget::GetExpiresInText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopSectionWidget.GetExpiresInText");

	UPortalWarsItemShopSectionWidget_GetExpiresInText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCurrencyStoreWidget.QueryItemOffers
// (Final, Native, Protected)
void UPortalWarsCurrencyStoreWidget::QueryItemOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCurrencyStoreWidget.QueryItemOffers");

	UPortalWarsCurrencyStoreWidget_QueryItemOffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomGameWidget.GoToHostState
// (Final, Native, Protected)
void UPortalWarsCustomGameWidget::GoToHostState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomGameWidget.GoToHostState");

	UPortalWarsCustomGameWidget_GoToHostState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomGameWidget.GoToErrorState
// (Final, Native, Protected)
void UPortalWarsCustomGameWidget::GoToErrorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomGameWidget.GoToErrorState");

	UPortalWarsCustomGameWidget_GoToErrorState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomGameWidget.GoToBrowserState
// (Final, Native, Protected)
void UPortalWarsCustomGameWidget::GoToBrowserState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomGameWidget.GoToBrowserState");

	UPortalWarsCustomGameWidget_GoToBrowserState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.RefreshSaveReplayButton
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::RefreshSaveReplayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.RefreshSaveReplayButton");

	UPortalWarsLobbyWidget_RefreshSaveReplayButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.PopulatePlayersList
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::PopulatePlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.PopulatePlayersList");

	UPortalWarsLobbyWidget_PopulatePlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnSwitchWeaponButtonClicked
// (Native, Protected)
void UPortalWarsLobbyWidget::OnSwitchWeaponButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnSwitchWeaponButtonClicked");

	UPortalWarsLobbyWidget_OnSwitchWeaponButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnSaveReplayButtonClicked
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::OnSaveReplayButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnSaveReplayButtonClicked");

	UPortalWarsLobbyWidget_OnSaveReplayButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsUpdated
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::OnPrevGameStatsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsUpdated");

	UPortalWarsLobbyWidget_OnPrevGameStatsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsButtonClicked
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::OnPrevGameStatsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsButtonClicked");

	UPortalWarsLobbyWidget_OnPrevGameStatsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnPlayerRemoved
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLobbyWidget::OnPlayerRemoved(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnPlayerRemoved");

	UPortalWarsLobbyWidget_OnPlayerRemoved_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnPlayerAdded
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLobbyWidget::OnPlayerAdded(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnPlayerAdded");

	UPortalWarsLobbyWidget_OnPlayerAdded_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.OnEmoteButtonClicked
// (Native, Protected)
void UPortalWarsLobbyWidget::OnEmoteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.OnEmoteButtonClicked");

	UPortalWarsLobbyWidget_OnEmoteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.HideSpectatorButtons
// (Final, Native, Protected)
void UPortalWarsLobbyWidget::HideSpectatorButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.HideSpectatorButtons");

	UPortalWarsLobbyWidget_HideSpectatorButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyWidget.GetSaveReplayButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsLobbyWidget::GetSaveReplayButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.GetSaveReplayButtonEnabled");

	UPortalWarsLobbyWidget_GetSaveReplayButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLobbyWidget.GetPrevGameVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsLobbyWidget::GetPrevGameVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyWidget.GetPrevGameVisibility");

	UPortalWarsLobbyWidget_GetPrevGameVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCustomLobbyWidget.UpdateTeam
// (Final, Native, Protected)
// Parameters:
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCustomLobbyWidget::UpdateTeam(int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.UpdateTeam");

	UPortalWarsCustomLobbyWidget_UpdateTeam_Params params;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.UpdateGameConfig
// (Native, Protected)
void UPortalWarsCustomLobbyWidget::UpdateGameConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.UpdateGameConfig");

	UPortalWarsCustomLobbyWidget_UpdateGameConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnUnlimitedAmmoChanged
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::OnUnlimitedAmmoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnUnlimitedAmmoChanged");

	UPortalWarsCustomLobbyWidget_OnUnlimitedAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnTeamUpdated
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::OnTeamUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnTeamUpdated");

	UPortalWarsCustomLobbyWidget_OnTeamUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnSecondaryWeaponChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCustomLobbyWidget::OnSecondaryWeaponChanged(bool bNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnSecondaryWeaponChanged");

	UPortalWarsCustomLobbyWidget_OnSecondaryWeaponChanged_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnPrimaryWeaponChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCustomLobbyWidget::OnPrimaryWeaponChanged(bool bNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnPrimaryWeaponChanged");

	UPortalWarsCustomLobbyWidget_OnPrimaryWeaponChanged_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnPlayerArrayUpdated
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            PS                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsCustomLobbyWidget::OnPlayerArrayUpdated(class APlayerState* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnPlayerArrayUpdated");

	UPortalWarsCustomLobbyWidget_OnPlayerArrayUpdated_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnModeSelectionChanged
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::OnModeSelectionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnModeSelectionChanged");

	UPortalWarsCustomLobbyWidget_OnModeSelectionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnMatchOptionsButtonClicked
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::OnMatchOptionsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnMatchOptionsButtonClicked");

	UPortalWarsCustomLobbyWidget_OnMatchOptionsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnInviteButtonClicked
// (Native, Protected)
void UPortalWarsCustomLobbyWidget::OnInviteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnInviteButtonClicked");

	UPortalWarsCustomLobbyWidget_OnInviteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnGameConfigUpdated
// (Native, Protected)
void UPortalWarsCustomLobbyWidget::OnGameConfigUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnGameConfigUpdated");

	UPortalWarsCustomLobbyWidget_OnGameConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.OnAdminReceived
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::OnAdminReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.OnAdminReceived");

	UPortalWarsCustomLobbyWidget_OnAdminReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.LaunchGame
// (Native, Protected)
void UPortalWarsCustomLobbyWidget::LaunchGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.LaunchGame");

	UPortalWarsCustomLobbyWidget_LaunchGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.InitPlayerState
// (Final, Native, Protected)
void UPortalWarsCustomLobbyWidget::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.InitPlayerState");

	UPortalWarsCustomLobbyWidget_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomLobbyWidget.GetTeamSelectVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCustomLobbyWidget::GetTeamSelectVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.GetTeamSelectVisibility");

	UPortalWarsCustomLobbyWidget_GetTeamSelectVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCustomLobbyWidget.GetRandomHillsVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCustomLobbyWidget::GetRandomHillsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.GetRandomHillsVisibility");

	UPortalWarsCustomLobbyWidget_GetRandomHillsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCustomLobbyWidget.GetBotsVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCustomLobbyWidget::GetBotsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.GetBotsVisibility");

	UPortalWarsCustomLobbyWidget_GetBotsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCustomLobbyWidget.GetAdminVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsCustomLobbyWidget::GetAdminVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomLobbyWidget.GetAdminVisibility");

	UPortalWarsCustomLobbyWidget_GetAdminVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsCustomScrollWidget.ScrollToPrev
// (Final, Native, Public)
void UPortalWarsCustomScrollWidget::ScrollToPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomScrollWidget.ScrollToPrev");

	UPortalWarsCustomScrollWidget_ScrollToPrev_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsCustomScrollWidget.ScrollToNext
// (Final, Native, Public)
void UPortalWarsCustomScrollWidget::ScrollToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsCustomScrollWidget.ScrollToNext");

	UPortalWarsCustomScrollWidget_ScrollToNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.RefreshEntries
// (Final, Native, Protected)
void UPortalWarsDailyCheckInWidget::RefreshEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.RefreshEntries");

	UPortalWarsDailyCheckInWidget_RefreshEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.OnRepairButtonClicked
// (Final, Native, Protected)
void UPortalWarsDailyCheckInWidget::OnRepairButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.OnRepairButtonClicked");

	UPortalWarsDailyCheckInWidget_OnRepairButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimCheckinComplete
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsDailyCheckInWidget::OnClaimCheckinComplete(bool bWasSuccessful, const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimCheckinComplete");

	UPortalWarsDailyCheckInWidget_OnClaimCheckinComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimButtonClicked
// (Final, Native, Protected)
void UPortalWarsDailyCheckInWidget::OnClaimButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimButtonClicked");

	UPortalWarsDailyCheckInWidget_OnClaimButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.OnCheckInUpdate
// (Final, Native, Protected)
void UPortalWarsDailyCheckInWidget::OnCheckInUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.OnCheckInUpdate");

	UPortalWarsDailyCheckInWidget_OnCheckInUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentWeekText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsDailyCheckInWidget::GetCurrentWeekText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentWeekText");

	UPortalWarsDailyCheckInWidget_GetCurrentWeekText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentDayText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsDailyCheckInWidget::GetCurrentDayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentDayText");

	UPortalWarsDailyCheckInWidget_GetCurrentDayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.RefreshEntries
// (Final, Native, Protected)
void UPortalWarsDailyPlayStreakWidget::RefreshEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.RefreshEntries");

	UPortalWarsDailyPlayStreakWidget_RefreshEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.OnRepairButtonClicked
// (Final, Native, Protected)
void UPortalWarsDailyPlayStreakWidget::OnRepairButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.OnRepairButtonClicked");

	UPortalWarsDailyPlayStreakWidget_OnRepairButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.OnPlayStreakUpdate
// (Final, Native, Protected)
void UPortalWarsDailyPlayStreakWidget::OnPlayStreakUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.OnPlayStreakUpdate");

	UPortalWarsDailyPlayStreakWidget_OnPlayStreakUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetRepairStreakText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsDailyPlayStreakWidget::GetRepairStreakText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.GetRepairStreakText");

	UPortalWarsDailyPlayStreakWidget_GetRepairStreakText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakPromptText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsDailyPlayStreakWidget::GetPlayStreakPromptText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakPromptText");

	UPortalWarsDailyPlayStreakWidget_GetPlayStreakPromptText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakBoostText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsDailyPlayStreakWidget::GetPlayStreakBoostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakBoostText");

	UPortalWarsDailyPlayStreakWidget_GetPlayStreakBoostText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDamageNumberEntryWidget.GetDamageColor
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsDamageNumberEntryWidget::GetDamageColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDamageNumberEntryWidget.GetDamageColor");

	UPortalWarsDamageNumberEntryWidget_GetDamageColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInputCarouselWidget.OnPrevValue
// (Native, Public)
void UPortalWarsInputCarouselWidget::OnPrevValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputCarouselWidget.OnPrevValue");

	UPortalWarsInputCarouselWidget_OnPrevValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInputCarouselWidget.OnNextValue
// (Native, Public)
void UPortalWarsInputCarouselWidget::OnNextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputCarouselWidget.OnNextValue");

	UPortalWarsInputCarouselWidget_OnNextValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDecimalCarouselWidget.OnSpinBoxValueCommitted
// (Final, Native, Protected)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsDecimalCarouselWidget::OnSpinBoxValueCommitted(float NewValue, TEnumAsByte<SlateCore_ETextCommit> CommitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDecimalCarouselWidget.OnSpinBoxValueCommitted");

	UPortalWarsDecimalCarouselWidget_OnSpinBoxValueCommitted_Params params;
	params.NewValue = NewValue;
	params.CommitType = CommitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNumericCarouselWidget.OnSpinBoxValueCommitted
// (Final, Native, Protected)
// Parameters:
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNumericCarouselWidget::OnSpinBoxValueCommitted(int NewValue, TEnumAsByte<SlateCore_ETextCommit> CommitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNumericCarouselWidget.OnSpinBoxValueCommitted");

	UPortalWarsNumericCarouselWidget_OnSpinBoxValueCommitted_Params params;
	params.NewValue = NewValue;
	params.CommitType = CommitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDiscardSettingsDialog.OnAcceptButtonClicked
// (Final, Native, Protected)
void UPortalWarsDiscardSettingsDialog::OnAcceptButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDiscardSettingsDialog.OnAcceptButtonClicked");

	UPortalWarsDiscardSettingsDialog_OnAcceptButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDiscordRpcUtils.OnConnect
// (Final, Native, Static, Private)
void UPortalWarsDiscordRpcUtils::STATIC_OnConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDiscordRpcUtils.OnConnect");

	UPortalWarsDiscordRpcUtils_OnConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHillIndicatorWidget.SetControllingTeam
// (Native, Protected)
// Parameters:
// int                            NewControllingTeam             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsHillIndicatorWidget::SetControllingTeam(int NewControllingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHillIndicatorWidget.SetControllingTeam");

	UPortalWarsHillIndicatorWidget_SetControllingTeam_Params params;
	params.NewControllingTeam = NewControllingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHillIndicatorWidget.GetIndicatorBackground
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsHillIndicatorWidget::GetIndicatorBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHillIndicatorWidget.GetIndicatorBackground");

	UPortalWarsHillIndicatorWidget_GetIndicatorBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHillIndicatorWidget.GetHillName
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsHillIndicatorWidget::GetHillName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHillIndicatorWidget.GetHillName");

	UPortalWarsHillIndicatorWidget_GetHillName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsDropdownWidget.OnSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsDropdownWidget::OnSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDropdownWidget.OnSelectionChanged");

	UPortalWarsDropdownWidget_OnSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDropIndicatorWidget.RefreshWidget
// (Final, Native, Public)
void UPortalWarsDropIndicatorWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDropIndicatorWidget.RefreshWidget");

	UPortalWarsDropIndicatorWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDropsMenuWidget.RefreshWidget
// (Final, Native, Public)
void UPortalWarsDropsMenuWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDropsMenuWidget.RefreshWidget");

	UPortalWarsDropsMenuWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsDropsMenuWidget.OnOpenButtonClicked
// (Final, Native, Protected)
void UPortalWarsDropsMenuWidget::OnOpenButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsDropsMenuWidget.OnOpenButtonClicked");

	UPortalWarsDropsMenuWidget_OnOpenButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEmoteWheelWedgeWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsEmoteWheelWedgeWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEmoteWheelWedgeWidget.RefreshWidget");

	UPortalWarsEmoteWheelWedgeWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEmoteWheelWedgeWidget.GetActionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsEmoteWheelWedgeWidget::GetActionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEmoteWheelWedgeWidget.GetActionText");

	UPortalWarsEmoteWheelWedgeWidget_GetActionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsEmoteWheelWidget.RefreshControllerLocation
// (Final, Native, Public)
void UPortalWarsEmoteWheelWidget::RefreshControllerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEmoteWheelWidget.RefreshControllerLocation");

	UPortalWarsEmoteWheelWidget_RefreshControllerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEnvironmentActor.EditorInit
// (Event, Protected, BlueprintEvent)
void APortalWarsEnvironmentActor::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEnvironmentActor.EditorInit");

	APortalWarsEnvironmentActor_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuSelectWidget.OnEntryUnhovered
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsMenuSelectWidget::OnEntryUnhovered(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuSelectWidget.OnEntryUnhovered");

	UPortalWarsMenuSelectWidget_OnEntryUnhovered_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuSelectWidget.OnEntryHovered
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsMenuSelectWidget::OnEntryHovered(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuSelectWidget.OnEntryHovered");

	UPortalWarsMenuSelectWidget_OnEntryHovered_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsMenuSelectWidget::GetHoveredEntryVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryVisibility");

	UPortalWarsMenuSelectWidget_GetHoveredEntryVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryText
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsMenuSelectWidget::GetHoveredEntryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryText");

	UPortalWarsMenuSelectWidget_GetHoveredEntryText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnSettingsButtonClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnSettingsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnSettingsButtonClicked");

	UPortalWarsEscapeMenuWidget_OnSettingsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnRewardCenterButtonClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnRewardCenterButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnRewardCenterButtonClicked");

	UPortalWarsEscapeMenuWidget_OnRewardCenterButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnRedeemButtonClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnRedeemButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnRedeemButtonClicked");

	UPortalWarsEscapeMenuWidget_OnRedeemButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnProfileSwitchedClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnProfileSwitchedClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnProfileSwitchedClicked");

	UPortalWarsEscapeMenuWidget_OnProfileSwitchedClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnPartyUpdate
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnPartyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnPartyUpdate");

	UPortalWarsEscapeMenuWidget_OnPartyUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnLeavePartyButtonClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnLeavePartyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnLeavePartyButtonClicked");

	UPortalWarsEscapeMenuWidget_OnLeavePartyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsEscapeMenuWidget.OnExitButtonClicked
// (Final, Native, Protected)
void UPortalWarsEscapeMenuWidget::OnExitButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsEscapeMenuWidget.OnExitButtonClicked");

	UPortalWarsEscapeMenuWidget_OnExitButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFlagIndicatorWidget.SetControllingTeam
// (Final, Native, Protected)
// Parameters:
// int                            NewControllingTeam             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsFlagIndicatorWidget::SetControllingTeam(int NewControllingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFlagIndicatorWidget.SetControllingTeam");

	UPortalWarsFlagIndicatorWidget_SetControllingTeam_Params params;
	params.NewControllingTeam = NewControllingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFlagIndicatorWidget.InitIndicatorBackground
// (Final, Native, Protected)
void UPortalWarsFlagIndicatorWidget::InitIndicatorBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFlagIndicatorWidget.InitIndicatorBackground");

	UPortalWarsFlagIndicatorWidget_InitIndicatorBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFlagIndicatorWidget.GetIndicatorBackground
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsFlagIndicatorWidget::GetIndicatorBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFlagIndicatorWidget.GetIndicatorBackground");

	UPortalWarsFlagIndicatorWidget_GetIndicatorBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsForcedTeleportTrigger.EndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsForcedTeleportTrigger::EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsForcedTeleportTrigger.EndOverlap");

	APortalWarsForcedTeleportTrigger_EndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsForcedTeleportTrigger.BeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsForcedTeleportTrigger::BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsForcedTeleportTrigger.BeginOverlap");

	APortalWarsForcedTeleportTrigger_BeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateUserRank
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdateUserRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdateUserRank");

	UPortalWarsPlayerEntryWidget_UpdateUserRank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePresenceText
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdatePresenceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePresenceText");

	UPortalWarsPlayerEntryWidget_UpdatePresenceText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerName
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerName");

	UPortalWarsPlayerEntryWidget_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerBanner
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdatePlayerBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerBanner");

	UPortalWarsPlayerEntryWidget_UpdatePlayerBanner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerAvatar
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdatePlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerAvatar");

	UPortalWarsPlayerEntryWidget_UpdatePlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateNameTags
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdateNameTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdateNameTags");

	UPortalWarsPlayerEntryWidget_UpdateNameTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateMuteIndicator
// (Final, Native, Protected)
void UPortalWarsPlayerEntryWidget::UpdateMuteIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.UpdateMuteIndicator");

	UPortalWarsPlayerEntryWidget_UpdateMuteIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerName
// (Final, Native, Public)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlayerEntryWidget::SetPlayerName(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerName");

	UPortalWarsPlayerEntryWidget_SetPlayerName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerAvatar
// (Final, Native, Public)
// Parameters:
// class UTexture*                InAvatar                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlayerEntryWidget::SetPlayerAvatar(class UTexture* InAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerAvatar");

	UPortalWarsPlayerEntryWidget_SetPlayerAvatar_Params params;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.RefreshPlayerStateInfo
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::RefreshPlayerStateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.RefreshPlayerStateInfo");

	UPortalWarsPlayerEntryWidget_RefreshPlayerStateInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.RefreshLocalPlayerInfo
// (Native, Protected)
void UPortalWarsPlayerEntryWidget::RefreshLocalPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.RefreshLocalPlayerInfo");

	UPortalWarsPlayerEntryWidget_RefreshLocalPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.OnBotAvatarLoaded
// (Final, Native, Protected)
void UPortalWarsPlayerEntryWidget::OnBotAvatarLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.OnBotAvatarLoaded");

	UPortalWarsPlayerEntryWidget_OnBotAvatarLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerEntryWidget.GetRankVisibility
// (Final, Native, Protected, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerEntryWidget::GetRankVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.GetRankVisibility");

	UPortalWarsPlayerEntryWidget_GetRankVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerEntryWidget.GetPresenceText
// (Final, Native, Public)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlayerEntryWidget::GetPresenceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.GetPresenceText");

	UPortalWarsPlayerEntryWidget_GetPresenceText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerName
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsPlayerEntryWidget::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerName");

	UPortalWarsPlayerEntryWidget_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerAvatar
// (Final, Native, Public)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UPortalWarsPlayerEntryWidget::GetPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerAvatar");

	UPortalWarsPlayerEntryWidget_GetPlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNotificationEntryWidget.OnViewButtonClicked
// (Native, Protected)
void UPortalWarsNotificationEntryWidget::OnViewButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationEntryWidget.OnViewButtonClicked");

	UPortalWarsNotificationEntryWidget_OnViewButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationEntryWidget.OnDeclineButtonClicked
// (Native, Protected)
void UPortalWarsNotificationEntryWidget::OnDeclineButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationEntryWidget.OnDeclineButtonClicked");

	UPortalWarsNotificationEntryWidget_OnDeclineButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationEntryWidget.OnAcceptButtonClicked
// (Native, Protected)
void UPortalWarsNotificationEntryWidget::OnAcceptButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationEntryWidget.OnAcceptButtonClicked");

	UPortalWarsNotificationEntryWidget_OnAcceptButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsFriendsListSubWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.RefreshWidget");

	UPortalWarsFriendsListSubWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsFriendsListSubWidget::RefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.RefreshPlayersList");

	UPortalWarsFriendsListSubWidget_RefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshEntries
// (Final, Native, Protected)
void UPortalWarsFriendsListSubWidget::RefreshEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.RefreshEntries");

	UPortalWarsFriendsListSubWidget_RefreshEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.OnPrivelegesUpdated
// (Final, Native, Protected)
void UPortalWarsFriendsListSubWidget::OnPrivelegesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.OnPrivelegesUpdated");

	UPortalWarsFriendsListSubWidget_OnPrivelegesUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.OnPlayerEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsFriendsListSubWidget::OnPlayerEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.OnPlayerEntrySelected");

	UPortalWarsFriendsListSubWidget_OnPlayerEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListSubWidget.GetRefreshButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsFriendsListSubWidget::GetRefreshButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.GetRefreshButtonEnabled");

	UPortalWarsFriendsListSubWidget_GetRefreshButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsFriendsListSubWidget.DelayedRefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsFriendsListSubWidget::DelayedRefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListSubWidget.DelayedRefreshPlayersList");

	UPortalWarsFriendsListSubWidget_DelayedRefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListWidget.GoToPlatformFriendsState
// (Final, Native, Protected)
void UPortalWarsFriendsListWidget::GoToPlatformFriendsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListWidget.GoToPlatformFriendsState");

	UPortalWarsFriendsListWidget_GoToPlatformFriendsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsFriendsListWidget.GoToFriendsState
// (Final, Native, Protected)
void UPortalWarsFriendsListWidget::GoToFriendsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsFriendsListWidget.GoToFriendsState");

	UPortalWarsFriendsListWidget_GoToFriendsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameConfigWidget.InitGameConfig
// (Final, Native, Protected)
void UPortalWarsGameConfigWidget::InitGameConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.InitGameConfig");

	UPortalWarsGameConfigWidget_InitGameConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameConfigWidget.GetScoreLimitText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameConfigWidget::GetScoreLimitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.GetScoreLimitText");

	UPortalWarsGameConfigWidget_GetScoreLimitText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameConfigWidget.GetModeName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameConfigWidget::GetModeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.GetModeName");

	UPortalWarsGameConfigWidget_GetModeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameConfigWidget.GetMaxPlayersText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameConfigWidget::GetMaxPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.GetMaxPlayersText");

	UPortalWarsGameConfigWidget_GetMaxPlayersText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameConfigWidget.GetMatchTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameConfigWidget::GetMatchTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.GetMatchTimeText");

	UPortalWarsGameConfigWidget_GetMatchTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameConfigWidget.GetMapName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameConfigWidget::GetMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameConfigWidget.GetMapName");

	UPortalWarsGameConfigWidget_GetMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameInstance.ShowLoadingScreen
// (Final, Native, Public, BlueprintCallable)
void UPortalWarsGameInstance::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.ShowLoadingScreen");

	UPortalWarsGameInstance_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.PreLoadMap
// (Final, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameInstance::PreLoadMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.PreLoadMap");

	UPortalWarsGameInstance_PreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.OnPostLoadMap
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InLoadedWorld                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameInstance::OnPostLoadMap(class UWorld* InLoadedWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.OnPostLoadMap");

	UPortalWarsGameInstance_OnPostLoadMap_Params params;
	params.InLoadedWorld = InLoadedWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.HideLoadingScreen
// (Final, Native, Public, BlueprintCallable)
void UPortalWarsGameInstance::HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.HideLoadingScreen");

	UPortalWarsGameInstance_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.HandleTravelFailure
// (Final, Native, Protected)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETravelFailure> FailureType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ErrorString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameInstance::HandleTravelFailure(class UWorld* World, TEnumAsByte<Engine_ETravelFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.HandleTravelFailure");

	UPortalWarsGameInstance_HandleTravelFailure_Params params;
	params.World = World;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.HandleNetworkFailure
// (Final, Native, Protected)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENetworkFailure> FailureType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ErrorString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameInstance::HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.HandleNetworkFailure");

	UPortalWarsGameInstance_HandleNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.DisconnectFromServer
// (Final, Exec, Native, Protected)
void UPortalWarsGameInstance::DisconnectFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.DisconnectFromServer");

	UPortalWarsGameInstance_DisconnectFromServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.DisconnectFromBackend
// (Final, Exec, Native, Protected)
void UPortalWarsGameInstance::DisconnectFromBackend()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.DisconnectFromBackend");

	UPortalWarsGameInstance_DisconnectFromBackend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameInstance.Crash
// (Final, Exec, Native, Protected)
void UPortalWarsGameInstance::Crash()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameInstance.Crash");

	UPortalWarsGameInstance_Crash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGamepadReconnectWidget.OnUserAdded
// (Final, Native, Protected)
// Parameters:
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGamepadReconnectWidget::OnUserAdded(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGamepadReconnectWidget.OnUserAdded");

	UPortalWarsGamepadReconnectWidget_OnUserAdded_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGamepadSelectWidget.RefreshPresetWidgets
// (Final, Native, Protected)
void UPortalWarsGamepadSelectWidget::RefreshPresetWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGamepadSelectWidget.RefreshPresetWidgets");

	UPortalWarsGamepadSelectWidget_RefreshPresetWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.StandardizeRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                InRotator                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UPortalWarsGameplayStatics::STATIC_StandardizeRotator(const struct FRotator& InRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.StandardizeRotator");

	UPortalWarsGameplayStatics_StandardizeRotator_Params params;
	params.InRotator = InRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.SlerpRInterpTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Current                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UPortalWarsGameplayStatics::STATIC_SlerpRInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.SlerpRInterpTo");

	UPortalWarsGameplayStatics_SlerpRInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.SlerpInterpTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuat                   Current                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                   Target                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UPortalWarsGameplayStatics::STATIC_SlerpInterpTo(const struct FQuat& Current, const struct FQuat& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.SlerpInterpTo");

	UPortalWarsGameplayStatics_SlerpInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.Slerp
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UPortalWarsGameplayStatics::STATIC_Slerp(const struct FRotator& A, const struct FRotator& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.Slerp");

	UPortalWarsGameplayStatics_Slerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.RadiansBetweenVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector1                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Vector2                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsGameplayStatics::STATIC_RadiansBetweenVectors(const struct FVector& Vector1, const struct FVector& Vector2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.RadiansBetweenVectors");

	UPortalWarsGameplayStatics_RadiansBetweenVectors_Params params;
	params.Vector1 = Vector1;
	params.Vector2 = Vector2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.PWSpawnAkComponentAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*               EarlyReflectionsBus            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EarlyReflectionsBusName        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UPortalWarsGameplayStatics::STATIC_PWSpawnAkComponentAtLocation(class UWorld* TheWorld, class UAkAudioEvent* AkEvent, class AActor* SourceActor, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWSpawnAkComponentAtLocation");

	UPortalWarsGameplayStatics_PWSpawnAkComponentAtLocation_Params params;
	params.TheWorld = TheWorld;
	params.AkEvent = AkEvent;
	params.SourceActor = SourceActor;
	params.EarlyReflectionsBus = EarlyReflectionsBus;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.EarlyReflectionsBusName = EarlyReflectionsBusName;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.PWSetGlobalRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPCName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameplayStatics::STATIC_PWSetGlobalRTPCValue(const struct FName& RTPCName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWSetGlobalRTPCValue");

	UPortalWarsGameplayStatics_PWSetGlobalRTPCValue_Params params;
	params.RTPCName = RTPCName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponentWithDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<PortalWars_ESoundReplicationType> RepType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameplayStatics::STATIC_PWPlayWwiseEventOnAkComponentWithDelay(class UWorld* TheWorld, class UAkAudioEvent* EventToPlay, class UPortalWarsAkComponent* AkComponent, float Delay, TEnumAsByte<PortalWars_ESoundReplicationType> RepType, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponentWithDelay");

	UPortalWarsGameplayStatics_PWPlayWwiseEventOnAkComponentWithDelay_Params params;
	params.TheWorld = TheWorld;
	params.EventToPlay = EventToPlay;
	params.AkComponent = AkComponent;
	params.Delay = Delay;
	params.RepType = RepType;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<PortalWars_ESoundReplicationType> RepType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameplayStatics::STATIC_PWPlayWwiseEventOnAkComponent(class UWorld* TheWorld, class UAkAudioEvent* EventToPlay, class UPortalWarsAkComponent* AkComponent, TEnumAsByte<PortalWars_ESoundReplicationType> RepType, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponent");

	UPortalWarsGameplayStatics_PWPlayWwiseEventOnAkComponent_Params params;
	params.TheWorld = TheWorld;
	params.EventToPlay = EventToPlay;
	params.AkComponent = AkComponent;
	params.RepType = RepType;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocationWithDelay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 SoundLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SoundRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<PortalWars_ESoundReplicationType> RepType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameplayStatics::STATIC_PWPlayWwiseEventAtLocationWithDelay(class UWorld* TheWorld, class UAkAudioEvent* EventToPlay, class AActor* SourceActor, const struct FVector& SoundLocation, const struct FRotator& SoundRotation, float Delay, TEnumAsByte<PortalWars_ESoundReplicationType> RepType, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocationWithDelay");

	UPortalWarsGameplayStatics_PWPlayWwiseEventAtLocationWithDelay_Params params;
	params.TheWorld = TheWorld;
	params.EventToPlay = EventToPlay;
	params.SourceActor = SourceActor;
	params.SoundLocation = SoundLocation;
	params.SoundRotation = SoundRotation;
	params.Delay = Delay;
	params.RepType = RepType;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 SoundLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SoundRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<PortalWars_ESoundReplicationType> RepType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsGameplayStatics::STATIC_PWPlayWwiseEventAtLocation(class UWorld* TheWorld, class UAkAudioEvent* EventToPlay, class AActor* SourceActor, const struct FVector& SoundLocation, const struct FRotator& SoundRotation, TEnumAsByte<PortalWars_ESoundReplicationType> RepType, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocation");

	UPortalWarsGameplayStatics_PWPlayWwiseEventAtLocation_Params params;
	params.TheWorld = TheWorld;
	params.EventToPlay = EventToPlay;
	params.SourceActor = SourceActor;
	params.SoundLocation = SoundLocation;
	params.SoundRotation = SoundRotation;
	params.RepType = RepType;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGameplayStatics.IsWithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsWithEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsWithEditor");

	UPortalWarsGameplayStatics_IsWithEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsPlayingTutorial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsPlayingTutorial(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsPlayingTutorial");

	UPortalWarsGameplayStatics_IsPlayingTutorial_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsPlayingReplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsPlayingReplay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsPlayingReplay");

	UPortalWarsGameplayStatics_IsPlayingReplay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsPlayingRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsPlayingRange(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsPlayingRange");

	UPortalWarsGameplayStatics_IsPlayingRange_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsPlayingRace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsPlayingRace(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsPlayingRace");

	UPortalWarsGameplayStatics_IsPlayingRace_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsPlayerStateFullyReplicatedForPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APortalWarsPlayerState*  PS                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsPlayerStateFullyReplicatedForPlayer(class APortalWarsPlayerState* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsPlayerStateFullyReplicatedForPlayer");

	UPortalWarsGameplayStatics_IsPlayerStateFullyReplicatedForPlayer_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerStateFullyReplicated
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerStateFullyReplicated(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerStateFullyReplicated");

	UPortalWarsGameplayStatics_IsLocalPlayerStateFullyReplicated_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerSpectating
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerSpectating(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerSpectating");

	UPortalWarsGameplayStatics_IsLocalPlayerSpectating_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInGlobalVision
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerInGlobalVision(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInGlobalVision");

	UPortalWarsGameplayStatics_IsLocalPlayerInGlobalVision_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInFreeCam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerInFreeCam(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInFreeCam");

	UPortalWarsGameplayStatics_IsLocalPlayerInFreeCam_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerFlagged
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerFlagged(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerFlagged");

	UPortalWarsGameplayStatics_IsLocalPlayerFlagged_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerAdmin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLocalPlayerAdmin(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerAdmin");

	UPortalWarsGameplayStatics_IsLocalPlayerAdmin_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsLANMatch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsLANMatch(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsLANMatch");

	UPortalWarsGameplayStatics_IsLANMatch_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsInWaitingArea
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsInWaitingArea(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsInWaitingArea");

	UPortalWarsGameplayStatics_IsInWaitingArea_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsInRaceLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsInRaceLobby(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsInRaceLobby");

	UPortalWarsGameplayStatics_IsInRaceLobby_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsInMainMenu
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsInMainMenu(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsInMainMenu");

	UPortalWarsGameplayStatics_IsInMainMenu_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsInLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsInLobby(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsInLobby");

	UPortalWarsGameplayStatics_IsInLobby_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsInCustomGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsInCustomGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsInCustomGame");

	UPortalWarsGameplayStatics_IsInCustomGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsEnemyTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsEnemyTeamNum(unsigned char TeamNum, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsEnemyTeamNum");

	UPortalWarsGameplayStatics_IsEnemyTeamNum_Params params;
	params.TeamNum = TeamNum;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsCharacterOverlappingComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACharacter*              Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 BoxExtent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsCharacterOverlappingComponent(class ACharacter* Character, class USceneComponent* Component, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsCharacterOverlappingComponent");

	UPortalWarsGameplayStatics_IsCharacterOverlappingComponent_Params params;
	params.Character = Character;
	params.Component = Component;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.IsAnyCharacterOverlappingComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 BoxExtent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_IsAnyCharacterOverlappingComponent(class UObject* WorldContextObject, class USceneComponent* Component, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.IsAnyCharacterOverlappingComponent");

	UPortalWarsGameplayStatics_IsAnyCharacterOverlappingComponent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Component = Component;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetTeamNameForTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameplayStatics::STATIC_GetTeamNameForTeam(unsigned char TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetTeamNameForTeam");

	UPortalWarsGameplayStatics_GetTeamNameForTeam_Params params;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetSaveGameForLocalPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsSaveGame*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsSaveGame* UPortalWarsGameplayStatics::STATIC_GetSaveGameForLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetSaveGameForLocalPlayer");

	UPortalWarsGameplayStatics_GetSaveGameForLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetPortalWarsGameSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPortalWarsGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsGameUserSettings* UPortalWarsGameplayStatics::STATIC_GetPortalWarsGameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetPortalWarsGameSettings");

	UPortalWarsGameplayStatics_GetPortalWarsGameSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetPlayerStateFromUniqueId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerIdString                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSearchInactive                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsPlayerState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsPlayerState* UPortalWarsGameplayStatics::STATIC_GetPlayerStateFromUniqueId(class UObject* WorldContextObject, const struct FString& PlayerIdString, bool bSearchInactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetPlayerStateFromUniqueId");

	UPortalWarsGameplayStatics_GetPlayerStateFromUniqueId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerIdString = PlayerIdString;
	params.bSearchInactive = bSearchInactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetPlayerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APortalWarsCharacter*    Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsGameplayStatics::STATIC_GetPlayerName(class APortalWarsCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetPlayerName");

	UPortalWarsGameplayStatics_GetPlayerName_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetMouseKeyIconForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InAction                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsGameplayStatics::STATIC_GetMouseKeyIconForAction(class ULocalPlayer* LocalPlayer, const struct FString& InAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetMouseKeyIconForAction");

	UPortalWarsGameplayStatics_GetMouseKeyIconForAction_Params params;
	params.LocalPlayer = LocalPlayer;
	params.InAction = InAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetLocalTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UPortalWarsGameplayStatics::STATIC_GetLocalTeamNum(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetLocalTeamNum");

	UPortalWarsGameplayStatics_GetLocalTeamNum_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsPlayerState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APortalWarsPlayerState* UPortalWarsGameplayStatics::STATIC_GetLocalPlayerState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerState");

	UPortalWarsGameplayStatics_GetLocalPlayerState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerControllerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsGameplayStatics::STATIC_GetLocalPlayerControllerId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerControllerId");

	UPortalWarsGameplayStatics_GetLocalPlayerControllerId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetKeyForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InAction                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UPortalWarsGameplayStatics::STATIC_GetKeyForAction(class ULocalPlayer* LocalPlayer, const struct FString& InAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetKeyForAction");

	UPortalWarsGameplayStatics_GetKeyForAction_Params params;
	params.LocalPlayer = LocalPlayer;
	params.InAction = InAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetKeyDisplayNameForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InAction                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLongDispayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGameplayStatics::STATIC_GetKeyDisplayNameForAction(class ULocalPlayer* LocalPlayer, const struct FString& InAction, bool bLongDispayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetKeyDisplayNameForAction");

	UPortalWarsGameplayStatics_GetKeyDisplayNameForAction_Params params;
	params.LocalPlayer = LocalPlayer;
	params.InAction = InAction;
	params.bLongDispayName = bLongDispayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetGameVersion
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 OutGameVersion                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_GetGameVersion(struct FString* OutGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetGameVersion");

	UPortalWarsGameplayStatics_GetGameVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGameVersion != nullptr)
		*OutGameVersion = params.OutGameVersion;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyIconForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InAction                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsGameplayStatics::STATIC_GetGamepadKeyIconForAction(class ULocalPlayer* LocalPlayer, const struct FString& InAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyIconForAction");

	UPortalWarsGameplayStatics_GetGamepadKeyIconForAction_Params params;
	params.LocalPlayer = LocalPlayer;
	params.InAction = InAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InAction                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UPortalWarsGameplayStatics::STATIC_GetGamepadKeyForAction(class ULocalPlayer* LocalPlayer, const struct FString& InAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyForAction");

	UPortalWarsGameplayStatics_GetGamepadKeyForAction_Params params;
	params.LocalPlayer = LocalPlayer;
	params.InAction = InAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.DegreesBetweenVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector1                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Vector2                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsGameplayStatics::STATIC_DegreesBetweenVectors(const struct FVector& Vector1, const struct FVector& Vector2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.DegreesBetweenVectors");

	UPortalWarsGameplayStatics_DegreesBetweenVectors_Params params;
	params.Vector1 = Vector1;
	params.Vector2 = Vector2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.CompareVersionNumbers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 v1                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 v2                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsGameplayStatics::STATIC_CompareVersionNumbers(const struct FString& v1, const struct FString& v2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.CompareVersionNumbers");

	UPortalWarsGameplayStatics_CompareVersionNumbers_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.CheckAimDistToEnemy
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       From                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ToLocation                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_CheckAimDistToEnemy(class APlayerController* From, const struct FVector& ToLocation, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.CheckAimDistToEnemy");

	UPortalWarsGameplayStatics_CheckAimDistToEnemy_Params params;
	params.From = From;
	params.ToLocation = ToLocation;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PS1                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*            PS2                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_AreEnemiesPS(class APlayerState* PS1, class APlayerState* PS2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPS");

	UPortalWarsGameplayStatics_AreEnemiesPS_Params params;
	params.PS1 = PS1;
	params.PS2 = PS2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Player1                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Player2                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_AreEnemiesPawn(class APawn* Player1, class APawn* Player2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPawn");

	UPortalWarsGameplayStatics_AreEnemiesPawn_Params params;
	params.Player1 = Player1;
	params.Player2 = Player2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamageWithFalloff
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinimumDamage                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageInnerRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageOuterRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageFalloff                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         AltVisibilityOrigins           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShotThruPortal                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGun*                    Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<struct FVector> AltVisibilityOrigins, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel, bool bShotThruPortal, class AGun* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamageWithFalloff");

	UPortalWarsGameplayStatics_ApplyRadialDamageWithFalloff_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.MinimumDamage = MinimumDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageFalloff = DamageFalloff;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.AltVisibilityOrigins = AltVisibilityOrigins;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.bShotThruPortal = bShotThruPortal;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamage
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageInnerRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageOuterRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         AltVisibilityOrigins           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageFalloff                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinimumDamage                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShotThruPortal                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGun*                    Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsGameplayStatics::STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<struct FVector> AltVisibilityOrigins, class AActor* DamageCauser, class AController* InstigatedByController, float DamageFalloff, float MinimumDamage, TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel, bool bShotThruPortal, class AGun* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamage");

	UPortalWarsGameplayStatics_ApplyRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.AltVisibilityOrigins = AltVisibilityOrigins;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.DamageFalloff = DamageFalloff;
	params.MinimumDamage = MinimumDamage;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.bShotThruPortal = bShotThruPortal;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGameSessionReconnectDialog.OnReconnectButtonClicked
// (Native, Protected)
void UPortalWarsGameSessionReconnectDialog::OnReconnectButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGameSessionReconnectDialog.OnReconnectButtonClicked");

	UPortalWarsGameSessionReconnectDialog_OnReconnectButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGGPlayerState.OnRep_CurrentWeaponIndex
// (Final, Native, Protected)
void APortalWarsGGPlayerState::OnRep_CurrentWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGGPlayerState.OnRep_CurrentWeaponIndex");

	APortalWarsGGPlayerState_OnRep_CurrentWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGlobalCarouselWidget.OnDisplayImageLoaded
// (Final, Native, Protected)
void UPortalWarsGlobalCarouselWidget::OnDisplayImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGlobalCarouselWidget.OnDisplayImageLoaded");

	UPortalWarsGlobalCarouselWidget_OnDisplayImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsGlobalCarouselWidget::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayName");

	UPortalWarsGlobalCarouselWidget_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayImage
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsGlobalCarouselWidget::GetDisplayImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayImage");

	UPortalWarsGlobalCarouselWidget_GetDisplayImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.RocketLauncher.ReloadWeapon_Multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// bool                           ShouldInsert                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARocketLauncher::ReloadWeapon_Multicast(bool ShouldInsert)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.RocketLauncher.ReloadWeapon_Multicast");

	ARocketLauncher_ReloadWeapon_Multicast_Params params;
	params.ShouldInsert = ShouldInsert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.ScoreboardComponent.UpdateComponent
// (Final, Native, Protected)
void AScoreboardComponent::UpdateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.ScoreboardComponent.UpdateComponent");

	AScoreboardComponent_UpdateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.ScoreboardComponent.SpawnText
// (Native, Protected)
void AScoreboardComponent::SpawnText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.ScoreboardComponent.SpawnText");

	AScoreboardComponent_SpawnText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGoodSky.EditorInit
// (Event, Protected, BlueprintEvent)
void APortalWarsGoodSky::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGoodSky.EditorInit");

	APortalWarsGoodSky_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGunPickupZone.OnRep_TimeToSpawn
// (Final, Native, Protected)
void APortalWarsGunPickupZone::OnRep_TimeToSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGunPickupZone.OnRep_TimeToSpawn");

	APortalWarsGunPickupZone_OnRep_TimeToSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsGunPickupZone.OnRep_IsActive
// (Final, Native, Protected)
void APortalWarsGunPickupZone::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsGunPickupZone.OnRep_IsActive");

	APortalWarsGunPickupZone_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHappyHourDialogWidget.GetHappyHourText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsHappyHourDialogWidget::GetHappyHourText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHappyHourDialogWidget.GetHappyHourText");

	UPortalWarsHappyHourDialogWidget_GetHappyHourText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHappyHourStatusWidget.UpdateWidget
// (Final, Native, Protected)
void UPortalWarsHappyHourStatusWidget::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHappyHourStatusWidget.UpdateWidget");

	UPortalWarsHappyHourStatusWidget_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHappyHourStatusWidget.IsHappyHourLive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsHappyHourStatusWidget::IsHappyHourLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHappyHourStatusWidget.IsHappyHourLive");

	UPortalWarsHappyHourStatusWidget_IsHappyHourLive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHappyHourStatusWidget.GetTimeRemainingText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsHappyHourStatusWidget::GetTimeRemainingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHappyHourStatusWidget.GetTimeRemainingText");

	UPortalWarsHappyHourStatusWidget_GetTimeRemainingText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHappyHourStatusWidget.GetHappyHourText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsHappyHourStatusWidget::GetHappyHourText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHappyHourStatusWidget.GetHappyHourText");

	UPortalWarsHappyHourStatusWidget_GetHappyHourText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHostMenuWidget.OnServerPasswordValueChanged
// (Final, Native, Protected)
void UPortalWarsHostMenuWidget::OnServerPasswordValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.OnServerPasswordValueChanged");

	UPortalWarsHostMenuWidget_OnServerPasswordValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHostMenuWidget.OnServerNameValueChanged
// (Final, Native, Protected)
void UPortalWarsHostMenuWidget::OnServerNameValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.OnServerNameValueChanged");

	UPortalWarsHostMenuWidget_OnServerNameValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHostMenuWidget.OnRegionSelectionChanged
// (Final, Native, Protected)
void UPortalWarsHostMenuWidget::OnRegionSelectionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.OnRegionSelectionChanged");

	UPortalWarsHostMenuWidget_OnRegionSelectionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHostMenuWidget.OnPrivateCheckBoxValueChanged
// (Final, Native, Protected)
void UPortalWarsHostMenuWidget::OnPrivateCheckBoxValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.OnPrivateCheckBoxValueChanged");

	UPortalWarsHostMenuWidget_OnPrivateCheckBoxValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHostMenuWidget.HostGame
// (Final, Native, Protected)
void UPortalWarsHostMenuWidget::HostGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.HostGame");

	UPortalWarsHostMenuWidget_HostGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHostMenuWidget.GetPrivateVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsHostMenuWidget::GetPrivateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.GetPrivateVisibility");

	UPortalWarsHostMenuWidget_GetPrivateVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHostMenuWidget.GetHostButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsHostMenuWidget::GetHostButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHostMenuWidget.GetHostButtonEnabled");

	UPortalWarsHostMenuWidget_GetHostButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHUDWidget.ShowSubtitle
// (Final, Native, Public)
void UPortalWarsHUDWidget::ShowSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.ShowSubtitle");

	UPortalWarsHUDWidget_ShowSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUDWidget.ProcessKill
// (Final, Native, Public)
// Parameters:
// class APortalWarsPlayerState*  KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APortalWarsPlayerState*  KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*             KillerDamageType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageDealt                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsHUDWidget::ProcessKill(class APortalWarsPlayerState* KillerPlayerState, class APortalWarsPlayerState* KilledPlayerState, class UDamageType* KillerDamageType, bool bIsHeadshot, float DamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.ProcessKill");

	UPortalWarsHUDWidget_ProcessKill_Params params;
	params.KillerPlayerState = KillerPlayerState;
	params.KilledPlayerState = KilledPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.bIsHeadshot = bIsHeadshot;
	params.DamageDealt = DamageDealt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUDWidget.HideSubtitle
// (Final, Native, Public)
void UPortalWarsHUDWidget::HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.HideSubtitle");

	UPortalWarsHUDWidget_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsHUDWidget.GetRadarVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsHUDWidget::GetRadarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.GetRadarVisibility");

	UPortalWarsHUDWidget_GetRadarVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHUDWidget.GetLowHealthOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsHUDWidget::GetLowHealthOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.GetLowHealthOpacity");

	UPortalWarsHUDWidget_GetLowHealthOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHUDWidget.GetJetpackVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsHUDWidget::GetJetpackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.GetJetpackVisibility");

	UPortalWarsHUDWidget_GetJetpackVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsHUDWidget.GetJetpackPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsHUDWidget::GetJetpackPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsHUDWidget.GetJetpackPercent");

	UPortalWarsHUDWidget_GetJetpackPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsInputDecoratorWidget.RefreshWidget
// (Final, Native, Public)
void UPortalWarsInputDecoratorWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInputDecoratorWidget.RefreshWidget");

	UPortalWarsInputDecoratorWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsIntroVideoWidget.OnMediaOpenFailed
// (Final, Native, Protected)
// Parameters:
// struct FString                 FailedUrl                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsIntroVideoWidget::OnMediaOpenFailed(const struct FString& FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsIntroVideoWidget.OnMediaOpenFailed");

	UPortalWarsIntroVideoWidget_OnMediaOpenFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInviteEntryWidget.OnPendingInvitesUpdated
// (Final, Native, Protected)
void UPortalWarsInviteEntryWidget::OnPendingInvitesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInviteEntryWidget.OnPendingInvitesUpdated");

	UPortalWarsInviteEntryWidget_OnPendingInvitesUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInviteManager.OnMainMenu
// (Final, Native, Protected)
void UPortalWarsInviteManager::OnMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInviteManager.OnMainMenu");

	UPortalWarsInviteManager_OnMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsInviteMenuWidget.RefreshInviteEntries
// (Final, Native, Protected)
void UPortalWarsInviteMenuWidget::RefreshInviteEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsInviteMenuWidget.RefreshInviteEntries");

	UPortalWarsInviteMenuWidget_RefreshInviteEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopEntry.RefreshNewState
// (Final, Native, Protected)
void UPortalWarsItemShopEntry::RefreshNewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.RefreshNewState");

	UPortalWarsItemShopEntry_RefreshNewState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopEntry.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopEntry::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetTitleText");

	UPortalWarsItemShopEntry_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetSubtitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopEntry::GetSubtitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetSubtitleText");

	UPortalWarsItemShopEntry_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetRarityScrim
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsItemShopEntry::GetRarityScrim()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetRarityScrim");

	UPortalWarsItemShopEntry_GetRarityScrim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetRarityIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsItemShopEntry::GetRarityIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetRarityIcon");

	UPortalWarsItemShopEntry_GetRarityIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetRarityColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsItemShopEntry::GetRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetRarityColor");

	UPortalWarsItemShopEntry_GetRarityColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetRarityBorderColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsItemShopEntry::GetRarityBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetRarityBorderColor");

	UPortalWarsItemShopEntry_GetRarityBorderColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopEntry.GetRarityBG
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsItemShopEntry::GetRarityBG()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopEntry.GetRarityBG");

	UPortalWarsItemShopEntry_GetRarityBG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopInspectWidget.UpdatePurchaseState
// (Final, Native, Protected)
void UPortalWarsItemShopInspectWidget::UpdatePurchaseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.UpdatePurchaseState");

	UPortalWarsItemShopInspectWidget_UpdatePurchaseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopInspectWidget.OnPurchaseButtonClicked
// (Final, Native, Protected)
void UPortalWarsItemShopInspectWidget::OnPurchaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.OnPurchaseButtonClicked");

	UPortalWarsItemShopInspectWidget_OnPurchaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopInspectWidget::OnItemEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntrySelected");

	UPortalWarsItemShopInspectWidget_OnItemEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntryScrolledTo
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopInspectWidget::OnItemEntryScrolledTo(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntryScrolledTo");

	UPortalWarsItemShopInspectWidget_OnItemEntryScrolledTo_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopInspectWidget.OnIndividualPurchaseButtonClicked
// (Final, Native, Protected)
void UPortalWarsItemShopInspectWidget::OnIndividualPurchaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.OnIndividualPurchaseButtonClicked");

	UPortalWarsItemShopInspectWidget_OnIndividualPurchaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopInspectWidget.GetItemsVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsItemShopInspectWidget::GetItemsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopInspectWidget.GetItemsVisibility");

	UPortalWarsItemShopInspectWidget_GetItemsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsMedalEntryWidget.UpdateStyle_Internal
// (Final, Native, Protected)
void UPortalWarsMedalEntryWidget::UpdateStyle_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMedalEntryWidget.UpdateStyle_Internal");

	UPortalWarsMedalEntryWidget_UpdateStyle_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMedalsWidget.ProcessMedal
// (Final, Native, Protected)
void UPortalWarsMedalsWidget::ProcessMedal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMedalsWidget.ProcessMedal");

	UPortalWarsMedalsWidget_ProcessMedal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMedalsWidget.OnMedalRemoved
// (Final, Native, Protected)
void UPortalWarsMedalsWidget::OnMedalRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMedalsWidget.OnMedalRemoved");

	UPortalWarsMedalsWidget_OnMedalRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMedalsWidget.FinishShiftingMedals
// (Final, Native, Protected)
void UPortalWarsMedalsWidget::FinishShiftingMedals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMedalsWidget.FinishShiftingMedals");

	UPortalWarsMedalsWidget_FinishShiftingMedals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuCarouselWidget.RefreshEntries
// (Final, Native, Protected)
void UPortalWarsMenuCarouselWidget::RefreshEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuCarouselWidget.RefreshEntries");

	UPortalWarsMenuCarouselWidget_RefreshEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMenuCarouselWidget.OnNextEntry
// (Final, Native, Protected)
void UPortalWarsMenuCarouselWidget::OnNextEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMenuCarouselWidget.OnNextEntry");

	UPortalWarsMenuCarouselWidget_OnNextEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayFocusChanged
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNameIndicatorWidget::OnReplayFocusChanged(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayFocusChanged");

	UPortalWarsNameIndicatorWidget_OnReplayFocusChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayCameraModeChanged
// (Final, Native, Protected)
// Parameters:
// PortalWars_EReplayCameraMode   ReplayCameraMode               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNameIndicatorWidget::OnReplayCameraModeChanged(PortalWars_EReplayCameraMode ReplayCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayCameraModeChanged");

	UPortalWarsNameIndicatorWidget_OnReplayCameraModeChanged_Params params;
	params.ReplayCameraMode = ReplayCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNameIndicatorWidget.InitPlayerInfo
// (Final, Native, Protected)
void UPortalWarsNameIndicatorWidget::InitPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNameIndicatorWidget.InitPlayerInfo");

	UPortalWarsNameIndicatorWidget_InitPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNameIndicatorWidget.GetEnemyVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsNameIndicatorWidget::GetEnemyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNameIndicatorWidget.GetEnemyVisibility");

	UPortalWarsNameIndicatorWidget_GetEnemyVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNameIndicatorWidget.GetDeathVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsNameIndicatorWidget::GetDeathVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNameIndicatorWidget.GetDeathVisibility");

	UPortalWarsNameIndicatorWidget_GetDeathVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNavBarWidget.OnNavButtonSelected
// (Final, Native, Public)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNavBarWidget::OnNavButtonSelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNavBarWidget.OnNavButtonSelected");

	UPortalWarsNavBarWidget_OnNavButtonSelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNavBarWidget.GoToPrevState
// (Final, Native, Protected)
void UPortalWarsNavBarWidget::GoToPrevState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNavBarWidget.GoToPrevState");

	UPortalWarsNavBarWidget_GoToPrevState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNavBarWidget.GoToNextState
// (Final, Native, Protected)
void UPortalWarsNavBarWidget::GoToNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNavBarWidget.GoToNextState");

	UPortalWarsNavBarWidget_GoToNextState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopPurchasePanel.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsItemShopPurchasePanel::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopPurchasePanel.RefreshWidget");

	UPortalWarsItemShopPurchasePanel_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopPurchasePanel.OnPurchaseButtonClicked
// (Final, Native, Protected)
void UPortalWarsItemShopPurchasePanel::OnPurchaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopPurchasePanel.OnPurchaseButtonClicked");

	UPortalWarsItemShopPurchasePanel_OnPurchaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopPurchasePanel.GetTitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopPurchasePanel::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopPurchasePanel.GetTitleText");

	UPortalWarsItemShopPurchasePanel_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemTitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopPurchasePanel::GetItemTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemTitleText");

	UPortalWarsItemShopPurchasePanel_GetItemTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemSubtitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsItemShopPurchasePanel::GetItemSubtitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemSubtitleText");

	UPortalWarsItemShopPurchasePanel_GetItemSubtitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsItemShopWidget.RefreshButtons
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::RefreshButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.RefreshButtons");

	UPortalWarsItemShopWidget_RefreshButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.OnUserScrolled
// (Final, Native, Protected)
// Parameters:
// float                          CurrentOffset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopWidget::OnUserScrolled(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.OnUserScrolled");

	UPortalWarsItemShopWidget_OnUserScrolled_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.OnProgressionUpdate
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::OnProgressionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.OnProgressionUpdate");

	UPortalWarsItemShopWidget_OnProgressionUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.OnPreviousButtonClicked
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::OnPreviousButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.OnPreviousButtonClicked");

	UPortalWarsItemShopWidget_OnPreviousButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.OnNextButtonClicked
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::OnNextButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.OnNextButtonClicked");

	UPortalWarsItemShopWidget_OnNextButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.OnEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopWidget::OnEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.OnEntrySelected");

	UPortalWarsItemShopWidget_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.InitEntries
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::InitEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.InitEntries");

	UPortalWarsItemShopWidget_InitEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.GoToScrollState
// (Native, Protected)
// Parameters:
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsItemShopWidget::GoToScrollState(unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.GoToScrollState");

	UPortalWarsItemShopWidget_GoToScrollState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.GoToMainState");

	UPortalWarsItemShopWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.GoToInspectState
// (Final, Native, Protected)
void UPortalWarsItemShopWidget::GoToInspectState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.GoToInspectState");

	UPortalWarsItemShopWidget_GoToInspectState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsItemShopWidget.GetSectionWidgetForState
// (Final, Native, Protected)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsItemShopSectionWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsItemShopSectionWidget* UPortalWarsItemShopWidget::GetSectionWidgetForState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsItemShopWidget.GetSectionWidgetForState");

	UPortalWarsItemShopWidget_GetSectionWidgetForState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsJoinInProgressWidget.PlayFadeOutAnimation
// (Final, Native, Protected)
void UPortalWarsJoinInProgressWidget::PlayFadeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinInProgressWidget.PlayFadeOutAnimation");

	UPortalWarsJoinInProgressWidget_PlayFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.UpdateButtons
// (Final, Native, Protected)
void UPortalWarsJoinServerDialogWidget::UpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.UpdateButtons");

	UPortalWarsJoinServerDialogWidget_UpdateButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.SpectateServer
// (Final, Native, Protected)
void UPortalWarsJoinServerDialogWidget::SpectateServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.SpectateServer");

	UPortalWarsJoinServerDialogWidget_SpectateServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsJoinServerDialogWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.RefreshWidget");

	UPortalWarsJoinServerDialogWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.OnPasswordTextChanged
// (Final, Native, Protected)
void UPortalWarsJoinServerDialogWidget::OnPasswordTextChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.OnPasswordTextChanged");

	UPortalWarsJoinServerDialogWidget_OnPasswordTextChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.JoinServer
// (Final, Native, Protected)
void UPortalWarsJoinServerDialogWidget::JoinServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.JoinServer");

	UPortalWarsJoinServerDialogWidget_JoinServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsJoinServerDialogWidget::GetSpectateEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateEnabled");

	UPortalWarsJoinServerDialogWidget_GetSpectateEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateDisabledText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsJoinServerDialogWidget::GetSpectateDisabledText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateDisabledText");

	UPortalWarsJoinServerDialogWidget_GetSpectateDisabledText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsJoinServerDialogWidget.GetPasswordVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsJoinServerDialogWidget::GetPasswordVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.GetPasswordVisibility");

	UPortalWarsJoinServerDialogWidget_GetPasswordVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsJoinServerDialogWidget::GetJoinEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinEnabled");

	UPortalWarsJoinServerDialogWidget_GetJoinEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinDisabledText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsJoinServerDialogWidget::GetJoinDisabledText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinDisabledText");

	UPortalWarsJoinServerDialogWidget_GetJoinDisabledText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKeybindSettingsWidget.OnSecondaryKeyBound
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsKeybindWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsKeybindSettingsWidget::OnSecondaryKeyBound(class UPortalWarsKeybindWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindSettingsWidget.OnSecondaryKeyBound");

	UPortalWarsKeybindSettingsWidget_OnSecondaryKeyBound_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindSettingsWidget.OnPrimaryKeyBound
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsKeybindWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsKeybindSettingsWidget::OnPrimaryKeyBound(class UPortalWarsKeybindWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindSettingsWidget.OnPrimaryKeyBound");

	UPortalWarsKeybindSettingsWidget_OnPrimaryKeyBound_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindSettingsWidget.OnFailedKeyBound
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPortalWarsKeybindWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Reason                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsKeybindSettingsWidget::OnFailedKeyBound(class UPortalWarsKeybindWidget* Widget, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindSettingsWidget.OnFailedKeyBound");

	UPortalWarsKeybindSettingsWidget_OnFailedKeyBound_Params params;
	params.Widget = Widget;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindSettingsWidget.GetWarningVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsKeybindSettingsWidget::GetWarningVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindSettingsWidget.GetWarningVisibility");

	UPortalWarsKeybindSettingsWidget_GetWarningVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryKeyPressed
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsKeybindWidget::OnSecondaryKeyPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnSecondaryKeyPressed");

	UPortalWarsKeybindWidget_OnSecondaryKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonUnhovered
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnSecondaryButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonUnhovered");

	UPortalWarsKeybindWidget_OnSecondaryButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonPressed
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnSecondaryButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonPressed");

	UPortalWarsKeybindWidget_OnSecondaryButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonHovered
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnSecondaryButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonHovered");

	UPortalWarsKeybindWidget_OnSecondaryButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryKeyPressed
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsKeybindWidget::OnPrimaryKeyPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnPrimaryKeyPressed");

	UPortalWarsKeybindWidget_OnPrimaryKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonUnhovered
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnPrimaryButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonUnhovered");

	UPortalWarsKeybindWidget_OnPrimaryButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonPressed
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnPrimaryButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonPressed");

	UPortalWarsKeybindWidget_OnPrimaryButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonHovered
// (Final, Native, Protected)
void UPortalWarsKeybindWidget::OnPrimaryButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonHovered");

	UPortalWarsKeybindWidget_OnPrimaryButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKeybindWidget.GetSecondaryKeyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsKeybindWidget::GetSecondaryKeyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.GetSecondaryKeyText");

	UPortalWarsKeybindWidget_GetSecondaryKeyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKeybindWidget.GetPrimaryKeyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsKeybindWidget::GetPrimaryKeyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKeybindWidget.GetPrimaryKeyText");

	UPortalWarsKeybindWidget_GetPrimaryKeyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKillcam.WarmupTick
// (Final, Native, Private)
void UPortalWarsKillcam::WarmupTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKillcam.WarmupTick");

	UPortalWarsKillcam_WarmupTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKillcamKilledByWidget.OnRankImageLoaded
// (Final, Native, Protected)
void UPortalWarsKillcamKilledByWidget::OnRankImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKillcamKilledByWidget.OnRankImageLoaded");

	UPortalWarsKillcamKilledByWidget_OnRankImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKOTHGameState.OnRepNextHill
// (Final, Native, Protected)
void APortalWarsKOTHGameState::OnRepNextHill()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHGameState.OnRepNextHill");

	APortalWarsKOTHGameState_OnRepNextHill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKOTHGameState.OnRepHill
// (Final, Native, Protected)
// Parameters:
// class APortalWarsKOTHHill*     PrevHill                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsKOTHGameState::OnRepHill(class APortalWarsKOTHHill* PrevHill)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHGameState.OnRepHill");

	APortalWarsKOTHGameState_OnRepHill_Params params;
	params.PrevHill = PrevHill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKOTHHill.OnRep_IsActive
// (Final, Native, Protected)
void APortalWarsKOTHHill::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHHill.OnRep_IsActive");

	APortalWarsKOTHHill_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKOTHHill.OnRep_HillState
// (Final, Native, Public)
// Parameters:
// PortalWars_EKOTHHillState      PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsKOTHHill::OnRep_HillState(PortalWars_EKOTHHillState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHHill.OnRep_HillState");

	APortalWarsKOTHHill_OnRep_HillState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsKOTHHill.GetControllingTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APortalWarsKOTHHill::GetControllingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHHill.GetControllingTeam");

	APortalWarsKOTHHill_GetControllingTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKOTHHillIndicator.GetHillTimeRemaining
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsKOTHHillIndicator::GetHillTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHHillIndicator.GetHillTimeRemaining");

	UPortalWarsKOTHHillIndicator_GetHillTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsKOTHPlayerState.OnRep_IsOnHill
// (Final, Native, Protected)
void APortalWarsKOTHPlayerState::OnRep_IsOnHill()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsKOTHPlayerState.OnRep_IsOnHill");

	APortalWarsKOTHPlayerState_OnRep_IsOnHill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLeaderboardEntryWidget::GetPositionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionText");

	UPortalWarsLeaderboardEntryWidget_GetPositionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionImage
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsLeaderboardEntryWidget::GetPositionImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionImage");

	UPortalWarsLeaderboardEntryWidget_GetPositionImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetButtonStyle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FButtonStyle UPortalWarsLeaderboardEntryWidget::GetButtonStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLeaderboardEntryWidget.GetButtonStyle");

	UPortalWarsLeaderboardEntryWidget_GetButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnViewButtonClicked
// (Final, Native, Protected)
void UPortalWarsLimitedTimeOfferDialogWidget::OnViewButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnViewButtonClicked");

	UPortalWarsLimitedTimeOfferDialogWidget_OnViewButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnItemEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLimitedTimeOfferDialogWidget::OnItemEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnItemEntrySelected");

	UPortalWarsLimitedTimeOfferDialogWidget_OnItemEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.UpdateSkins
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::UpdateSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.UpdateSkins");

	APortalWarsLineUpCharacter_UpdateSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.PlayEmote_Multicast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void APortalWarsLineUpCharacter::PlayEmote_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.PlayEmote_Multicast");

	APortalWarsLineUpCharacter_PlayEmote_Multicast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnWeaponPoseLoaded
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnWeaponPoseLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnWeaponPoseLoaded");

	APortalWarsLineUpCharacter_OnWeaponPoseLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerState
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnRep_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerState");

	APortalWarsLineUpCharacter_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerInfo
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnRep_PlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerInfo");

	APortalWarsLineUpCharacter_OnRep_PlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnRep_CurrentWeaponType
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnRep_CurrentWeaponType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnRep_CurrentWeaponType");

	APortalWarsLineUpCharacter_OnRep_CurrentWeaponType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnPlayerCustomizationsSet
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnPlayerCustomizationsSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnPlayerCustomizationsSet");

	APortalWarsLineUpCharacter_OnPlayerCustomizationsSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLineUpCharacter.OnEmoteFinished
// (Final, Native, Protected)
void APortalWarsLineUpCharacter::OnEmoteFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLineUpCharacter.OnEmoteFinished");

	APortalWarsLineUpCharacter_OnEmoteFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyGameState.UpdateTVScreen
// (Native, Protected)
void APortalWarsLobbyGameState::UpdateTVScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyGameState.UpdateTVScreen");

	APortalWarsLobbyGameState_UpdateTVScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyGameState.OnRep_PrevGameData
// (Native, Protected)
void APortalWarsLobbyGameState::OnRep_PrevGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyGameState.OnRep_PrevGameData");

	APortalWarsLobbyGameState_OnRep_PrevGameData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.SpawnPickup
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   pickupClassName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::SpawnPickup(const struct FName& pickupClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.SpawnPickup");

	APortalWarsPlayerController_SpawnPickup_Params params;
	params.pickupClassName = pickupClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.Slowmo
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeDilation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::Slowmo(float TimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.Slowmo");

	APortalWarsPlayerController_Slowmo_Params params;
	params.TimeDilation = TimeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerSpawnPickup
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   pickupClassName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerSpawnPickup(const struct FName& pickupClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerSpawnPickup");

	APortalWarsPlayerController_ServerSpawnPickup_Params params;
	params.pickupClassName = pickupClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerSlomo
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeDilation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerSlomo(float TimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerSlomo");

	APortalWarsPlayerController_ServerSlomo_Params params;
	params.TimeDilation = TimeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerSetPartyChatOnly
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bPartyChatOnly                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerSetPartyChatOnly(bool bPartyChatOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerSetPartyChatOnly");

	APortalWarsPlayerController_ServerSetPartyChatOnly_Params params;
	params.bPartyChatOnly = bPartyChatOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerSetFOV
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          FOV                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerSetFOV(float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerSetFOV");

	APortalWarsPlayerController_ServerSetFOV_Params params;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerSetAnonymousMode
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bAnonymousMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerSetAnonymousMode(bool bAnonymousMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerSetAnonymousMode");

	APortalWarsPlayerController_ServerSetAnonymousMode_Params params;
	params.bAnonymousMode = bAnonymousMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerRequestReturnToMainMenu
// (Net, NetReliable, Native, Event, Public, NetServer)
void APortalWarsPlayerController::ServerRequestReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerRequestReturnToMainMenu");

	APortalWarsPlayerController_ServerRequestReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerReceiveRanks
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUserRankInfo>   PlayerRanks                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerReceiveRanks(TArray<struct FUserRankInfo> PlayerRanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerReceiveRanks");

	APortalWarsPlayerController_ServerReceiveRanks_Params params;
	params.PlayerRanks = PlayerRanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerReceiveProgression
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUserProgressionInfo    UserProgression                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerReceiveProgression(const struct FUserProgressionInfo& UserProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerReceiveProgression");

	APortalWarsPlayerController_ServerReceiveProgression_Params params;
	params.UserProgression = UserProgression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerReceiveDailyStreak
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUserDailyStreakInfo    DailyStreak                    (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerReceiveDailyStreak(const struct FUserDailyStreakInfo& DailyStreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerReceiveDailyStreak");

	APortalWarsPlayerController_ServerReceiveDailyStreak_Params params;
	params.DailyStreak = DailyStreak;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerReceiveCustomizations
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FCustomizationId> ChosenCustomizations           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerReceiveCustomizations(TArray<struct FCustomizationId> ChosenCustomizations)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerReceiveCustomizations");

	APortalWarsPlayerController_ServerReceiveCustomizations_Params params;
	params.ChosenCustomizations = ChosenCustomizations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerKickPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APlayerState*            PlayerStateToKick              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerKickPlayer(class APlayerState* PlayerStateToKick)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerKickPlayer");

	APortalWarsPlayerController_ServerKickPlayer_Params params;
	params.PlayerStateToKick = PlayerStateToKick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerEndMatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void APortalWarsPlayerController::ServerEndMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerEndMatch");

	APortalWarsPlayerController_ServerEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerEnableGodMode
// (Net, Native, Event, Public, NetServer, NetValidate)
void APortalWarsPlayerController::ServerEnableGodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerEnableGodMode");

	APortalWarsPlayerController_ServerEnableGodMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ServerBroadcastChatMessage
// (Net, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FTextChatData           InData                         (Parm, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ServerBroadcastChatMessage(const struct FTextChatData& InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ServerBroadcastChatMessage");

	APortalWarsPlayerController_ServerBroadcastChatMessage_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.SendRanksToServer
// (Native, Public)
void APortalWarsPlayerController::SendRanksToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.SendRanksToServer");

	APortalWarsPlayerController_SendRanksToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.SendCustomizationsToServer
// (Native, Public)
void APortalWarsPlayerController::SendCustomizationsToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.SendCustomizationsToServer");

	APortalWarsPlayerController_SendCustomizationsToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ProjectWorldLocationToScreenCustom
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerViewportRelative        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APortalWarsPlayerController::ProjectWorldLocationToScreenCustom(const struct FVector& WorldLocation, struct FVector2D* ScreenLocation, bool bPlayerViewportRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ProjectWorldLocationToScreenCustom");

	APortalWarsPlayerController_ProjectWorldLocationToScreenCustom_Params params;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerController.PlayEmote
// (Native, Public)
void APortalWarsPlayerController::PlayEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.PlayEmote");

	APortalWarsPlayerController_PlayEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.OnPauseMenuClosed
// (Final, Native, Public)
void APortalWarsPlayerController::OnPauseMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.OnPauseMenuClosed");

	APortalWarsPlayerController_OnPauseMenuClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.GetTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APortalWarsPlayerController::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.GetTeamNum");

	APortalWarsPlayerController_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerController.EnableGodMode
// (Final, Exec, Native, Public)
void APortalWarsPlayerController::EnableGodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.EnableGodMode");

	APortalWarsPlayerController_EnableGodMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientUpdateChat
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FTextChatData           InData                         (Parm, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientUpdateChat(const struct FTextChatData& InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientUpdateChat");

	APortalWarsPlayerController_ClientUpdateChat_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientSetSpectatorCamera
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                CameraRotation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientSetSpectatorCamera");

	APortalWarsPlayerController_ClientSetSpectatorCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientSetRoundResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            WinningTeamNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsTie                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Placement                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientSetRoundResult(int WinningTeamNum, bool bIsTie, int Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientSetRoundResult");

	APortalWarsPlayerController_ClientSetRoundResult_Params params;
	params.WinningTeamNum = WinningTeamNum;
	params.bIsTie = bIsTie;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientSetMatchResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            WinningTeamNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsTie                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Placement                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientSetMatchResult(int WinningTeamNum, bool bIsTie, int Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientSetMatchResult");

	APortalWarsPlayerController_ClientSetMatchResult_Params params;
	params.WinningTeamNum = WinningTeamNum;
	params.bIsTie = bIsTie;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeammateTeabagConfirmed
// (Net, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientNotifyTeammateTeabagConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyTeammateTeabagConfirmed");

	APortalWarsPlayerController_ClientNotifyTeammateTeabagConfirmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagDenied
// (Net, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientNotifyTeabagDenied()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagDenied");

	APortalWarsPlayerController_ClientNotifyTeabagDenied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagConfirmed
// (Net, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientNotifyTeabagConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagConfirmed");

	APortalWarsPlayerController_ClientNotifyTeabagConfirmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyEnemyDeniedTeabag
// (Net, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientNotifyEnemyDeniedTeabag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyEnemyDeniedTeabag");

	APortalWarsPlayerController_ClientNotifyEnemyDeniedTeabag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyDamageTaken
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FVector_NetQuantize     HitLocation                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bThruPortal                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientNotifyDamageTaken(const struct FVector_NetQuantize& HitLocation, bool bThruPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyDamageTaken");

	APortalWarsPlayerController_ClientNotifyDamageTaken_Params params;
	params.HitLocation = HitLocation;
	params.bThruPortal = bThruPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyCountdown
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            CountdownTime                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientNotifyCountdown(int CountdownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyCountdown");

	APortalWarsPlayerController_ClientNotifyCountdown_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyCausedHit
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APawn*                   DamagedPawn                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageDealt                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// PortalWars_EPWHitType          HitType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientNotifyCausedHit(class APawn* DamagedPawn, float DamageDealt, PortalWars_EPWHitType HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyCausedHit");

	APortalWarsPlayerController_ClientNotifyCausedHit_Params params;
	params.DamagedPawn = DamagedPawn;
	params.DamageDealt = DamageDealt;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientNotifyAlive
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientNotifyAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientNotifyAlive");

	APortalWarsPlayerController_ClientNotifyAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientHearAkEventAtLocation
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class UAkAudioEvent*           EventToPost                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     SoundLocation                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SoundRotation                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientHearAkEventAtLocation(class UAkAudioEvent* EventToPost, const struct FVector_NetQuantize& SoundLocation, const struct FRotator& SoundRotation, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientHearAkEventAtLocation");

	APortalWarsPlayerController_ClientHearAkEventAtLocation_Params params;
	params.EventToPost = EventToPost;
	params.SoundLocation = SoundLocation;
	params.SoundRotation = SoundRotation;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientHearAkEvent
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UAkAudioEvent*           EventToPost                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsAkComponent*  AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseSpatialAudio               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPlayerController::ClientHearAkEvent(class UAkAudioEvent* EventToPost, class UPortalWarsAkComponent* AkComponent, bool bUseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientHearAkEvent");

	APortalWarsPlayerController_ClientHearAkEvent_Params params;
	params.EventToPost = EventToPost;
	params.AkComponent = AkComponent;
	params.bUseSpatialAudio = bUseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientGenericInitialization
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientGenericInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientGenericInitialization");

	APortalWarsPlayerController_ClientGenericInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientGameStarted
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientGameStarted");

	APortalWarsPlayerController_ClientGameStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerController.ClientCountdownStarted
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsPlayerController::ClientCountdownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerController.ClientCountdownStarted");

	APortalWarsPlayerController_ClientCountdownStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerUpdateTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  TeamNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsLobbyPlayerController::ServerUpdateTeam(unsigned char TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerUpdateTeam");

	APortalWarsLobbyPlayerController_ServerUpdateTeam_Params params;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerSetGameConfig
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameConfig             GameConfig                     (Parm, NativeAccessSpecifierPublic)
void APortalWarsLobbyPlayerController::ServerSetGameConfig(const struct FGameConfig& GameConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerSetGameConfig");

	APortalWarsLobbyPlayerController_ServerSetGameConfig_Params params;
	params.GameConfig = GameConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerPlayEmoteLineup
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APortalWarsLineUpCharacter* InLineUpCharacter              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsLobbyPlayerController::ServerPlayEmoteLineup(class APortalWarsLineUpCharacter* InLineUpCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerPlayEmoteLineup");

	APortalWarsLobbyPlayerController_ServerPlayEmoteLineup_Params params;
	params.InLineUpCharacter = InLineUpCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerLaunchGame
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void APortalWarsLobbyPlayerController::ServerLaunchGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerLaunchGame");

	APortalWarsLobbyPlayerController_ServerLaunchGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipPreviousWeapon
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APortalWarsLineUpCharacter* InLineUpCharacter              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsLobbyPlayerController::ServerEquipPreviousWeapon(class APortalWarsLineUpCharacter* InLineUpCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipPreviousWeapon");

	APortalWarsLobbyPlayerController_ServerEquipPreviousWeapon_Params params;
	params.InLineUpCharacter = InLineUpCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipNextWeapon
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APortalWarsLineUpCharacter* InLineUpCharacter              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsLobbyPlayerController::ServerEquipNextWeapon(class APortalWarsLineUpCharacter* InLineUpCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipNextWeapon");

	APortalWarsLobbyPlayerController_ServerEquipNextWeapon_Params params;
	params.InLineUpCharacter = InLineUpCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateTeamColor
// (Final, Native, Protected)
void UPortalWarsLobbyPlayerEntryWidget::UpdateTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateTeamColor");

	UPortalWarsLobbyPlayerEntryWidget_UpdateTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateSpectatorIndicator
// (Final, Native, Protected)
void UPortalWarsLobbyPlayerEntryWidget::UpdateSpectatorIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateSpectatorIndicator");

	UPortalWarsLobbyPlayerEntryWidget_UpdateSpectatorIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateAdminIndicator
// (Final, Native, Protected)
void UPortalWarsLobbyPlayerEntryWidget::UpdateAdminIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateAdminIndicator");

	UPortalWarsLobbyPlayerEntryWidget_UpdateAdminIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.LobbyAdminVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsLobbyPlayerEntryWidget::LobbyAdminVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.LobbyAdminVisibility");

	UPortalWarsLobbyPlayerEntryWidget_LobbyAdminVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.InitGameState
// (Final, Native, Protected)
void UPortalWarsLobbyPlayerEntryWidget::InitGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.InitGameState");

	UPortalWarsLobbyPlayerEntryWidget_InitGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.GetSpectatorIndicatorVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsLobbyPlayerEntryWidget::GetSpectatorIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLobbyPlayerEntryWidget.GetSpectatorIndicatorVisibility");

	UPortalWarsLobbyPlayerEntryWidget_GetSpectatorIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLocalizationHelpers.GetTextFromStringTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 StringTable                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLocalizationHelpers::STATIC_GetTextFromStringTable(const struct FString& StringTable, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalizationHelpers.GetTextFromStringTable");

	UPortalWarsLocalizationHelpers_GetTextFromStringTable_Params params;
	params.StringTable = StringTable;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLocalizationHelpers.GetStatText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLocalizationHelpers::STATIC_GetStatText(const struct FString& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalizationHelpers.GetStatText");

	UPortalWarsLocalizationHelpers_GetStatText_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLocalizationHelpers.GetErrorText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLocalizationHelpers::STATIC_GetErrorText(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalizationHelpers.GetErrorText");

	UPortalWarsLocalizationHelpers_GetErrorText_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLocalPlayer.SetPlayerAvatar
// (Final, Native, Protected)
// Parameters:
// class UTexture*                avatar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLocalPlayer::SetPlayerAvatar(class UTexture* avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.SetPlayerAvatar");

	UPortalWarsLocalPlayer_SetPlayerAvatar_Params params;
	params.avatar = avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.OnUserCustomizationsUpdate
// (Final, Native, Protected)
void UPortalWarsLocalPlayer::OnUserCustomizationsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.OnUserCustomizationsUpdate");

	UPortalWarsLocalPlayer_OnUserCustomizationsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.OnUserChosenCustomizationsUpdate
// (Final, Native, Protected)
void UPortalWarsLocalPlayer::OnUserChosenCustomizationsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.OnUserChosenCustomizationsUpdate");

	UPortalWarsLocalPlayer_OnUserChosenCustomizationsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.OnDialogClosed
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsDialogWidget* Dialog                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLocalPlayer::OnDialogClosed(class UPortalWarsDialogWidget* Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.OnDialogClosed");

	UPortalWarsLocalPlayer_OnDialogClosed_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.OnCustomizationsLoaded
// (Final, Native, Protected)
void UPortalWarsLocalPlayer::OnCustomizationsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.OnCustomizationsLoaded");

	UPortalWarsLocalPlayer_OnCustomizationsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.OnControllerDisconnectedWidgetClosed
// (Final, Native, Protected)
void UPortalWarsLocalPlayer::OnControllerDisconnectedWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.OnControllerDisconnectedWidgetClosed");

	UPortalWarsLocalPlayer_OnControllerDisconnectedWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.LoadUserSaveGame
// (Final, Native, Public)
void UPortalWarsLocalPlayer::LoadUserSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.LoadUserSaveGame");

	UPortalWarsLocalPlayer_LoadUserSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLocalPlayer.GetUserSaveGame
// (Final, Native, Public, Const)
// Parameters:
// class UPortalWarsSaveGame*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsSaveGame* UPortalWarsLocalPlayer::GetUserSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLocalPlayer.GetUserSaveGame");

	UPortalWarsLocalPlayer_GetUserSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerButtonWidget.GetEquippedTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLockerButtonWidget::GetEquippedTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerButtonWidget.GetEquippedTitleText");

	UPortalWarsLockerButtonWidget_GetEquippedTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerEntryWidget.GetRarityIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsLockerEntryWidget::GetRarityIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerEntryWidget.GetRarityIcon");

	UPortalWarsLockerEntryWidget_GetRarityIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerEntryWidget.GetNumSkinsText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLockerEntryWidget::GetNumSkinsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerEntryWidget.GetNumSkinsText");

	UPortalWarsLockerEntryWidget_GetNumSkinsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsLockerEntryWidget::GetDisplayNameVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameVisibility");

	UPortalWarsLockerEntryWidget_GetDisplayNameVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLockerEntryWidget::GetDisplayNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameText");

	UPortalWarsLockerEntryWidget_GetDisplayNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerSubWidget.RefreshNewItems
// (Native, Protected)
void UPortalWarsLockerSubWidget::RefreshNewItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.RefreshNewItems");

	UPortalWarsLockerSubWidget_RefreshNewItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnViewButtonClicked
// (Final, Native, Protected)
void UPortalWarsLockerSubWidget::OnViewButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnViewButtonClicked");

	UPortalWarsLockerSubWidget_OnViewButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnPrevParentEntry
// (Final, Native, Protected)
void UPortalWarsLockerSubWidget::OnPrevParentEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnPrevParentEntry");

	UPortalWarsLockerSubWidget_OnPrevParentEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnParentEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerSubWidget::OnParentEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnParentEntrySelected");

	UPortalWarsLockerSubWidget_OnParentEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnParentEntryScrolledTo
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerSubWidget::OnParentEntryScrolledTo(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnParentEntryScrolledTo");

	UPortalWarsLockerSubWidget_OnParentEntryScrolledTo_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnNextParentEntry
// (Final, Native, Protected)
void UPortalWarsLockerSubWidget::OnNextParentEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnNextParentEntry");

	UPortalWarsLockerSubWidget_OnNextParentEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerSubWidget::OnItemEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnItemEntrySelected");

	UPortalWarsLockerSubWidget_OnItemEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryScrolledTo
// (Native, Protected)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerSubWidget::OnItemEntryScrolledTo(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryScrolledTo");

	UPortalWarsLockerSubWidget_OnItemEntryScrolledTo_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryDoubleClicked
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerSubWidget::OnItemEntryDoubleClicked(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryDoubleClicked");

	UPortalWarsLockerSubWidget_OnItemEntryDoubleClicked_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.InitParentEntries
// (Native, Protected)
void UPortalWarsLockerSubWidget::InitParentEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.InitParentEntries");

	UPortalWarsLockerSubWidget_InitParentEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.InitItemEntries
// (Native, Protected)
void UPortalWarsLockerSubWidget::InitItemEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.InitItemEntries");

	UPortalWarsLockerSubWidget_InitItemEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerSubWidget.GetParentEntryWidget
// (Final, Native, Protected)
// Parameters:
// struct FString                 WidgetId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPortalWarsLockerSubWidget::GetParentEntryWidget(const struct FString& WidgetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.GetParentEntryWidget");

	UPortalWarsLockerSubWidget_GetParentEntryWidget_Params params;
	params.WidgetId = WidgetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerSubWidget.GetItemEntryWidget
// (Final, Native, Protected)
// Parameters:
// struct FString                 WidgetId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPortalWarsLockerSubWidget::GetItemEntryWidget(const struct FString& WidgetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerSubWidget.GetItemEntryWidget");

	UPortalWarsLockerSubWidget_GetItemEntryWidget_Params params;
	params.WidgetId = WidgetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLockerWidget.OnLockerButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLockerWidget::OnLockerButtonSelected(class UPortalWarsEntryWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerWidget.OnLockerButtonSelected");

	UPortalWarsLockerWidget_OnLockerButtonSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsLockerWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerWidget.GoToMainState");

	UPortalWarsLockerWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLockerWidget.GoToInspectState
// (Final, Native, Protected)
void UPortalWarsLockerWidget::GoToInspectState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLockerWidget.GoToInspectState");

	UPortalWarsLockerWidget_GoToInspectState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLoginMenuWidget.StartLoginFlow
// (Final, Native, Protected)
void UPortalWarsLoginMenuWidget::StartLoginFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.StartLoginFlow");

	UPortalWarsLoginMenuWidget_StartLoginFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLoginMenuWidget.OnUserAdded
// (Final, Native, Protected)
// Parameters:
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLoginMenuWidget::OnUserAdded(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.OnUserAdded");

	UPortalWarsLoginMenuWidget_OnUserAdded_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLoginMenuWidget.OnQuitButtonClicked
// (Final, Native, Protected)
void UPortalWarsLoginMenuWidget::OnQuitButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.OnQuitButtonClicked");

	UPortalWarsLoginMenuWidget_OnQuitButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLoginMenuWidget.GoToState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// PortalWars_ELoginMenuState     NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsLoginMenuWidget::GoToState(PortalWars_ELoginMenuState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.GoToState");

	UPortalWarsLoginMenuWidget_GoToState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLoginMenuWidget.GetVersionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsLoginMenuWidget::GetVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.GetVersionText");

	UPortalWarsLoginMenuWidget_GetVersionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsLoginMenuWidget.DelayedLogin
// (Final, Native, Protected)
void UPortalWarsLoginMenuWidget::DelayedLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLoginMenuWidget.DelayedLogin");

	UPortalWarsLoginMenuWidget_DelayedLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.OnStartLootboxSequenceCompleted
// (Final, Native, Protected)
void UPortalWarsLootboxWidget::OnStartLootboxSequenceCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.OnStartLootboxSequenceCompleted");

	UPortalWarsLootboxWidget_OnStartLootboxSequenceCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.OnOpenButtonClicked
// (Native, Protected)
void UPortalWarsLootboxWidget::OnOpenButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.OnOpenButtonClicked");

	UPortalWarsLootboxWidget_OnOpenButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.OnLootboxSequenceCompleted
// (Final, Native, Protected)
void UPortalWarsLootboxWidget::OnLootboxSequenceCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.OnLootboxSequenceCompleted");

	UPortalWarsLootboxWidget_OnLootboxSequenceCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.OnLoopLootboxSequenceCompleted
// (Final, Native, Protected)
void UPortalWarsLootboxWidget::OnLoopLootboxSequenceCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.OnLoopLootboxSequenceCompleted");

	UPortalWarsLootboxWidget_OnLoopLootboxSequenceCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.OnCatchButtonClicked
// (Native, Protected)
void UPortalWarsLootboxWidget::OnCatchButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.OnCatchButtonClicked");

	UPortalWarsLootboxWidget_OnCatchButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsLootboxWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsLootboxWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsLootboxWidget.GoToMainState");

	UPortalWarsLootboxWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.OpenSelectMenu
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::OpenSelectMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.OpenSelectMenu");

	UPortalWarsMainMenuWidget_OpenSelectMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.OnStoreUpdate
// (Final, Native, Protected)
void UPortalWarsMainMenuWidget::OnStoreUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.OnStoreUpdate");

	UPortalWarsMainMenuWidget_OnStoreUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.OnCustomizationsUpdate
// (Final, Native, Protected)
void UPortalWarsMainMenuWidget::OnCustomizationsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.OnCustomizationsUpdate");

	UPortalWarsMainMenuWidget_OnCustomizationsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.OnChallengesUpdate
// (Final, Native, Protected)
void UPortalWarsMainMenuWidget::OnChallengesUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.OnChallengesUpdate");

	UPortalWarsMainMenuWidget_OnChallengesUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToTrainingState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToTrainingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToTrainingState");

	UPortalWarsMainMenuWidget_GoToTrainingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToSocialState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToSocialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToSocialState");

	UPortalWarsMainMenuWidget_GoToSocialState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToRewardCenterState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToRewardCenterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToRewardCenterState");

	UPortalWarsMainMenuWidget_GoToRewardCenterState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToReferralPassState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToReferralPassState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToReferralPassState");

	UPortalWarsMainMenuWidget_GoToReferralPassState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToPlayState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToPlayState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToPlayState");

	UPortalWarsMainMenuWidget_GoToPlayState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToLootboxState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToLootboxState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToLootboxState");

	UPortalWarsMainMenuWidget_GoToLootboxState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToLockerState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToLockerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToLockerState");

	UPortalWarsMainMenuWidget_GoToLockerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToItemShopState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToItemShopState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToItemShopState");

	UPortalWarsMainMenuWidget_GoToItemShopState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToChallengesState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToChallengesState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToChallengesState");

	UPortalWarsMainMenuWidget_GoToChallengesState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToCareerState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToCareerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToCareerState");

	UPortalWarsMainMenuWidget_GoToCareerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMainMenuWidget.GoToBattlePassState
// (Final, Native, Public)
void UPortalWarsMainMenuWidget::GoToBattlePassState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMainMenuWidget.GoToBattlePassState");

	UPortalWarsMainMenuWidget_GoToBattlePassState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsMatchCanceledWidget.GetLeavingMapText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsMatchCanceledWidget::GetLeavingMapText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMatchCanceledWidget.GetLeavingMapText");

	UPortalWarsMatchCanceledWidget_GetLeavingMapText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsMatchResultWidget.GetTitleText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsMatchResultWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsMatchResultWidget.GetTitleText");

	UPortalWarsMatchResultWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNavLink_Jump.OnStateChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UNavLinkCustomComponent* NavLinkComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         NotifyList                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void APortalWarsNavLink_Jump::OnStateChanged(class UNavLinkCustomComponent* NavLinkComp, TArray<class UObject*>* NotifyList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNavLink_Jump.OnStateChanged");

	APortalWarsNavLink_Jump_OnStateChanged_Params params;
	params.NavLinkComp = NavLinkComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotifyList != nullptr)
		*NotifyList = params.NotifyList;

}


// Function PortalWars.PortalWarsNavLink_Jump.JumpLinkReached
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 PathingAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DestPoint                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsNavLink_Jump::JumpLinkReached(class UObject* PathingAgent, const struct FVector& DestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNavLink_Jump.JumpLinkReached");

	APortalWarsNavLink_Jump_JumpLinkReached_Params params;
	params.PathingAgent = PathingAgent;
	params.DestPoint = DestPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNeutralCTFGameState.SpawnFlag
// (Final, Native, Public)
void APortalWarsNeutralCTFGameState::SpawnFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNeutralCTFGameState.SpawnFlag");

	APortalWarsNeutralCTFGameState_SpawnFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_FlagState
// (Final, Native, Protected)
// Parameters:
// PortalWars_EFlagState          PrevState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsNeutralCTFGameState::OnRep_FlagState(PortalWars_EFlagState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_FlagState");

	APortalWarsNeutralCTFGameState_OnRep_FlagState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_Flag
// (Final, Native, Protected)
void APortalWarsNeutralCTFGameState::OnRep_Flag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_Flag");

	APortalWarsNeutralCTFGameState_OnRep_Flag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNewsFeedEntryWidget.OnActionButtonClicked
// (Final, Native, Public)
void UPortalWarsNewsFeedEntryWidget::OnActionButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedEntryWidget.OnActionButtonClicked");

	UPortalWarsNewsFeedEntryWidget_OnActionButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetTitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsNewsFeedEntryWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedEntryWidget.GetTitleText");

	UPortalWarsNewsFeedEntryWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetDescriptionText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsNewsFeedEntryWidget::GetDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedEntryWidget.GetDescriptionText");

	UPortalWarsNewsFeedEntryWidget_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetActionTitleText
// (Final, Native, Public)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsNewsFeedEntryWidget::GetActionTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedEntryWidget.GetActionTitleText");

	UPortalWarsNewsFeedEntryWidget_GetActionTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNewsFeedWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsNewsFeedWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedWidget.RefreshWidget");

	UPortalWarsNewsFeedWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNewsFeedWidget.OnActionButtonClicked
// (Final, Native, Protected)
void UPortalWarsNewsFeedWidget::OnActionButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNewsFeedWidget.OnActionButtonClicked");

	UPortalWarsNewsFeedWidget_OnActionButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.QueueError
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::QueueError(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.QueueError");

	UPortalWarsNotificationManager_QueueError_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OpenNoticeDialog
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OpenNoticeDialog(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OpenNoticeDialog");

	UPortalWarsNotificationManager_OpenNoticeDialog_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OpenErrorDialog
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OpenErrorDialog(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OpenErrorDialog");

	UPortalWarsNotificationManager_OpenErrorDialog_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnSessionQueryError
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnSessionQueryError(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnSessionQueryError");

	UPortalWarsNotificationManager_OnSessionQueryError_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnRewardsReceived
// (Final, Native, Protected)
// Parameters:
// struct FString                 Type                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRewardData>     Rewards                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnRewardsReceived(const struct FString& Type, TArray<struct FRewardData> Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnRewardsReceived");

	UPortalWarsNotificationManager_OnRewardsReceived_Params params;
	params.Type = Type;
	params.Rewards = Rewards;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnRankUpdate
// (Final, Native, Protected)
// Parameters:
// struct FUserRankUpdate         Data                           (Parm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnRankUpdate(const struct FUserRankUpdate& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnRankUpdate");

	UPortalWarsNotificationManager_OnRankUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnProgressionUpdate
// (Final, Native, Protected)
// Parameters:
// struct FUserProgressionUpdate  Data                           (Parm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnProgressionUpdate(const struct FUserProgressionUpdate& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnProgressionUpdate");

	UPortalWarsNotificationManager_OnProgressionUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnProgressionMatchUpdate
// (Final, Native, Protected)
// Parameters:
// struct FUserProgressionUpdate  Data                           (Parm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnProgressionMatchUpdate(const struct FUserProgressionUpdate& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnProgressionMatchUpdate");

	UPortalWarsNotificationManager_OnProgressionMatchUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnPostGameStats
// (Final, Native, Protected)
// Parameters:
// TArray<struct FUserPostGameStat> Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnPostGameStats(TArray<struct FUserPostGameStat> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnPostGameStats");

	UPortalWarsNotificationManager_OnPostGameStats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnPlaylistActiveUpdate
// (Final, Native, Protected)
// Parameters:
// struct FString                 PlaylistType                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnPlaylistActiveUpdate(const struct FString& PlaylistType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnPlaylistActiveUpdate");

	UPortalWarsNotificationManager_OnPlaylistActiveUpdate_Params params;
	params.PlaylistType = PlaylistType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnPartyError
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnPartyError(const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnPartyError");

	UPortalWarsNotificationManager_OnPartyError_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnLimitedTimeOfferReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FStoreCategoryInfo      LimitedTimeOffer               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnLimitedTimeOfferReceived(const struct FStoreCategoryInfo& LimitedTimeOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnLimitedTimeOfferReceived");

	UPortalWarsNotificationManager_OnLimitedTimeOfferReceived_Params params;
	params.LimitedTimeOffer = LimitedTimeOffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnHappyHourStatusUpdate
// (Final, Native, Protected)
void UPortalWarsNotificationManager::OnHappyHourStatusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnHappyHourStatusUpdate");

	UPortalWarsNotificationManager_OnHappyHourStatusUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnGameSessionReconnectAvailable
// (Final, Native, Protected)
// Parameters:
// struct FString                 GameSessionId                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DurationMs                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnGameSessionReconnectAvailable(const struct FString& GameSessionId, float DurationMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnGameSessionReconnectAvailable");

	UPortalWarsNotificationManager_OnGameSessionReconnectAvailable_Params params;
	params.GameSessionId = GameSessionId;
	params.DurationMs = DurationMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnDailyPlayStreakIncreased
// (Final, Native, Protected)
// Parameters:
// struct FUserDailyStreakInfo    Data                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnDailyPlayStreakIncreased(const struct FUserDailyStreakInfo& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnDailyPlayStreakIncreased");

	UPortalWarsNotificationManager_OnDailyPlayStreakIncreased_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.OnChallengesUpdated
// (Final, Native, Protected)
// Parameters:
// TArray<struct FUserChallengeUpdate> Challenges                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPortalWarsNotificationManager::OnChallengesUpdated(TArray<struct FUserChallengeUpdate> Challenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.OnChallengesUpdated");

	UPortalWarsNotificationManager_OnChallengesUpdated_Params params;
	params.Challenges = Challenges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationManager.GetRewardReceivedWidgetForType
// (Final, Native, Protected)
// Parameters:
// struct FString                 TypeString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPortalWarsRewardReceivedWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsRewardReceivedWidget* UPortalWarsNotificationManager::GetRewardReceivedWidgetForType(const struct FString& TypeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.GetRewardReceivedWidgetForType");

	UPortalWarsNotificationManager_GetRewardReceivedWidgetForType_Params params;
	params.TypeString = TypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNotificationManager.GetPostGameOverviewWidget
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsPostGameOverviewWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsPostGameOverviewWidget* UPortalWarsNotificationManager::GetPostGameOverviewWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.GetPostGameOverviewWidget");

	UPortalWarsNotificationManager_GetPostGameOverviewWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNotificationManager.GetChallengeDialogWidget
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsChallengeDialogWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPortalWarsChallengeDialogWidget* UPortalWarsNotificationManager::GetChallengeDialogWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationManager.GetChallengeDialogWidget");

	UPortalWarsNotificationManager_GetChallengeDialogWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsNotificationOverlayWidget.OnInviteRecieved
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FInviteInfo             Invite                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationOverlayWidget::OnInviteRecieved(const struct FInviteInfo& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationOverlayWidget.OnInviteRecieved");

	UPortalWarsNotificationOverlayWidget_OnInviteRecieved_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FFriendRequestInfo      Request                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationOverlayWidget::OnFriendRequestReceived(const struct FFriendRequestInfo& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestReceived");

	UPortalWarsNotificationOverlayWidget_OnFriendRequestReceived_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestAccepted
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FFriendRequestInfo      Request                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsNotificationOverlayWidget::OnFriendRequestAccepted(const struct FFriendRequestInfo& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestAccepted");

	UPortalWarsNotificationOverlayWidget_OnFriendRequestAccepted_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsNotificationOverlayWidget.CheckChunkIntallStatus
// (Final, Native, Protected)
void UPortalWarsNotificationOverlayWidget::CheckChunkIntallStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsNotificationOverlayWidget.CheckChunkIntallStatus");

	UPortalWarsNotificationOverlayWidget_CheckChunkIntallStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsOddballGameState.OnRep_OddballState
// (Final, Native, Protected)
// Parameters:
// PortalWars_EBallState          PrevBallState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsOddballGameState::OnRep_OddballState(PortalWars_EBallState PrevBallState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsOddballGameState.OnRep_OddballState");

	APortalWarsOddballGameState_OnRep_OddballState_Params params;
	params.PrevBallState = PrevBallState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsOddballGameState.OnRep_Oddball
// (Final, Native, Protected)
void APortalWarsOddballGameState::OnRep_Oddball()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsOddballGameState.OnRep_Oddball");

	APortalWarsOddballGameState_OnRep_Oddball_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsOddballIndicator.SetControllingTeam
// (Final, Native, Protected)
// Parameters:
// int                            NewControllingTeam             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsOddballIndicator::SetControllingTeam(int NewControllingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsOddballIndicator.SetControllingTeam");

	UPortalWarsOddballIndicator_SetControllingTeam_Params params;
	params.NewControllingTeam = NewControllingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsOddballIndicator.GetIndicatorBackground
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsOddballIndicator::GetIndicatorBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsOddballIndicator.GetIndicatorBackground");

	UPortalWarsOddballIndicator_GetIndicatorBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPartyEntryWidget.OnUnhovered_BP
// (Event, Protected, BlueprintEvent)
void UPortalWarsPartyEntryWidget::OnUnhovered_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.OnUnhovered_BP");

	UPortalWarsPartyEntryWidget_OnUnhovered_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyEntryWidget.OnInviteButtonClicked
// (Final, Native, Protected)
void UPortalWarsPartyEntryWidget::OnInviteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.OnInviteButtonClicked");

	UPortalWarsPartyEntryWidget_OnInviteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyEntryWidget.OnHovered_BP
// (Event, Protected, BlueprintEvent)
void UPortalWarsPartyEntryWidget::OnHovered_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.OnHovered_BP");

	UPortalWarsPartyEntryWidget_OnHovered_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyEntryWidget.OnEndHoverCharacter
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPartyEntryWidget::OnEndHoverCharacter(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.OnEndHoverCharacter");

	UPortalWarsPartyEntryWidget_OnEndHoverCharacter_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyEntryWidget.OnBeginHoverCharacter
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPartyEntryWidget::OnBeginHoverCharacter(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.OnBeginHoverCharacter");

	UPortalWarsPartyEntryWidget_OnBeginHoverCharacter_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyEntryWidget.GetLeaderVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPartyEntryWidget::GetLeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.GetLeaderVisibility");

	UPortalWarsPartyEntryWidget_GetLeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPartyEntryWidget.GetInviteVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPartyEntryWidget::GetInviteVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.GetInviteVisibility");

	UPortalWarsPartyEntryWidget_GetInviteVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPartyEntryWidget.CanInviteToParty
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPartyEntryWidget::CanInviteToParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyEntryWidget.CanInviteToParty");

	UPortalWarsPartyEntryWidget_CanInviteToParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPartyInspectWidget.ViewProfile
// (Final, Native, Protected)
void UPortalWarsPartyInspectWidget::ViewProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyInspectWidget.ViewProfile");

	UPortalWarsPartyInspectWidget_ViewProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyInspectWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsPartyInspectWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyInspectWidget.RefreshWidget");

	UPortalWarsPartyInspectWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyInspectWidget.PromoteToLeader
// (Final, Native, Protected)
void UPortalWarsPartyInspectWidget::PromoteToLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyInspectWidget.PromoteToLeader");

	UPortalWarsPartyInspectWidget_PromoteToLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyInspectWidget.KickFromParty
// (Final, Native, Protected)
void UPortalWarsPartyInspectWidget::KickFromParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyInspectWidget.KickFromParty");

	UPortalWarsPartyInspectWidget_KickFromParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyInspectWidget.GetLeaderOptionsVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPartyInspectWidget::GetLeaderOptionsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyInspectWidget.GetLeaderOptionsVisibility");

	UPortalWarsPartyInspectWidget_GetLeaderOptionsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPartyWidget.OnPartyUpdate
// (Final, Native, Protected)
void UPortalWarsPartyWidget::OnPartyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyWidget.OnPartyUpdate");

	UPortalWarsPartyWidget_OnPartyUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyWidget.OnMouseClicked
// (Final, Native, Protected)
void UPortalWarsPartyWidget::OnMouseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyWidget.OnMouseClicked");

	UPortalWarsPartyWidget_OnMouseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyWidget.OnInviteSelected
// (Final, Native, Protected)
void UPortalWarsPartyWidget::OnInviteSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyWidget.OnInviteSelected");

	UPortalWarsPartyWidget_OnInviteSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPartyWidget.OnEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPartyWidget::OnEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPartyWidget.OnEntrySelected");

	UPortalWarsPartyWidget_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.OnRestartStageButtonClicked
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::OnRestartStageButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.OnRestartStageButtonClicked");

	UPortalWarsPauseMenuWidget_OnRestartStageButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.OnRestartRaceButtonClicked
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::OnRestartRaceButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.OnRestartRaceButtonClicked");

	UPortalWarsPauseMenuWidget_OnRestartRaceButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.OnPauseActionPressed
// (Native, Protected)
void UPortalWarsPauseMenuWidget::OnPauseActionPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.OnPauseActionPressed");

	UPortalWarsPauseMenuWidget_OnPauseActionPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.OnEndMatchButtonClicked
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::OnEndMatchButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.OnEndMatchButtonClicked");

	UPortalWarsPauseMenuWidget_OnEndMatchButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.GoToSettingsState
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::GoToSettingsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GoToSettingsState");

	UPortalWarsPauseMenuWidget_GoToSettingsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.GoToQuitState
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::GoToQuitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GoToQuitState");

	UPortalWarsPauseMenuWidget_GoToQuitState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.GoToPlayersState
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::GoToPlayersState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GoToPlayersState");

	UPortalWarsPauseMenuWidget_GoToPlayersState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsPauseMenuWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GoToMainState");

	UPortalWarsPauseMenuWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPauseMenuWidget.GetRestartStageVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPauseMenuWidget::GetRestartStageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetRestartStageVisibility");

	UPortalWarsPauseMenuWidget_GetRestartStageVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPauseMenuWidget.GetRestartRaceVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPauseMenuWidget::GetRestartRaceVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetRestartRaceVisibility");

	UPortalWarsPauseMenuWidget_GetRestartRaceVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPauseMenuWidget.GetPlayersButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPauseMenuWidget::GetPlayersButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetPlayersButtonVisibility");

	UPortalWarsPauseMenuWidget_GetPlayersButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPauseMenuWidget::GetExitButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonVisibility");

	UPortalWarsPauseMenuWidget_GetExitButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPauseMenuWidget::GetExitButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonEnabled");

	UPortalWarsPauseMenuWidget_GetExitButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPauseMenuWidget.GetEndMatchButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPauseMenuWidget::GetEndMatchButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPauseMenuWidget.GetEndMatchButtonVisibility");

	UPortalWarsPauseMenuWidget_GetEndMatchButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPausePlayersMenuWidget::OnPlayerEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerEntrySelected");

	UPortalWarsPausePlayersMenuWidget_OnPlayerEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerArrayChanged
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPausePlayersMenuWidget::OnPlayerArrayChanged(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerArrayChanged");

	UPortalWarsPausePlayersMenuWidget_OnPlayerArrayChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPickupIndicatorWidget.GetPickupNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPickupIndicatorWidget::GetPickupNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPickupIndicatorWidget.GetPickupNameText");

	UPortalWarsPickupIndicatorWidget_GetPickupNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPickupIndicatorWidget.GetActionKey
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPickupIndicatorWidget::GetActionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPickupIndicatorWidget.GetActionKey");

	UPortalWarsPickupIndicatorWidget_GetActionKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPickupZoneIndicator::GetTimeVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeVisibility");

	UPortalWarsPickupZoneIndicator_GetTimeVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeRemainingText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsPickupZoneIndicator::GetTimeRemainingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeRemainingText");

	UPortalWarsPickupZoneIndicator_GetTimeRemainingText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshMuteButton
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::RefreshMuteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.RefreshMuteButton");

	UPortalWarsPlayerActionsWidget_RefreshMuteButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshInviteButtons
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::RefreshInviteButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.RefreshInviteButtons");

	UPortalWarsPlayerActionsWidget_RefreshInviteButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshFriendButtons
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::RefreshFriendButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.RefreshFriendButtons");

	UPortalWarsPlayerActionsWidget_RefreshFriendButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshBlockButtons
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::RefreshBlockButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.RefreshBlockButtons");

	UPortalWarsPlayerActionsWidget_RefreshBlockButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnViewProfileButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnViewProfileButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnViewProfileButtonClicked");

	UPortalWarsPlayerActionsWidget_OnViewProfileButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnUnblockButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnUnblockButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnUnblockButtonClicked");

	UPortalWarsPlayerActionsWidget_OnUnblockButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnRemoveFriendButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnRemoveFriendButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnRemoveFriendButtonClicked");

	UPortalWarsPlayerActionsWidget_OnRemoveFriendButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnPartyInviteButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnPartyInviteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnPartyInviteButtonClicked");

	UPortalWarsPlayerActionsWidget_OnPartyInviteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnMuteButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnMuteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnMuteButtonClicked");

	UPortalWarsPlayerActionsWidget_OnMuteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnKickButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnKickButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnKickButtonClicked");

	UPortalWarsPlayerActionsWidget_OnKickButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnGameInviteButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnGameInviteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnGameInviteButtonClicked");

	UPortalWarsPlayerActionsWidget_OnGameInviteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnFriendsListUpdate
// (Final, Native, Protected)
// Parameters:
// int                            LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ListName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ErrorStr                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlayerActionsWidget::OnFriendsListUpdate(int LocalUserNum, bool bWasSuccessful, const struct FString& ListName, const struct FString& ErrorStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnFriendsListUpdate");

	UPortalWarsPlayerActionsWidget_OnFriendsListUpdate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;
	params.ListName = ListName;
	params.ErrorStr = ErrorStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnBlockButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnBlockButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnBlockButtonClicked");

	UPortalWarsPlayerActionsWidget_OnBlockButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.OnAddFriendButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::OnAddFriendButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.OnAddFriendButtonClicked");

	UPortalWarsPlayerActionsWidget_OnAddFriendButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.GoToReportState
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::GoToReportState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GoToReportState");

	UPortalWarsPlayerActionsWidget_GoToReportState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsPlayerActionsWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GoToMainState");

	UPortalWarsPlayerActionsWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetViewProfileButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetViewProfileButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetViewProfileButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetViewProfileButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetUnblockButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetUnblockButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetUnblockButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetUnblockButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetReportButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetReportButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetReportButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetReportButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetRemoveFriendButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetRemoveFriendButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetRemoveFriendButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetRemoveFriendButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetPartyInviteButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetPartyInviteButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetPartyInviteButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetPartyInviteButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetMuteButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetMuteButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetMuteButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetMuteButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetKickButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetKickButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetKickButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetKickButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetGameInviteButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetGameInviteButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetGameInviteButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetGameInviteButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetBlockButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetBlockButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetBlockButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetBlockButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerActionsWidget::GetAddFriendButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonVisibility");

	UPortalWarsPlayerActionsWidget_GetAddFriendButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlayerActionsWidget::GetAddFriendButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonEnabled");

	UPortalWarsPlayerActionsWidget_GetAddFriendButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerCardWidget.OnSettingsButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnSettingsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnSettingsButtonClicked");

	UPortalWarsPlayerCardWidget_OnSettingsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.OnPlayStreakButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnPlayStreakButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnPlayStreakButtonClicked");

	UPortalWarsPlayerCardWidget_OnPlayStreakButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.OnNotificationButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnNotificationButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnNotificationButtonClicked");

	UPortalWarsPlayerCardWidget_OnNotificationButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.OnLockerButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnLockerButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnLockerButtonClicked");

	UPortalWarsPlayerCardWidget_OnLockerButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.OnCurrencyButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnCurrencyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnCurrencyButtonClicked");

	UPortalWarsPlayerCardWidget_OnCurrencyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.OnCareerButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayerCardWidget::OnCareerButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.OnCareerButtonClicked");

	UPortalWarsPlayerCardWidget_OnCareerButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayerCardWidget.GetStreakText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlayerCardWidget::GetStreakText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.GetStreakText");

	UPortalWarsPlayerCardWidget_GetStreakText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerCardWidget.GetRepairIndicatorVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerCardWidget::GetRepairIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.GetRepairIndicatorVisibility");

	UPortalWarsPlayerCardWidget_GetRepairIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerCardWidget.GetNotificationIndicatorVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayerCardWidget::GetNotificationIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.GetNotificationIndicatorVisibility");

	UPortalWarsPlayerCardWidget_GetNotificationIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerCardWidget.GetCurrencyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlayerCardWidget::GetCurrencyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.GetCurrencyText");

	UPortalWarsPlayerCardWidget_GetCurrencyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayerCardWidget.GetAlloyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlayerCardWidget::GetAlloyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayerCardWidget.GetAlloyText");

	UPortalWarsPlayerCardWidget_GetAlloyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistActiveDialog.OnQueueButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlaylistActiveDialog::OnQueueButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistActiveDialog.OnQueueButtonClicked");

	UPortalWarsPlaylistActiveDialog_OnQueueButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistActiveDialog.GetXPBoostText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistActiveDialog::GetXPBoostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistActiveDialog.GetXPBoostText");

	UPortalWarsPlaylistActiveDialog_GetXPBoostText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistActiveDialog.GetTitleText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistActiveDialog::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistActiveDialog.GetTitleText");

	UPortalWarsPlaylistActiveDialog_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistActiveDialog.GetQueueButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPlaylistActiveDialog::GetQueueButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistActiveDialog.GetQueueButtonEnabled");

	UPortalWarsPlaylistActiveDialog_GetQueueButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistActiveDialog.GetDescriptionText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistActiveDialog::GetDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistActiveDialog.GetDescriptionText");

	UPortalWarsPlaylistActiveDialog_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistEntryWidget::GetXPBoostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostText");

	UPortalWarsPlaylistEntryWidget_GetXPBoostText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostIndicatorVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlaylistEntryWidget::GetXPBoostIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostIndicatorVisibility");

	UPortalWarsPlaylistEntryWidget_GetXPBoostIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistEntryWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetTitleText");

	UPortalWarsPlaylistEntryWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankXPText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistEntryWidget::GetRankXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankXPText");

	UPortalWarsPlaylistEntryWidget_GetRankXPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlaylistEntryWidget::GetRankVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankVisibility");

	UPortalWarsPlaylistEntryWidget_GetRankVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPlaylistEntryWidget::GetRankIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankIcon");

	UPortalWarsPlaylistEntryWidget_GetRankIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteTextVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlaylistEntryWidget::GetNoteTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteTextVisibility");

	UPortalWarsPlaylistEntryWidget_GetNoteTextVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistEntryWidget::GetNoteText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteText");

	UPortalWarsPlaylistEntryWidget_GetNoteText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistEntryWidget.GetDescriptionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistEntryWidget::GetDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistEntryWidget.GetDescriptionText");

	UPortalWarsPlaylistEntryWidget_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistGameModeEntry::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeEntry.GetTitleText");

	UPortalWarsPlaylistGameModeEntry_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteTextVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlaylistGameModeEntry::GetNoteTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteTextVisibility");

	UPortalWarsPlaylistGameModeEntry_GetNoteTextVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlaylistGameModeEntry::GetNoteText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteText");

	UPortalWarsPlaylistGameModeEntry_GetNoteText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetButtonStyle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FButtonStyle UPortalWarsPlaylistGameModeEntry::GetButtonStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeEntry.GetButtonStyle");

	UPortalWarsPlaylistGameModeEntry_GetButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlaylistGameModeSelect.RefreshGameModes
// (Final, Native, Protected)
void UPortalWarsPlaylistGameModeSelect::RefreshGameModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeSelect.RefreshGameModes");

	UPortalWarsPlaylistGameModeSelect_RefreshGameModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistGameModeSelect.OnPlayButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlaylistGameModeSelect::OnPlayButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeSelect.OnPlayButtonClicked");

	UPortalWarsPlaylistGameModeSelect_OnPlayButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistGameModeSelect.OnGameModeEntryHovered
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlaylistGameModeSelect::OnGameModeEntryHovered(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistGameModeSelect.OnGameModeEntryHovered");

	UPortalWarsPlaylistGameModeSelect_OnGameModeEntryHovered_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshPlaylists
// (Final, Native, Protected)
void UPortalWarsPlaylistSelectWidget::RefreshPlaylists()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshPlaylists");

	UPortalWarsPlaylistSelectWidget_RefreshPlaylists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshNoteText
// (Final, Native, Protected)
void UPortalWarsPlaylistSelectWidget::RefreshNoteText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshNoteText");

	UPortalWarsPlaylistSelectWidget_RefreshNoteText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlaylistSelectWidget::OnPlaylistEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistEntrySelected");

	UPortalWarsPlaylistSelectWidget_OnPlaylistEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistCustomizeSelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsPlaylistSelectWidget::OnPlaylistCustomizeSelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistCustomizeSelected");

	UPortalWarsPlaylistSelectWidget_OnPlaylistCustomizeSelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.GoToSelectionState
// (Final, Native, Protected)
void UPortalWarsPlaylistSelectWidget::GoToSelectionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.GoToSelectionState");

	UPortalWarsPlaylistSelectWidget_GoToSelectionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlaylistSelectWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsPlaylistSelectWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlaylistSelectWidget.GoToMainState");

	UPortalWarsPlaylistSelectWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayStreakDialogWidget.RefreshRewards
// (Final, Native, Public)
void UPortalWarsPlayStreakDialogWidget::RefreshRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayStreakDialogWidget.RefreshRewards");

	UPortalWarsPlayStreakDialogWidget_RefreshRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayStreakDialogWidget.GetCurrencyText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPlayStreakDialogWidget::GetCurrencyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayStreakDialogWidget.GetCurrencyText");

	UPortalWarsPlayStreakDialogWidget_GetCurrencyText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayStreakRewardWidget.GetSeparatorVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPlayStreakRewardWidget::GetSeparatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayStreakRewardWidget.GetSeparatorVisibility");

	UPortalWarsPlayStreakRewardWidget_GetSeparatorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPlayWidget.OnRewardCenterButtonClicked
// (Final, Native, Protected)
void UPortalWarsPlayWidget::OnRewardCenterButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.OnRewardCenterButtonClicked");

	UPortalWarsPlayWidget_OnRewardCenterButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayWidget.OnPartyUpdate
// (Final, Native, Protected)
void UPortalWarsPlayWidget::OnPartyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.OnPartyUpdate");

	UPortalWarsPlayWidget_OnPartyUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayWidget.OnClientSessionStateChanged
// (Final, Native, Protected)
void UPortalWarsPlayWidget::OnClientSessionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.OnClientSessionStateChanged");

	UPortalWarsPlayWidget_OnClientSessionStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayWidget.GoToSelectionState
// (Final, Native, Protected)
void UPortalWarsPlayWidget::GoToSelectionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.GoToSelectionState");

	UPortalWarsPlayWidget_GoToSelectionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayWidget.GoToMainState
// (Final, Native, Protected)
void UPortalWarsPlayWidget::GoToMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.GoToMainState");

	UPortalWarsPlayWidget_GoToMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPlayWidget.CancelMatchmaking
// (Final, Native, Protected)
void UPortalWarsPlayWidget::CancelMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPlayWidget.CancelMatchmaking");

	UPortalWarsPlayWidget_CancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPortalIndicatorWidget.GetScrimImage
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPortalIndicatorWidget::GetScrimImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPortalIndicatorWidget.GetScrimImage");

	UPortalWarsPortalIndicatorWidget_GetScrimImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPortalIndicatorWidget.GetIndicatorImage
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPortalIndicatorWidget::GetIndicatorImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPortalIndicatorWidget.GetIndicatorImage");

	UPortalWarsPortalIndicatorWidget_GetIndicatorImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.PlaySecondaryAnimation
// (Final, Native, Public)
void UPortalWarsPostGameCardWidget::PlaySecondaryAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.PlaySecondaryAnimation");

	UPortalWarsPostGameCardWidget_PlaySecondaryAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameCardWidget.PlayFadeInAnimation
// (Final, Native, Public)
void UPortalWarsPostGameCardWidget::PlayFadeInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.PlayFadeInAnimation");

	UPortalWarsPostGameCardWidget_PlayFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameCardWidget.GetValueText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameCardWidget::GetValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetValueText");

	UPortalWarsPostGameCardWidget_GetValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetTypeText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameCardWidget::GetTypeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetTypeText");

	UPortalWarsPostGameCardWidget_GetTypeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetTypeColor
// (Final, Native, Protected, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsPostGameCardWidget::GetTypeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetTypeColor");

	UPortalWarsPostGameCardWidget_GetTypeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetMedalVisibility
// (Final, Native, Protected, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameCardWidget::GetMedalVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetMedalVisibility");

	UPortalWarsPostGameCardWidget_GetMedalVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetMedalImage
// (Final, Native, Protected, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPostGameCardWidget::GetMedalImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetMedalImage");

	UPortalWarsPostGameCardWidget_GetMedalImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgVisibility
// (Final, Native, Protected, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameCardWidget::GetLifetimeAvgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgVisibility");

	UPortalWarsPostGameCardWidget_GetLifetimeAvgVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameCardWidget::GetLifetimeAvgText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgText");

	UPortalWarsPostGameCardWidget_GetLifetimeAvgText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgColor
// (Final, Native, Protected, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsPostGameCardWidget::GetLifetimeAvgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgColor");

	UPortalWarsPostGameCardWidget_GetLifetimeAvgColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIconVisibility
// (Final, Native, Protected, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameCardWidget::GetIncreaseIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIconVisibility");

	UPortalWarsPostGameCardWidget_GetIncreaseIconVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIcon
// (Final, Native, Protected, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPostGameCardWidget::GetIncreaseIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIcon");

	UPortalWarsPostGameCardWidget_GetIncreaseIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameCardWidget.GetBackgroundImage
// (Final, Native, Protected, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsPostGameCardWidget::GetBackgroundImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameCardWidget.GetBackgroundImage");

	UPortalWarsPostGameCardWidget_GetBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshWidget
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshWidget");

	UPortalWarsPostGameLobbyWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshRequeueButton
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::RefreshRequeueButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshRequeueButton");

	UPortalWarsPostGameLobbyWidget_RefreshRequeueButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshReadyButton
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::RefreshReadyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshReadyButton");

	UPortalWarsPostGameLobbyWidget_RefreshReadyButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshItemShopButton
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::RefreshItemShopButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshItemShopButton");

	UPortalWarsPostGameLobbyWidget_RefreshItemShopButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.OnRequeueButtonClicked
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::OnRequeueButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.OnRequeueButtonClicked");

	UPortalWarsPostGameLobbyWidget_OnRequeueButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.OnReadyButtonClicked
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::OnReadyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.OnReadyButtonClicked");

	UPortalWarsPostGameLobbyWidget_OnReadyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.OnItemShopButtonClicked
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::OnItemShopButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.OnItemShopButtonClicked");

	UPortalWarsPostGameLobbyWidget_OnItemShopButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.InitPrevGameInfo
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::InitPrevGameInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.InitPrevGameInfo");

	UPortalWarsPostGameLobbyWidget_InitPrevGameInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.InitPlayerState
// (Final, Native, Protected)
void UPortalWarsPostGameLobbyWidget::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.InitPlayerState");

	UPortalWarsPostGameLobbyWidget_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerScoreText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetWinnerScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerScoreText");

	UPortalWarsPostGameLobbyWidget_GetWinnerScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerNameText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetWinnerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerNameText");

	UPortalWarsPostGameLobbyWidget_GetWinnerNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerVisibility
// (Final, Native, Protected, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameLobbyWidget::GetTimerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerVisibility");

	UPortalWarsPostGameLobbyWidget_GetTimerVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetTimerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerText");

	UPortalWarsPostGameLobbyWidget_GetTimerText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetRequeueButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPostGameLobbyWidget::GetRequeueButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetRequeueButtonEnabled");

	UPortalWarsPostGameLobbyWidget_GetRequeueButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetReadyButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPostGameLobbyWidget::GetReadyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetReadyButtonEnabled");

	UPortalWarsPostGameLobbyWidget_GetReadyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetModeNameText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetModeNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetModeNameText");

	UPortalWarsPostGameLobbyWidget_GetModeNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetMapNameText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetMapNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetMapNameText");

	UPortalWarsPostGameLobbyWidget_GetMapNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetItemShopButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsPostGameLobbyWidget::GetItemShopButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetItemShopButtonEnabled");

	UPortalWarsPostGameLobbyWidget_GetItemShopButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetBravoScoreText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetBravoScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetBravoScoreText");

	UPortalWarsPostGameLobbyWidget_GetBravoScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameLobbyWidget.GetAlphaScoreText
// (Final, Native, Protected, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameLobbyWidget::GetAlphaScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameLobbyWidget.GetAlphaScoreText");

	UPortalWarsPostGameLobbyWidget_GetAlphaScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameOverviewWidget.StartXpAnimation
// (Final, Native, Protected)
void UPortalWarsPostGameOverviewWidget::StartXpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameOverviewWidget.StartXpAnimation");

	UPortalWarsPostGameOverviewWidget_StartXpAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameOverviewWidget.ProcessNextBoostAllocation
// (Final, Native, Protected)
void UPortalWarsPostGameOverviewWidget::ProcessNextBoostAllocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameOverviewWidget.ProcessNextBoostAllocation");

	UPortalWarsPostGameOverviewWidget_ProcessNextBoostAllocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGameOverviewWidget.InitCards
// (Final, Native, Protected)
void UPortalWarsPostGameOverviewWidget::InitCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameOverviewWidget.InitCards");

	UPortalWarsPostGameOverviewWidget_InitCards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerScore
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGamePlayerEntry::GetPlayerScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerScore");

	UPortalWarsPostGamePlayerEntry_GetPlayerScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGamePlayerEntry::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerName");

	UPortalWarsPostGamePlayerEntry_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerKills
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGamePlayerEntry::GetPlayerKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerKills");

	UPortalWarsPostGamePlayerEntry_GetPlayerKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerDeaths
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGamePlayerEntry::GetPlayerDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerDeaths");

	UPortalWarsPostGamePlayerEntry_GetPlayerDeaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGamePlayerEntry.GetDamageDealt
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGamePlayerEntry::GetDamageDealt()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGamePlayerEntry.GetDamageDealt");

	UPortalWarsPostGamePlayerEntry_GetDamageDealt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameStatsWidget.GetTeamVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameStatsWidget::GetTeamVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameStatsWidget.GetTeamVisibility");

	UPortalWarsPostGameStatsWidget_GetTeamVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameStatsWidget.GetFFAVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsPostGameStatsWidget::GetFFAVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameStatsWidget.GetFFAVisibility");

	UPortalWarsPostGameStatsWidget_GetFFAVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameStatsWidget.GetBravoTeamScoreText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameStatsWidget::GetBravoTeamScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameStatsWidget.GetBravoTeamScoreText");

	UPortalWarsPostGameStatsWidget_GetBravoTeamScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostGameStatsWidget.GetAlphaTeamScoreText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsPostGameStatsWidget::GetAlphaTeamScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostGameStatsWidget.GetAlphaTeamScoreText");

	UPortalWarsPostGameStatsWidget_GetAlphaTeamScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsPostPlayerController.ServerReadyForNextMatch
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                           InIsReady                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsPostPlayerController::ServerReadyForNextMatch(bool InIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostPlayerController.ServerReadyForNextMatch");

	APortalWarsPostPlayerController_ServerReadyForNextMatch_Params params;
	params.InIsReady = InIsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostPlayerController.OnClientSessionStateChanged
// (Final, Native, Protected)
void APortalWarsPostPlayerController::OnClientSessionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostPlayerController.OnClientSessionStateChanged");

	APortalWarsPostPlayerController_OnClientSessionStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostPlayerController.ClientRequeueMatchmaking
// (Net, NetReliable, Native, Event, Public, NetClient)
void APortalWarsPostPlayerController::ClientRequeueMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostPlayerController.ClientRequeueMatchmaking");

	APortalWarsPostPlayerController_ClientRequeueMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPostPlayerController.ClientNotifyContinueLobbyCompleted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FErrorInfo              ErrorInfo                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APortalWarsPostPlayerController::ClientNotifyContinueLobbyCompleted(bool bWasSuccessful, const struct FErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPostPlayerController.ClientNotifyContinueLobbyCompleted");

	APortalWarsPostPlayerController_ClientNotifyContinueLobbyCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPrivacySettingsWidget.RefreshCrossplaySetting
// (Final, Native, Protected)
void UPortalWarsPrivacySettingsWidget::RefreshCrossplaySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPrivacySettingsWidget.RefreshCrossplaySetting");

	UPortalWarsPrivacySettingsWidget_RefreshCrossplaySetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsPrivacySettingsWidget.OnCrossplayValueChanged
// (Final, Native, Protected)
void UPortalWarsPrivacySettingsWidget::OnCrossplayValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsPrivacySettingsWidget.OnCrossplayValueChanged");

	UPortalWarsPrivacySettingsWidget_OnCrossplayValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsProgressRadialWidget.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsProgressRadialWidget::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsProgressRadialWidget.SetPercent");

	UPortalWarsProgressRadialWidget_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsProgressRadialWidget.GetPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsProgressRadialWidget::GetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsProgressRadialWidget.GetPercent");

	UPortalWarsProgressRadialWidget_GetPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsQuitMenuWidget.OnQuitButtonClicked
// (Native, Protected)
void UPortalWarsQuitMenuWidget::OnQuitButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsQuitMenuWidget.OnQuitButtonClicked");

	UPortalWarsQuitMenuWidget_OnQuitButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptWarningButtonClicked
// (Native, Protected)
void UPortalWarsQuitMenuWidget::OnAcceptWarningButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptWarningButtonClicked");

	UPortalWarsQuitMenuWidget_OnAcceptWarningButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptCheckBoxValueChanged
// (Native, Protected)
void UPortalWarsQuitMenuWidget::OnAcceptCheckBoxValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptCheckBoxValueChanged");

	UPortalWarsQuitMenuWidget_OnAcceptCheckBoxValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsQuitMenuWidget.GetWarningMessageVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsQuitMenuWidget::GetWarningMessageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsQuitMenuWidget.GetWarningMessageVisibility");

	UPortalWarsQuitMenuWidget_GetWarningMessageVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsQuitMenuWidget.GetQuitButtonEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsQuitMenuWidget::GetQuitButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsQuitMenuWidget.GetQuitButtonEnabled");

	UPortalWarsQuitMenuWidget_GetQuitButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceGameMode.InitRace
// (Final, Native, Public, BlueprintCallable)
void APortalWarsRaceGameMode::InitRace()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceGameMode.InitRace");

	APortalWarsRaceGameMode_InitRace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceGate.OnOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsRaceGate::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceGate.OnOverlap");

	APortalWarsRaceGate_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceHUDOverlay.SetRecordHolderName
// (Final, Native, Protected)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRaceHUDOverlay::SetRecordHolderName(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceHUDOverlay.SetRecordHolderName");

	UPortalWarsRaceHUDOverlay_SetRecordHolderName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceHUDOverlay.GetRecordTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceHUDOverlay::GetRecordTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceHUDOverlay.GetRecordTimeText");

	UPortalWarsRaceHUDOverlay_GetRecordTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceHUDOverlay.GetMapNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceHUDOverlay::GetMapNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceHUDOverlay.GetMapNameText");

	UPortalWarsRaceHUDOverlay_GetMapNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceHUDOverlay::GetCurrentTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentTimeText");

	UPortalWarsRaceHUDOverlay_GetCurrentTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentGateNumText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceHUDOverlay::GetCurrentGateNumText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentGateNumText");

	UPortalWarsRaceHUDOverlay_GetCurrentGateNumText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceLeaderboardEntry.GetTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceLeaderboardEntry::GetTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLeaderboardEntry.GetTimeText");

	UPortalWarsRaceLeaderboardEntry_GetTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceLeaderboardWidget.RefreshLeaderboard
// (Final, Native, Protected)
void UPortalWarsRaceLeaderboardWidget::RefreshLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLeaderboardWidget.RefreshLeaderboard");

	UPortalWarsRaceLeaderboardWidget_RefreshLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceLeaderboardWidget.OnTypeSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRaceLeaderboardWidget::OnTypeSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLeaderboardWidget.OnTypeSelectionChanged");

	UPortalWarsRaceLeaderboardWidget_OnTypeSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceLeaderboardWidget.GetSelectedTypeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceLeaderboardWidget::GetSelectedTypeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLeaderboardWidget.GetSelectedTypeText");

	UPortalWarsRaceLeaderboardWidget_GetSelectedTypeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceLeaderboardWidget.GetMapNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceLeaderboardWidget::GetMapNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLeaderboardWidget.GetMapNameText");

	UPortalWarsRaceLeaderboardWidget_GetMapNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceLobbyWidget.OnSwitchLeaderboardButtonClicked
// (Final, Native, Protected)
void UPortalWarsRaceLobbyWidget::OnSwitchLeaderboardButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceLobbyWidget.OnSwitchLeaderboardButtonClicked");

	UPortalWarsRaceLobbyWidget_OnSwitchLeaderboardButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceMatchResultWidget.GetMapNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceMatchResultWidget::GetMapNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceMatchResultWidget.GetMapNameText");

	UPortalWarsRaceMatchResultWidget_GetMapNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceMatchResultWidget.GetFinalTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceMatchResultWidget::GetFinalTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceMatchResultWidget.GetFinalTimeText");

	UPortalWarsRaceMatchResultWidget_GetFinalTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardWidget.GetTeamVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardWidget::GetTeamVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardWidget.GetTeamVisibility");

	UPortalWarsScoreboardWidget_GetTeamVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardWidget.GetStatsVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardWidget::GetStatsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardWidget.GetStatsVisibility");

	UPortalWarsScoreboardWidget_GetStatsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardWidget.GetScoreVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardWidget::GetScoreVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardWidget.GetScoreVisibility");

	UPortalWarsScoreboardWidget_GetScoreVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardWidget.GetFFAVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardWidget::GetFFAVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardWidget.GetFFAVisibility");

	UPortalWarsScoreboardWidget_GetFFAVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceScoreboardWidget.SetRecordHolderName
// (Final, Native, Protected)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRaceScoreboardWidget::SetRecordHolderName(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceScoreboardWidget.SetRecordHolderName");

	UPortalWarsRaceScoreboardWidget_SetRecordHolderName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRaceScoreboardWidget.GetRecordTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceScoreboardWidget::GetRecordTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceScoreboardWidget.GetRecordTimeText");

	UPortalWarsRaceScoreboardWidget_GetRecordTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRaceScoreboardWidget.GetCurrentTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRaceScoreboardWidget::GetCurrentTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRaceScoreboardWidget.GetCurrentTimeText");

	UPortalWarsRaceScoreboardWidget_GetCurrentTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRadarMarkerWidget.InitPlayerInfo
// (Final, Native, Protected)
void UPortalWarsRadarMarkerWidget::InitPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRadarMarkerWidget.InitPlayerInfo");

	UPortalWarsRadarMarkerWidget_InitPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRadioGroupWidget.OnEntrySelected
// (Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRadioGroupWidget::OnEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRadioGroupWidget.OnEntrySelected");

	UPortalWarsRadioGroupWidget_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankLeaderboardWidget.RefreshLeaderboard
// (Final, Native, Protected)
void UPortalWarsRankLeaderboardWidget::RefreshLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankLeaderboardWidget.RefreshLeaderboard");

	UPortalWarsRankLeaderboardWidget_RefreshLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankLeaderboardWidget.OnPlaylistSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRankLeaderboardWidget::OnPlaylistSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankLeaderboardWidget.OnPlaylistSelectionChanged");

	UPortalWarsRankLeaderboardWidget_OnPlaylistSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankLeaderboardWidget.OnChangePlaylistClicked
// (Final, Native, Protected)
void UPortalWarsRankLeaderboardWidget::OnChangePlaylistClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankLeaderboardWidget.OnChangePlaylistClicked");

	UPortalWarsRankLeaderboardWidget_OnChangePlaylistClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankLeaderboardWidget.GetSelectedPlaylistText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRankLeaderboardWidget::GetSelectedPlaylistText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankLeaderboardWidget.GetSelectedPlaylistText");

	UPortalWarsRankLeaderboardWidget_GetSelectedPlaylistText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRankListEntryWidget.GetRankXPText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRankListEntryWidget::GetRankXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankListEntryWidget.GetRankXPText");

	UPortalWarsRankListEntryWidget_GetRankXPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRankListEntryWidget.GetRankNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRankListEntryWidget::GetRankNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankListEntryWidget.GetRankNameText");

	UPortalWarsRankListEntryWidget_GetRankNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRankUpdateWidget.PlayRankUpSound
// (Final, Native, Protected)
void UPortalWarsRankUpdateWidget::PlayRankUpSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankUpdateWidget.PlayRankUpSound");

	UPortalWarsRankUpdateWidget_PlayRankUpSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankUpdateWidget.PlayRankDownSound
// (Final, Native, Protected)
void UPortalWarsRankUpdateWidget::PlayRankDownSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankUpdateWidget.PlayRankDownSound");

	UPortalWarsRankUpdateWidget_PlayRankDownSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRankUpdateWidget.GetRankXPText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRankUpdateWidget::GetRankXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankUpdateWidget.GetRankXPText");

	UPortalWarsRankUpdateWidget_GetRankXPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRankUpdateWidget.GetRankNameText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRankUpdateWidget::GetRankNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRankUpdateWidget.GetRankNameText");

	UPortalWarsRankUpdateWidget_GetRankNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRecentPlayersWidget.RefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsRecentPlayersWidget::RefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRecentPlayersWidget.RefreshPlayersList");

	UPortalWarsRecentPlayersWidget_RefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRecentPlayersWidget.OnPlayerEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRecentPlayersWidget::OnPlayerEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRecentPlayersWidget.OnPlayerEntrySelected");

	UPortalWarsRecentPlayersWidget_OnPlayerEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRecentPlayersWidget.GetRefreshButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsRecentPlayersWidget::GetRefreshButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRecentPlayersWidget.GetRefreshButtonEnabled");

	UPortalWarsRecentPlayersWidget_GetRefreshButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRecentPlayersWidget.DelayedRefreshPlayersList
// (Final, Native, Protected)
void UPortalWarsRecentPlayersWidget::DelayedRefreshPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRecentPlayersWidget.DelayedRefreshPlayersList");

	UPortalWarsRecentPlayersWidget_DelayedRefreshPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRedeemKeyDialogWidget.OnKeyInputChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   newText                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsRedeemKeyDialogWidget::OnKeyInputChanged(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRedeemKeyDialogWidget.OnKeyInputChanged");

	UPortalWarsRedeemKeyDialogWidget_OnKeyInputChanged_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReferFriendWidget.OnReferralPassButtonClicked
// (Final, Native, Protected)
void UPortalWarsReferFriendWidget::OnReferralPassButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReferFriendWidget.OnReferralPassButtonClicked");

	UPortalWarsReferFriendWidget_OnReferralPassButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReferFriendWidget.OnReferralCodeTextChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   newText                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsReferFriendWidget::OnReferralCodeTextChanged(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReferFriendWidget.OnReferralCodeTextChanged");

	UPortalWarsReferFriendWidget_OnReferralCodeTextChanged_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReferFriendWidget.OnReferFriendUpdate
// (Final, Native, Protected)
void UPortalWarsReferFriendWidget::OnReferFriendUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReferFriendWidget.OnReferFriendUpdate");

	UPortalWarsReferFriendWidget_OnReferFriendUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReferFriendWidget.OnCopyButtonClicked
// (Final, Native, Public)
void UPortalWarsReferFriendWidget::OnCopyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReferFriendWidget.OnCopyButtonClicked");

	UPortalWarsReferFriendWidget_OnCopyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReferFriendWidget.OnConfirmButtonClicked
// (Final, Native, Public)
void UPortalWarsReferFriendWidget::OnConfirmButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReferFriendWidget.OnConfirmButtonClicked");

	UPortalWarsReferFriendWidget_OnConfirmButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRenameReplayDialogWidget.OnNameValueChanged
// (Final, Native, Protected)
void UPortalWarsRenameReplayDialogWidget::OnNameValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRenameReplayDialogWidget.OnNameValueChanged");

	UPortalWarsRenameReplayDialogWidget_OnNameValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayEntryWidget.GetReplayLengthText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsReplayEntryWidget::GetReplayLengthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayEntryWidget.GetReplayLengthText");

	UPortalWarsReplayEntryWidget_GetReplayLengthText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReplayEntryWidget.GetReplayDateText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsReplayEntryWidget::GetReplayDateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayEntryWidget.GetReplayDateText");

	UPortalWarsReplayEntryWidget_GetReplayDateText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.ToggleReplayPausedState
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::ToggleReplayPausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.ToggleReplayPausedState");

	UPortalWarsReplayHUDOverlayWidget_ToggleReplayPausedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.RefreshPlayButton_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPlaying                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::RefreshPlayButton_BP(bool bIsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.RefreshPlayButton_BP");

	UPortalWarsReplayHUDOverlayWidget_RefreshPlayButton_BP_Params params;
	params.bIsPlaying = bIsPlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.PlayOneFrame
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::PlayOneFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.PlayOneFrame");

	UPortalWarsReplayHUDOverlayWidget_PlayOneFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeValueChanged
// (Final, Native, Protected)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnTimeValueChanged(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeValueChanged");

	UPortalWarsReplayHUDOverlayWidget_OnTimeValueChanged_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureEnd
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::OnTimeMouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureEnd");

	UPortalWarsReplayHUDOverlayWidget_OnTimeMouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureBegin
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::OnTimeMouseCaptureBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureBegin");

	UPortalWarsReplayHUDOverlayWidget_OnTimeMouseCaptureBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnReplayCameraModeChanged
// (Final, Native, Protected)
// Parameters:
// PortalWars_EReplayCameraMode   NewReplayCameraMode            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnReplayCameraModeChanged(PortalWars_EReplayCameraMode NewReplayCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnReplayCameraModeChanged");

	UPortalWarsReplayHUDOverlayWidget_OnReplayCameraModeChanged_Params params;
	params.NewReplayCameraMode = NewReplayCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayRateSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnPlayRateSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayRateSelectionChanged");

	UPortalWarsReplayHUDOverlayWidget_OnPlayRateSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayerListChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class APlayerState*>    NewPlayerList                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnPlayerListChanged(TArray<class APlayerState*> NewPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayerListChanged");

	UPortalWarsReplayHUDOverlayWidget_OnPlayerListChanged_Params params;
	params.NewPlayerList = NewPlayerList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnFocusedPlayerChanged
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            NewFocusedPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnFocusedPlayerChanged(class APlayerState* NewFocusedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnFocusedPlayerChanged");

	UPortalWarsReplayHUDOverlayWidget_OnFocusedPlayerChanged_Params params;
	params.NewFocusedPlayer = NewFocusedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnCameraModeSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayHUDOverlayWidget::OnCameraModeSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnCameraModeSelectionChanged");

	UPortalWarsReplayHUDOverlayWidget_OnCameraModeSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpForward
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::JumpForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpForward");

	UPortalWarsReplayHUDOverlayWidget_JumpForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpBack
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::JumpBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpBack");

	UPortalWarsReplayHUDOverlayWidget_JumpBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.IncreasePlayRate
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::IncreasePlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.IncreasePlayRate");

	UPortalWarsReplayHUDOverlayWidget_IncreasePlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.GoToNextCameraMode
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::GoToNextCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.GoToNextCameraMode");

	UPortalWarsReplayHUDOverlayWidget_GoToNextCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayHUDOverlayWidget.DecreasePlayRate
// (Final, Native, Protected)
void UPortalWarsReplayHUDOverlayWidget::DecreasePlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayHUDOverlayWidget.DecreasePlayRate");

	UPortalWarsReplayHUDOverlayWidget_DecreasePlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetSecondaryWeaponImage
// (Final, Native, Protected)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsScoreboardPlayerWidget::GetSecondaryWeaponImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetSecondaryWeaponImage");

	UPortalWarsScoreboardPlayerWidget_GetSecondaryWeaponImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetRespawnTimeText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardPlayerWidget::GetRespawnTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetRespawnTimeText");

	UPortalWarsScoreboardPlayerWidget_GetRespawnTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPrimaryWeaponImage
// (Final, Native, Protected)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsScoreboardPlayerWidget::GetPrimaryWeaponImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPrimaryWeaponImage");

	UPortalWarsScoreboardPlayerWidget_GetPrimaryWeaponImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerScoreText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardPlayerWidget::GetPlayerScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerScoreText");

	UPortalWarsScoreboardPlayerWidget_GetPlayerScoreText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerKillsText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardPlayerWidget::GetPlayerKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerKillsText");

	UPortalWarsScoreboardPlayerWidget_GetPlayerKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDeathsText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardPlayerWidget::GetPlayerDeathsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDeathsText");

	UPortalWarsScoreboardPlayerWidget_GetPlayerDeathsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDamageText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardPlayerWidget::GetPlayerDamageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDamageText");

	UPortalWarsScoreboardPlayerWidget_GetPlayerDamageText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetInventoryVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardPlayerWidget::GetInventoryVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetInventoryVisibility");

	UPortalWarsScoreboardPlayerWidget_GetInventoryVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetDeathVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsScoreboardPlayerWidget::GetDeathVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetDeathVisibility");

	UPortalWarsScoreboardPlayerWidget_GetDeathVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetBackgroundImage
// (Native, Protected)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsScoreboardPlayerWidget::GetBackgroundImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetBackgroundImage");

	UPortalWarsScoreboardPlayerWidget_GetBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetArmorCustomizationThumbnail
// (Final, Native, Protected)
void UPortalWarsScoreboardPlayerWidget::GetArmorCustomizationThumbnail()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardPlayerWidget.GetArmorCustomizationThumbnail");

	UPortalWarsScoreboardPlayerWidget_GetArmorCustomizationThumbnail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayPlayerWidget.UpdatePlayerNameText
// (Final, Native, Protected)
void UPortalWarsReplayPlayerWidget::UpdatePlayerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayPlayerWidget.UpdatePlayerNameText");

	UPortalWarsReplayPlayerWidget_UpdatePlayerNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayPlayerWidget.OnReplayCameraModeChanged
// (Final, Native, Protected)
// Parameters:
// PortalWars_EReplayCameraMode   NewReplayCameraMode            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayPlayerWidget::OnReplayCameraModeChanged(PortalWars_EReplayCameraMode NewReplayCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayPlayerWidget.OnReplayCameraModeChanged");

	UPortalWarsReplayPlayerWidget_OnReplayCameraModeChanged_Params params;
	params.NewReplayCameraMode = NewReplayCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayPlayerWidget.OnFocusedPlayerChanged
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            NewFocusedPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplayPlayerWidget::OnFocusedPlayerChanged(class APlayerState* NewFocusedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayPlayerWidget.OnFocusedPlayerChanged");

	UPortalWarsReplayPlayerWidget_OnFocusedPlayerChanged_Params params;
	params.NewFocusedPlayer = NewFocusedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplayPlayerWidget.OnButtonClicked
// (Final, Native, Protected)
void UPortalWarsReplayPlayerWidget::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplayPlayerWidget.OnButtonClicked");

	UPortalWarsReplayPlayerWidget_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.RenameSelectedReplay
// (Final, Native, Protected)
void UPortalWarsReplaysWidget::RenameSelectedReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.RenameSelectedReplay");

	UPortalWarsReplaysWidget_RenameSelectedReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.RefreshPlayButton
// (Final, Native, Protected)
void UPortalWarsReplaysWidget::RefreshPlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.RefreshPlayButton");

	UPortalWarsReplaysWidget_RefreshPlayButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.PlaySelectedReplay
// (Final, Native, Protected)
void UPortalWarsReplaysWidget::PlaySelectedReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.PlaySelectedReplay");

	UPortalWarsReplaysWidget_PlaySelectedReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.OpenReplayFolder
// (Final, Native, Protected)
void UPortalWarsReplaysWidget::OpenReplayFolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.OpenReplayFolder");

	UPortalWarsReplaysWidget_OpenReplayFolder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.OnReplayEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsReplaysWidget::OnReplayEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.OnReplayEntrySelected");

	UPortalWarsReplaysWidget_OnReplayEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReplaysWidget.GetSelectedVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsReplaysWidget::GetSelectedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.GetSelectedVisibility");

	UPortalWarsReplaysWidget_GetSelectedVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReplaysWidget.GetPlayButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsReplaysWidget::GetPlayButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.GetPlayButtonEnabled");

	UPortalWarsReplaysWidget_GetPlayButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReplaysWidget.DeleteSelectedReplay
// (Final, Native, Protected)
void UPortalWarsReplaysWidget::DeleteSelectedReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReplaysWidget.DeleteSelectedReplay");

	UPortalWarsReplaysWidget_DeleteSelectedReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReportPlayerWidget.OnReportButtonClicked
// (Final, Native, Protected)
void UPortalWarsReportPlayerWidget::OnReportButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReportPlayerWidget.OnReportButtonClicked");

	UPortalWarsReportPlayerWidget_OnReportButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReportPlayerWidget.GetReportTitleText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsReportPlayerWidget::GetReportTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReportPlayerWidget.GetReportTitleText");

	UPortalWarsReportPlayerWidget_GetReportTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReticleWidget.UpdateReticle
// (Final, Native, Public)
void UPortalWarsReticleWidget::UpdateReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReticleWidget.UpdateReticle");

	UPortalWarsReticleWidget_UpdateReticle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsReticleWidget.GetChargeVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsReticleWidget::GetChargeVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReticleWidget.GetChargeVisibility");

	UPortalWarsReticleWidget_GetChargeVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsReticleWidget.GetChargeProgress
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsReticleWidget::GetChargeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsReticleWidget.GetChargeProgress");

	UPortalWarsReticleWidget_GetChargeProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardReceivedEntry.PlayRewardSound
// (Final, Native, Protected)
void UPortalWarsRewardReceivedEntry::PlayRewardSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedEntry.PlayRewardSound");

	UPortalWarsRewardReceivedEntry_PlayRewardSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardReceivedWidget.ShowNextReward
// (Final, Native, Protected)
void UPortalWarsRewardReceivedWidget::ShowNextReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedWidget.ShowNextReward");

	UPortalWarsRewardReceivedWidget_ShowNextReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardReceivedWidget.SetRewardType
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// PortalWars_ERewardReceivedType InType                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRewardReceivedWidget::SetRewardType(PortalWars_ERewardReceivedType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedWidget.SetRewardType");

	UPortalWarsRewardReceivedWidget_SetRewardType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardReceivedWidget.OnRewardEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsRewardReceivedWidget::OnRewardEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedWidget.OnRewardEntrySelected");

	UPortalWarsRewardReceivedWidget_OnRewardEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRewardReceivedWidget.GetPurchasePremiumEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsRewardReceivedWidget::GetPurchasePremiumEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedWidget.GetPurchasePremiumEnabled");

	UPortalWarsRewardReceivedWidget_GetPurchasePremiumEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRewardReceivedWidget.GetPremiumVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsRewardReceivedWidget::GetPremiumVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRewardReceivedWidget.GetPremiumVisibility");

	UPortalWarsRewardReceivedWidget_GetPremiumVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsRoundGameState.OnRep_RoundScore
// (Final, Native, Protected)
void APortalWarsRoundGameState::OnRep_RoundScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRoundGameState.OnRep_RoundScore");

	APortalWarsRoundGameState_OnRep_RoundScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRoundGameState.OnRep_ElapsedServerTime
// (Native, Protected)
void APortalWarsRoundGameState::OnRep_ElapsedServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRoundGameState.OnRep_ElapsedServerTime");

	APortalWarsRoundGameState_OnRep_ElapsedServerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRoundGameState.OnRep_CurrentRound
// (Final, Native, Protected)
void APortalWarsRoundGameState::OnRep_CurrentRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRoundGameState.OnRep_CurrentRound");

	APortalWarsRoundGameState_OnRep_CurrentRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRoundHUDOverlayWidget.OnPlayerListChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class APlayerState*>    NewPlayerList                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsRoundHUDOverlayWidget::OnPlayerListChanged(TArray<class APlayerState*> NewPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRoundHUDOverlayWidget.OnPlayerListChanged");

	UPortalWarsRoundHUDOverlayWidget_OnPlayerListChanged_Params params;
	params.NewPlayerList = NewPlayerList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsRoundResultWidget.GetTitleText
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsRoundResultWidget::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsRoundResultWidget.GetTitleText");

	UPortalWarsRoundResultWidget_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardStatEntry.GetStatValueText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardStatEntry::GetStatValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardStatEntry.GetStatValueText");

	UPortalWarsScoreboardStatEntry_GetStatValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardStatEntry.GetStatNameText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsScoreboardStatEntry::GetStatNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardStatEntry.GetStatNameText");

	UPortalWarsScoreboardStatEntry_GetStatNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalImage
// (Final, Native, Protected)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UPortalWarsScoreboardStatEntry::GetMedalImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalImage");

	UPortalWarsScoreboardStatEntry_GetMedalImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalColor
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPortalWarsScoreboardStatEntry::GetMedalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalColor");

	UPortalWarsScoreboardStatEntry_GetMedalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeOutAnimation
// (Final, Native, Protected)
void UPortalWarsScreenFadeWidget::PlayFadeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeOutAnimation");

	UPortalWarsScreenFadeWidget_PlayFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeInAnimation
// (Final, Native, Protected)
void UPortalWarsScreenFadeWidget::PlayFadeInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeInAnimation");

	UPortalWarsScreenFadeWidget_PlayFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSeasonRewardsWidget.RefreshWidget
// (Final, Native, Public)
void UPortalWarsSeasonRewardsWidget::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSeasonRewardsWidget.RefreshWidget");

	UPortalWarsSeasonRewardsWidget_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsServerBrowserWidget.OnServerEntrySelected
// (Final, Native, Protected)
// Parameters:
// class UPortalWarsEntryWidget*  Entry                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsServerBrowserWidget::OnServerEntrySelected(class UPortalWarsEntryWidget* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.OnServerEntrySelected");

	UPortalWarsServerBrowserWidget_OnServerEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsServerBrowserWidget.OnJoinButtonClicked
// (Final, Native, Protected)
void UPortalWarsServerBrowserWidget::OnJoinButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.OnJoinButtonClicked");

	UPortalWarsServerBrowserWidget_OnJoinButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsServerBrowserWidget.OnCreateButtonClicked
// (Final, Native, Protected)
void UPortalWarsServerBrowserWidget::OnCreateButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.OnCreateButtonClicked");

	UPortalWarsServerBrowserWidget_OnCreateButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsServerBrowserWidget.GetSelectedVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsServerBrowserWidget::GetSelectedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.GetSelectedVisibility");

	UPortalWarsServerBrowserWidget_GetSelectedVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerBrowserWidget.GetSearchButtonEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsServerBrowserWidget::GetSearchButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.GetSearchButtonEnabled");

	UPortalWarsServerBrowserWidget_GetSearchButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerBrowserWidget.FindServers
// (Final, Native, Protected)
void UPortalWarsServerBrowserWidget::FindServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerBrowserWidget.FindServers");

	UPortalWarsServerBrowserWidget_FindServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsServerEntryWidget.IsPrivateServer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsServerEntryWidget::IsPrivateServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.IsPrivateServer");

	UPortalWarsServerEntryWidget_IsPrivateServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.IsLANServer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPortalWarsServerEntryWidget::IsLANServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.IsLANServer");

	UPortalWarsServerEntryWidget_IsLANServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetVisibilityText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetVisibilityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetVisibilityText");

	UPortalWarsServerEntryWidget_GetVisibilityText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetSpectatorsText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetSpectatorsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetSpectatorsText");

	UPortalWarsServerEntryWidget_GetSpectatorsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetServerType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetServerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetServerType");

	UPortalWarsServerEntryWidget_GetServerType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetServerPassword
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsServerEntryWidget::GetServerPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetServerPassword");

	UPortalWarsServerEntryWidget_GetServerPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetServerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPortalWarsServerEntryWidget::GetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetServerName");

	UPortalWarsServerEntryWidget_GetServerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetRegionName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetRegionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetRegionName");

	UPortalWarsServerEntryWidget_GetRegionName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetPrivateVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsServerEntryWidget::GetPrivateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetPrivateVisibility");

	UPortalWarsServerEntryWidget_GetPrivateVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetPlayersText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetPlayersText");

	UPortalWarsServerEntryWidget_GetPlayersText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetModeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetModeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetModeName");

	UPortalWarsServerEntryWidget_GetModeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetMapName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsServerEntryWidget::GetMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetMapName");

	UPortalWarsServerEntryWidget_GetMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsServerEntryWidget.GetCrossPlayVisibility
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsServerEntryWidget::GetCrossPlayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsServerEntryWidget.GetCrossPlayVisibility");

	UPortalWarsServerEntryWidget_GetCrossPlayVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsSpinSliderWidget.OnInputSliderValueChanged
// (Final, Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsSpinSliderWidget::OnInputSliderValueChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSpinSliderWidget.OnInputSliderValueChanged");

	UPortalWarsSpinSliderWidget_OnInputSliderValueChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueCommitted
// (Final, Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ETextCommit> CommitType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsSpinSliderWidget::OnInputBoxValueCommitted(float NewValue, TEnumAsByte<SlateCore_ETextCommit> CommitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueCommitted");

	UPortalWarsSpinSliderWidget_OnInputBoxValueCommitted_Params params;
	params.NewValue = NewValue;
	params.CommitType = CommitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueChanged
// (Final, Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsSpinSliderWidget::OnInputBoxValueChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueChanged");

	UPortalWarsSpinSliderWidget_OnInputBoxValueChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsSplineRoad.EditorInit
// (Event, Protected, BlueprintEvent)
void APortalWarsSplineRoad::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsSplineRoad.EditorInit");

	APortalWarsSplineRoad_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsEntryWidget.GetTripleKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetTripleKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetTripleKillsText");

	UPortalWarsStatsEntryWidget_GetTripleKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetTeabagsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetTeabagsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetTeabagsText");

	UPortalWarsStatsEntryWidget_GetTeabagsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetSuicidesText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetSuicidesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetSuicidesText");

	UPortalWarsStatsEntryWidget_GetSuicidesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetQuintKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetQuintKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetQuintKillsText");

	UPortalWarsStatsEntryWidget_GetQuintKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetQuadKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetQuadKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetQuadKillsText");

	UPortalWarsStatsEntryWidget_GetQuadKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetPortalKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetPortalKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetPortalKillsText");

	UPortalWarsStatsEntryWidget_GetPortalKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetMeleeKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetMeleeKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetMeleeKillsText");

	UPortalWarsStatsEntryWidget_GetMeleeKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak6Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak6Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak6Text");

	UPortalWarsStatsEntryWidget_GetKillStreak6Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak5Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak5Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak5Text");

	UPortalWarsStatsEntryWidget_GetKillStreak5Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak4Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak4Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak4Text");

	UPortalWarsStatsEntryWidget_GetKillStreak4Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak3Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak3Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak3Text");

	UPortalWarsStatsEntryWidget_GetKillStreak3Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak2Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak2Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak2Text");

	UPortalWarsStatsEntryWidget_GetKillStreak2Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak1Text
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillStreak1Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak1Text");

	UPortalWarsStatsEntryWidget_GetKillStreak1Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillsThruPortalText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillsThruPortalText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillsThruPortalText");

	UPortalWarsStatsEntryWidget_GetKillsThruPortalText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKillsText");

	UPortalWarsStatsEntryWidget_GetKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKdText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKdText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKdText");

	UPortalWarsStatsEntryWidget_GetKdText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetKadText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetKadText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetKadText");

	UPortalWarsStatsEntryWidget_GetKadText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetGamesWonText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetGamesWonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetGamesWonText");

	UPortalWarsStatsEntryWidget_GetGamesWonText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetGamesPlayedText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetGamesPlayedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetGamesPlayedText");

	UPortalWarsStatsEntryWidget_GetGamesPlayedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetDoubleKillsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetDoubleKillsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetDoubleKillsText");

	UPortalWarsStatsEntryWidget_GetDoubleKillsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetDeathsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetDeathsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetDeathsText");

	UPortalWarsStatsEntryWidget_GetDeathsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetDamageDealtText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetDamageDealtText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetDamageDealtText");

	UPortalWarsStatsEntryWidget_GetDamageDealtText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsEntryWidget.GetAssistsText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsEntryWidget::GetAssistsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsEntryWidget.GetAssistsText");

	UPortalWarsStatsEntryWidget_GetAssistsText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsOverviewWidget.OnUserInfoUpdate
// (Final, Native, Protected)
void UPortalWarsStatsOverviewWidget::OnUserInfoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsOverviewWidget.OnUserInfoUpdate");

	UPortalWarsStatsOverviewWidget_OnUserInfoUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsOverviewWidget.OnSeasonSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsStatsOverviewWidget::OnSeasonSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsOverviewWidget.OnSeasonSelectionChanged");

	UPortalWarsStatsOverviewWidget_OnSeasonSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsOverviewWidget.OnChangeSeasonClicked
// (Final, Native, Protected)
void UPortalWarsStatsOverviewWidget::OnChangeSeasonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsOverviewWidget.OnChangeSeasonClicked");

	UPortalWarsStatsOverviewWidget_OnChangeSeasonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsOverviewWidget.GetSeasonText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsOverviewWidget::GetSeasonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsOverviewWidget.GetSeasonText");

	UPortalWarsStatsOverviewWidget_GetSeasonText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsPlaylistWidget.SetAvatar
// (Final, Native, Protected)
// Parameters:
// class UTexture2D*              InAvatar                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsStatsPlaylistWidget::SetAvatar(class UTexture2D* InAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.SetAvatar");

	UPortalWarsStatsPlaylistWidget_SetAvatar_Params params;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsPlaylistWidget.OnUserInfoUpdate
// (Final, Native, Protected)
void UPortalWarsStatsPlaylistWidget::OnUserInfoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.OnUserInfoUpdate");

	UPortalWarsStatsPlaylistWidget_OnUserInfoUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsPlaylistWidget.OnPlaylistSelectionChanged
// (Final, Native, Protected)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsStatsPlaylistWidget::OnPlaylistSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.OnPlaylistSelectionChanged");

	UPortalWarsStatsPlaylistWidget_OnPlaylistSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsPlaylistWidget.OnChangePlaylistClicked
// (Final, Native, Protected)
void UPortalWarsStatsPlaylistWidget::OnChangePlaylistClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.OnChangePlaylistClicked");

	UPortalWarsStatsPlaylistWidget_OnChangePlaylistClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStatsPlaylistWidget.GetSelectedPlaylistText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsPlaylistWidget::GetSelectedPlaylistText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.GetSelectedPlaylistText");

	UPortalWarsStatsPlaylistWidget_GetSelectedPlaylistText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankXP
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsPlaylistWidget::GetRankXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankXP");

	UPortalWarsStatsPlaylistWidget_GetRankXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStatsPlaylistWidget::GetRankName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankName");

	UPortalWarsStatsPlaylistWidget_GetRankName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankedVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsStatsPlaylistWidget::GetRankedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankedVisibility");

	UPortalWarsStatsPlaylistWidget_GetRankedVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStreakIncreaseWidget.PlayStreakIncreasedSound
// (Final, Native, Protected)
void UPortalWarsStreakIncreaseWidget::PlayStreakIncreasedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStreakIncreaseWidget.PlayStreakIncreasedSound");

	UPortalWarsStreakIncreaseWidget_PlayStreakIncreasedSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStreakIncreaseWidget.OnRepairButtonClicked
// (Final, Native, Protected)
void UPortalWarsStreakIncreaseWidget::OnRepairButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStreakIncreaseWidget.OnRepairButtonClicked");

	UPortalWarsStreakIncreaseWidget_OnRepairButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsStreakIncreaseWidget::GetRepairVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairVisibility");

	UPortalWarsStreakIncreaseWidget_GetRepairVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairStreakText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsStreakIncreaseWidget::GetRepairStreakText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairStreakText");

	UPortalWarsStreakIncreaseWidget_GetRepairStreakText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsTakedownPlayerState.OnRep_RespawnTime
// (Final, Native, Protected)
void APortalWarsTakedownPlayerState::OnRep_RespawnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTakedownPlayerState.OnRep_RespawnTime");

	APortalWarsTakedownPlayerState_OnRep_RespawnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTakedownVIPPlayerState.OnRep_IsVIP
// (Final, Native, Protected)
void APortalWarsTakedownVIPPlayerState::OnRep_IsVIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTakedownVIPPlayerState.OnRep_IsVIP");

	APortalWarsTakedownVIPPlayerState_OnRep_IsVIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTeabagZone.OnRep_PlayerState
// (Final, Native, Protected)
void APortalWarsTeabagZone::OnRep_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTeabagZone.OnRep_PlayerState");

	APortalWarsTeabagZone_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTeabagZone.ChangeMeshColor
// (Final, Native, Protected)
void APortalWarsTeabagZone::ChangeMeshColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTeabagZone.ChangeMeshColor");

	APortalWarsTeabagZone_ChangeMeshColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTextInputWidget.OnTextChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   newText                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPortalWarsTextInputWidget::OnTextChanged(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTextInputWidget.OnTextChanged");

	UPortalWarsTextInputWidget_OnTextChanged_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTrainingWidget.OnTutorialButtonClicked
// (Final, Native, Protected, BlueprintCallable)
void UPortalWarsTrainingWidget::OnTutorialButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTrainingWidget.OnTutorialButtonClicked");

	UPortalWarsTrainingWidget_OnTutorialButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTrainingWidget.OnRangeButtonClicked
// (Final, Native, Protected, BlueprintCallable)
void UPortalWarsTrainingWidget::OnRangeButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTrainingWidget.OnRangeButtonClicked");

	UPortalWarsTrainingWidget_OnRangeButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTrainingWidget.OnRaceButtonClicked
// (Final, Native, Protected, BlueprintCallable)
void UPortalWarsTrainingWidget::OnRaceButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTrainingWidget.OnRaceButtonClicked");

	UPortalWarsTrainingWidget_OnRaceButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialGoal.OnOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void APortalWarsTutorialGoal::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialGoal.OnOverlap");

	APortalWarsTutorialGoal_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialVideoReminderWidget.ShowWidget
// (Final, Native, Public)
void UPortalWarsTutorialVideoReminderWidget::ShowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialVideoReminderWidget.ShowWidget");

	UPortalWarsTutorialVideoReminderWidget_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialVideoReminderWidget.HideWidget
// (Final, Native, Public)
void UPortalWarsTutorialVideoReminderWidget::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialVideoReminderWidget.HideWidget");

	UPortalWarsTutorialVideoReminderWidget_HideWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialVideoWidget.PlayVideoInternal
// (Final, Native, Protected)
// Parameters:
// int                            StageID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsTutorialVideoWidget::PlayVideoInternal(int StageID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialVideoWidget.PlayVideoInternal");

	UPortalWarsTutorialVideoWidget_PlayVideoInternal_Params params;
	params.StageID = StageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialVideoWidget.OnVideoCompleted
// (Final, Native, Protected)
void UPortalWarsTutorialVideoWidget::OnVideoCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialVideoWidget.OnVideoCompleted");

	UPortalWarsTutorialVideoWidget_OnVideoCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsTutorialVideoWidget.OnMediaOpenFailed
// (Final, Native, Protected)
// Parameters:
// struct FString                 FailedUrl                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPortalWarsTutorialVideoWidget::OnMediaOpenFailed(const struct FString& FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsTutorialVideoWidget.OnMediaOpenFailed");

	UPortalWarsTutorialVideoWidget_OnMediaOpenFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUltraDynamicSky.EditorInit
// (Event, Protected, BlueprintEvent)
void APortalWarsUltraDynamicSky::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUltraDynamicSky.EditorInit");

	APortalWarsUltraDynamicSky_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUnlockDialogWidget.PlayUnlockSound
// (Final, Native, Protected)
void UPortalWarsUnlockDialogWidget::PlayUnlockSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUnlockDialogWidget.PlayUnlockSound");

	UPortalWarsUnlockDialogWidget_PlayUnlockSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUnlockDialogWidget.OnViewButtonClicked
// (Final, Native, Protected)
void UPortalWarsUnlockDialogWidget::OnViewButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUnlockDialogWidget.OnViewButtonClicked");

	UPortalWarsUnlockDialogWidget_OnViewButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsUnlockDialogWidget.OnQueueButtonClicked
// (Final, Native, Protected)
void UPortalWarsUnlockDialogWidget::OnQueueButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsUnlockDialogWidget.OnQueueButtonClicked");

	UPortalWarsUnlockDialogWidget_OnQueueButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVIPHUDOverlayWidget.PlayFadeAnimation
// (Final, Native, Protected)
void UPortalWarsVIPHUDOverlayWidget::PlayFadeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVIPHUDOverlayWidget.PlayFadeAnimation");

	UPortalWarsVIPHUDOverlayWidget_PlayFadeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVIPPlayerState.OnRep_IsVIP
// (Final, Native, Protected)
void APortalWarsVIPPlayerState::OnRep_IsVIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVIPPlayerState.OnRep_IsVIP");

	APortalWarsVIPPlayerState_OnRep_IsVIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVoteEntryWidget.OnVotesUpdated
// (Final, Native, Protected)
void UPortalWarsVoteEntryWidget::OnVotesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteEntryWidget.OnVotesUpdated");

	UPortalWarsVoteEntryWidget_OnVotesUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVoteEntryWidget.InitModeData
// (Final, Native, Protected)
void UPortalWarsVoteEntryWidget::InitModeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteEntryWidget.InitModeData");

	UPortalWarsVoteEntryWidget_InitModeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVoteEntryWidget.InitMapData
// (Final, Native, Protected)
void UPortalWarsVoteEntryWidget::InitMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteEntryWidget.InitMapData");

	UPortalWarsVoteEntryWidget_InitMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVoteEntryWidget.GetVotesText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsVoteEntryWidget::GetVotesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteEntryWidget.GetVotesText");

	UPortalWarsVoteEntryWidget_GetVotesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsVoteEntryWidget.GetNumVotesText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsVoteEntryWidget::GetNumVotesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteEntryWidget.GetNumVotesText");

	UPortalWarsVoteEntryWidget_GetNumVotesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsVoteInfo.OnRep_Voters
// (Final, Native, Protected)
void APortalWarsVoteInfo::OnRep_Voters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVoteInfo.OnRep_Voters");

	APortalWarsVoteInfo_OnRep_Voters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVotingGameMode.CreateBotDelayed
// (Final, Native, Protected)
// Parameters:
// struct FPendingBotInfo         BotInfo                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void APortalWarsVotingGameMode::CreateBotDelayed(const struct FPendingBotInfo& BotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingGameMode.CreateBotDelayed");

	APortalWarsVotingGameMode_CreateBotDelayed_Params params;
	params.BotInfo = BotInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVotingGameState.OnRep_VoteList
// (Final, Native, Protected)
void APortalWarsVotingGameState::OnRep_VoteList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingGameState.OnRep_VoteList");

	APortalWarsVotingGameState_OnRep_VoteList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVotingMenuWidget.OnMatchStateChanged
// (Final, Native, Protected)
void UPortalWarsVotingMenuWidget::OnMatchStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingMenuWidget.OnMatchStateChanged");

	UPortalWarsVotingMenuWidget_OnMatchStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsVotingMenuWidget.GetStateDescriptionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsVotingMenuWidget::GetStateDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingMenuWidget.GetStateDescriptionText");

	UPortalWarsVotingMenuWidget_GetStateDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsVotingMenuWidget.GetRemainingTimeText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsVotingMenuWidget::GetRemainingTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingMenuWidget.GetRemainingTimeText");

	UPortalWarsVotingMenuWidget_GetRemainingTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsVotingPlayerController.ServerVote
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APortalWarsVoteInfo*     VoteInfo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APortalWarsVotingPlayerController::ServerVote(class APortalWarsVoteInfo* VoteInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsVotingPlayerController.ServerVote");

	APortalWarsVotingPlayerController_ServerVote_Params params;
	params.VoteInfo = VoteInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsWaitingAreaHUDWidget.OnClientSessionStateChanged
// (Final, Native, Protected)
void UPortalWarsWaitingAreaHUDWidget::OnClientSessionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsWaitingAreaHUDWidget.OnClientSessionStateChanged");

	UPortalWarsWaitingAreaHUDWidget_OnClientSessionStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsWaitingAreaHUDWidget.GetWaitingAreaPanelVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsWaitingAreaHUDWidget::GetWaitingAreaPanelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsWaitingAreaHUDWidget.GetWaitingAreaPanelVisibility");

	UPortalWarsWaitingAreaHUDWidget_GetWaitingAreaPanelVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateEntryWidget.GetXPText
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateEntryWidget::GetXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateEntryWidget.GetXPText");

	UPortalWarsXPUpdateEntryWidget_GetXPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateEntryWidget.GetTitle
// (Final, Native, Protected)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateEntryWidget::GetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateEntryWidget.GetTitle");

	UPortalWarsXPUpdateEntryWidget_GetTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationStarted
// (Final, Native, Public)
void UPortalWarsXPUpdateWidget::OnXPAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationStarted");

	UPortalWarsXPUpdateWidget_OnXPAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationEnded
// (Final, Native, Public)
void UPortalWarsXPUpdateWidget::OnXPAnimationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationEnded");

	UPortalWarsXPUpdateWidget_OnXPAnimationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PortalWarsXPUpdateWidget.GetTotalXP
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateWidget::GetTotalXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetTotalXP");

	UPortalWarsXPUpdateWidget_GetTotalXP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionTotalText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateWidget::GetProgressionTotalText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionTotalText");

	UPortalWarsXPUpdateWidget_GetProgressionTotalText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionProgressText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateWidget::GetProgressionProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionProgressText");

	UPortalWarsXPUpdateWidget_GetProgressionProgressText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionMaxLevelVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsXPUpdateWidget::GetProgressionMaxLevelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionMaxLevelVisibility");

	UPortalWarsXPUpdateWidget_GetProgressionMaxLevelVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionLevelUpProgress
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsXPUpdateWidget::GetProgressionLevelUpProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionLevelUpProgress");

	UPortalWarsXPUpdateWidget_GetProgressionLevelUpProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedProgressionLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsXPUpdateWidget::GetDisplayedProgressionLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedProgressionLevel");

	UPortalWarsXPUpdateWidget_GetDisplayedProgressionLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedBattlePassLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPortalWarsXPUpdateWidget::GetDisplayedBattlePassLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedBattlePassLevel");

	UPortalWarsXPUpdateWidget_GetDisplayedBattlePassLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassTotalText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateWidget::GetBattlePassTotalText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassTotalText");

	UPortalWarsXPUpdateWidget_GetBattlePassTotalText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassProgressText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPortalWarsXPUpdateWidget::GetBattlePassProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassProgressText");

	UPortalWarsXPUpdateWidget_GetBattlePassProgressText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassMaxLevelVisibility
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UPortalWarsXPUpdateWidget::GetBattlePassMaxLevelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassMaxLevelVisibility");

	UPortalWarsXPUpdateWidget_GetBattlePassMaxLevelVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassLevelUpProgress
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPortalWarsXPUpdateWidget::GetBattlePassLevelUpProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassLevelUpProgress");

	UPortalWarsXPUpdateWidget_GetBattlePassLevelUpProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PreviewItem.UpdateRenderTargetQuality
// (Final, Native, Protected)
void APreviewItem::UpdateRenderTargetQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PreviewItem.UpdateRenderTargetQuality");

	APreviewItem_UpdateRenderTargetQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PreviewItem.OnCustomizationsLoaded
// (Final, Native, Protected)
void APreviewItem::OnCustomizationsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PreviewItem.OnCustomizationsLoaded");

	APreviewItem_OnCustomizationsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWKillcamTransitionWidget.PlayFadeOutAnimation
// (Final, Native, Protected)
void UPWKillcamTransitionWidget::PlayFadeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWKillcamTransitionWidget.PlayFadeOutAnimation");

	UPWKillcamTransitionWidget_PlayFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWKillcamTransitionWidget.PlayFadeInAnimation
// (Final, Native, Protected)
void UPWKillcamTransitionWidget::PlayFadeInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWKillcamTransitionWidget.PlayFadeInAnimation");

	UPWKillcamTransitionWidget_PlayFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.ToggleReplayUI
// (Final, Native, Public)
void APWReplayPlayerController::ToggleReplayUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.ToggleReplayUI");

	APWReplayPlayerController_ToggleReplayUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.ToggleGlobalVision
// (Final, Native, Public)
void APWReplayPlayerController::ToggleGlobalVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.ToggleGlobalVision");

	APWReplayPlayerController_ToggleGlobalVision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.SetReplayPlayerFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            NewFocusedPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::SetReplayPlayerFocus(class APlayerState* NewFocusedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.SetReplayPlayerFocus");

	APWReplayPlayerController_SetReplayPlayerFocus_Params params;
	params.NewFocusedPlayer = NewFocusedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.SetPlayerFocusByNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::SetPlayerFocusByNumber(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.SetPlayerFocusByNumber");

	APWReplayPlayerController_SetPlayerFocusByNumber_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.RePause
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::RePause(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.RePause");

	APWReplayPlayerController_RePause_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.OnGoTimeComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::OnGoTimeComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.OnGoTimeComplete");

	APWReplayPlayerController_OnGoTimeComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.OnDemoRecordingComplete
// (Final, Native, Private)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::OnDemoRecordingComplete(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.OnDemoRecordingComplete");

	APWReplayPlayerController_OnDemoRecordingComplete_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.OnDemoFinishedPlayback
// (Final, Native, Private)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APWReplayPlayerController::OnDemoFinishedPlayback(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.OnDemoFinishedPlayback");

	APWReplayPlayerController_OnDemoFinishedPlayback_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.NextCameraMode
// (Final, Native, Public)
void APWReplayPlayerController::NextCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.NextCameraMode");

	APWReplayPlayerController_NextCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.GetReplayPlayerFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerState* APWReplayPlayerController::GetReplayPlayerFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.GetReplayPlayerFocus");

	APWReplayPlayerController_GetReplayPlayerFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PortalWars.PWReplayPlayerController.FocusPreviousPlayer
// (Final, Native, Public)
void APWReplayPlayerController::FocusPreviousPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPreviousPlayer");

	APWReplayPlayerController_FocusPreviousPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer8
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer8()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer8");

	APWReplayPlayerController_FocusPlayer8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer7
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer7()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer7");

	APWReplayPlayerController_FocusPlayer7_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer6
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer6()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer6");

	APWReplayPlayerController_FocusPlayer6_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer5
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer5");

	APWReplayPlayerController_FocusPlayer5_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer4
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer4()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer4");

	APWReplayPlayerController_FocusPlayer4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer3
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer3()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer3");

	APWReplayPlayerController_FocusPlayer3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer2
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer2");

	APWReplayPlayerController_FocusPlayer2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusPlayer1
// (Final, Native, Public)
void APWReplayPlayerController::FocusPlayer1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusPlayer1");

	APWReplayPlayerController_FocusPlayer1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWReplayPlayerController.FocusNextPlayer
// (Final, Native, Public)
void APWReplayPlayerController::FocusNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWReplayPlayerController.FocusNextPlayer");

	APWReplayPlayerController_FocusNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWTutorialHUDOverlayWidget.PlayStepPopupAnimation
// (Final, Native, Protected)
void UPWTutorialHUDOverlayWidget::PlayStepPopupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWTutorialHUDOverlayWidget.PlayStepPopupAnimation");

	UPWTutorialHUDOverlayWidget_PlayStepPopupAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWTutorialHUDOverlayWidget.OnStepLoaded
// (Final, Native, Protected)
// Parameters:
// struct FTutorialStepData       StepData                       (Parm, NativeAccessSpecifierPublic)
void UPWTutorialHUDOverlayWidget::OnStepLoaded(const struct FTutorialStepData& StepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWTutorialHUDOverlayWidget.OnStepLoaded");

	UPWTutorialHUDOverlayWidget_OnStepLoaded_Params params;
	params.StepData = StepData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWTutorialPlayerController.RestartStageViaInput
// (Final, Native, Public, BlueprintCallable)
void APWTutorialPlayerController::RestartStageViaInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWTutorialPlayerController.RestartStageViaInput");

	APWTutorialPlayerController_RestartStageViaInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWTutorialPlayerController.OnResetFloorEffect
// (Event, Protected, BlueprintEvent)
void APWTutorialPlayerController::OnResetFloorEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWTutorialPlayerController.OnResetFloorEffect");

	APWTutorialPlayerController_OnResetFloorEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWTutorialPlayerController.OnPlayFloorEffect
// (Event, Protected, BlueprintEvent)
void APWTutorialPlayerController::OnPlayFloorEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWTutorialPlayerController.OnPlayFloorEffect");

	APWTutorialPlayerController_OnPlayFloorEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWVoiceNotifications.OnPlayerArrayChanged
// (Final, Native, Protected)
// Parameters:
// class APlayerState*            StateChanged                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPWVoiceNotifications::OnPlayerArrayChanged(class APlayerState* StateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWVoiceNotifications.OnPlayerArrayChanged");

	UPWVoiceNotifications_OnPlayerArrayChanged_Params params;
	params.StateChanged = StateChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.PWVoiceNotifications.Init
// (Final, Native, Public)
void UPWVoiceNotifications::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.PWVoiceNotifications.Init");

	UPWVoiceNotifications_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Shotgun.ServerProcessHits
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FLineTraceHitResult> HitResults                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLineTraceInfo>  bulletTracesPacked             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AShotgun::ServerProcessHits(TArray<struct FLineTraceHitResult> HitResults, TArray<struct FLineTraceInfo> bulletTracesPacked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Shotgun.ServerProcessHits");

	AShotgun_ServerProcessHits_Params params;
	params.HitResults = HitResults;
	params.bulletTracesPacked = bulletTracesPacked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PortalWars.Shotgun.ReloadWeapon_Multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           ShouldInsert                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AShotgun::ReloadWeapon_Multicast(bool ShouldInsert)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortalWars.Shotgun.ReloadWeapon_Multicast");

	AShotgun_ReloadWeapon_Multicast_Params params;
	params.ShouldInsert = ShouldInsert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
