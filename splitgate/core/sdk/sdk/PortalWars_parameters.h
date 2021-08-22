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

// Function PortalWars.AmbianceVolume.OnOverlapEnd
struct AAmbianceVolume_OnOverlapEnd_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.AmbianceVolume.OnOverlapBegin
struct AAmbianceVolume_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.BaseGun.UpdateSkins
struct ABaseGun_UpdateSkins_Params
{
};

// Function PortalWars.BaseGun.getMesh1P
struct ABaseGun_getMesh1P_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.BaseGun.GetControllingTeam
struct ABaseGun_GetControllingTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.BaseGun.ClientRemoved
struct ABaseGun_ClientRemoved_Params
{
};

// Function PortalWars.Gun.ServerGoToState
struct AGun_ServerGoToState_Params
{
	PortalWars_EWeaponState                            NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.PlayWeaponSound
struct AGun_PlayWeaponSound_Params
{
	class UAkAudioEvent*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.OnRep_CurrentState
struct AGun_OnRep_CurrentState_Params
{
	PortalWars_EWeaponState                            PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.OnRep_AmmoInClip
struct AGun_OnRep_AmmoInClip_Params
{
};

// Function PortalWars.Gun.OnRep_Ammo
struct AGun_OnRep_Ammo_Params
{
};

// Function PortalWars.Gun.OnGunImageLoaded
struct AGun_OnGunImageLoaded_Params
{
};

// Function PortalWars.Gun.LoopWeaponSound
struct AGun_LoopWeaponSound_Params
{
	bool                                               IsFiring;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.GetCanZoom
struct AGun_GetCanZoom_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.GetAkComponent
struct AGun_GetAkComponent_Params
{
	class UPortalWarsAkComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Gun.ClientStartReload
struct AGun_ClientStartReload_Params
{
};

// Function PortalWars.LineTraceGun.ServerNotifyMiss
struct ALineTraceGun_ServerNotifyMiss_Params
{
	TArray<struct FLineTraceInfo>                      bulletTraces;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.LineTraceGun.ServerNotifyHit
struct ALineTraceGun_ServerNotifyHit_Params
{
	struct FLineTraceHitResult                         lineHit;                                                   // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReticleSpread;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLineTraceInfo>                      bulletTraces;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.LineTraceGun.PlayBulletWhiz
struct ALineTraceGun_PlayBulletWhiz_Params
{
	struct FVector                                     StartPoint;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndPoint;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.LineTraceGun.OnRep_BulletNotify
struct ALineTraceGun_OnRep_BulletNotify_Params
{
};

// Function PortalWars.LineTraceGun.GetCurrentSpread
struct ALineTraceGun_GetCurrentSpread_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.SetPortalEnemy
struct APortalWarsAIController_SetPortalEnemy_Params
{
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InFocusLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.SetNearPortalWall
struct APortalWarsAIController_SetNearPortalWall_Params
{
	class APortalWall*                                 Wall;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.SetLeftPortal
struct APortalWarsAIController_SetLeftPortal_Params
{
	class APortal*                                     InPortal;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.SetEnemy
struct APortalWarsAIController_SetEnemy_Params
{
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.ResetHeardSounds
struct APortalWarsAIController_ResetHeardSounds_Params
{
};

// Function PortalWars.PortalWarsAIController.ReloadGun
struct APortalWarsAIController_ReloadGun_Params
{
};

// Function PortalWars.PortalWarsAIController.ReceivedKills
struct APortalWarsAIController_ReceivedKills_Params
{
};

// Function PortalWars.PortalWarsAIController.PortalLineOfSightTo
struct APortalWarsAIController_PortalLineOfSightTo_Params
{
	class APortalWarsCharacter*                        Enemy;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutFocusLoc;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortal*                                     Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.GetTargetLoc
struct APortalWarsAIController_GetTargetLoc_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.GetNavRecoveryDestination
struct APortalWarsAIController_GetNavRecoveryDestination_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.GetLeftPortal
struct APortalWarsAIController_GetLeftPortal_Params
{
	class APortal*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.GetGoalLocation
struct APortalWarsAIController_GetGoalLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.GetEnemy
struct APortalWarsAIController_GetEnemy_Params
{
	class APortalWarsCharacter*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.FindPortalEnemyThruPortal
struct APortalWarsAIController_FindPortalEnemyThruPortal_Params
{
	struct FVector                                     OutPortalEnemyLoc;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortal*                                     Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsCharacter*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.FindPortalEnemy
struct APortalWarsAIController_FindPortalEnemy_Params
{
	struct FVector                                     OutLocationThroughPortal;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortal*                                     OutPortalChecked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsCharacter*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAIController.FindClosestVisibleEnemy
struct APortalWarsAIController_FindClosestVisibleEnemy_Params
{
	bool                                               bWithLOS;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsCharacter*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.DominationHill.OnRep_IsActive
struct ADominationHill_OnRep_IsActive_Params
{
};

// Function PortalWars.DominationHill.OnRep_HillState
struct ADominationHill_OnRep_HillState_Params
{
	PortalWars_EDOMHillState                           PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.DominationHill.getTimeToCaptureHill
struct ADominationHill_getTimeToCaptureHill_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.DominationHill.getTimeCapturingHill
struct ADominationHill_getTimeCapturingHill_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.DominationHill.GetControllingTeam
struct ADominationHill_GetControllingTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Projectile.OnRep_ProjectileID
struct AProjectile_OnRep_ProjectileID_Params
{
};

// Function PortalWars.Projectile.OnRep_Exploded
struct AProjectile_OnRep_Exploded_Params
{
};

// Function PortalWars.Projectile.OnImpact
struct AProjectile_OnImpact_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.Projectile.DisableAndDestroy
struct AProjectile_DisableAndDestroy_Params
{
};

// Function PortalWars.FlagItem.OnRep_Team
struct AFlagItem_OnRep_Team_Params
{
};

// Function PortalWars.PortalWarsGunPickup.OnGunImageLoaded
struct APortalWarsGunPickup_OnGunImageLoaded_Params
{
};

// Function PortalWars.PortalWarsGunPickup.OnComponentHit
struct APortalWarsGunPickup_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.FlagItemPickup.OnRep_Team
struct AFlagItemPickup_OnRep_Team_Params
{
};

// Function PortalWars.ProjectileGun.ServerSpawnProjectile
struct AProjectileGun_ServerSpawnProjectile_Params
{
	struct FVector_NetQuantize                         Origin;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Dir;                                                       // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ProjectileID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.ProjectileGun.ServerHandleExplosionLocal
struct AProjectileGun_ServerHandleExplosionLocal_Params
{
	struct FHitResult                                  Impact;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      ProjectileID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetValue
struct UIntegerSpinBox_SetValue_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetMinValue
struct UIntegerSpinBox_SetMinValue_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetMinSliderValue
struct UIntegerSpinBox_SetMinSliderValue_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetMaxValue
struct UIntegerSpinBox_SetMaxValue_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetMaxSliderValue
struct UIntegerSpinBox_SetMaxSliderValue_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.SetForegroundColor
struct UIntegerSpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                         // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct UIntegerSpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	int                                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct UIntegerSpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	int                                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PortalWars.IntegerSpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct UIntegerSpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function PortalWars.IntegerSpinBox.GetValue
struct UIntegerSpinBox_GetValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.GetMinValue
struct UIntegerSpinBox_GetMinValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.GetMinSliderValue
struct UIntegerSpinBox_GetMinSliderValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.GetMaxValue
struct UIntegerSpinBox_GetMaxValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.GetMaxSliderValue
struct UIntegerSpinBox_GetMaxSliderValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.IntegerSpinBox.ClearMinValue
struct UIntegerSpinBox_ClearMinValue_Params
{
};

// Function PortalWars.IntegerSpinBox.ClearMinSliderValue
struct UIntegerSpinBox_ClearMinSliderValue_Params
{
};

// Function PortalWars.IntegerSpinBox.ClearMaxValue
struct UIntegerSpinBox_ClearMaxValue_Params
{
};

// Function PortalWars.IntegerSpinBox.ClearMaxSliderValue
struct UIntegerSpinBox_ClearMaxSliderValue_Params
{
};

// Function PortalWars.MainMenuGameMode.OnPartyUpdate
struct AMainMenuGameMode_OnPartyUpdate_Params
{
};

// Function PortalWars.PortalWarsBasePlayerController.ServerKickForInactivity
struct APortalWarsBasePlayerController_ServerKickForInactivity_Params
{
};

// Function PortalWars.PortalWarsBasePlayerController.KickForInactivity
struct APortalWarsBasePlayerController_KickForInactivity_Params
{
};

// Function PortalWars.MainMenuPlayerController.InitMainMenu
struct AMainMenuPlayerController_InitMainMenu_Params
{
};

// Function PortalWars.MainMenuPlayerController.InitEquippedSkins
struct AMainMenuPlayerController_InitEquippedSkins_Params
{
};

// Function PortalWars.MainMenuPlayerController.ClientReturnedToMenus
struct AMainMenuPlayerController_ClientReturnedToMenus_Params
{
};

// Function PortalWars.MultiKillGun.ServerNotifyHits
struct AMultiKillGun_ServerNotifyHits_Params
{
	TArray<struct FLineTraceHitResult>                 lineHits;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReticleSpread;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLineTraceInfo>                      bulletTraces;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PlasmaRifle.OnRep_CurrentHeatLevel
struct APlasmaRifle_OnRep_CurrentHeatLevel_Params
{
};

// Function PortalWars.Portal.UpdateSkins
struct APortal_UpdateSkins_Params
{
};

// Function PortalWars.Portal.portalShrink_StartAnim
struct APortal_portalShrink_StartAnim_Params
{
};

// Function PortalWars.Portal.portalGrow_StartAnim
struct APortal_portalGrow_StartAnim_Params
{
};

// Function PortalWars.Portal.OnRep_MyPawn
struct APortal_OnRep_MyPawn_Params
{
};

// Function PortalWars.Portal.initializePortalColor
struct APortal_initializePortalColor_Params
{
};

// Function PortalWars.Portal.initializePortal
struct APortal_initializePortal_Params
{
};

// Function PortalWars.Portal.EndOverlapSmallBox
struct APortal_EndOverlapSmallBox_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Portal.EndOverlapLargeBox
struct APortal_EndOverlapLargeBox_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.Portal.BeginOverlapSmallBox
struct APortal_BeginOverlapSmallBox_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.Portal.BeginOverlapLargeBox
struct APortal_BeginOverlapLargeBox_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalLauncher.spawnPortalFX_Multicast
struct APortalLauncher_spawnPortalFX_Multicast_Params
{
	struct FVector_NetQuantize                         EndPoint;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLeftPortal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalLauncher.ServerClosePortal
struct APortalLauncher_ServerClosePortal_Params
{
	bool                                               bIsLeftPortal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalLauncher.ServerAttemptToSpawnPortal
struct APortalLauncher_ServerAttemptToSpawnPortal_Params
{
	bool                                               bIsLeftPortal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         StartTrace;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShootDir;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalLauncher.DelaySpawnPortalFX
struct APortalLauncher_DelaySpawnPortalFX_Params
{
	struct FVector_NetQuantize                         EndPoint;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLeftPortal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWall.disablePortalWall
struct APortalWall_disablePortalWall_Params
{
};

// Function PortalWars.PortalWarsUserWidget.UpdateControllerVisibility
struct UPortalWarsUserWidget_UpdateControllerVisibility_Params
{
};

// Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged_BP
struct UPortalWarsUserWidget_OnControllerStatusChanged_BP_Params
{
	bool                                               bIsUsingController;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.OnControllerStatusChanged
struct UPortalWarsUserWidget_OnControllerStatusChanged_Params
{
};

// Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusReceived
struct UPortalWarsUserWidget_OnChildWidgetFocusReceived_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.OnChildWidgetFocusLost
struct UPortalWarsUserWidget_OnChildWidgetFocusLost_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusReceived
struct UPortalWarsUserWidget_OnChildButtonFocusReceived_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.OnChildButtonFocusLost
struct UPortalWarsUserWidget_OnChildButtonFocusLost_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.IsLocalPlayerUsingController
struct UPortalWarsUserWidget_IsLocalPlayerUsingController_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.GetWidgetToFocus
struct UPortalWarsUserWidget_GetWidgetToFocus_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUserWidget.GetControllerVisibility
struct UPortalWarsUserWidget_GetControllerVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuWidget.OnMenuOpenedBP
struct UPortalWarsMenuWidget_OnMenuOpenedBP_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.OnMenuOpened
struct UPortalWarsMenuWidget_OnMenuOpened_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.OnMenuClosedBP
struct UPortalWarsMenuWidget_OnMenuClosedBP_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.OnMenuClosed
struct UPortalWarsMenuWidget_OnMenuClosed_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.OnChildMenuWidgetCreated
struct UPortalWarsMenuWidget_OnChildMenuWidgetCreated_Params
{
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuWidget.OnChildMenuBackButtonClicked
struct UPortalWarsMenuWidget_OnChildMenuBackButtonClicked_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.OnBackButtonClickedInternal
struct UPortalWarsMenuWidget_OnBackButtonClickedInternal_Params
{
};

// Function PortalWars.PortalWarsMenuWidget.GoToState
struct UPortalWarsMenuWidget_GoToState_Params
{
	unsigned char                                      NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuWidget.ForceAnimationToEnd
struct UPortalWarsMenuWidget_ForceAnimationToEnd_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAddFriendsWidget.UpdateFriendCodeText
struct UPortalWarsAddFriendsWidget_UpdateFriendCodeText_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.RefreshWidget
struct UPortalWarsAddFriendsWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.RefreshSendRequestButton
struct UPortalWarsAddFriendsWidget_RefreshSendRequestButton_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.RefreshFriendRequests
struct UPortalWarsAddFriendsWidget_RefreshFriendRequests_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnSendRequestButtonClicked
struct UPortalWarsAddFriendsWidget_OnSendRequestButtonClicked_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryDeclined
struct UPortalWarsAddFriendsWidget_OnRequestEntryDeclined_Params
{
	class UPortalWarsEntryWidget*                      Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnRequestEntryAccepted
struct UPortalWarsAddFriendsWidget_OnRequestEntryAccepted_Params
{
	class UPortalWarsEntryWidget*                      Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnPrivelegesUpdated
struct UPortalWarsAddFriendsWidget_OnPrivelegesUpdated_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnFriendCodeTextInputFocusChanged
struct UPortalWarsAddFriendsWidget_OnFriendCodeTextInputFocusChanged_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAddFriendsWidget.OnCopyButtonClicked
struct UPortalWarsAddFriendsWidget_OnCopyButtonClicked_Params
{
};

// Function PortalWars.PortalWarsAddFriendsWidget.GetSendRequestButtonEnabled
struct UPortalWarsAddFriendsWidget_GetSendRequestButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAnimInstance.PlayWwiseEvent
struct UPortalWarsAnimInstance_PlayWwiseEvent_Params
{
	class UAkAudioEvent*                               WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      AkComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAnimInstance.FootstepEvent
struct UPortalWarsAnimInstance_FootstepEvent_Params
{
	bool                                               isLanding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAnimInstanceV2.PlayWwiseEvent
struct UPortalWarsAnimInstanceV2_PlayWwiseEvent_Params
{
	class UAkAudioEvent*                               WwiseEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      AkComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAnimInstanceV2.FootstepEvent
struct UPortalWarsAnimInstanceV2_FootstepEvent_Params
{
	bool                                               bIsLanding;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Unland
struct UPortalWarsAnimInstanceV2_AnimNotify_Unland_Params
{
};

// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_Land
struct UPortalWarsAnimInstanceV2_AnimNotify_Land_Params
{
};

// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CanTurn
struct UPortalWarsAnimInstanceV2_AnimNotify_CanTurn_Params
{
};

// Function PortalWars.PortalWarsAnimInstanceV2.AnimNotify_CantTurn
struct UPortalWarsAnimInstanceV2_AnimNotify_CantTurn_Params
{
};

// Function PortalWars.PortalWarsSettingsSubWidget.ResetToDefaults
struct UPortalWarsSettingsSubWidget_ResetToDefaults_Params
{
};

// Function PortalWars.PortalWarsSettingsSubWidget.OnValueChanged
struct UPortalWarsSettingsSubWidget_OnValueChanged_Params
{
};

// Function PortalWars.PortalWarsSettingsSubWidget.OnDiscardAccepted
struct UPortalWarsSettingsSubWidget_OnDiscardAccepted_Params
{
};

// Function PortalWars.PortalWarsSettingsSubWidget.ApplySettings
struct UPortalWarsSettingsSubWidget_ApplySettings_Params
{
};

// Function PortalWars.PortalWarsDialogWidget.SetCloseButtonsEnabled
struct UPortalWarsDialogWidget_SetCloseButtonsEnabled_Params
{
	bool                                               InIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDialogWidget.OnMinLifetimeReached
struct UPortalWarsDialogWidget_OnMinLifetimeReached_Params
{
};

// Function PortalWars.PortalWarsDialogWidget.CloseDialog
struct UPortalWarsDialogWidget_CloseDialog_Params
{
};

// Function PortalWars.PortalWarsBaseGameState.OnRepRemainingTime
struct APortalWarsBaseGameState_OnRepRemainingTime_Params
{
};

// Function PortalWars.PortalWarsBaseGameState.OnRep_GameConfig
struct APortalWarsBaseGameState_OnRep_GameConfig_Params
{
};

// Function PortalWars.PortalWarsBaseGameState.GetSortedPlayers
struct APortalWarsBaseGameState_GetSortedPlayers_Params
{
	int                                                TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortByScore;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APortalWarsPlayerState*>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBaseGameState.GetRemainingTime
struct APortalWarsBaseGameState_GetRemainingTime_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBaseGameState.GetNumberOfPlayersOnTeam
struct APortalWarsBaseGameState_GetNumberOfPlayersOnTeam_Params
{
	int                                                TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsButtonWidget.SetNewItems_BP
struct UPortalWarsButtonWidget_SetNewItems_BP_Params
{
	int                                                InNewItems;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsButtonWidget.RefreshEnabledState
struct UPortalWarsButtonWidget_RefreshEnabledState_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.OnGamepadButtonPressed
struct UPortalWarsButtonWidget_OnGamepadButtonPressed_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.OnButtonUnhovered
struct UPortalWarsButtonWidget_OnButtonUnhovered_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.OnButtonHovered
struct UPortalWarsButtonWidget_OnButtonHovered_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.OnButtonDoubleClicked
struct UPortalWarsButtonWidget_OnButtonDoubleClicked_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.OnButtonClicked
struct UPortalWarsButtonWidget_OnButtonClicked_Params
{
};

// Function PortalWars.PortalWarsButtonWidget.IsEnabled
struct UPortalWarsButtonWidget_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsButtonWidget.GetNewVisibility
struct UPortalWarsButtonWidget_GetNewVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsButtonWidget.GetNewText
struct UPortalWarsButtonWidget_GetNewText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsButtonWidget.GetGamepadKeyIcon
struct UPortalWarsButtonWidget_GetGamepadKeyIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsEntryWidget.RefreshEntry_BP
struct UPortalWarsEntryWidget_RefreshEntry_BP_Params
{
};

// Function PortalWars.PortalWarsEntryWidget.RefreshEntry
struct UPortalWarsEntryWidget_RefreshEntry_Params
{
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardVisibility
struct UPortalWarsRewardEntryWidget_GetRewardVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardValueText
struct UPortalWarsRewardEntryWidget_GetRewardValueText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardTitleText
struct UPortalWarsRewardEntryWidget_GetRewardTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityText
struct UPortalWarsRewardEntryWidget_GetRewardRarityText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityIcon
struct UPortalWarsRewardEntryWidget_GetRewardRarityIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardRarityColor
struct UPortalWarsRewardEntryWidget_GetRewardRarityColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardFullTitleText
struct UPortalWarsRewardEntryWidget_GetRewardFullTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRewardDescriptionText
struct UPortalWarsRewardEntryWidget_GetRewardDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityTitleColor
struct UPortalWarsRewardEntryWidget_GetRarityTitleColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityScrim
struct UPortalWarsRewardEntryWidget_GetRarityScrim_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBorderColor
struct UPortalWarsRewardEntryWidget_GetRarityBorderColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardEntryWidget.GetRarityBG
struct UPortalWarsRewardEntryWidget_GetRarityBG_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassEntryWidget.GetLockedVisibility
struct UPortalWarsRewardPassEntryWidget_GetLockedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassEntryWidget.GetLevelText
struct UPortalWarsRewardPassEntryWidget_GetLevelText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.RefreshWidget
struct UPortalWarsCareerProgressWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsCareerProgressWidget.InitProfileData
struct UPortalWarsCareerProgressWidget_InitProfileData_Params
{
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionProgressPercent
struct UPortalWarsCareerProgressWidget_GetProgressionProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionMaxLevelVisibility
struct UPortalWarsCareerProgressWidget_GetProgressionMaxLevelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelTotalText
struct UPortalWarsCareerProgressWidget_GetProgressionLevelTotalText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevelProgressText
struct UPortalWarsCareerProgressWidget_GetProgressionLevelProgressText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetProgressionLevel
struct UPortalWarsCareerProgressWidget_GetProgressionLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassProgressPercent
struct UPortalWarsCareerProgressWidget_GetBattlePassProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassMaxLevelVisibility
struct UPortalWarsCareerProgressWidget_GetBattlePassMaxLevelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelTotalText
struct UPortalWarsCareerProgressWidget_GetBattlePassLevelTotalText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevelProgressText
struct UPortalWarsCareerProgressWidget_GetBattlePassLevelProgressText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerProgressWidget.GetBattlePassLevel
struct UPortalWarsCareerProgressWidget_GetBattlePassLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBattlePassPanelWidget.OnViewBattlePassClicked
struct UPortalWarsBattlePassPanelWidget_OnViewBattlePassClicked_Params
{
};

// Function PortalWars.PortalWarsBattlePassPanelWidget.GetUnlockedText
struct UPortalWarsBattlePassPanelWidget_GetUnlockedText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBattlePassPanelWidget.GetRewardTitleText
struct UPortalWarsBattlePassPanelWidget_GetRewardTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInspectWidget.UpdatePreview
struct UPortalWarsInspectWidget_UpdatePreview_Params
{
	bool                                               bClearPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInspectWidget.UpdateEquipState
struct UPortalWarsInspectWidget_UpdateEquipState_Params
{
};

// Function PortalWars.PortalWarsInspectWidget.PreviewItem
struct UPortalWarsInspectWidget_PreviewItem_Params
{
};

// Function PortalWars.PortalWarsInspectWidget.OnEquipButtonClicked
struct UPortalWarsInspectWidget_OnEquipButtonClicked_Params
{
};

// Function PortalWars.PortalWarsInspectWidget.OnCustomizationsUpdate
struct UPortalWarsInspectWidget_OnCustomizationsUpdate_Params
{
};

// Function PortalWars.PortalWarsInspectWidget.GetRarityText
struct UPortalWarsInspectWidget_GetRarityText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInspectWidget.GetRarityIcon
struct UPortalWarsInspectWidget_GetRarityIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInspectWidget.GetRarityColor
struct UPortalWarsInspectWidget_GetRarityColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInspectWidget.GetDisplayName
struct UPortalWarsInspectWidget_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntrySelected
struct UPortalWarsRewardPassWidget_OnRewardEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassWidget.OnRewardEntryScrolledTo
struct UPortalWarsRewardPassWidget_OnRewardEntryScrolledTo_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassWidget.OnProgressionUpdate
struct UPortalWarsRewardPassWidget_OnProgressionUpdate_Params
{
};

// Function PortalWars.PortalWarsRewardPassWidget.GetSelectedRewardData
struct UPortalWarsRewardPassWidget_GetSelectedRewardData_Params
{
	struct FRewardData                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassWidget.GetRewardEntryWidget
struct UPortalWarsRewardPassWidget_GetRewardEntryWidget_Params
{
	struct FString                                     WidgetId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardPassWidget.GetCurrentLevelText
struct UPortalWarsRewardPassWidget_GetCurrentLevelText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonVisibility
struct UPortalWarsBattlePassWidget_GetPurchaseButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBattlePassWidget.GetPurchaseButtonEnabled
struct UPortalWarsBattlePassWidget_GetPurchaseButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBlockedPlayersWidget.RefreshPlayersList
struct UPortalWarsBlockedPlayersWidget_RefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsBlockedPlayersWidget.OnPlayerEntrySelected
struct UPortalWarsBlockedPlayersWidget_OnPlayerEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBlockedPlayersWidget.GetRefreshButtonEnabled
struct UPortalWarsBlockedPlayersWidget_GetRefreshButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBlockedPlayersWidget.DelayedRefreshPlayersList
struct UPortalWarsBlockedPlayersWidget_DelayedRefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsCharacter.UpdateSkins
struct APortalWarsCharacter_UpdateSkins_Params
{
};

// Function PortalWars.PortalWarsCharacter.updateCollisionProfiles
struct APortalWarsCharacter_updateCollisionProfiles_Params
{
};

// Function PortalWars.PortalWarsCharacter.StopEmoteInMenu
struct APortalWarsCharacter_StopEmoteInMenu_Params
{
};

// Function PortalWars.PortalWarsCharacter.StopEmote
struct APortalWarsCharacter_StopEmote_Params
{
};

// Function PortalWars.PortalWarsCharacter.SpawnSpray_Multicast
struct APortalWarsCharacter_SpawnSpray_Multicast_Params
{
	struct FVector_NetQuantize                         Location;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerTeleport
struct APortalWarsCharacter_ServerTeleport_Params
{
	struct FTransform_NetQuantize                      CharacterTransform_world;                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         NewVel;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       NewControlRotation;                                        // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APortal*                                     PortalUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerStartMelee
struct APortalWarsCharacter_ServerStartMelee_Params
{
	class APortalWarsCharacter*                        InEnemyToMelee;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         InVelocity;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerSpawnSpray
struct APortalWarsCharacter_ServerSpawnSpray_Params
{
	struct FVector_NetQuantize                         Location;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerSetZooming
struct APortalWarsCharacter_ServerSetZooming_Params
{
	bool                                               bNewZooming;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerSetOverlappingPortalCollisionProfiles
struct APortalWarsCharacter_ServerSetOverlappingPortalCollisionProfiles_Params
{
};

// Function PortalWars.PortalWarsCharacter.ServerSetDefaultCollisionProfiles
struct APortalWarsCharacter_ServerSetDefaultCollisionProfiles_Params
{
};

// Function PortalWars.PortalWarsCharacter.ServerRequestSuicide
struct APortalWarsCharacter_ServerRequestSuicide_Params
{
};

// Function PortalWars.PortalWarsCharacter.ServerPlayEmote
struct APortalWarsCharacter_ServerPlayEmote_Params
{
};

// Function PortalWars.PortalWarsCharacter.ServerInterruptEmote
struct APortalWarsCharacter_ServerInterruptEmote_Params
{
};

// Function PortalWars.PortalWarsCharacter.ServerHandleTeabagging
struct APortalWarsCharacter_ServerHandleTeabagging_Params
{
	TArray<class APortalWarsCharacter*>                deadBodies;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerFinishMelee
struct APortalWarsCharacter_ServerFinishMelee_Params
{
	struct FVector_NetQuantize100                      EndingLocation;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerEquipWeapon
struct APortalWarsCharacter_ServerEquipWeapon_Params
{
	class AGun*                                        NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerAttemptManualPickup
struct APortalWarsCharacter_ServerAttemptManualPickup_Params
{
	class APortalWarsGunPickup*                        GunPickup;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         CurrentWeaponLocation;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   CurrentWeaponRotation;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ServerApplyMeleeDamage
struct APortalWarsCharacter_ServerApplyMeleeDamage_Params
{
	class APortalWarsCharacter*                        EnemyToDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.RequestSuicide
struct APortalWarsCharacter_RequestSuicide_Params
{
};

// Function PortalWars.PortalWarsCharacter.PlayMeleeCameraShake
struct APortalWarsCharacter_PlayMeleeCameraShake_Params
{
};

// Function PortalWars.PortalWarsCharacter.PlayEmoteInMenu_Internal
struct APortalWarsCharacter_PlayEmoteInMenu_Internal_Params
{
};

// Function PortalWars.PortalWarsCharacter.PlayEmote_Multicast
struct APortalWarsCharacter_PlayEmote_Multicast_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnSpray
struct APortalWarsCharacter_OnSpray_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnReplayCameraModeChanged
struct APortalWarsCharacter_OnReplayCameraModeChanged_Params
{
	PortalWars_EReplayCameraMode                       NewReplayCameraMode;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.OnRep_PortalGun
struct APortalWarsCharacter_OnRep_PortalGun_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_LastCausedHitInfo
struct APortalWarsCharacter_OnRep_LastCausedHitInfo_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_IsZooming
struct APortalWarsCharacter_OnRep_IsZooming_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_IsThrusting
struct APortalWarsCharacter_OnRep_IsThrusting_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_IsSprinting
struct APortalWarsCharacter_OnRep_IsSprinting_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_Inventory
struct APortalWarsCharacter_OnRep_Inventory_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_IgnoreServerCorrections
struct APortalWarsCharacter_OnRep_IgnoreServerCorrections_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_Health
struct APortalWarsCharacter_OnRep_Health_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_GrenadeLauncher
struct APortalWarsCharacter_OnRep_GrenadeLauncher_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_CurTimeOutOfBounds
struct APortalWarsCharacter_OnRep_CurTimeOutOfBounds_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnRep_CurrentWeapon
struct APortalWarsCharacter_OnRep_CurrentWeapon_Params
{
	class AGun*                                        LastWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.OnKillcamStarted
struct APortalWarsCharacter_OnKillcamStarted_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnKillcamEnded
struct APortalWarsCharacter_OnKillcamEnded_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnGlobalVisionChanged
struct APortalWarsCharacter_OnGlobalVisionChanged_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnGameConfigUpdated
struct APortalWarsCharacter_OnGameConfigUpdated_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnDeath
struct APortalWarsCharacter_OnDeath_Params
{
};

// Function PortalWars.PortalWarsCharacter.OnComponentHit
struct APortalWarsCharacter_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.MoveAndPostToMoveableAk
struct APortalWarsCharacter_MoveAndPostToMoveableAk_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsZooming
struct APortalWarsCharacter_IsZooming_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsThirdPerson
struct APortalWarsCharacter_IsThirdPerson_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsSprinting
struct APortalWarsCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsRecentlyRendered
struct APortalWarsCharacter_IsRecentlyRendered_Params
{
	float                                              Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsLocallyViewed
struct APortalWarsCharacter_IsLocallyViewed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsFirstPerson
struct APortalWarsCharacter_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsFiring
struct APortalWarsCharacter_IsFiring_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsEnemyFor
struct APortalWarsCharacter_IsEnemyFor_Params
{
	class APortalWarsCharacter*                        Character;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsDead
struct APortalWarsCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.IsAlive
struct APortalWarsCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.InterruptEmote_Multicast
struct APortalWarsCharacter_InterruptEmote_Multicast_Params
{
};

// Function PortalWars.PortalWarsCharacter.GetWeapon
struct APortalWarsCharacter_GetWeapon_Params
{
	class AGun*                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.GetTeamNum
struct APortalWarsCharacter_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.GetSprintingSpeedModifier
struct APortalWarsCharacter_GetSprintingSpeedModifier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.GetSecondaryWeapon
struct APortalWarsCharacter_GetSecondaryWeapon_Params
{
	class AGun*                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.getMesh1P
struct APortalWarsCharacter_getMesh1P_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.GetAkComponent
struct APortalWarsCharacter_GetAkComponent_Params
{
	struct FName                                       AkName;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.GetAimOffsets
struct APortalWarsCharacter_GetAimOffsets_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.DestroyPortals
struct APortalWarsCharacter_DestroyPortals_Params
{
};

// Function PortalWars.PortalWarsCharacter.DelayedServerFinishMelee
struct APortalWarsCharacter_DelayedServerFinishMelee_Params
{
};

// Function PortalWars.PortalWarsCharacter.ClientNotifyAlive
struct APortalWarsCharacter_ClientNotifyAlive_Params
{
	class AController*                                 C;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ClientFailedPickupAttempt
struct APortalWarsCharacter_ClientFailedPickupAttempt_Params
{
};

// Function PortalWars.PortalWarsCharacter.ClientEquipWeapon
struct APortalWarsCharacter_ClientEquipWeapon_Params
{
	class AGun*                                        NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.ClientDropSpecialItem
struct APortalWarsCharacter_ClientDropSpecialItem_Params
{
	class ASpecialItem*                                SpecialItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.applyShotgunPointImpulsesToCorpseMulticast
struct APortalWarsCharacter_applyShotgunPointImpulsesToCorpseMulticast_Params
{
	TArray<struct FPWPointDamageEvent>                 DamageEvents;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.applyRadialImpulseToCorpseMulticast
struct APortalWarsCharacter_applyRadialImpulseToCorpseMulticast_Params
{
	struct FPWRadialDamageEvent                        RadialDamageEvent;                                         // (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCharacter.applyPointImpulseToCorpseMulticast
struct APortalWarsCharacter_applyPointImpulseToCorpseMulticast_Params
{
	struct FPWPointDamageEvent                         PointDamageEvent;                                          // (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBot.StopWeaponFire
struct APortalWarsBot_StopWeaponFire_Params
{
};

// Function PortalWars.PortalWarsBot.StartWeaponFire
struct APortalWarsBot_StartWeaponFire_Params
{
};

// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionTimedOut
struct UPortalWarsTxnDialogWidget_OnTransactionTimedOut_Params
{
};

// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionFailed
struct UPortalWarsTxnDialogWidget_OnTransactionFailed_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompletedParams
struct UPortalWarsTxnDialogWidget_OnTransactionCompletedParams_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTxnDialogWidget.OnTransactionCompleted
struct UPortalWarsTxnDialogWidget_OnTransactionCompleted_Params
{
};

// Function PortalWars.PortalWarsTxnDialogWidget.OnConfirmButtonSelected
struct UPortalWarsTxnDialogWidget_OnConfirmButtonSelected_Params
{
};

// Function PortalWars.PortalWarsTxnDialogWidget.GetSuccessText
struct UPortalWarsTxnDialogWidget_GetSuccessText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTxnDialogWidget.GetProcessingText
struct UPortalWarsTxnDialogWidget_GetProcessingText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTxnDialogWidget.GetConfirmButtonEnabled
struct UPortalWarsTxnDialogWidget_GetConfirmButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyPremiumButtonClicked
struct UPortalWarsBPPurchaseDialogWidget_OnBuyPremiumButtonClicked_Params
{
};

// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyLevelsButtonClicked
struct UPortalWarsBPPurchaseDialogWidget_OnBuyLevelsButtonClicked_Params
{
};

// Function PortalWars.PortalWarsBPPurchaseDialogWidget.OnBuyBundleButtonClicked
struct UPortalWarsBPPurchaseDialogWidget_OnBuyBundleButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPurchaseButtonWidget.GetCurrencyCostText
struct UPortalWarsPurchaseButtonWidget_GetCurrencyCostText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsBPRedeemableButton.InitUserInfo
struct UPortalWarsBPRedeemableButton_InitUserInfo_Params
{
};

// Function PortalWars.PortalWarsCancelButtonWidget.OnRankIconLoaded
struct UPortalWarsCancelButtonWidget_OnRankIconLoaded_Params
{
};

// Function PortalWars.PortalWarsCancelButtonWidget.OnClientSessionStateChanged
struct UPortalWarsCancelButtonWidget_OnClientSessionStateChanged_Params
{
};

// Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryTitleText
struct UPortalWarsCancelButtonWidget_GetSessionQueryTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCancelButtonWidget.GetSessionQueryDescriptionText
struct UPortalWarsCancelButtonWidget_GetSessionQueryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCancelButtonWidget.GetRankIconVisibility
struct UPortalWarsCancelButtonWidget_GetRankIconVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCancelButtonWidget.GetRankIcon
struct UPortalWarsCancelButtonWidget_GetRankIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCareerWidget.GoToStatsState
struct UPortalWarsCareerWidget_GoToStatsState_Params
{
};

// Function PortalWars.PortalWarsCareerWidget.GoToReplaysState
struct UPortalWarsCareerWidget_GoToReplaysState_Params
{
};

// Function PortalWars.PortalWarsCareerWidget.GoToMainState
struct UPortalWarsCareerWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsCareerWidget.GoToLeaderboardsState
struct UPortalWarsCareerWidget_GoToLeaderboardsState_Params
{
};

// Function PortalWars.PortalWarsChallengeButtonWidget.UpdateTimeText
struct UPortalWarsChallengeButtonWidget_UpdateTimeText_Params
{
};

// Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteTextVisibility
struct UPortalWarsChallengeButtonWidget_GetNoteTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeButtonWidget.GetNoteText
struct UPortalWarsChallengeButtonWidget_GetNoteText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeEntryWidget.OnActionButtonClicked
struct UPortalWarsChallengeEntryWidget_OnActionButtonClicked_Params
{
};

// Function PortalWars.PortalWarsChallengeEntryWidget.GetValueText
struct UPortalWarsChallengeEntryWidget_GetValueText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeEntryWidget.GetTitleText
struct UPortalWarsChallengeEntryWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeEntryWidget.GetProgressPercent
struct UPortalWarsChallengeEntryWidget_GetProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeEntryWidget.GetCompletedVisibility
struct UPortalWarsChallengeEntryWidget_GetCompletedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationStarted
struct UPortalWarsChallengeCompleteEntry_OnProgressAnimationStarted_Params
{
};

// Function PortalWars.PortalWarsChallengeCompleteEntry.OnProgressAnimationEnded
struct UPortalWarsChallengeCompleteEntry_OnProgressAnimationEnded_Params
{
};

// Function PortalWars.PortalWarsChallengeCompleteEntry.BroadcastAnimationComplete
struct UPortalWarsChallengeCompleteEntry_BroadcastAnimationComplete_Params
{
};

// Function PortalWars.PortalWarsChallengeDialogWidget.RefreshEntries
struct UPortalWarsChallengeDialogWidget_RefreshEntries_Params
{
};

// Function PortalWars.PortalWarsChallengeDialogWidget.ProcessNextChallengeUpdate
struct UPortalWarsChallengeDialogWidget_ProcessNextChallengeUpdate_Params
{
};

// Function PortalWars.PortalWarsChallengePanelWidget.UpdateTimeText
struct UPortalWarsChallengePanelWidget_UpdateTimeText_Params
{
};

// Function PortalWars.PortalWarsChallengePanelWidget.OnProgressionUpdate
struct UPortalWarsChallengePanelWidget_OnProgressionUpdate_Params
{
};

// Function PortalWars.PortalWarsChallengePanelWidget.OnChallengesButtonClicked
struct UPortalWarsChallengePanelWidget_OnChallengesButtonClicked_Params
{
};

// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledVisibility
struct UPortalWarsChallengePanelWidget_GetChallengesDisabledVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesDisabledText
struct UPortalWarsChallengePanelWidget_GetChallengesDisabledText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonTitleText
struct UPortalWarsChallengePanelWidget_GetChallengesButtonTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengePanelWidget.GetChallengesButtonEnabled
struct UPortalWarsChallengePanelWidget_GetChallengesButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesInspectWidget.RefreshChallenge
struct UPortalWarsChallengesInspectWidget_RefreshChallenge_Params
{
};

// Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntrySelected
struct UPortalWarsChallengesInspectWidget_OnItemEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesInspectWidget.OnItemEntryScrolledTo
struct UPortalWarsChallengesInspectWidget_OnItemEntryScrolledTo_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.UpdateTimeText
struct UPortalWarsChallengesSubWidget_UpdateTimeText_Params
{
};

// Function PortalWars.PortalWarsChallengesSubWidget.RefreshPremiumButton
struct UPortalWarsChallengesSubWidget_RefreshPremiumButton_Params
{
};

// Function PortalWars.PortalWarsChallengesSubWidget.RefreshNewItems
struct UPortalWarsChallengesSubWidget_RefreshNewItems_Params
{
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnViewButtonClicked
struct UPortalWarsChallengesSubWidget_OnViewButtonClicked_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnInspectButtonClicked
struct UPortalWarsChallengesSubWidget_OnInspectButtonClicked_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnClaimChallengeComplete
struct UPortalWarsChallengesSubWidget_OnClaimChallengeComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnClaimButtonClicked
struct UPortalWarsChallengesSubWidget_OnClaimButtonClicked_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnChallengesUpdate
struct UPortalWarsChallengesSubWidget_OnChallengesUpdate_Params
{
};

// Function PortalWars.PortalWarsChallengesSubWidget.OnBuyPremiumButtonClicked
struct UPortalWarsChallengesSubWidget_OnBuyPremiumButtonClicked_Params
{
};

// Function PortalWars.PortalWarsChallengesSubWidget.GoToPhase
struct UPortalWarsChallengesSubWidget_GoToPhase_Params
{
	unsigned char                                      NewPhase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.GetTitleText
struct UPortalWarsChallengesSubWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.GetTimeVisibility
struct UPortalWarsChallengesSubWidget_GetTimeVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesSubWidget.GetTimeDescriptionText
struct UPortalWarsChallengesSubWidget_GetTimeDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesWidget.OnChallengeButtonSelected
struct UPortalWarsChallengesWidget_OnChallengeButtonSelected_Params
{
	class UPortalWarsEntryWidget*                      Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChallengesWidget.GoToMainState
struct UPortalWarsChallengesWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsChallengesWidget.GoToInspectState
struct UPortalWarsChallengesWidget_GoToInspectState_Params
{
};

// Function PortalWars.PortalWarsChatEntryWidget.UpdatePlayerInfo
struct UPortalWarsChatEntryWidget_UpdatePlayerInfo_Params
{
};

// Function PortalWars.PortalWarsChatEntryWidget.GetPlayerNameText
struct UPortalWarsChatEntryWidget_GetPlayerNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChatEntryWidget.GetPlayerAvatar
struct UPortalWarsChatEntryWidget_GetPlayerAvatar_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChatEntryWidget.GetChatText
struct UPortalWarsChatEntryWidget_GetChatText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChatWidget.ShowChat
struct UPortalWarsChatWidget_ShowChat_Params
{
};

// Function PortalWars.PortalWarsChatWidget.OnChatTextChanged
struct UPortalWarsChatWidget_OnChatTextChanged_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChatWidget.OnChatInputCommitted
struct UPortalWarsChatWidget_OnChatInputCommitted_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsChatWidget.HideChat
struct UPortalWarsChatWidget_HideChat_Params
{
};

// Function PortalWars.PortalWarsInputWidget.OnValueChanged
struct UPortalWarsInputWidget_OnValueChanged_Params
{
};

// Function PortalWars.PortalWarsInputWidget.OnAdminReceived
struct UPortalWarsInputWidget_OnAdminReceived_Params
{
};

// Function PortalWars.PortalWarsInputWidget.IsEnabled
struct UPortalWarsInputWidget_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInputWidget.InitPlayerState
struct UPortalWarsInputWidget_InitPlayerState_Params
{
};

// Function PortalWars.PortalWarsInputWidget.GetInputVisibility
struct UPortalWarsInputWidget_GetInputVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCheckBoxWidget.OnCheckedStateChanged
struct UPortalWarsCheckBoxWidget_OnCheckedStateChanged_Params
{
	bool                                               bIsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCheckInDialogWidget.RefreshRewards
struct UPortalWarsCheckInDialogWidget_RefreshRewards_Params
{
};

// Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyVisibility
struct UPortalWarsCheckInDialogWidget_GetCurrencyVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCheckInDialogWidget.GetCurrencyText
struct UPortalWarsCheckInDialogWidget_GetCurrencyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCheckInDialogWidget.GetActionTitleText
struct UPortalWarsCheckInDialogWidget_GetActionTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCheckInRewardWidget.GetDayText
struct UPortalWarsCheckInRewardWidget_GetDayText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsClaimChallengeIndicatorWidget.RefreshWidget
struct UPortalWarsClaimChallengeIndicatorWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsColorPickerWidget.OnSliderToggleStateChanged
struct UPortalWarsColorPickerWidget_OnSliderToggleStateChanged_Params
{
	bool                                               bIsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsColorPickerWidget.GetSliderVisibility
struct UPortalWarsColorPickerWidget_GetSliderVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsColorPickerWidget.GetColor
struct UPortalWarsColorPickerWidget_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialRightText
struct UPortalWarsControllerPresetWidget_GetSpecialRightText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetSpecialLeftText
struct UPortalWarsControllerPresetWidget_GetSpecialLeftText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetRightTriggerText
struct UPortalWarsControllerPresetWidget_GetRightTriggerText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickText
struct UPortalWarsControllerPresetWidget_GetRightStickText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetRightStickDownText
struct UPortalWarsControllerPresetWidget_GetRightStickDownText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetRightShoulderText
struct UPortalWarsControllerPresetWidget_GetRightShoulderText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftTriggerText
struct UPortalWarsControllerPresetWidget_GetLeftTriggerText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickText
struct UPortalWarsControllerPresetWidget_GetLeftStickText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftStickDownText
struct UPortalWarsControllerPresetWidget_GetLeftStickDownText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetLeftShoulderText
struct UPortalWarsControllerPresetWidget_GetLeftShoulderText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonTopText
struct UPortalWarsControllerPresetWidget_GetFaceButtonTopText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonRightText
struct UPortalWarsControllerPresetWidget_GetFaceButtonRightText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonLeftText
struct UPortalWarsControllerPresetWidget_GetFaceButtonLeftText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetFaceButtonBottomText
struct UPortalWarsControllerPresetWidget_GetFaceButtonBottomText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadUpText
struct UPortalWarsControllerPresetWidget_GetDPadUpText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadRightText
struct UPortalWarsControllerPresetWidget_GetDPadRightText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadLeftText
struct UPortalWarsControllerPresetWidget_GetDPadLeftText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsControllerPresetWidget.GetDPadDownText
struct UPortalWarsControllerPresetWidget_GetDPadDownText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCopyButtonWidget.ResetTitleText
struct UPortalWarsCopyButtonWidget_ResetTitleText_Params
{
};

// Function PortalWars.PortalWarsCountdownWidget.OnGameConfigReceived
struct UPortalWarsCountdownWidget_OnGameConfigReceived_Params
{
};

// Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownUpdate
struct UPortalWarsCountdownWidget_NotifyCountdownUpdate_Params
{
	int                                                TimeRemaining;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCountdownWidget.NotifyCountdownStarted
struct UPortalWarsCountdownWidget_NotifyCountdownStarted_Params
{
};

// Function PortalWars.PortalWarsCountdownWidget.GetScoreText
struct UPortalWarsCountdownWidget_GetScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCountdownWidget.GetMinutesText
struct UPortalWarsCountdownWidget_GetMinutesText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCountdownWidget.GetMapNameText
struct UPortalWarsCountdownWidget_GetMapNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCountdownWidget.GetGameModeNameText
struct UPortalWarsCountdownWidget_GetGameModeNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCountdownWidget.GetGameModeDescriptionText
struct UPortalWarsCountdownWidget_GetGameModeDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCrosshairSelectWidget.OnCrosshairSelectionChanged
struct UPortalWarsCrosshairSelectWidget_OnCrosshairSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameMode.IsWinner
struct APortalWarsGameMode_IsWinner_Params
{
	class APortalWarsPlayerState*                      PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameMode.IsTie
struct APortalWarsGameMode_IsTie_Params
{
	class APortalWarsPlayerState*                      PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameMode.GetPlacement
struct APortalWarsGameMode_GetPlacement_Params
{
	class APortalWarsPlayerState*                      PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameMode.ForceEndMatch
struct APortalWarsGameMode_ForceEndMatch_Params
{
};

// Function PortalWars.PortalWarsGameState.OnRep_TeamGame
struct APortalWarsGameState_OnRep_TeamGame_Params
{
};

// Function PortalWars.PortalWarsGameState.OnRep_Score
struct APortalWarsGameState_OnRep_Score_Params
{
};

// Function PortalWars.PortalWarsGameState.AreEnemyPlayers
struct APortalWarsGameState_AreEnemyPlayers_Params
{
	class APortalWarsCharacter*                        PS1;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsCharacter*                        PS2;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameState.AreEnemies
struct APortalWarsGameState_AreEnemies_Params
{
	class APortalWarsPlayerState*                      PS1;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsPlayerState*                      PS2;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCTFGameState.SpawnFlag
struct APortalWarsCTFGameState_SpawnFlag_Params
{
	unsigned char                                      TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlagState
struct APortalWarsCTFGameState_OnRep_BravoFlagState_Params
{
	PortalWars_EFlagState                              PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCTFGameState.OnRep_BravoFlag
struct APortalWarsCTFGameState_OnRep_BravoFlag_Params
{
};

// Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlagState
struct APortalWarsCTFGameState_OnRep_AlphaFlagState_Params
{
	PortalWars_EFlagState                              PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCTFGameState.OnRep_AlphaFlag
struct APortalWarsCTFGameState_OnRep_AlphaFlag_Params
{
};

// Function PortalWars.PortalWarsHUD.UpdateChat
struct APortalWarsHUD_UpdateChat_Params
{
	struct FTextChatData                               InData;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUD.ShowScoreboardWidget
struct APortalWarsHUD_ShowScoreboardWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowMatchResultWidget
struct APortalWarsHUD_ShowMatchResultWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowMatchCancelledWidget
struct APortalWarsHUD_ShowMatchCancelledWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowHUDWidget
struct APortalWarsHUD_ShowHUDWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowFullScoreboard
struct APortalWarsHUD_ShowFullScoreboard_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowFullEmoteWheel
struct APortalWarsHUD_ShowFullEmoteWheel_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowEmoteWheelWidget
struct APortalWarsHUD_ShowEmoteWheelWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ShowCountdownWidget
struct APortalWarsHUD_ShowCountdownWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.SetMatchResult
struct APortalWarsHUD_SetMatchResult_Params
{
	bool                                               bIsWinner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTie;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Placement;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUD.RemoveScoreboardWidget
struct APortalWarsHUD_RemoveScoreboardWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.RemoveMatchResultWidget
struct APortalWarsHUD_RemoveMatchResultWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.RemoveMatchCancelledWidget
struct APortalWarsHUD_RemoveMatchCancelledWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.RemoveHUDWidget
struct APortalWarsHUD_RemoveHUDWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.RemoveEmoteWheelWidget
struct APortalWarsHUD_RemoveEmoteWheelWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.RemoveCountdownWidget
struct APortalWarsHUD_RemoveCountdownWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.ReceivedMedal
struct APortalWarsHUD_ReceivedMedal_Params
{
	struct FString                                     MedalName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUD.PerformEmoteWheelTask
struct APortalWarsHUD_PerformEmoteWheelTask_Params
{
};

// Function PortalWars.PortalWarsHUD.OpenChat
struct APortalWarsHUD_OpenChat_Params
{
};

// Function PortalWars.PortalWarsHUD.HideScoreboardWidget
struct APortalWarsHUD_HideScoreboardWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.HideHUDWidget
struct APortalWarsHUD_HideHUDWidget_Params
{
};

// Function PortalWars.PortalWarsHUD.HideFullScoreboard
struct APortalWarsHUD_HideFullScoreboard_Params
{
};

// Function PortalWars.PortalWarsHUD.HideFullEmoteWheel
struct APortalWarsHUD_HideFullEmoteWheel_Params
{
};

// Function PortalWars.PortalWarsHUD.HideEmoteWheelWidget
struct APortalWarsHUD_HideEmoteWheelWidget_Params
{
};

// Function PortalWars.PortalWarsPlayerState.SetTeamNum
struct APortalWarsPlayerState_SetTeamNum_Params
{
	unsigned char                                      NewTeamNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.SetPlayerAvatar
struct APortalWarsPlayerState_SetPlayerAvatar_Params
{
	class UTexture*                                    avatar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.OnRep_Team
struct APortalWarsPlayerState_OnRep_Team_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_ReadyForNextMatch
struct APortalWarsPlayerState_OnRep_ReadyForNextMatch_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_Ranks
struct APortalWarsPlayerState_OnRep_Ranks_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_Progression
struct APortalWarsPlayerState_OnRep_Progression_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_PlayerStats
struct APortalWarsPlayerState_OnRep_PlayerStats_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_PlayerCustomizations
struct APortalWarsPlayerState_OnRep_PlayerCustomizations_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_PartyChatOnly
struct APortalWarsPlayerState_OnRep_PartyChatOnly_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_MultiKillCounter
struct APortalWarsPlayerState_OnRep_MultiKillCounter_Params
{
	unsigned char                                      OldMultiKillCounter;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.OnRep_KillStreak
struct APortalWarsPlayerState_OnRep_KillStreak_Params
{
	unsigned char                                      OldKillStreak;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.OnRep_JoinedInProgress
struct APortalWarsPlayerState_OnRep_JoinedInProgress_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_IsFlagged
struct APortalWarsPlayerState_OnRep_IsFlagged_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_IsAdmin
struct APortalWarsPlayerState_OnRep_IsAdmin_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_DefaultProfile
struct APortalWarsPlayerState_OnRep_DefaultProfile_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_DailyStreak
struct APortalWarsPlayerState_OnRep_DailyStreak_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnRep_AnonymousMode
struct APortalWarsPlayerState_OnRep_AnonymousMode_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnPlayerAvatarLoaded
struct APortalWarsPlayerState_OnPlayerAvatarLoaded_Params
{
	class UTexture*                                    avatar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.OnDefaultAvatarLoaded
struct APortalWarsPlayerState_OnDefaultAvatarLoaded_Params
{
};

// Function PortalWars.PortalWarsPlayerState.OnCustomizationsLoaded
struct APortalWarsPlayerState_OnCustomizationsLoaded_Params
{
};

// Function PortalWars.PortalWarsPlayerState.LoadPlayerAvatar
struct APortalWarsPlayerState_LoadPlayerAvatar_Params
{
};

// Function PortalWars.PortalWarsPlayerState.GetTeamNum
struct APortalWarsPlayerState_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.GetShortPlayerName
struct APortalWarsPlayerState_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.ClientTriggerEvents
struct APortalWarsPlayerState_ClientTriggerEvents_Params
{
	TArray<struct FName>                               EventNames;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.ClientTriggerEvent
struct APortalWarsPlayerState_ClientTriggerEvent_Params
{
	struct FName                                       EventName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.ClientReconnected
struct APortalWarsPlayerState_ClientReconnected_Params
{
};

// Function PortalWars.PortalWarsPlayerState.ClientReceivedMedals
struct APortalWarsPlayerState_ClientReceivedMedals_Params
{
	TArray<struct FName>                               MedalNames;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.ClientReceivedMedal
struct APortalWarsPlayerState_ClientReceivedMedal_Params
{
	struct FName                                       MedalName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerState.BroadcastDeath_Multicast
struct APortalWarsPlayerState_BroadcastDeath_Multicast_Params
{
	class APortalWarsPlayerState*                      KillerPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 KillerDamageType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsPlayerState*                      KilledPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHeadshot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bThruPortal;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillerLastTeleportTime;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APortalWarsPlayerState*>              DamagePlayerStates;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      DamagePlayerDamages;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningTextVisibility
struct UPortalWarsCurrencyPurchaseDialog_GetWarningTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetWarningText
struct UPortalWarsCurrencyPurchaseDialog_GetWarningText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCurrencyPurchaseDialog.GetBonusVisibility
struct UPortalWarsCurrencyPurchaseDialog_GetBonusVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCurrencyStoreEntry.GetTitleText
struct UPortalWarsCurrencyStoreEntry_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopSectionWidget.RefreshSeparators
struct UPortalWarsItemShopSectionWidget_RefreshSeparators_Params
{
};

// Function PortalWars.PortalWarsItemShopSectionWidget.OnEntrySelected
struct UPortalWarsItemShopSectionWidget_OnEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopSectionWidget.GetTitleText
struct UPortalWarsItemShopSectionWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopSectionWidget.GetExpiresInText
struct UPortalWarsItemShopSectionWidget_GetExpiresInText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCurrencyStoreWidget.QueryItemOffers
struct UPortalWarsCurrencyStoreWidget_QueryItemOffers_Params
{
};

// Function PortalWars.PortalWarsCustomGameWidget.GoToHostState
struct UPortalWarsCustomGameWidget_GoToHostState_Params
{
};

// Function PortalWars.PortalWarsCustomGameWidget.GoToErrorState
struct UPortalWarsCustomGameWidget_GoToErrorState_Params
{
};

// Function PortalWars.PortalWarsCustomGameWidget.GoToBrowserState
struct UPortalWarsCustomGameWidget_GoToBrowserState_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.RefreshSaveReplayButton
struct UPortalWarsLobbyWidget_RefreshSaveReplayButton_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.PopulatePlayersList
struct UPortalWarsLobbyWidget_PopulatePlayersList_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.OnSwitchWeaponButtonClicked
struct UPortalWarsLobbyWidget_OnSwitchWeaponButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.OnSaveReplayButtonClicked
struct UPortalWarsLobbyWidget_OnSaveReplayButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsUpdated
struct UPortalWarsLobbyWidget_OnPrevGameStatsUpdated_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.OnPrevGameStatsButtonClicked
struct UPortalWarsLobbyWidget_OnPrevGameStatsButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.OnPlayerRemoved
struct UPortalWarsLobbyWidget_OnPlayerRemoved_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyWidget.OnPlayerAdded
struct UPortalWarsLobbyWidget_OnPlayerAdded_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyWidget.OnEmoteButtonClicked
struct UPortalWarsLobbyWidget_OnEmoteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.HideSpectatorButtons
struct UPortalWarsLobbyWidget_HideSpectatorButtons_Params
{
};

// Function PortalWars.PortalWarsLobbyWidget.GetSaveReplayButtonEnabled
struct UPortalWarsLobbyWidget_GetSaveReplayButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyWidget.GetPrevGameVisibility
struct UPortalWarsLobbyWidget_GetPrevGameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.UpdateTeam
struct UPortalWarsCustomLobbyWidget_UpdateTeam_Params
{
	int                                                TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.UpdateGameConfig
struct UPortalWarsCustomLobbyWidget_UpdateGameConfig_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnUnlimitedAmmoChanged
struct UPortalWarsCustomLobbyWidget_OnUnlimitedAmmoChanged_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnTeamUpdated
struct UPortalWarsCustomLobbyWidget_OnTeamUpdated_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnSecondaryWeaponChanged
struct UPortalWarsCustomLobbyWidget_OnSecondaryWeaponChanged_Params
{
	bool                                               bNext;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnPrimaryWeaponChanged
struct UPortalWarsCustomLobbyWidget_OnPrimaryWeaponChanged_Params
{
	bool                                               bNext;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnPlayerArrayUpdated
struct UPortalWarsCustomLobbyWidget_OnPlayerArrayUpdated_Params
{
	class APlayerState*                                PS;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnModeSelectionChanged
struct UPortalWarsCustomLobbyWidget_OnModeSelectionChanged_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnMatchOptionsButtonClicked
struct UPortalWarsCustomLobbyWidget_OnMatchOptionsButtonClicked_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnInviteButtonClicked
struct UPortalWarsCustomLobbyWidget_OnInviteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnGameConfigUpdated
struct UPortalWarsCustomLobbyWidget_OnGameConfigUpdated_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.OnAdminReceived
struct UPortalWarsCustomLobbyWidget_OnAdminReceived_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.LaunchGame
struct UPortalWarsCustomLobbyWidget_LaunchGame_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.InitPlayerState
struct UPortalWarsCustomLobbyWidget_InitPlayerState_Params
{
};

// Function PortalWars.PortalWarsCustomLobbyWidget.GetTeamSelectVisibility
struct UPortalWarsCustomLobbyWidget_GetTeamSelectVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.GetRandomHillsVisibility
struct UPortalWarsCustomLobbyWidget_GetRandomHillsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.GetBotsVisibility
struct UPortalWarsCustomLobbyWidget_GetBotsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomLobbyWidget.GetAdminVisibility
struct UPortalWarsCustomLobbyWidget_GetAdminVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsCustomScrollWidget.ScrollToPrev
struct UPortalWarsCustomScrollWidget_ScrollToPrev_Params
{
};

// Function PortalWars.PortalWarsCustomScrollWidget.ScrollToNext
struct UPortalWarsCustomScrollWidget_ScrollToNext_Params
{
};

// Function PortalWars.PortalWarsDailyCheckInWidget.RefreshEntries
struct UPortalWarsDailyCheckInWidget_RefreshEntries_Params
{
};

// Function PortalWars.PortalWarsDailyCheckInWidget.OnRepairButtonClicked
struct UPortalWarsDailyCheckInWidget_OnRepairButtonClicked_Params
{
};

// Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimCheckinComplete
struct UPortalWarsDailyCheckInWidget_OnClaimCheckinComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDailyCheckInWidget.OnClaimButtonClicked
struct UPortalWarsDailyCheckInWidget_OnClaimButtonClicked_Params
{
};

// Function PortalWars.PortalWarsDailyCheckInWidget.OnCheckInUpdate
struct UPortalWarsDailyCheckInWidget_OnCheckInUpdate_Params
{
};

// Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentWeekText
struct UPortalWarsDailyCheckInWidget_GetCurrentWeekText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDailyCheckInWidget.GetCurrentDayText
struct UPortalWarsDailyCheckInWidget_GetCurrentDayText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.RefreshEntries
struct UPortalWarsDailyPlayStreakWidget_RefreshEntries_Params
{
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.OnRepairButtonClicked
struct UPortalWarsDailyPlayStreakWidget_OnRepairButtonClicked_Params
{
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.OnPlayStreakUpdate
struct UPortalWarsDailyPlayStreakWidget_OnPlayStreakUpdate_Params
{
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetRepairStreakText
struct UPortalWarsDailyPlayStreakWidget_GetRepairStreakText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakPromptText
struct UPortalWarsDailyPlayStreakWidget_GetPlayStreakPromptText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDailyPlayStreakWidget.GetPlayStreakBoostText
struct UPortalWarsDailyPlayStreakWidget_GetPlayStreakBoostText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDamageNumberEntryWidget.GetDamageColor
struct UPortalWarsDamageNumberEntryWidget_GetDamageColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInputCarouselWidget.OnPrevValue
struct UPortalWarsInputCarouselWidget_OnPrevValue_Params
{
};

// Function PortalWars.PortalWarsInputCarouselWidget.OnNextValue
struct UPortalWarsInputCarouselWidget_OnNextValue_Params
{
};

// Function PortalWars.PortalWarsDecimalCarouselWidget.OnSpinBoxValueCommitted
struct UPortalWarsDecimalCarouselWidget_OnSpinBoxValueCommitted_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNumericCarouselWidget.OnSpinBoxValueCommitted
struct UPortalWarsNumericCarouselWidget_OnSpinBoxValueCommitted_Params
{
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDiscardSettingsDialog.OnAcceptButtonClicked
struct UPortalWarsDiscardSettingsDialog_OnAcceptButtonClicked_Params
{
};

// Function PortalWars.PortalWarsDiscordRpcUtils.OnConnect
struct UPortalWarsDiscordRpcUtils_OnConnect_Params
{
};

// Function PortalWars.PortalWarsHillIndicatorWidget.SetControllingTeam
struct UPortalWarsHillIndicatorWidget_SetControllingTeam_Params
{
	int                                                NewControllingTeam;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHillIndicatorWidget.GetIndicatorBackground
struct UPortalWarsHillIndicatorWidget_GetIndicatorBackground_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHillIndicatorWidget.GetHillName
struct UPortalWarsHillIndicatorWidget_GetHillName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDropdownWidget.OnSelectionChanged
struct UPortalWarsDropdownWidget_OnSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsDropIndicatorWidget.RefreshWidget
struct UPortalWarsDropIndicatorWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsDropsMenuWidget.RefreshWidget
struct UPortalWarsDropsMenuWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsDropsMenuWidget.OnOpenButtonClicked
struct UPortalWarsDropsMenuWidget_OnOpenButtonClicked_Params
{
};

// Function PortalWars.PortalWarsEmoteWheelWedgeWidget.RefreshWidget
struct UPortalWarsEmoteWheelWedgeWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsEmoteWheelWedgeWidget.GetActionText
struct UPortalWarsEmoteWheelWedgeWidget_GetActionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsEmoteWheelWidget.RefreshControllerLocation
struct UPortalWarsEmoteWheelWidget_RefreshControllerLocation_Params
{
};

// Function PortalWars.PortalWarsEnvironmentActor.EditorInit
struct APortalWarsEnvironmentActor_EditorInit_Params
{
};

// Function PortalWars.PortalWarsMenuSelectWidget.OnEntryUnhovered
struct UPortalWarsMenuSelectWidget_OnEntryUnhovered_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuSelectWidget.OnEntryHovered
struct UPortalWarsMenuSelectWidget_OnEntryHovered_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryVisibility
struct UPortalWarsMenuSelectWidget_GetHoveredEntryVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMenuSelectWidget.GetHoveredEntryText
struct UPortalWarsMenuSelectWidget_GetHoveredEntryText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnSettingsButtonClicked
struct UPortalWarsEscapeMenuWidget_OnSettingsButtonClicked_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnRewardCenterButtonClicked
struct UPortalWarsEscapeMenuWidget_OnRewardCenterButtonClicked_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnRedeemButtonClicked
struct UPortalWarsEscapeMenuWidget_OnRedeemButtonClicked_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnProfileSwitchedClicked
struct UPortalWarsEscapeMenuWidget_OnProfileSwitchedClicked_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnPartyUpdate
struct UPortalWarsEscapeMenuWidget_OnPartyUpdate_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnLeavePartyButtonClicked
struct UPortalWarsEscapeMenuWidget_OnLeavePartyButtonClicked_Params
{
};

// Function PortalWars.PortalWarsEscapeMenuWidget.OnExitButtonClicked
struct UPortalWarsEscapeMenuWidget_OnExitButtonClicked_Params
{
};

// Function PortalWars.PortalWarsFlagIndicatorWidget.SetControllingTeam
struct UPortalWarsFlagIndicatorWidget_SetControllingTeam_Params
{
	int                                                NewControllingTeam;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsFlagIndicatorWidget.InitIndicatorBackground
struct UPortalWarsFlagIndicatorWidget_InitIndicatorBackground_Params
{
};

// Function PortalWars.PortalWarsFlagIndicatorWidget.GetIndicatorBackground
struct UPortalWarsFlagIndicatorWidget_GetIndicatorBackground_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsForcedTeleportTrigger.EndOverlap
struct APortalWarsForcedTeleportTrigger_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsForcedTeleportTrigger.BeginOverlap
struct APortalWarsForcedTeleportTrigger_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateUserRank
struct UPortalWarsPlayerEntryWidget_UpdateUserRank_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePresenceText
struct UPortalWarsPlayerEntryWidget_UpdatePresenceText_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerName
struct UPortalWarsPlayerEntryWidget_UpdatePlayerName_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerBanner
struct UPortalWarsPlayerEntryWidget_UpdatePlayerBanner_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdatePlayerAvatar
struct UPortalWarsPlayerEntryWidget_UpdatePlayerAvatar_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateNameTags
struct UPortalWarsPlayerEntryWidget_UpdateNameTags_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.UpdateMuteIndicator
struct UPortalWarsPlayerEntryWidget_UpdateMuteIndicator_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerName
struct UPortalWarsPlayerEntryWidget_SetPlayerName_Params
{
	struct FString                                     InName;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.SetPlayerAvatar
struct UPortalWarsPlayerEntryWidget_SetPlayerAvatar_Params
{
	class UTexture*                                    InAvatar;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.RefreshPlayerStateInfo
struct UPortalWarsPlayerEntryWidget_RefreshPlayerStateInfo_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.RefreshLocalPlayerInfo
struct UPortalWarsPlayerEntryWidget_RefreshLocalPlayerInfo_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.OnBotAvatarLoaded
struct UPortalWarsPlayerEntryWidget_OnBotAvatarLoaded_Params
{
};

// Function PortalWars.PortalWarsPlayerEntryWidget.GetRankVisibility
struct UPortalWarsPlayerEntryWidget_GetRankVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.GetPresenceText
struct UPortalWarsPlayerEntryWidget_GetPresenceText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerName
struct UPortalWarsPlayerEntryWidget_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerEntryWidget.GetPlayerAvatar
struct UPortalWarsPlayerEntryWidget_GetPlayerAvatar_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationEntryWidget.OnViewButtonClicked
struct UPortalWarsNotificationEntryWidget_OnViewButtonClicked_Params
{
};

// Function PortalWars.PortalWarsNotificationEntryWidget.OnDeclineButtonClicked
struct UPortalWarsNotificationEntryWidget_OnDeclineButtonClicked_Params
{
};

// Function PortalWars.PortalWarsNotificationEntryWidget.OnAcceptButtonClicked
struct UPortalWarsNotificationEntryWidget_OnAcceptButtonClicked_Params
{
};

// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshWidget
struct UPortalWarsFriendsListSubWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshPlayersList
struct UPortalWarsFriendsListSubWidget_RefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsFriendsListSubWidget.RefreshEntries
struct UPortalWarsFriendsListSubWidget_RefreshEntries_Params
{
};

// Function PortalWars.PortalWarsFriendsListSubWidget.OnPrivelegesUpdated
struct UPortalWarsFriendsListSubWidget_OnPrivelegesUpdated_Params
{
};

// Function PortalWars.PortalWarsFriendsListSubWidget.OnPlayerEntrySelected
struct UPortalWarsFriendsListSubWidget_OnPlayerEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsFriendsListSubWidget.GetRefreshButtonEnabled
struct UPortalWarsFriendsListSubWidget_GetRefreshButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsFriendsListSubWidget.DelayedRefreshPlayersList
struct UPortalWarsFriendsListSubWidget_DelayedRefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsFriendsListWidget.GoToPlatformFriendsState
struct UPortalWarsFriendsListWidget_GoToPlatformFriendsState_Params
{
};

// Function PortalWars.PortalWarsFriendsListWidget.GoToFriendsState
struct UPortalWarsFriendsListWidget_GoToFriendsState_Params
{
};

// Function PortalWars.PortalWarsGameConfigWidget.InitGameConfig
struct UPortalWarsGameConfigWidget_InitGameConfig_Params
{
};

// Function PortalWars.PortalWarsGameConfigWidget.GetScoreLimitText
struct UPortalWarsGameConfigWidget_GetScoreLimitText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameConfigWidget.GetModeName
struct UPortalWarsGameConfigWidget_GetModeName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameConfigWidget.GetMaxPlayersText
struct UPortalWarsGameConfigWidget_GetMaxPlayersText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameConfigWidget.GetMatchTimeText
struct UPortalWarsGameConfigWidget_GetMatchTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameConfigWidget.GetMapName
struct UPortalWarsGameConfigWidget_GetMapName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameInstance.ShowLoadingScreen
struct UPortalWarsGameInstance_ShowLoadingScreen_Params
{
};

// Function PortalWars.PortalWarsGameInstance.PreLoadMap
struct UPortalWarsGameInstance_PreLoadMap_Params
{
	struct FString                                     MapName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameInstance.OnPostLoadMap
struct UPortalWarsGameInstance_OnPostLoadMap_Params
{
	class UWorld*                                      InLoadedWorld;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameInstance.HideLoadingScreen
struct UPortalWarsGameInstance_HideLoadingScreen_Params
{
};

// Function PortalWars.PortalWarsGameInstance.HandleTravelFailure
struct UPortalWarsGameInstance_HandleTravelFailure_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameInstance.HandleNetworkFailure
struct UPortalWarsGameInstance_HandleNetworkFailure_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                                  NetDriver;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameInstance.DisconnectFromServer
struct UPortalWarsGameInstance_DisconnectFromServer_Params
{
};

// Function PortalWars.PortalWarsGameInstance.DisconnectFromBackend
struct UPortalWarsGameInstance_DisconnectFromBackend_Params
{
};

// Function PortalWars.PortalWarsGameInstance.Crash
struct UPortalWarsGameInstance_Crash_Params
{
};

// Function PortalWars.PortalWarsGamepadReconnectWidget.OnUserAdded
struct UPortalWarsGamepadReconnectWidget_OnUserAdded_Params
{
	int                                                ControllerId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGamepadSelectWidget.RefreshPresetWidgets
struct UPortalWarsGamepadSelectWidget_RefreshPresetWidgets_Params
{
};

// Function PortalWars.PortalWarsGameplayStatics.StandardizeRotator
struct UPortalWarsGameplayStatics_StandardizeRotator_Params
{
	struct FRotator                                    InRotator;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.SlerpRInterpTo
struct UPortalWarsGameplayStatics_SlerpRInterpTo_Params
{
	struct FRotator                                    Current;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.SlerpInterpTo
struct UPortalWarsGameplayStatics_SlerpInterpTo_Params
{
	struct FQuat                                       Current;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Target;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.Slerp
struct UPortalWarsGameplayStatics_Slerp_Params
{
	struct FRotator                                    A;                                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    B;                                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.RadiansBetweenVectors
struct UPortalWarsGameplayStatics_RadiansBetweenVectors_Params
{
	struct FVector                                     Vector1;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector2;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWSpawnAkComponentAtLocation
struct UPortalWarsGameplayStatics_PWSpawnAkComponentAtLocation_Params
{
	class UWorld*                                      TheWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                                   EarlyReflectionsBus;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EarlyReflectionsBusName;                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDestroy;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWSetGlobalRTPCValue
struct UPortalWarsGameplayStatics_PWSetGlobalRTPCValue_Params
{
	struct FName                                       RTPCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponentWithDelay
struct UPortalWarsGameplayStatics_PWPlayWwiseEventOnAkComponentWithDelay_Params
{
	class UWorld*                                      TheWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               EventToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      AkComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PortalWars_ESoundReplicationType>      RepType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventOnAkComponent
struct UPortalWarsGameplayStatics_PWPlayWwiseEventOnAkComponent_Params
{
	class UWorld*                                      TheWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               EventToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      AkComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PortalWars_ESoundReplicationType>      RepType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocationWithDelay
struct UPortalWarsGameplayStatics_PWPlayWwiseEventAtLocationWithDelay_Params
{
	class UWorld*                                      TheWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               EventToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SoundLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SoundRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PortalWars_ESoundReplicationType>      RepType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.PWPlayWwiseEventAtLocation
struct UPortalWarsGameplayStatics_PWPlayWwiseEventAtLocation_Params
{
	class UWorld*                                      TheWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               EventToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SoundLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SoundRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<PortalWars_ESoundReplicationType>      RepType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsWithEditor
struct UPortalWarsGameplayStatics_IsWithEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsPlayingTutorial
struct UPortalWarsGameplayStatics_IsPlayingTutorial_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsPlayingReplay
struct UPortalWarsGameplayStatics_IsPlayingReplay_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsPlayingRange
struct UPortalWarsGameplayStatics_IsPlayingRange_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsPlayingRace
struct UPortalWarsGameplayStatics_IsPlayingRace_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsPlayerStateFullyReplicatedForPlayer
struct UPortalWarsGameplayStatics_IsPlayerStateFullyReplicatedForPlayer_Params
{
	class APortalWarsPlayerState*                      PS;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerStateFullyReplicated
struct UPortalWarsGameplayStatics_IsLocalPlayerStateFullyReplicated_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerSpectating
struct UPortalWarsGameplayStatics_IsLocalPlayerSpectating_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInGlobalVision
struct UPortalWarsGameplayStatics_IsLocalPlayerInGlobalVision_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerInFreeCam
struct UPortalWarsGameplayStatics_IsLocalPlayerInFreeCam_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerFlagged
struct UPortalWarsGameplayStatics_IsLocalPlayerFlagged_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLocalPlayerAdmin
struct UPortalWarsGameplayStatics_IsLocalPlayerAdmin_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsLANMatch
struct UPortalWarsGameplayStatics_IsLANMatch_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsInWaitingArea
struct UPortalWarsGameplayStatics_IsInWaitingArea_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsInRaceLobby
struct UPortalWarsGameplayStatics_IsInRaceLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsInMainMenu
struct UPortalWarsGameplayStatics_IsInMainMenu_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsInLobby
struct UPortalWarsGameplayStatics_IsInLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsInCustomGame
struct UPortalWarsGameplayStatics_IsInCustomGame_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsEnemyTeamNum
struct UPortalWarsGameplayStatics_IsEnemyTeamNum_Params
{
	unsigned char                                      TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsCharacterOverlappingComponent
struct UPortalWarsGameplayStatics_IsCharacterOverlappingComponent_Params
{
	class ACharacter*                                  Character;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             Component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoxExtent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.IsAnyCharacterOverlappingComponent
struct UPortalWarsGameplayStatics_IsAnyCharacterOverlappingComponent_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             Component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoxExtent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetTeamNameForTeam
struct UPortalWarsGameplayStatics_GetTeamNameForTeam_Params
{
	unsigned char                                      TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetSaveGameForLocalPlayer
struct UPortalWarsGameplayStatics_GetSaveGameForLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsSaveGame*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetPortalWarsGameSettings
struct UPortalWarsGameplayStatics_GetPortalWarsGameSettings_Params
{
	class UPortalWarsGameUserSettings*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetPlayerStateFromUniqueId
struct UPortalWarsGameplayStatics_GetPlayerStateFromUniqueId_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerIdString;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSearchInactive;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsPlayerState*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetPlayerName
struct UPortalWarsGameplayStatics_GetPlayerName_Params
{
	class APortalWarsCharacter*                        Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetMouseKeyIconForAction
struct UPortalWarsGameplayStatics_GetMouseKeyIconForAction_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InAction;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetLocalTeamNum
struct UPortalWarsGameplayStatics_GetLocalTeamNum_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerState
struct UPortalWarsGameplayStatics_GetLocalPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsPlayerState*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetLocalPlayerControllerId
struct UPortalWarsGameplayStatics_GetLocalPlayerControllerId_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetKeyForAction
struct UPortalWarsGameplayStatics_GetKeyForAction_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InAction;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetKeyDisplayNameForAction
struct UPortalWarsGameplayStatics_GetKeyDisplayNameForAction_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InAction;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLongDispayName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetGameVersion
struct UPortalWarsGameplayStatics_GetGameVersion_Params
{
	struct FString                                     OutGameVersion;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyIconForAction
struct UPortalWarsGameplayStatics_GetGamepadKeyIconForAction_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InAction;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.GetGamepadKeyForAction
struct UPortalWarsGameplayStatics_GetGamepadKeyForAction_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InAction;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.DegreesBetweenVectors
struct UPortalWarsGameplayStatics_DegreesBetweenVectors_Params
{
	struct FVector                                     Vector1;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector2;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.CompareVersionNumbers
struct UPortalWarsGameplayStatics_CompareVersionNumbers_Params
{
	struct FString                                     v1;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     v2;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.CheckAimDistToEnemy
struct UPortalWarsGameplayStatics_CheckAimDistToEnemy_Params
{
	class APlayerController*                           From;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ToLocation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPS
struct UPortalWarsGameplayStatics_AreEnemiesPS_Params
{
	class APlayerState*                                PS1;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                PS2;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.AreEnemiesPawn
struct UPortalWarsGameplayStatics_AreEnemiesPawn_Params
{
	class APawn*                                       Player1;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Player2;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamageWithFalloff
struct UPortalWarsGameplayStatics_ApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             AltVisibilityOrigins;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DamagePreventionChannel;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShotThruPortal;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGun*                                        Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameplayStatics.ApplyRadialDamage
struct UPortalWarsGameplayStatics_ApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             AltVisibilityOrigins;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DamagePreventionChannel;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShotThruPortal;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGun*                                        Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGameSessionReconnectDialog.OnReconnectButtonClicked
struct UPortalWarsGameSessionReconnectDialog_OnReconnectButtonClicked_Params
{
};

// Function PortalWars.PortalWarsGGPlayerState.OnRep_CurrentWeaponIndex
struct APortalWarsGGPlayerState_OnRep_CurrentWeaponIndex_Params
{
};

// Function PortalWars.PortalWarsGlobalCarouselWidget.OnDisplayImageLoaded
struct UPortalWarsGlobalCarouselWidget_OnDisplayImageLoaded_Params
{
};

// Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayName
struct UPortalWarsGlobalCarouselWidget_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsGlobalCarouselWidget.GetDisplayImage
struct UPortalWarsGlobalCarouselWidget_GetDisplayImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.RocketLauncher.ReloadWeapon_Multicast
struct ARocketLauncher_ReloadWeapon_Multicast_Params
{
	bool                                               ShouldInsert;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.ScoreboardComponent.UpdateComponent
struct AScoreboardComponent_UpdateComponent_Params
{
};

// Function PortalWars.ScoreboardComponent.SpawnText
struct AScoreboardComponent_SpawnText_Params
{
};

// Function PortalWars.PortalWarsGoodSky.EditorInit
struct APortalWarsGoodSky_EditorInit_Params
{
};

// Function PortalWars.PortalWarsGunPickupZone.OnRep_TimeToSpawn
struct APortalWarsGunPickupZone_OnRep_TimeToSpawn_Params
{
};

// Function PortalWars.PortalWarsGunPickupZone.OnRep_IsActive
struct APortalWarsGunPickupZone_OnRep_IsActive_Params
{
};

// Function PortalWars.PortalWarsHappyHourDialogWidget.GetHappyHourText
struct UPortalWarsHappyHourDialogWidget_GetHappyHourText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHappyHourStatusWidget.UpdateWidget
struct UPortalWarsHappyHourStatusWidget_UpdateWidget_Params
{
};

// Function PortalWars.PortalWarsHappyHourStatusWidget.IsHappyHourLive
struct UPortalWarsHappyHourStatusWidget_IsHappyHourLive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHappyHourStatusWidget.GetTimeRemainingText
struct UPortalWarsHappyHourStatusWidget_GetTimeRemainingText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHappyHourStatusWidget.GetHappyHourText
struct UPortalWarsHappyHourStatusWidget_GetHappyHourText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHostMenuWidget.OnServerPasswordValueChanged
struct UPortalWarsHostMenuWidget_OnServerPasswordValueChanged_Params
{
};

// Function PortalWars.PortalWarsHostMenuWidget.OnServerNameValueChanged
struct UPortalWarsHostMenuWidget_OnServerNameValueChanged_Params
{
};

// Function PortalWars.PortalWarsHostMenuWidget.OnRegionSelectionChanged
struct UPortalWarsHostMenuWidget_OnRegionSelectionChanged_Params
{
};

// Function PortalWars.PortalWarsHostMenuWidget.OnPrivateCheckBoxValueChanged
struct UPortalWarsHostMenuWidget_OnPrivateCheckBoxValueChanged_Params
{
};

// Function PortalWars.PortalWarsHostMenuWidget.HostGame
struct UPortalWarsHostMenuWidget_HostGame_Params
{
};

// Function PortalWars.PortalWarsHostMenuWidget.GetPrivateVisibility
struct UPortalWarsHostMenuWidget_GetPrivateVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHostMenuWidget.GetHostButtonEnabled
struct UPortalWarsHostMenuWidget_GetHostButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUDWidget.ShowSubtitle
struct UPortalWarsHUDWidget_ShowSubtitle_Params
{
};

// Function PortalWars.PortalWarsHUDWidget.ProcessKill
struct UPortalWarsHUDWidget_ProcessKill_Params
{
	class APortalWarsPlayerState*                      KillerPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APortalWarsPlayerState*                      KilledPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 KillerDamageType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHeadshot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealt;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUDWidget.HideSubtitle
struct UPortalWarsHUDWidget_HideSubtitle_Params
{
};

// Function PortalWars.PortalWarsHUDWidget.GetRadarVisibility
struct UPortalWarsHUDWidget_GetRadarVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUDWidget.GetLowHealthOpacity
struct UPortalWarsHUDWidget_GetLowHealthOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUDWidget.GetJetpackVisibility
struct UPortalWarsHUDWidget_GetJetpackVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsHUDWidget.GetJetpackPercent
struct UPortalWarsHUDWidget_GetJetpackPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInputDecoratorWidget.RefreshWidget
struct UPortalWarsInputDecoratorWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsIntroVideoWidget.OnMediaOpenFailed
struct UPortalWarsIntroVideoWidget_OnMediaOpenFailed_Params
{
	struct FString                                     FailedUrl;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsInviteEntryWidget.OnPendingInvitesUpdated
struct UPortalWarsInviteEntryWidget_OnPendingInvitesUpdated_Params
{
};

// Function PortalWars.PortalWarsInviteManager.OnMainMenu
struct UPortalWarsInviteManager_OnMainMenu_Params
{
};

// Function PortalWars.PortalWarsInviteMenuWidget.RefreshInviteEntries
struct UPortalWarsInviteMenuWidget_RefreshInviteEntries_Params
{
};

// Function PortalWars.PortalWarsItemShopEntry.RefreshNewState
struct UPortalWarsItemShopEntry_RefreshNewState_Params
{
};

// Function PortalWars.PortalWarsItemShopEntry.GetTitleText
struct UPortalWarsItemShopEntry_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetSubtitleText
struct UPortalWarsItemShopEntry_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetRarityScrim
struct UPortalWarsItemShopEntry_GetRarityScrim_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetRarityIcon
struct UPortalWarsItemShopEntry_GetRarityIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetRarityColor
struct UPortalWarsItemShopEntry_GetRarityColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetRarityBorderColor
struct UPortalWarsItemShopEntry_GetRarityBorderColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopEntry.GetRarityBG
struct UPortalWarsItemShopEntry_GetRarityBG_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopInspectWidget.UpdatePurchaseState
struct UPortalWarsItemShopInspectWidget_UpdatePurchaseState_Params
{
};

// Function PortalWars.PortalWarsItemShopInspectWidget.OnPurchaseButtonClicked
struct UPortalWarsItemShopInspectWidget_OnPurchaseButtonClicked_Params
{
};

// Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntrySelected
struct UPortalWarsItemShopInspectWidget_OnItemEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopInspectWidget.OnItemEntryScrolledTo
struct UPortalWarsItemShopInspectWidget_OnItemEntryScrolledTo_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopInspectWidget.OnIndividualPurchaseButtonClicked
struct UPortalWarsItemShopInspectWidget_OnIndividualPurchaseButtonClicked_Params
{
};

// Function PortalWars.PortalWarsItemShopInspectWidget.GetItemsVisibility
struct UPortalWarsItemShopInspectWidget_GetItemsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMedalEntryWidget.UpdateStyle_Internal
struct UPortalWarsMedalEntryWidget_UpdateStyle_Internal_Params
{
};

// Function PortalWars.PortalWarsMedalsWidget.ProcessMedal
struct UPortalWarsMedalsWidget_ProcessMedal_Params
{
};

// Function PortalWars.PortalWarsMedalsWidget.OnMedalRemoved
struct UPortalWarsMedalsWidget_OnMedalRemoved_Params
{
};

// Function PortalWars.PortalWarsMedalsWidget.FinishShiftingMedals
struct UPortalWarsMedalsWidget_FinishShiftingMedals_Params
{
};

// Function PortalWars.PortalWarsMenuCarouselWidget.RefreshEntries
struct UPortalWarsMenuCarouselWidget_RefreshEntries_Params
{
};

// Function PortalWars.PortalWarsMenuCarouselWidget.OnNextEntry
struct UPortalWarsMenuCarouselWidget_OnNextEntry_Params
{
};

// Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayFocusChanged
struct UPortalWarsNameIndicatorWidget_OnReplayFocusChanged_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNameIndicatorWidget.OnReplayCameraModeChanged
struct UPortalWarsNameIndicatorWidget_OnReplayCameraModeChanged_Params
{
	PortalWars_EReplayCameraMode                       ReplayCameraMode;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNameIndicatorWidget.InitPlayerInfo
struct UPortalWarsNameIndicatorWidget_InitPlayerInfo_Params
{
};

// Function PortalWars.PortalWarsNameIndicatorWidget.GetEnemyVisibility
struct UPortalWarsNameIndicatorWidget_GetEnemyVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNameIndicatorWidget.GetDeathVisibility
struct UPortalWarsNameIndicatorWidget_GetDeathVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNavBarWidget.OnNavButtonSelected
struct UPortalWarsNavBarWidget_OnNavButtonSelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNavBarWidget.GoToPrevState
struct UPortalWarsNavBarWidget_GoToPrevState_Params
{
};

// Function PortalWars.PortalWarsNavBarWidget.GoToNextState
struct UPortalWarsNavBarWidget_GoToNextState_Params
{
};

// Function PortalWars.PortalWarsItemShopPurchasePanel.RefreshWidget
struct UPortalWarsItemShopPurchasePanel_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsItemShopPurchasePanel.OnPurchaseButtonClicked
struct UPortalWarsItemShopPurchasePanel_OnPurchaseButtonClicked_Params
{
};

// Function PortalWars.PortalWarsItemShopPurchasePanel.GetTitleText
struct UPortalWarsItemShopPurchasePanel_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemTitleText
struct UPortalWarsItemShopPurchasePanel_GetItemTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopPurchasePanel.GetItemSubtitleText
struct UPortalWarsItemShopPurchasePanel_GetItemSubtitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopWidget.RefreshButtons
struct UPortalWarsItemShopWidget_RefreshButtons_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.OnUserScrolled
struct UPortalWarsItemShopWidget_OnUserScrolled_Params
{
	float                                              CurrentOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopWidget.OnProgressionUpdate
struct UPortalWarsItemShopWidget_OnProgressionUpdate_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.OnPreviousButtonClicked
struct UPortalWarsItemShopWidget_OnPreviousButtonClicked_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.OnNextButtonClicked
struct UPortalWarsItemShopWidget_OnNextButtonClicked_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.OnEntrySelected
struct UPortalWarsItemShopWidget_OnEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopWidget.InitEntries
struct UPortalWarsItemShopWidget_InitEntries_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.GoToScrollState
struct UPortalWarsItemShopWidget_GoToScrollState_Params
{
	unsigned char                                      NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsItemShopWidget.GoToMainState
struct UPortalWarsItemShopWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.GoToInspectState
struct UPortalWarsItemShopWidget_GoToInspectState_Params
{
};

// Function PortalWars.PortalWarsItemShopWidget.GetSectionWidgetForState
struct UPortalWarsItemShopWidget_GetSectionWidgetForState_Params
{
	int                                                State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsItemShopSectionWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsJoinInProgressWidget.PlayFadeOutAnimation
struct UPortalWarsJoinInProgressWidget_PlayFadeOutAnimation_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.UpdateButtons
struct UPortalWarsJoinServerDialogWidget_UpdateButtons_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.SpectateServer
struct UPortalWarsJoinServerDialogWidget_SpectateServer_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.RefreshWidget
struct UPortalWarsJoinServerDialogWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.OnPasswordTextChanged
struct UPortalWarsJoinServerDialogWidget_OnPasswordTextChanged_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.JoinServer
struct UPortalWarsJoinServerDialogWidget_JoinServer_Params
{
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateEnabled
struct UPortalWarsJoinServerDialogWidget_GetSpectateEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.GetSpectateDisabledText
struct UPortalWarsJoinServerDialogWidget_GetSpectateDisabledText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.GetPasswordVisibility
struct UPortalWarsJoinServerDialogWidget_GetPasswordVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinEnabled
struct UPortalWarsJoinServerDialogWidget_GetJoinEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsJoinServerDialogWidget.GetJoinDisabledText
struct UPortalWarsJoinServerDialogWidget_GetJoinDisabledText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindSettingsWidget.OnSecondaryKeyBound
struct UPortalWarsKeybindSettingsWidget_OnSecondaryKeyBound_Params
{
	class UPortalWarsKeybindWidget*                    Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindSettingsWidget.OnPrimaryKeyBound
struct UPortalWarsKeybindSettingsWidget_OnPrimaryKeyBound_Params
{
	class UPortalWarsKeybindWidget*                    Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindSettingsWidget.OnFailedKeyBound
struct UPortalWarsKeybindSettingsWidget_OnFailedKeyBound_Params
{
	class UPortalWarsKeybindWidget*                    Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindSettingsWidget.GetWarningVisibility
struct UPortalWarsKeybindSettingsWidget_GetWarningVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryKeyPressed
struct UPortalWarsKeybindWidget_OnSecondaryKeyPressed_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonUnhovered
struct UPortalWarsKeybindWidget_OnSecondaryButtonUnhovered_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonPressed
struct UPortalWarsKeybindWidget_OnSecondaryButtonPressed_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.OnSecondaryButtonHovered
struct UPortalWarsKeybindWidget_OnSecondaryButtonHovered_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryKeyPressed
struct UPortalWarsKeybindWidget_OnPrimaryKeyPressed_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonUnhovered
struct UPortalWarsKeybindWidget_OnPrimaryButtonUnhovered_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonPressed
struct UPortalWarsKeybindWidget_OnPrimaryButtonPressed_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.OnPrimaryButtonHovered
struct UPortalWarsKeybindWidget_OnPrimaryButtonHovered_Params
{
};

// Function PortalWars.PortalWarsKeybindWidget.GetSecondaryKeyText
struct UPortalWarsKeybindWidget_GetSecondaryKeyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKeybindWidget.GetPrimaryKeyText
struct UPortalWarsKeybindWidget_GetPrimaryKeyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKillcam.WarmupTick
struct UPortalWarsKillcam_WarmupTick_Params
{
};

// Function PortalWars.PortalWarsKillcamKilledByWidget.OnRankImageLoaded
struct UPortalWarsKillcamKilledByWidget_OnRankImageLoaded_Params
{
};

// Function PortalWars.PortalWarsKOTHGameState.OnRepNextHill
struct APortalWarsKOTHGameState_OnRepNextHill_Params
{
};

// Function PortalWars.PortalWarsKOTHGameState.OnRepHill
struct APortalWarsKOTHGameState_OnRepHill_Params
{
	class APortalWarsKOTHHill*                         PrevHill;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKOTHHill.OnRep_IsActive
struct APortalWarsKOTHHill_OnRep_IsActive_Params
{
};

// Function PortalWars.PortalWarsKOTHHill.OnRep_HillState
struct APortalWarsKOTHHill_OnRep_HillState_Params
{
	PortalWars_EKOTHHillState                          PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKOTHHill.GetControllingTeam
struct APortalWarsKOTHHill_GetControllingTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKOTHHillIndicator.GetHillTimeRemaining
struct UPortalWarsKOTHHillIndicator_GetHillTimeRemaining_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsKOTHPlayerState.OnRep_IsOnHill
struct APortalWarsKOTHPlayerState_OnRep_IsOnHill_Params
{
};

// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionText
struct UPortalWarsLeaderboardEntryWidget_GetPositionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetPositionImage
struct UPortalWarsLeaderboardEntryWidget_GetPositionImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLeaderboardEntryWidget.GetButtonStyle
struct UPortalWarsLeaderboardEntryWidget_GetButtonStyle_Params
{
	struct FButtonStyle                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnViewButtonClicked
struct UPortalWarsLimitedTimeOfferDialogWidget_OnViewButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLimitedTimeOfferDialogWidget.OnItemEntrySelected
struct UPortalWarsLimitedTimeOfferDialogWidget_OnItemEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLineUpCharacter.UpdateSkins
struct APortalWarsLineUpCharacter_UpdateSkins_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.PlayEmote_Multicast
struct APortalWarsLineUpCharacter_PlayEmote_Multicast_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnWeaponPoseLoaded
struct APortalWarsLineUpCharacter_OnWeaponPoseLoaded_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerState
struct APortalWarsLineUpCharacter_OnRep_PlayerState_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnRep_PlayerInfo
struct APortalWarsLineUpCharacter_OnRep_PlayerInfo_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnRep_CurrentWeaponType
struct APortalWarsLineUpCharacter_OnRep_CurrentWeaponType_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnPlayerCustomizationsSet
struct APortalWarsLineUpCharacter_OnPlayerCustomizationsSet_Params
{
};

// Function PortalWars.PortalWarsLineUpCharacter.OnEmoteFinished
struct APortalWarsLineUpCharacter_OnEmoteFinished_Params
{
};

// Function PortalWars.PortalWarsLobbyGameState.UpdateTVScreen
struct APortalWarsLobbyGameState_UpdateTVScreen_Params
{
};

// Function PortalWars.PortalWarsLobbyGameState.OnRep_PrevGameData
struct APortalWarsLobbyGameState_OnRep_PrevGameData_Params
{
};

// Function PortalWars.PortalWarsPlayerController.SpawnPickup
struct APortalWarsPlayerController_SpawnPickup_Params
{
	struct FName                                       pickupClassName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.Slowmo
struct APortalWarsPlayerController_Slowmo_Params
{
	float                                              TimeDilation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerSpawnPickup
struct APortalWarsPlayerController_ServerSpawnPickup_Params
{
	struct FName                                       pickupClassName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerSlomo
struct APortalWarsPlayerController_ServerSlomo_Params
{
	float                                              TimeDilation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerSetPartyChatOnly
struct APortalWarsPlayerController_ServerSetPartyChatOnly_Params
{
	bool                                               bPartyChatOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerSetFOV
struct APortalWarsPlayerController_ServerSetFOV_Params
{
	float                                              FOV;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerSetAnonymousMode
struct APortalWarsPlayerController_ServerSetAnonymousMode_Params
{
	bool                                               bAnonymousMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerRequestReturnToMainMenu
struct APortalWarsPlayerController_ServerRequestReturnToMainMenu_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ServerReceiveRanks
struct APortalWarsPlayerController_ServerReceiveRanks_Params
{
	TArray<struct FUserRankInfo>                       PlayerRanks;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerReceiveProgression
struct APortalWarsPlayerController_ServerReceiveProgression_Params
{
	struct FUserProgressionInfo                        UserProgression;                                           // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerReceiveDailyStreak
struct APortalWarsPlayerController_ServerReceiveDailyStreak_Params
{
	struct FUserDailyStreakInfo                        DailyStreak;                                               // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerReceiveCustomizations
struct APortalWarsPlayerController_ServerReceiveCustomizations_Params
{
	TArray<struct FCustomizationId>                    ChosenCustomizations;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerKickPlayer
struct APortalWarsPlayerController_ServerKickPlayer_Params
{
	class APlayerState*                                PlayerStateToKick;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ServerEndMatch
struct APortalWarsPlayerController_ServerEndMatch_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ServerEnableGodMode
struct APortalWarsPlayerController_ServerEnableGodMode_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ServerBroadcastChatMessage
struct APortalWarsPlayerController_ServerBroadcastChatMessage_Params
{
	struct FTextChatData                               InData;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.SendRanksToServer
struct APortalWarsPlayerController_SendRanksToServer_Params
{
};

// Function PortalWars.PortalWarsPlayerController.SendCustomizationsToServer
struct APortalWarsPlayerController_SendCustomizationsToServer_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ProjectWorldLocationToScreenCustom
struct APortalWarsPlayerController_ProjectWorldLocationToScreenCustom_Params
{
	struct FVector                                     WorldLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerViewportRelative;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.PlayEmote
struct APortalWarsPlayerController_PlayEmote_Params
{
};

// Function PortalWars.PortalWarsPlayerController.OnPauseMenuClosed
struct APortalWarsPlayerController_OnPauseMenuClosed_Params
{
};

// Function PortalWars.PortalWarsPlayerController.GetTeamNum
struct APortalWarsPlayerController_GetTeamNum_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.EnableGodMode
struct APortalWarsPlayerController_EnableGodMode_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientUpdateChat
struct APortalWarsPlayerController_ClientUpdateChat_Params
{
	struct FTextChatData                               InData;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientSetSpectatorCamera
struct APortalWarsPlayerController_ClientSetSpectatorCamera_Params
{
	struct FVector                                     CameraLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CameraRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientSetRoundResult
struct APortalWarsPlayerController_ClientSetRoundResult_Params
{
	int                                                WinningTeamNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTie;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Placement;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientSetMatchResult
struct APortalWarsPlayerController_ClientSetMatchResult_Params
{
	int                                                WinningTeamNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTie;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Placement;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeammateTeabagConfirmed
struct APortalWarsPlayerController_ClientNotifyTeammateTeabagConfirmed_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagDenied
struct APortalWarsPlayerController_ClientNotifyTeabagDenied_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyTeabagConfirmed
struct APortalWarsPlayerController_ClientNotifyTeabagConfirmed_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyEnemyDeniedTeabag
struct APortalWarsPlayerController_ClientNotifyEnemyDeniedTeabag_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyDamageTaken
struct APortalWarsPlayerController_ClientNotifyDamageTaken_Params
{
	struct FVector_NetQuantize                         HitLocation;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bThruPortal;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyCountdown
struct APortalWarsPlayerController_ClientNotifyCountdown_Params
{
	int                                                CountdownTime;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyCausedHit
struct APortalWarsPlayerController_ClientNotifyCausedHit_Params
{
	class APawn*                                       DamagedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealt;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWars_EPWHitType                              HitType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientNotifyAlive
struct APortalWarsPlayerController_ClientNotifyAlive_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientHearAkEventAtLocation
struct APortalWarsPlayerController_ClientHearAkEventAtLocation_Params
{
	class UAkAudioEvent*                               EventToPost;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         SoundLocation;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SoundRotation;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientHearAkEvent
struct APortalWarsPlayerController_ClientHearAkEvent_Params
{
	class UAkAudioEvent*                               EventToPost;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsAkComponent*                      AkComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSpatialAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerController.ClientGenericInitialization
struct APortalWarsPlayerController_ClientGenericInitialization_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientGameStarted
struct APortalWarsPlayerController_ClientGameStarted_Params
{
};

// Function PortalWars.PortalWarsPlayerController.ClientCountdownStarted
struct APortalWarsPlayerController_ClientCountdownStarted_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerUpdateTeam
struct APortalWarsLobbyPlayerController_ServerUpdateTeam_Params
{
	unsigned char                                      TeamNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerSetGameConfig
struct APortalWarsLobbyPlayerController_ServerSetGameConfig_Params
{
	struct FGameConfig                                 GameConfig;                                                // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerPlayEmoteLineup
struct APortalWarsLobbyPlayerController_ServerPlayEmoteLineup_Params
{
	class APortalWarsLineUpCharacter*                  InLineUpCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerLaunchGame
struct APortalWarsLobbyPlayerController_ServerLaunchGame_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipPreviousWeapon
struct APortalWarsLobbyPlayerController_ServerEquipPreviousWeapon_Params
{
	class APortalWarsLineUpCharacter*                  InLineUpCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerController.ServerEquipNextWeapon
struct APortalWarsLobbyPlayerController_ServerEquipNextWeapon_Params
{
	class APortalWarsLineUpCharacter*                  InLineUpCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateTeamColor
struct UPortalWarsLobbyPlayerEntryWidget_UpdateTeamColor_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateSpectatorIndicator
struct UPortalWarsLobbyPlayerEntryWidget_UpdateSpectatorIndicator_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.UpdateAdminIndicator
struct UPortalWarsLobbyPlayerEntryWidget_UpdateAdminIndicator_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.LobbyAdminVisibility
struct UPortalWarsLobbyPlayerEntryWidget_LobbyAdminVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.InitGameState
struct UPortalWarsLobbyPlayerEntryWidget_InitGameState_Params
{
};

// Function PortalWars.PortalWarsLobbyPlayerEntryWidget.GetSpectatorIndicatorVisibility
struct UPortalWarsLobbyPlayerEntryWidget_GetSpectatorIndicatorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalizationHelpers.GetTextFromStringTable
struct UPortalWarsLocalizationHelpers_GetTextFromStringTable_Params
{
	struct FString                                     StringTable;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalizationHelpers.GetStatText
struct UPortalWarsLocalizationHelpers_GetStatText_Params
{
	struct FString                                     StatName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalizationHelpers.GetErrorText
struct UPortalWarsLocalizationHelpers_GetErrorText_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalPlayer.SetPlayerAvatar
struct UPortalWarsLocalPlayer_SetPlayerAvatar_Params
{
	class UTexture*                                    avatar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalPlayer.OnUserCustomizationsUpdate
struct UPortalWarsLocalPlayer_OnUserCustomizationsUpdate_Params
{
};

// Function PortalWars.PortalWarsLocalPlayer.OnUserChosenCustomizationsUpdate
struct UPortalWarsLocalPlayer_OnUserChosenCustomizationsUpdate_Params
{
};

// Function PortalWars.PortalWarsLocalPlayer.OnDialogClosed
struct UPortalWarsLocalPlayer_OnDialogClosed_Params
{
	class UPortalWarsDialogWidget*                     Dialog;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLocalPlayer.OnCustomizationsLoaded
struct UPortalWarsLocalPlayer_OnCustomizationsLoaded_Params
{
};

// Function PortalWars.PortalWarsLocalPlayer.OnControllerDisconnectedWidgetClosed
struct UPortalWarsLocalPlayer_OnControllerDisconnectedWidgetClosed_Params
{
};

// Function PortalWars.PortalWarsLocalPlayer.LoadUserSaveGame
struct UPortalWarsLocalPlayer_LoadUserSaveGame_Params
{
};

// Function PortalWars.PortalWarsLocalPlayer.GetUserSaveGame
struct UPortalWarsLocalPlayer_GetUserSaveGame_Params
{
	class UPortalWarsSaveGame*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerButtonWidget.GetEquippedTitleText
struct UPortalWarsLockerButtonWidget_GetEquippedTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerEntryWidget.GetRarityIcon
struct UPortalWarsLockerEntryWidget_GetRarityIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerEntryWidget.GetNumSkinsText
struct UPortalWarsLockerEntryWidget_GetNumSkinsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameVisibility
struct UPortalWarsLockerEntryWidget_GetDisplayNameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerEntryWidget.GetDisplayNameText
struct UPortalWarsLockerEntryWidget_GetDisplayNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.RefreshNewItems
struct UPortalWarsLockerSubWidget_RefreshNewItems_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.OnViewButtonClicked
struct UPortalWarsLockerSubWidget_OnViewButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.OnPrevParentEntry
struct UPortalWarsLockerSubWidget_OnPrevParentEntry_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.OnParentEntrySelected
struct UPortalWarsLockerSubWidget_OnParentEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.OnParentEntryScrolledTo
struct UPortalWarsLockerSubWidget_OnParentEntryScrolledTo_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.OnNextParentEntry
struct UPortalWarsLockerSubWidget_OnNextParentEntry_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntrySelected
struct UPortalWarsLockerSubWidget_OnItemEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryScrolledTo
struct UPortalWarsLockerSubWidget_OnItemEntryScrolledTo_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.OnItemEntryDoubleClicked
struct UPortalWarsLockerSubWidget_OnItemEntryDoubleClicked_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.InitParentEntries
struct UPortalWarsLockerSubWidget_InitParentEntries_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.InitItemEntries
struct UPortalWarsLockerSubWidget_InitItemEntries_Params
{
};

// Function PortalWars.PortalWarsLockerSubWidget.GetParentEntryWidget
struct UPortalWarsLockerSubWidget_GetParentEntryWidget_Params
{
	struct FString                                     WidgetId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerSubWidget.GetItemEntryWidget
struct UPortalWarsLockerSubWidget_GetItemEntryWidget_Params
{
	struct FString                                     WidgetId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerWidget.OnLockerButtonSelected
struct UPortalWarsLockerWidget_OnLockerButtonSelected_Params
{
	class UPortalWarsEntryWidget*                      Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLockerWidget.GoToMainState
struct UPortalWarsLockerWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsLockerWidget.GoToInspectState
struct UPortalWarsLockerWidget_GoToInspectState_Params
{
};

// Function PortalWars.PortalWarsLoginMenuWidget.StartLoginFlow
struct UPortalWarsLoginMenuWidget_StartLoginFlow_Params
{
};

// Function PortalWars.PortalWarsLoginMenuWidget.OnUserAdded
struct UPortalWarsLoginMenuWidget_OnUserAdded_Params
{
	int                                                ControllerId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLoginMenuWidget.OnQuitButtonClicked
struct UPortalWarsLoginMenuWidget_OnQuitButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLoginMenuWidget.GoToState
struct UPortalWarsLoginMenuWidget_GoToState_Params
{
	PortalWars_ELoginMenuState                         NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLoginMenuWidget.GetVersionText
struct UPortalWarsLoginMenuWidget_GetVersionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsLoginMenuWidget.DelayedLogin
struct UPortalWarsLoginMenuWidget_DelayedLogin_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.OnStartLootboxSequenceCompleted
struct UPortalWarsLootboxWidget_OnStartLootboxSequenceCompleted_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.OnOpenButtonClicked
struct UPortalWarsLootboxWidget_OnOpenButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.OnLootboxSequenceCompleted
struct UPortalWarsLootboxWidget_OnLootboxSequenceCompleted_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.OnLoopLootboxSequenceCompleted
struct UPortalWarsLootboxWidget_OnLoopLootboxSequenceCompleted_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.OnCatchButtonClicked
struct UPortalWarsLootboxWidget_OnCatchButtonClicked_Params
{
};

// Function PortalWars.PortalWarsLootboxWidget.GoToMainState
struct UPortalWarsLootboxWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.OpenSelectMenu
struct UPortalWarsMainMenuWidget_OpenSelectMenu_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.OnStoreUpdate
struct UPortalWarsMainMenuWidget_OnStoreUpdate_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.OnCustomizationsUpdate
struct UPortalWarsMainMenuWidget_OnCustomizationsUpdate_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.OnChallengesUpdate
struct UPortalWarsMainMenuWidget_OnChallengesUpdate_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToTrainingState
struct UPortalWarsMainMenuWidget_GoToTrainingState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToSocialState
struct UPortalWarsMainMenuWidget_GoToSocialState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToRewardCenterState
struct UPortalWarsMainMenuWidget_GoToRewardCenterState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToReferralPassState
struct UPortalWarsMainMenuWidget_GoToReferralPassState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToPlayState
struct UPortalWarsMainMenuWidget_GoToPlayState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToLootboxState
struct UPortalWarsMainMenuWidget_GoToLootboxState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToLockerState
struct UPortalWarsMainMenuWidget_GoToLockerState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToItemShopState
struct UPortalWarsMainMenuWidget_GoToItemShopState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToChallengesState
struct UPortalWarsMainMenuWidget_GoToChallengesState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToCareerState
struct UPortalWarsMainMenuWidget_GoToCareerState_Params
{
};

// Function PortalWars.PortalWarsMainMenuWidget.GoToBattlePassState
struct UPortalWarsMainMenuWidget_GoToBattlePassState_Params
{
};

// Function PortalWars.PortalWarsMatchCanceledWidget.GetLeavingMapText
struct UPortalWarsMatchCanceledWidget_GetLeavingMapText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsMatchResultWidget.GetTitleText
struct UPortalWarsMatchResultWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNavLink_Jump.OnStateChanged
struct APortalWarsNavLink_Jump_OnStateChanged_Params
{
	class UNavLinkCustomComponent*                     NavLinkComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             NotifyList;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNavLink_Jump.JumpLinkReached
struct APortalWarsNavLink_Jump_JumpLinkReached_Params
{
	class UObject*                                     PathingAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DestPoint;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNeutralCTFGameState.SpawnFlag
struct APortalWarsNeutralCTFGameState_SpawnFlag_Params
{
};

// Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_FlagState
struct APortalWarsNeutralCTFGameState_OnRep_FlagState_Params
{
	PortalWars_EFlagState                              PrevState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNeutralCTFGameState.OnRep_Flag
struct APortalWarsNeutralCTFGameState_OnRep_Flag_Params
{
};

// Function PortalWars.PortalWarsNewsFeedEntryWidget.OnActionButtonClicked
struct UPortalWarsNewsFeedEntryWidget_OnActionButtonClicked_Params
{
};

// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetTitleText
struct UPortalWarsNewsFeedEntryWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetDescriptionText
struct UPortalWarsNewsFeedEntryWidget_GetDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNewsFeedEntryWidget.GetActionTitleText
struct UPortalWarsNewsFeedEntryWidget_GetActionTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNewsFeedWidget.RefreshWidget
struct UPortalWarsNewsFeedWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsNewsFeedWidget.OnActionButtonClicked
struct UPortalWarsNewsFeedWidget_OnActionButtonClicked_Params
{
};

// Function PortalWars.PortalWarsNotificationManager.QueueError
struct UPortalWarsNotificationManager_QueueError_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OpenNoticeDialog
struct UPortalWarsNotificationManager_OpenNoticeDialog_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OpenErrorDialog
struct UPortalWarsNotificationManager_OpenErrorDialog_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnSessionQueryError
struct UPortalWarsNotificationManager_OnSessionQueryError_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnRewardsReceived
struct UPortalWarsNotificationManager_OnRewardsReceived_Params
{
	struct FString                                     Type;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardData>                         Rewards;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnRankUpdate
struct UPortalWarsNotificationManager_OnRankUpdate_Params
{
	struct FUserRankUpdate                             Data;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnProgressionUpdate
struct UPortalWarsNotificationManager_OnProgressionUpdate_Params
{
	struct FUserProgressionUpdate                      Data;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnProgressionMatchUpdate
struct UPortalWarsNotificationManager_OnProgressionMatchUpdate_Params
{
	struct FUserProgressionUpdate                      Data;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnPostGameStats
struct UPortalWarsNotificationManager_OnPostGameStats_Params
{
	TArray<struct FUserPostGameStat>                   Data;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnPlaylistActiveUpdate
struct UPortalWarsNotificationManager_OnPlaylistActiveUpdate_Params
{
	struct FString                                     PlaylistType;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnPartyError
struct UPortalWarsNotificationManager_OnPartyError_Params
{
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnLimitedTimeOfferReceived
struct UPortalWarsNotificationManager_OnLimitedTimeOfferReceived_Params
{
	struct FStoreCategoryInfo                          LimitedTimeOffer;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnHappyHourStatusUpdate
struct UPortalWarsNotificationManager_OnHappyHourStatusUpdate_Params
{
};

// Function PortalWars.PortalWarsNotificationManager.OnGameSessionReconnectAvailable
struct UPortalWarsNotificationManager_OnGameSessionReconnectAvailable_Params
{
	struct FString                                     GameSessionId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationMs;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnDailyPlayStreakIncreased
struct UPortalWarsNotificationManager_OnDailyPlayStreakIncreased_Params
{
	struct FUserDailyStreakInfo                        Data;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.OnChallengesUpdated
struct UPortalWarsNotificationManager_OnChallengesUpdated_Params
{
	TArray<struct FUserChallengeUpdate>                Challenges;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.GetRewardReceivedWidgetForType
struct UPortalWarsNotificationManager_GetRewardReceivedWidgetForType_Params
{
	struct FString                                     TypeString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPortalWarsRewardReceivedWidget*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.GetPostGameOverviewWidget
struct UPortalWarsNotificationManager_GetPostGameOverviewWidget_Params
{
	class UPortalWarsPostGameOverviewWidget*           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationManager.GetChallengeDialogWidget
struct UPortalWarsNotificationManager_GetChallengeDialogWidget_Params
{
	class UPortalWarsChallengeDialogWidget*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationOverlayWidget.OnInviteRecieved
struct UPortalWarsNotificationOverlayWidget_OnInviteRecieved_Params
{
	struct FInviteInfo                                 Invite;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestReceived
struct UPortalWarsNotificationOverlayWidget_OnFriendRequestReceived_Params
{
	struct FFriendRequestInfo                          Request;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationOverlayWidget.OnFriendRequestAccepted
struct UPortalWarsNotificationOverlayWidget_OnFriendRequestAccepted_Params
{
	struct FFriendRequestInfo                          Request;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsNotificationOverlayWidget.CheckChunkIntallStatus
struct UPortalWarsNotificationOverlayWidget_CheckChunkIntallStatus_Params
{
};

// Function PortalWars.PortalWarsOddballGameState.OnRep_OddballState
struct APortalWarsOddballGameState_OnRep_OddballState_Params
{
	PortalWars_EBallState                              PrevBallState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsOddballGameState.OnRep_Oddball
struct APortalWarsOddballGameState_OnRep_Oddball_Params
{
};

// Function PortalWars.PortalWarsOddballIndicator.SetControllingTeam
struct UPortalWarsOddballIndicator_SetControllingTeam_Params
{
	int                                                NewControllingTeam;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsOddballIndicator.GetIndicatorBackground
struct UPortalWarsOddballIndicator_GetIndicatorBackground_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyEntryWidget.OnUnhovered_BP
struct UPortalWarsPartyEntryWidget_OnUnhovered_BP_Params
{
};

// Function PortalWars.PortalWarsPartyEntryWidget.OnInviteButtonClicked
struct UPortalWarsPartyEntryWidget_OnInviteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPartyEntryWidget.OnHovered_BP
struct UPortalWarsPartyEntryWidget_OnHovered_BP_Params
{
};

// Function PortalWars.PortalWarsPartyEntryWidget.OnEndHoverCharacter
struct UPortalWarsPartyEntryWidget_OnEndHoverCharacter_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyEntryWidget.OnBeginHoverCharacter
struct UPortalWarsPartyEntryWidget_OnBeginHoverCharacter_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyEntryWidget.GetLeaderVisibility
struct UPortalWarsPartyEntryWidget_GetLeaderVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyEntryWidget.GetInviteVisibility
struct UPortalWarsPartyEntryWidget_GetInviteVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyEntryWidget.CanInviteToParty
struct UPortalWarsPartyEntryWidget_CanInviteToParty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyInspectWidget.ViewProfile
struct UPortalWarsPartyInspectWidget_ViewProfile_Params
{
};

// Function PortalWars.PortalWarsPartyInspectWidget.RefreshWidget
struct UPortalWarsPartyInspectWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsPartyInspectWidget.PromoteToLeader
struct UPortalWarsPartyInspectWidget_PromoteToLeader_Params
{
};

// Function PortalWars.PortalWarsPartyInspectWidget.KickFromParty
struct UPortalWarsPartyInspectWidget_KickFromParty_Params
{
};

// Function PortalWars.PortalWarsPartyInspectWidget.GetLeaderOptionsVisibility
struct UPortalWarsPartyInspectWidget_GetLeaderOptionsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPartyWidget.OnPartyUpdate
struct UPortalWarsPartyWidget_OnPartyUpdate_Params
{
};

// Function PortalWars.PortalWarsPartyWidget.OnMouseClicked
struct UPortalWarsPartyWidget_OnMouseClicked_Params
{
};

// Function PortalWars.PortalWarsPartyWidget.OnInviteSelected
struct UPortalWarsPartyWidget_OnInviteSelected_Params
{
};

// Function PortalWars.PortalWarsPartyWidget.OnEntrySelected
struct UPortalWarsPartyWidget_OnEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.OnRestartStageButtonClicked
struct UPortalWarsPauseMenuWidget_OnRestartStageButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.OnRestartRaceButtonClicked
struct UPortalWarsPauseMenuWidget_OnRestartRaceButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.OnPauseActionPressed
struct UPortalWarsPauseMenuWidget_OnPauseActionPressed_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.OnEndMatchButtonClicked
struct UPortalWarsPauseMenuWidget_OnEndMatchButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.GoToSettingsState
struct UPortalWarsPauseMenuWidget_GoToSettingsState_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.GoToQuitState
struct UPortalWarsPauseMenuWidget_GoToQuitState_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.GoToPlayersState
struct UPortalWarsPauseMenuWidget_GoToPlayersState_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.GoToMainState
struct UPortalWarsPauseMenuWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetRestartStageVisibility
struct UPortalWarsPauseMenuWidget_GetRestartStageVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetRestartRaceVisibility
struct UPortalWarsPauseMenuWidget_GetRestartRaceVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetPlayersButtonVisibility
struct UPortalWarsPauseMenuWidget_GetPlayersButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonVisibility
struct UPortalWarsPauseMenuWidget_GetExitButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetExitButtonEnabled
struct UPortalWarsPauseMenuWidget_GetExitButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPauseMenuWidget.GetEndMatchButtonVisibility
struct UPortalWarsPauseMenuWidget_GetEndMatchButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerEntrySelected
struct UPortalWarsPausePlayersMenuWidget_OnPlayerEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPausePlayersMenuWidget.OnPlayerArrayChanged
struct UPortalWarsPausePlayersMenuWidget_OnPlayerArrayChanged_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPickupIndicatorWidget.GetPickupNameText
struct UPortalWarsPickupIndicatorWidget_GetPickupNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPickupIndicatorWidget.GetActionKey
struct UPortalWarsPickupIndicatorWidget_GetActionKey_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeVisibility
struct UPortalWarsPickupZoneIndicator_GetTimeVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPickupZoneIndicator.GetTimeRemainingText
struct UPortalWarsPickupZoneIndicator_GetTimeRemainingText_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshMuteButton
struct UPortalWarsPlayerActionsWidget_RefreshMuteButton_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshInviteButtons
struct UPortalWarsPlayerActionsWidget_RefreshInviteButtons_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshFriendButtons
struct UPortalWarsPlayerActionsWidget_RefreshFriendButtons_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.RefreshBlockButtons
struct UPortalWarsPlayerActionsWidget_RefreshBlockButtons_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnViewProfileButtonClicked
struct UPortalWarsPlayerActionsWidget_OnViewProfileButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnUnblockButtonClicked
struct UPortalWarsPlayerActionsWidget_OnUnblockButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnRemoveFriendButtonClicked
struct UPortalWarsPlayerActionsWidget_OnRemoveFriendButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnPartyInviteButtonClicked
struct UPortalWarsPlayerActionsWidget_OnPartyInviteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnMuteButtonClicked
struct UPortalWarsPlayerActionsWidget_OnMuteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnKickButtonClicked
struct UPortalWarsPlayerActionsWidget_OnKickButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnGameInviteButtonClicked
struct UPortalWarsPlayerActionsWidget_OnGameInviteButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnFriendsListUpdate
struct UPortalWarsPlayerActionsWidget_OnFriendsListUpdate_Params
{
	int                                                LocalUserNum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ListName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorStr;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnBlockButtonClicked
struct UPortalWarsPlayerActionsWidget_OnBlockButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.OnAddFriendButtonClicked
struct UPortalWarsPlayerActionsWidget_OnAddFriendButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GoToReportState
struct UPortalWarsPlayerActionsWidget_GoToReportState_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GoToMainState
struct UPortalWarsPlayerActionsWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetViewProfileButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetViewProfileButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetViewProfileButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetUnblockButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetUnblockButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetUnblockButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetReportButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetReportButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetReportButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetRemoveFriendButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetRemoveFriendButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetRemoveFriendButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetPartyInviteButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetPartyInviteButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetPartyInviteButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetMuteButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetMuteButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetMuteButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetKickButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetKickButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetKickButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetGameInviteButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetGameInviteButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetGameInviteButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetBlockButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetBlockButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetBlockButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonVisibility
struct UPortalWarsPlayerActionsWidget_GetAddFriendButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerActionsWidget.GetAddFriendButtonEnabled
struct UPortalWarsPlayerActionsWidget_GetAddFriendButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnSettingsButtonClicked
struct UPortalWarsPlayerCardWidget_OnSettingsButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnPlayStreakButtonClicked
struct UPortalWarsPlayerCardWidget_OnPlayStreakButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnNotificationButtonClicked
struct UPortalWarsPlayerCardWidget_OnNotificationButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnLockerButtonClicked
struct UPortalWarsPlayerCardWidget_OnLockerButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnCurrencyButtonClicked
struct UPortalWarsPlayerCardWidget_OnCurrencyButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.OnCareerButtonClicked
struct UPortalWarsPlayerCardWidget_OnCareerButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayerCardWidget.GetStreakText
struct UPortalWarsPlayerCardWidget_GetStreakText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerCardWidget.GetRepairIndicatorVisibility
struct UPortalWarsPlayerCardWidget_GetRepairIndicatorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerCardWidget.GetNotificationIndicatorVisibility
struct UPortalWarsPlayerCardWidget_GetNotificationIndicatorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerCardWidget.GetCurrencyText
struct UPortalWarsPlayerCardWidget_GetCurrencyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayerCardWidget.GetAlloyText
struct UPortalWarsPlayerCardWidget_GetAlloyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistActiveDialog.OnQueueButtonClicked
struct UPortalWarsPlaylistActiveDialog_OnQueueButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlaylistActiveDialog.GetXPBoostText
struct UPortalWarsPlaylistActiveDialog_GetXPBoostText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistActiveDialog.GetTitleText
struct UPortalWarsPlaylistActiveDialog_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistActiveDialog.GetQueueButtonEnabled
struct UPortalWarsPlaylistActiveDialog_GetQueueButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistActiveDialog.GetDescriptionText
struct UPortalWarsPlaylistActiveDialog_GetDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostText
struct UPortalWarsPlaylistEntryWidget_GetXPBoostText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetXPBoostIndicatorVisibility
struct UPortalWarsPlaylistEntryWidget_GetXPBoostIndicatorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetTitleText
struct UPortalWarsPlaylistEntryWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankXPText
struct UPortalWarsPlaylistEntryWidget_GetRankXPText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankVisibility
struct UPortalWarsPlaylistEntryWidget_GetRankVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetRankIcon
struct UPortalWarsPlaylistEntryWidget_GetRankIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteTextVisibility
struct UPortalWarsPlaylistEntryWidget_GetNoteTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetNoteText
struct UPortalWarsPlaylistEntryWidget_GetNoteText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistEntryWidget.GetDescriptionText
struct UPortalWarsPlaylistEntryWidget_GetDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetTitleText
struct UPortalWarsPlaylistGameModeEntry_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteTextVisibility
struct UPortalWarsPlaylistGameModeEntry_GetNoteTextVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetNoteText
struct UPortalWarsPlaylistGameModeEntry_GetNoteText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistGameModeEntry.GetButtonStyle
struct UPortalWarsPlaylistGameModeEntry_GetButtonStyle_Params
{
	struct FButtonStyle                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistGameModeSelect.RefreshGameModes
struct UPortalWarsPlaylistGameModeSelect_RefreshGameModes_Params
{
};

// Function PortalWars.PortalWarsPlaylistGameModeSelect.OnPlayButtonClicked
struct UPortalWarsPlaylistGameModeSelect_OnPlayButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlaylistGameModeSelect.OnGameModeEntryHovered
struct UPortalWarsPlaylistGameModeSelect_OnGameModeEntryHovered_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshPlaylists
struct UPortalWarsPlaylistSelectWidget_RefreshPlaylists_Params
{
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.RefreshNoteText
struct UPortalWarsPlaylistSelectWidget_RefreshNoteText_Params
{
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistEntrySelected
struct UPortalWarsPlaylistSelectWidget_OnPlaylistEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.OnPlaylistCustomizeSelected
struct UPortalWarsPlaylistSelectWidget_OnPlaylistCustomizeSelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.GoToSelectionState
struct UPortalWarsPlaylistSelectWidget_GoToSelectionState_Params
{
};

// Function PortalWars.PortalWarsPlaylistSelectWidget.GoToMainState
struct UPortalWarsPlaylistSelectWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsPlayStreakDialogWidget.RefreshRewards
struct UPortalWarsPlayStreakDialogWidget_RefreshRewards_Params
{
};

// Function PortalWars.PortalWarsPlayStreakDialogWidget.GetCurrencyText
struct UPortalWarsPlayStreakDialogWidget_GetCurrencyText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayStreakRewardWidget.GetSeparatorVisibility
struct UPortalWarsPlayStreakRewardWidget_GetSeparatorVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPlayWidget.OnRewardCenterButtonClicked
struct UPortalWarsPlayWidget_OnRewardCenterButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPlayWidget.OnPartyUpdate
struct UPortalWarsPlayWidget_OnPartyUpdate_Params
{
};

// Function PortalWars.PortalWarsPlayWidget.OnClientSessionStateChanged
struct UPortalWarsPlayWidget_OnClientSessionStateChanged_Params
{
};

// Function PortalWars.PortalWarsPlayWidget.GoToSelectionState
struct UPortalWarsPlayWidget_GoToSelectionState_Params
{
};

// Function PortalWars.PortalWarsPlayWidget.GoToMainState
struct UPortalWarsPlayWidget_GoToMainState_Params
{
};

// Function PortalWars.PortalWarsPlayWidget.CancelMatchmaking
struct UPortalWarsPlayWidget_CancelMatchmaking_Params
{
};

// Function PortalWars.PortalWarsPortalIndicatorWidget.GetScrimImage
struct UPortalWarsPortalIndicatorWidget_GetScrimImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPortalIndicatorWidget.GetIndicatorImage
struct UPortalWarsPortalIndicatorWidget_GetIndicatorImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.PlaySecondaryAnimation
struct UPortalWarsPostGameCardWidget_PlaySecondaryAnimation_Params
{
};

// Function PortalWars.PortalWarsPostGameCardWidget.PlayFadeInAnimation
struct UPortalWarsPostGameCardWidget_PlayFadeInAnimation_Params
{
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetValueText
struct UPortalWarsPostGameCardWidget_GetValueText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetTypeText
struct UPortalWarsPostGameCardWidget_GetTypeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetTypeColor
struct UPortalWarsPostGameCardWidget_GetTypeColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetMedalVisibility
struct UPortalWarsPostGameCardWidget_GetMedalVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetMedalImage
struct UPortalWarsPostGameCardWidget_GetMedalImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgVisibility
struct UPortalWarsPostGameCardWidget_GetLifetimeAvgVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgText
struct UPortalWarsPostGameCardWidget_GetLifetimeAvgText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetLifetimeAvgColor
struct UPortalWarsPostGameCardWidget_GetLifetimeAvgColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIconVisibility
struct UPortalWarsPostGameCardWidget_GetIncreaseIconVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetIncreaseIcon
struct UPortalWarsPostGameCardWidget_GetIncreaseIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameCardWidget.GetBackgroundImage
struct UPortalWarsPostGameCardWidget_GetBackgroundImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshWidget
struct UPortalWarsPostGameLobbyWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshRequeueButton
struct UPortalWarsPostGameLobbyWidget_RefreshRequeueButton_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshReadyButton
struct UPortalWarsPostGameLobbyWidget_RefreshReadyButton_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.RefreshItemShopButton
struct UPortalWarsPostGameLobbyWidget_RefreshItemShopButton_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.OnRequeueButtonClicked
struct UPortalWarsPostGameLobbyWidget_OnRequeueButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.OnReadyButtonClicked
struct UPortalWarsPostGameLobbyWidget_OnReadyButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.OnItemShopButtonClicked
struct UPortalWarsPostGameLobbyWidget_OnItemShopButtonClicked_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.InitPrevGameInfo
struct UPortalWarsPostGameLobbyWidget_InitPrevGameInfo_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.InitPlayerState
struct UPortalWarsPostGameLobbyWidget_InitPlayerState_Params
{
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerScoreText
struct UPortalWarsPostGameLobbyWidget_GetWinnerScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetWinnerNameText
struct UPortalWarsPostGameLobbyWidget_GetWinnerNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerVisibility
struct UPortalWarsPostGameLobbyWidget_GetTimerVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetTimerText
struct UPortalWarsPostGameLobbyWidget_GetTimerText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetRequeueButtonEnabled
struct UPortalWarsPostGameLobbyWidget_GetRequeueButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetReadyButtonEnabled
struct UPortalWarsPostGameLobbyWidget_GetReadyButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetModeNameText
struct UPortalWarsPostGameLobbyWidget_GetModeNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetMapNameText
struct UPortalWarsPostGameLobbyWidget_GetMapNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetItemShopButtonEnabled
struct UPortalWarsPostGameLobbyWidget_GetItemShopButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetBravoScoreText
struct UPortalWarsPostGameLobbyWidget_GetBravoScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameLobbyWidget.GetAlphaScoreText
struct UPortalWarsPostGameLobbyWidget_GetAlphaScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameOverviewWidget.StartXpAnimation
struct UPortalWarsPostGameOverviewWidget_StartXpAnimation_Params
{
};

// Function PortalWars.PortalWarsPostGameOverviewWidget.ProcessNextBoostAllocation
struct UPortalWarsPostGameOverviewWidget_ProcessNextBoostAllocation_Params
{
};

// Function PortalWars.PortalWarsPostGameOverviewWidget.InitCards
struct UPortalWarsPostGameOverviewWidget_InitCards_Params
{
};

// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerScore
struct UPortalWarsPostGamePlayerEntry_GetPlayerScore_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerName
struct UPortalWarsPostGamePlayerEntry_GetPlayerName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerKills
struct UPortalWarsPostGamePlayerEntry_GetPlayerKills_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGamePlayerEntry.GetPlayerDeaths
struct UPortalWarsPostGamePlayerEntry_GetPlayerDeaths_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGamePlayerEntry.GetDamageDealt
struct UPortalWarsPostGamePlayerEntry_GetDamageDealt_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameStatsWidget.GetTeamVisibility
struct UPortalWarsPostGameStatsWidget_GetTeamVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameStatsWidget.GetFFAVisibility
struct UPortalWarsPostGameStatsWidget_GetFFAVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameStatsWidget.GetBravoTeamScoreText
struct UPortalWarsPostGameStatsWidget_GetBravoTeamScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostGameStatsWidget.GetAlphaTeamScoreText
struct UPortalWarsPostGameStatsWidget_GetAlphaTeamScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostPlayerController.ServerReadyForNextMatch
struct APortalWarsPostPlayerController_ServerReadyForNextMatch_Params
{
	bool                                               InIsReady;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPostPlayerController.OnClientSessionStateChanged
struct APortalWarsPostPlayerController_OnClientSessionStateChanged_Params
{
};

// Function PortalWars.PortalWarsPostPlayerController.ClientRequeueMatchmaking
struct APortalWarsPostPlayerController_ClientRequeueMatchmaking_Params
{
};

// Function PortalWars.PortalWarsPostPlayerController.ClientNotifyContinueLobbyCompleted
struct APortalWarsPostPlayerController_ClientNotifyContinueLobbyCompleted_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FErrorInfo                                  ErrorInfo;                                                 // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsPrivacySettingsWidget.RefreshCrossplaySetting
struct UPortalWarsPrivacySettingsWidget_RefreshCrossplaySetting_Params
{
};

// Function PortalWars.PortalWarsPrivacySettingsWidget.OnCrossplayValueChanged
struct UPortalWarsPrivacySettingsWidget_OnCrossplayValueChanged_Params
{
};

// Function PortalWars.PortalWarsProgressRadialWidget.SetPercent
struct UPortalWarsProgressRadialWidget_SetPercent_Params
{
	float                                              InPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsProgressRadialWidget.GetPercent
struct UPortalWarsProgressRadialWidget_GetPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsQuitMenuWidget.OnQuitButtonClicked
struct UPortalWarsQuitMenuWidget_OnQuitButtonClicked_Params
{
};

// Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptWarningButtonClicked
struct UPortalWarsQuitMenuWidget_OnAcceptWarningButtonClicked_Params
{
};

// Function PortalWars.PortalWarsQuitMenuWidget.OnAcceptCheckBoxValueChanged
struct UPortalWarsQuitMenuWidget_OnAcceptCheckBoxValueChanged_Params
{
};

// Function PortalWars.PortalWarsQuitMenuWidget.GetWarningMessageVisibility
struct UPortalWarsQuitMenuWidget_GetWarningMessageVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsQuitMenuWidget.GetQuitButtonEnabled
struct UPortalWarsQuitMenuWidget_GetQuitButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceGameMode.InitRace
struct APortalWarsRaceGameMode_InitRace_Params
{
};

// Function PortalWars.PortalWarsRaceGate.OnOverlap
struct APortalWarsRaceGate_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceHUDOverlay.SetRecordHolderName
struct UPortalWarsRaceHUDOverlay_SetRecordHolderName_Params
{
	struct FString                                     InName;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceHUDOverlay.GetRecordTimeText
struct UPortalWarsRaceHUDOverlay_GetRecordTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceHUDOverlay.GetMapNameText
struct UPortalWarsRaceHUDOverlay_GetMapNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentTimeText
struct UPortalWarsRaceHUDOverlay_GetCurrentTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceHUDOverlay.GetCurrentGateNumText
struct UPortalWarsRaceHUDOverlay_GetCurrentGateNumText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceLeaderboardEntry.GetTimeText
struct UPortalWarsRaceLeaderboardEntry_GetTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceLeaderboardWidget.RefreshLeaderboard
struct UPortalWarsRaceLeaderboardWidget_RefreshLeaderboard_Params
{
};

// Function PortalWars.PortalWarsRaceLeaderboardWidget.OnTypeSelectionChanged
struct UPortalWarsRaceLeaderboardWidget_OnTypeSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceLeaderboardWidget.GetSelectedTypeText
struct UPortalWarsRaceLeaderboardWidget_GetSelectedTypeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceLeaderboardWidget.GetMapNameText
struct UPortalWarsRaceLeaderboardWidget_GetMapNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceLobbyWidget.OnSwitchLeaderboardButtonClicked
struct UPortalWarsRaceLobbyWidget_OnSwitchLeaderboardButtonClicked_Params
{
};

// Function PortalWars.PortalWarsRaceMatchResultWidget.GetMapNameText
struct UPortalWarsRaceMatchResultWidget_GetMapNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceMatchResultWidget.GetFinalTimeText
struct UPortalWarsRaceMatchResultWidget_GetFinalTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardWidget.GetTeamVisibility
struct UPortalWarsScoreboardWidget_GetTeamVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardWidget.GetStatsVisibility
struct UPortalWarsScoreboardWidget_GetStatsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardWidget.GetScoreVisibility
struct UPortalWarsScoreboardWidget_GetScoreVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardWidget.GetFFAVisibility
struct UPortalWarsScoreboardWidget_GetFFAVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceScoreboardWidget.SetRecordHolderName
struct UPortalWarsRaceScoreboardWidget_SetRecordHolderName_Params
{
	struct FString                                     InName;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceScoreboardWidget.GetRecordTimeText
struct UPortalWarsRaceScoreboardWidget_GetRecordTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRaceScoreboardWidget.GetCurrentTimeText
struct UPortalWarsRaceScoreboardWidget_GetCurrentTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRadarMarkerWidget.InitPlayerInfo
struct UPortalWarsRadarMarkerWidget_InitPlayerInfo_Params
{
};

// Function PortalWars.PortalWarsRadioGroupWidget.OnEntrySelected
struct UPortalWarsRadioGroupWidget_OnEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankLeaderboardWidget.RefreshLeaderboard
struct UPortalWarsRankLeaderboardWidget_RefreshLeaderboard_Params
{
};

// Function PortalWars.PortalWarsRankLeaderboardWidget.OnPlaylistSelectionChanged
struct UPortalWarsRankLeaderboardWidget_OnPlaylistSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankLeaderboardWidget.OnChangePlaylistClicked
struct UPortalWarsRankLeaderboardWidget_OnChangePlaylistClicked_Params
{
};

// Function PortalWars.PortalWarsRankLeaderboardWidget.GetSelectedPlaylistText
struct UPortalWarsRankLeaderboardWidget_GetSelectedPlaylistText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankListEntryWidget.GetRankXPText
struct UPortalWarsRankListEntryWidget_GetRankXPText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankListEntryWidget.GetRankNameText
struct UPortalWarsRankListEntryWidget_GetRankNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankUpdateWidget.PlayRankUpSound
struct UPortalWarsRankUpdateWidget_PlayRankUpSound_Params
{
};

// Function PortalWars.PortalWarsRankUpdateWidget.PlayRankDownSound
struct UPortalWarsRankUpdateWidget_PlayRankDownSound_Params
{
};

// Function PortalWars.PortalWarsRankUpdateWidget.GetRankXPText
struct UPortalWarsRankUpdateWidget_GetRankXPText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRankUpdateWidget.GetRankNameText
struct UPortalWarsRankUpdateWidget_GetRankNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRecentPlayersWidget.RefreshPlayersList
struct UPortalWarsRecentPlayersWidget_RefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsRecentPlayersWidget.OnPlayerEntrySelected
struct UPortalWarsRecentPlayersWidget_OnPlayerEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRecentPlayersWidget.GetRefreshButtonEnabled
struct UPortalWarsRecentPlayersWidget_GetRefreshButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRecentPlayersWidget.DelayedRefreshPlayersList
struct UPortalWarsRecentPlayersWidget_DelayedRefreshPlayersList_Params
{
};

// Function PortalWars.PortalWarsRedeemKeyDialogWidget.OnKeyInputChanged
struct UPortalWarsRedeemKeyDialogWidget_OnKeyInputChanged_Params
{
	struct FText                                       newText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReferFriendWidget.OnReferralPassButtonClicked
struct UPortalWarsReferFriendWidget_OnReferralPassButtonClicked_Params
{
};

// Function PortalWars.PortalWarsReferFriendWidget.OnReferralCodeTextChanged
struct UPortalWarsReferFriendWidget_OnReferralCodeTextChanged_Params
{
	struct FText                                       newText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReferFriendWidget.OnReferFriendUpdate
struct UPortalWarsReferFriendWidget_OnReferFriendUpdate_Params
{
};

// Function PortalWars.PortalWarsReferFriendWidget.OnCopyButtonClicked
struct UPortalWarsReferFriendWidget_OnCopyButtonClicked_Params
{
};

// Function PortalWars.PortalWarsReferFriendWidget.OnConfirmButtonClicked
struct UPortalWarsReferFriendWidget_OnConfirmButtonClicked_Params
{
};

// Function PortalWars.PortalWarsRenameReplayDialogWidget.OnNameValueChanged
struct UPortalWarsRenameReplayDialogWidget_OnNameValueChanged_Params
{
};

// Function PortalWars.PortalWarsReplayEntryWidget.GetReplayLengthText
struct UPortalWarsReplayEntryWidget_GetReplayLengthText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayEntryWidget.GetReplayDateText
struct UPortalWarsReplayEntryWidget_GetReplayDateText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.ToggleReplayPausedState
struct UPortalWarsReplayHUDOverlayWidget_ToggleReplayPausedState_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.RefreshPlayButton_BP
struct UPortalWarsReplayHUDOverlayWidget_RefreshPlayButton_BP_Params
{
	bool                                               bIsPlaying;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.PlayOneFrame
struct UPortalWarsReplayHUDOverlayWidget_PlayOneFrame_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeValueChanged
struct UPortalWarsReplayHUDOverlayWidget_OnTimeValueChanged_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureEnd
struct UPortalWarsReplayHUDOverlayWidget_OnTimeMouseCaptureEnd_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnTimeMouseCaptureBegin
struct UPortalWarsReplayHUDOverlayWidget_OnTimeMouseCaptureBegin_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnReplayCameraModeChanged
struct UPortalWarsReplayHUDOverlayWidget_OnReplayCameraModeChanged_Params
{
	PortalWars_EReplayCameraMode                       NewReplayCameraMode;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayRateSelectionChanged
struct UPortalWarsReplayHUDOverlayWidget_OnPlayRateSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnPlayerListChanged
struct UPortalWarsReplayHUDOverlayWidget_OnPlayerListChanged_Params
{
	TArray<class APlayerState*>                        NewPlayerList;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnFocusedPlayerChanged
struct UPortalWarsReplayHUDOverlayWidget_OnFocusedPlayerChanged_Params
{
	class APlayerState*                                NewFocusedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.OnCameraModeSelectionChanged
struct UPortalWarsReplayHUDOverlayWidget_OnCameraModeSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpForward
struct UPortalWarsReplayHUDOverlayWidget_JumpForward_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.JumpBack
struct UPortalWarsReplayHUDOverlayWidget_JumpBack_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.IncreasePlayRate
struct UPortalWarsReplayHUDOverlayWidget_IncreasePlayRate_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.GoToNextCameraMode
struct UPortalWarsReplayHUDOverlayWidget_GoToNextCameraMode_Params
{
};

// Function PortalWars.PortalWarsReplayHUDOverlayWidget.DecreasePlayRate
struct UPortalWarsReplayHUDOverlayWidget_DecreasePlayRate_Params
{
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetSecondaryWeaponImage
struct UPortalWarsScoreboardPlayerWidget_GetSecondaryWeaponImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetRespawnTimeText
struct UPortalWarsScoreboardPlayerWidget_GetRespawnTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPrimaryWeaponImage
struct UPortalWarsScoreboardPlayerWidget_GetPrimaryWeaponImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerScoreText
struct UPortalWarsScoreboardPlayerWidget_GetPlayerScoreText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerKillsText
struct UPortalWarsScoreboardPlayerWidget_GetPlayerKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDeathsText
struct UPortalWarsScoreboardPlayerWidget_GetPlayerDeathsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetPlayerDamageText
struct UPortalWarsScoreboardPlayerWidget_GetPlayerDamageText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetInventoryVisibility
struct UPortalWarsScoreboardPlayerWidget_GetInventoryVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetDeathVisibility
struct UPortalWarsScoreboardPlayerWidget_GetDeathVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetBackgroundImage
struct UPortalWarsScoreboardPlayerWidget_GetBackgroundImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardPlayerWidget.GetArmorCustomizationThumbnail
struct UPortalWarsScoreboardPlayerWidget_GetArmorCustomizationThumbnail_Params
{
};

// Function PortalWars.PortalWarsReplayPlayerWidget.UpdatePlayerNameText
struct UPortalWarsReplayPlayerWidget_UpdatePlayerNameText_Params
{
};

// Function PortalWars.PortalWarsReplayPlayerWidget.OnReplayCameraModeChanged
struct UPortalWarsReplayPlayerWidget_OnReplayCameraModeChanged_Params
{
	PortalWars_EReplayCameraMode                       NewReplayCameraMode;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayPlayerWidget.OnFocusedPlayerChanged
struct UPortalWarsReplayPlayerWidget_OnFocusedPlayerChanged_Params
{
	class APlayerState*                                NewFocusedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplayPlayerWidget.OnButtonClicked
struct UPortalWarsReplayPlayerWidget_OnButtonClicked_Params
{
};

// Function PortalWars.PortalWarsReplaysWidget.RenameSelectedReplay
struct UPortalWarsReplaysWidget_RenameSelectedReplay_Params
{
};

// Function PortalWars.PortalWarsReplaysWidget.RefreshPlayButton
struct UPortalWarsReplaysWidget_RefreshPlayButton_Params
{
};

// Function PortalWars.PortalWarsReplaysWidget.PlaySelectedReplay
struct UPortalWarsReplaysWidget_PlaySelectedReplay_Params
{
};

// Function PortalWars.PortalWarsReplaysWidget.OpenReplayFolder
struct UPortalWarsReplaysWidget_OpenReplayFolder_Params
{
};

// Function PortalWars.PortalWarsReplaysWidget.OnReplayEntrySelected
struct UPortalWarsReplaysWidget_OnReplayEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplaysWidget.GetSelectedVisibility
struct UPortalWarsReplaysWidget_GetSelectedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplaysWidget.GetPlayButtonEnabled
struct UPortalWarsReplaysWidget_GetPlayButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReplaysWidget.DeleteSelectedReplay
struct UPortalWarsReplaysWidget_DeleteSelectedReplay_Params
{
};

// Function PortalWars.PortalWarsReportPlayerWidget.OnReportButtonClicked
struct UPortalWarsReportPlayerWidget_OnReportButtonClicked_Params
{
};

// Function PortalWars.PortalWarsReportPlayerWidget.GetReportTitleText
struct UPortalWarsReportPlayerWidget_GetReportTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReticleWidget.UpdateReticle
struct UPortalWarsReticleWidget_UpdateReticle_Params
{
};

// Function PortalWars.PortalWarsReticleWidget.GetChargeVisibility
struct UPortalWarsReticleWidget_GetChargeVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsReticleWidget.GetChargeProgress
struct UPortalWarsReticleWidget_GetChargeProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardReceivedEntry.PlayRewardSound
struct UPortalWarsRewardReceivedEntry_PlayRewardSound_Params
{
};

// Function PortalWars.PortalWarsRewardReceivedWidget.ShowNextReward
struct UPortalWarsRewardReceivedWidget_ShowNextReward_Params
{
};

// Function PortalWars.PortalWarsRewardReceivedWidget.SetRewardType
struct UPortalWarsRewardReceivedWidget_SetRewardType_Params
{
	PortalWars_ERewardReceivedType                     InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardReceivedWidget.OnRewardEntrySelected
struct UPortalWarsRewardReceivedWidget_OnRewardEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardReceivedWidget.GetPurchasePremiumEnabled
struct UPortalWarsRewardReceivedWidget_GetPurchasePremiumEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRewardReceivedWidget.GetPremiumVisibility
struct UPortalWarsRewardReceivedWidget_GetPremiumVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRoundGameState.OnRep_RoundScore
struct APortalWarsRoundGameState_OnRep_RoundScore_Params
{
};

// Function PortalWars.PortalWarsRoundGameState.OnRep_ElapsedServerTime
struct APortalWarsRoundGameState_OnRep_ElapsedServerTime_Params
{
};

// Function PortalWars.PortalWarsRoundGameState.OnRep_CurrentRound
struct APortalWarsRoundGameState_OnRep_CurrentRound_Params
{
};

// Function PortalWars.PortalWarsRoundHUDOverlayWidget.OnPlayerListChanged
struct UPortalWarsRoundHUDOverlayWidget_OnPlayerListChanged_Params
{
	TArray<class APlayerState*>                        NewPlayerList;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsRoundResultWidget.GetTitleText
struct UPortalWarsRoundResultWidget_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardStatEntry.GetStatValueText
struct UPortalWarsScoreboardStatEntry_GetStatValueText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardStatEntry.GetStatNameText
struct UPortalWarsScoreboardStatEntry_GetStatNameText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalImage
struct UPortalWarsScoreboardStatEntry_GetMedalImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScoreboardStatEntry.GetMedalColor
struct UPortalWarsScoreboardStatEntry_GetMedalColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeOutAnimation
struct UPortalWarsScreenFadeWidget_PlayFadeOutAnimation_Params
{
};

// Function PortalWars.PortalWarsScreenFadeWidget.PlayFadeInAnimation
struct UPortalWarsScreenFadeWidget_PlayFadeInAnimation_Params
{
};

// Function PortalWars.PortalWarsSeasonRewardsWidget.RefreshWidget
struct UPortalWarsSeasonRewardsWidget_RefreshWidget_Params
{
};

// Function PortalWars.PortalWarsServerBrowserWidget.OnServerEntrySelected
struct UPortalWarsServerBrowserWidget_OnServerEntrySelected_Params
{
	class UPortalWarsEntryWidget*                      Entry;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerBrowserWidget.OnJoinButtonClicked
struct UPortalWarsServerBrowserWidget_OnJoinButtonClicked_Params
{
};

// Function PortalWars.PortalWarsServerBrowserWidget.OnCreateButtonClicked
struct UPortalWarsServerBrowserWidget_OnCreateButtonClicked_Params
{
};

// Function PortalWars.PortalWarsServerBrowserWidget.GetSelectedVisibility
struct UPortalWarsServerBrowserWidget_GetSelectedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerBrowserWidget.GetSearchButtonEnabled
struct UPortalWarsServerBrowserWidget_GetSearchButtonEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerBrowserWidget.FindServers
struct UPortalWarsServerBrowserWidget_FindServers_Params
{
};

// Function PortalWars.PortalWarsServerEntryWidget.IsPrivateServer
struct UPortalWarsServerEntryWidget_IsPrivateServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.IsLANServer
struct UPortalWarsServerEntryWidget_IsLANServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetVisibilityText
struct UPortalWarsServerEntryWidget_GetVisibilityText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetSpectatorsText
struct UPortalWarsServerEntryWidget_GetSpectatorsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetServerType
struct UPortalWarsServerEntryWidget_GetServerType_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetServerPassword
struct UPortalWarsServerEntryWidget_GetServerPassword_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetServerName
struct UPortalWarsServerEntryWidget_GetServerName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetRegionName
struct UPortalWarsServerEntryWidget_GetRegionName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetPrivateVisibility
struct UPortalWarsServerEntryWidget_GetPrivateVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetPlayersText
struct UPortalWarsServerEntryWidget_GetPlayersText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetModeName
struct UPortalWarsServerEntryWidget_GetModeName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetMapName
struct UPortalWarsServerEntryWidget_GetMapName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsServerEntryWidget.GetCrossPlayVisibility
struct UPortalWarsServerEntryWidget_GetCrossPlayVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsSpinSliderWidget.OnInputSliderValueChanged
struct UPortalWarsSpinSliderWidget_OnInputSliderValueChanged_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueCommitted
struct UPortalWarsSpinSliderWidget_OnInputBoxValueCommitted_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsSpinSliderWidget.OnInputBoxValueChanged
struct UPortalWarsSpinSliderWidget_OnInputBoxValueChanged_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsSplineRoad.EditorInit
struct APortalWarsSplineRoad_EditorInit_Params
{
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetTripleKillsText
struct UPortalWarsStatsEntryWidget_GetTripleKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetTeabagsText
struct UPortalWarsStatsEntryWidget_GetTeabagsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetSuicidesText
struct UPortalWarsStatsEntryWidget_GetSuicidesText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetQuintKillsText
struct UPortalWarsStatsEntryWidget_GetQuintKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetQuadKillsText
struct UPortalWarsStatsEntryWidget_GetQuadKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetPortalKillsText
struct UPortalWarsStatsEntryWidget_GetPortalKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetMeleeKillsText
struct UPortalWarsStatsEntryWidget_GetMeleeKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak6Text
struct UPortalWarsStatsEntryWidget_GetKillStreak6Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak5Text
struct UPortalWarsStatsEntryWidget_GetKillStreak5Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak4Text
struct UPortalWarsStatsEntryWidget_GetKillStreak4Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak3Text
struct UPortalWarsStatsEntryWidget_GetKillStreak3Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak2Text
struct UPortalWarsStatsEntryWidget_GetKillStreak2Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillStreak1Text
struct UPortalWarsStatsEntryWidget_GetKillStreak1Text_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillsThruPortalText
struct UPortalWarsStatsEntryWidget_GetKillsThruPortalText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKillsText
struct UPortalWarsStatsEntryWidget_GetKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKdText
struct UPortalWarsStatsEntryWidget_GetKdText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetKadText
struct UPortalWarsStatsEntryWidget_GetKadText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetGamesWonText
struct UPortalWarsStatsEntryWidget_GetGamesWonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetGamesPlayedText
struct UPortalWarsStatsEntryWidget_GetGamesPlayedText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetDoubleKillsText
struct UPortalWarsStatsEntryWidget_GetDoubleKillsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetDeathsText
struct UPortalWarsStatsEntryWidget_GetDeathsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetDamageDealtText
struct UPortalWarsStatsEntryWidget_GetDamageDealtText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsEntryWidget.GetAssistsText
struct UPortalWarsStatsEntryWidget_GetAssistsText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsOverviewWidget.OnUserInfoUpdate
struct UPortalWarsStatsOverviewWidget_OnUserInfoUpdate_Params
{
};

// Function PortalWars.PortalWarsStatsOverviewWidget.OnSeasonSelectionChanged
struct UPortalWarsStatsOverviewWidget_OnSeasonSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsOverviewWidget.OnChangeSeasonClicked
struct UPortalWarsStatsOverviewWidget_OnChangeSeasonClicked_Params
{
};

// Function PortalWars.PortalWarsStatsOverviewWidget.GetSeasonText
struct UPortalWarsStatsOverviewWidget_GetSeasonText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.SetAvatar
struct UPortalWarsStatsPlaylistWidget_SetAvatar_Params
{
	class UTexture2D*                                  InAvatar;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.OnUserInfoUpdate
struct UPortalWarsStatsPlaylistWidget_OnUserInfoUpdate_Params
{
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.OnPlaylistSelectionChanged
struct UPortalWarsStatsPlaylistWidget_OnPlaylistSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.OnChangePlaylistClicked
struct UPortalWarsStatsPlaylistWidget_OnChangePlaylistClicked_Params
{
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.GetSelectedPlaylistText
struct UPortalWarsStatsPlaylistWidget_GetSelectedPlaylistText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankXP
struct UPortalWarsStatsPlaylistWidget_GetRankXP_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankName
struct UPortalWarsStatsPlaylistWidget_GetRankName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStatsPlaylistWidget.GetRankedVisibility
struct UPortalWarsStatsPlaylistWidget_GetRankedVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStreakIncreaseWidget.PlayStreakIncreasedSound
struct UPortalWarsStreakIncreaseWidget_PlayStreakIncreasedSound_Params
{
};

// Function PortalWars.PortalWarsStreakIncreaseWidget.OnRepairButtonClicked
struct UPortalWarsStreakIncreaseWidget_OnRepairButtonClicked_Params
{
};

// Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairVisibility
struct UPortalWarsStreakIncreaseWidget_GetRepairVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsStreakIncreaseWidget.GetRepairStreakText
struct UPortalWarsStreakIncreaseWidget_GetRepairStreakText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTakedownPlayerState.OnRep_RespawnTime
struct APortalWarsTakedownPlayerState_OnRep_RespawnTime_Params
{
};

// Function PortalWars.PortalWarsTakedownVIPPlayerState.OnRep_IsVIP
struct APortalWarsTakedownVIPPlayerState_OnRep_IsVIP_Params
{
};

// Function PortalWars.PortalWarsTeabagZone.OnRep_PlayerState
struct APortalWarsTeabagZone_OnRep_PlayerState_Params
{
};

// Function PortalWars.PortalWarsTeabagZone.ChangeMeshColor
struct APortalWarsTeabagZone_ChangeMeshColor_Params
{
};

// Function PortalWars.PortalWarsTextInputWidget.OnTextChanged
struct UPortalWarsTextInputWidget_OnTextChanged_Params
{
	struct FText                                       newText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTrainingWidget.OnTutorialButtonClicked
struct UPortalWarsTrainingWidget_OnTutorialButtonClicked_Params
{
};

// Function PortalWars.PortalWarsTrainingWidget.OnRangeButtonClicked
struct UPortalWarsTrainingWidget_OnRangeButtonClicked_Params
{
};

// Function PortalWars.PortalWarsTrainingWidget.OnRaceButtonClicked
struct UPortalWarsTrainingWidget_OnRaceButtonClicked_Params
{
};

// Function PortalWars.PortalWarsTutorialGoal.OnOverlap
struct APortalWarsTutorialGoal_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTutorialVideoReminderWidget.ShowWidget
struct UPortalWarsTutorialVideoReminderWidget_ShowWidget_Params
{
};

// Function PortalWars.PortalWarsTutorialVideoReminderWidget.HideWidget
struct UPortalWarsTutorialVideoReminderWidget_HideWidget_Params
{
};

// Function PortalWars.PortalWarsTutorialVideoWidget.PlayVideoInternal
struct UPortalWarsTutorialVideoWidget_PlayVideoInternal_Params
{
	int                                                StageID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsTutorialVideoWidget.OnVideoCompleted
struct UPortalWarsTutorialVideoWidget_OnVideoCompleted_Params
{
};

// Function PortalWars.PortalWarsTutorialVideoWidget.OnMediaOpenFailed
struct UPortalWarsTutorialVideoWidget_OnMediaOpenFailed_Params
{
	struct FString                                     FailedUrl;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsUltraDynamicSky.EditorInit
struct APortalWarsUltraDynamicSky_EditorInit_Params
{
};

// Function PortalWars.PortalWarsUnlockDialogWidget.PlayUnlockSound
struct UPortalWarsUnlockDialogWidget_PlayUnlockSound_Params
{
};

// Function PortalWars.PortalWarsUnlockDialogWidget.OnViewButtonClicked
struct UPortalWarsUnlockDialogWidget_OnViewButtonClicked_Params
{
};

// Function PortalWars.PortalWarsUnlockDialogWidget.OnQueueButtonClicked
struct UPortalWarsUnlockDialogWidget_OnQueueButtonClicked_Params
{
};

// Function PortalWars.PortalWarsVIPHUDOverlayWidget.PlayFadeAnimation
struct UPortalWarsVIPHUDOverlayWidget_PlayFadeAnimation_Params
{
};

// Function PortalWars.PortalWarsVIPPlayerState.OnRep_IsVIP
struct APortalWarsVIPPlayerState_OnRep_IsVIP_Params
{
};

// Function PortalWars.PortalWarsVoteEntryWidget.OnVotesUpdated
struct UPortalWarsVoteEntryWidget_OnVotesUpdated_Params
{
};

// Function PortalWars.PortalWarsVoteEntryWidget.InitModeData
struct UPortalWarsVoteEntryWidget_InitModeData_Params
{
};

// Function PortalWars.PortalWarsVoteEntryWidget.InitMapData
struct UPortalWarsVoteEntryWidget_InitMapData_Params
{
};

// Function PortalWars.PortalWarsVoteEntryWidget.GetVotesText
struct UPortalWarsVoteEntryWidget_GetVotesText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsVoteEntryWidget.GetNumVotesText
struct UPortalWarsVoteEntryWidget_GetNumVotesText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsVoteInfo.OnRep_Voters
struct APortalWarsVoteInfo_OnRep_Voters_Params
{
};

// Function PortalWars.PortalWarsVotingGameMode.CreateBotDelayed
struct APortalWarsVotingGameMode_CreateBotDelayed_Params
{
	struct FPendingBotInfo                             BotInfo;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsVotingGameState.OnRep_VoteList
struct APortalWarsVotingGameState_OnRep_VoteList_Params
{
};

// Function PortalWars.PortalWarsVotingMenuWidget.OnMatchStateChanged
struct UPortalWarsVotingMenuWidget_OnMatchStateChanged_Params
{
};

// Function PortalWars.PortalWarsVotingMenuWidget.GetStateDescriptionText
struct UPortalWarsVotingMenuWidget_GetStateDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsVotingMenuWidget.GetRemainingTimeText
struct UPortalWarsVotingMenuWidget_GetRemainingTimeText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsVotingPlayerController.ServerVote
struct APortalWarsVotingPlayerController_ServerVote_Params
{
	class APortalWarsVoteInfo*                         VoteInfo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsWaitingAreaHUDWidget.OnClientSessionStateChanged
struct UPortalWarsWaitingAreaHUDWidget_OnClientSessionStateChanged_Params
{
};

// Function PortalWars.PortalWarsWaitingAreaHUDWidget.GetWaitingAreaPanelVisibility
struct UPortalWarsWaitingAreaHUDWidget_GetWaitingAreaPanelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateEntryWidget.GetXPText
struct UPortalWarsXPUpdateEntryWidget_GetXPText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateEntryWidget.GetTitle
struct UPortalWarsXPUpdateEntryWidget_GetTitle_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationStarted
struct UPortalWarsXPUpdateWidget_OnXPAnimationStarted_Params
{
};

// Function PortalWars.PortalWarsXPUpdateWidget.OnXPAnimationEnded
struct UPortalWarsXPUpdateWidget_OnXPAnimationEnded_Params
{
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetTotalXP
struct UPortalWarsXPUpdateWidget_GetTotalXP_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionTotalText
struct UPortalWarsXPUpdateWidget_GetProgressionTotalText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionProgressText
struct UPortalWarsXPUpdateWidget_GetProgressionProgressText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionMaxLevelVisibility
struct UPortalWarsXPUpdateWidget_GetProgressionMaxLevelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetProgressionLevelUpProgress
struct UPortalWarsXPUpdateWidget_GetProgressionLevelUpProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedProgressionLevel
struct UPortalWarsXPUpdateWidget_GetDisplayedProgressionLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetDisplayedBattlePassLevel
struct UPortalWarsXPUpdateWidget_GetDisplayedBattlePassLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassTotalText
struct UPortalWarsXPUpdateWidget_GetBattlePassTotalText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassProgressText
struct UPortalWarsXPUpdateWidget_GetBattlePassProgressText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassMaxLevelVisibility
struct UPortalWarsXPUpdateWidget_GetBattlePassMaxLevelVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PortalWarsXPUpdateWidget.GetBattlePassLevelUpProgress
struct UPortalWarsXPUpdateWidget_GetBattlePassLevelUpProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PreviewItem.UpdateRenderTargetQuality
struct APreviewItem_UpdateRenderTargetQuality_Params
{
};

// Function PortalWars.PreviewItem.OnCustomizationsLoaded
struct APreviewItem_OnCustomizationsLoaded_Params
{
};

// Function PortalWars.PWKillcamTransitionWidget.PlayFadeOutAnimation
struct UPWKillcamTransitionWidget_PlayFadeOutAnimation_Params
{
};

// Function PortalWars.PWKillcamTransitionWidget.PlayFadeInAnimation
struct UPWKillcamTransitionWidget_PlayFadeInAnimation_Params
{
};

// Function PortalWars.PWReplayPlayerController.ToggleReplayUI
struct APWReplayPlayerController_ToggleReplayUI_Params
{
};

// Function PortalWars.PWReplayPlayerController.ToggleGlobalVision
struct APWReplayPlayerController_ToggleGlobalVision_Params
{
};

// Function PortalWars.PWReplayPlayerController.SetReplayPlayerFocus
struct APWReplayPlayerController_SetReplayPlayerFocus_Params
{
	class APlayerState*                                NewFocusedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.SetPlayerFocusByNumber
struct APWReplayPlayerController_SetPlayerFocusByNumber_Params
{
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.RePause
struct APWReplayPlayerController_RePause_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.OnGoTimeComplete
struct APWReplayPlayerController_OnGoTimeComplete_Params
{
	bool                                               bWasSuccessful;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.OnDemoRecordingComplete
struct APWReplayPlayerController_OnDemoRecordingComplete_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.OnDemoFinishedPlayback
struct APWReplayPlayerController_OnDemoFinishedPlayback_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.NextCameraMode
struct APWReplayPlayerController_NextCameraMode_Params
{
};

// Function PortalWars.PWReplayPlayerController.GetReplayPlayerFocus
struct APWReplayPlayerController_GetReplayPlayerFocus_Params
{
	class APlayerState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWReplayPlayerController.FocusPreviousPlayer
struct APWReplayPlayerController_FocusPreviousPlayer_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer8
struct APWReplayPlayerController_FocusPlayer8_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer7
struct APWReplayPlayerController_FocusPlayer7_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer6
struct APWReplayPlayerController_FocusPlayer6_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer5
struct APWReplayPlayerController_FocusPlayer5_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer4
struct APWReplayPlayerController_FocusPlayer4_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer3
struct APWReplayPlayerController_FocusPlayer3_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer2
struct APWReplayPlayerController_FocusPlayer2_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusPlayer1
struct APWReplayPlayerController_FocusPlayer1_Params
{
};

// Function PortalWars.PWReplayPlayerController.FocusNextPlayer
struct APWReplayPlayerController_FocusNextPlayer_Params
{
};

// Function PortalWars.PWTutorialHUDOverlayWidget.PlayStepPopupAnimation
struct UPWTutorialHUDOverlayWidget_PlayStepPopupAnimation_Params
{
};

// Function PortalWars.PWTutorialHUDOverlayWidget.OnStepLoaded
struct UPWTutorialHUDOverlayWidget_OnStepLoaded_Params
{
	struct FTutorialStepData                           StepData;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWTutorialPlayerController.RestartStageViaInput
struct APWTutorialPlayerController_RestartStageViaInput_Params
{
};

// Function PortalWars.PWTutorialPlayerController.OnResetFloorEffect
struct APWTutorialPlayerController_OnResetFloorEffect_Params
{
};

// Function PortalWars.PWTutorialPlayerController.OnPlayFloorEffect
struct APWTutorialPlayerController_OnPlayFloorEffect_Params
{
};

// Function PortalWars.PWVoiceNotifications.OnPlayerArrayChanged
struct UPWVoiceNotifications_OnPlayerArrayChanged_Params
{
	class APlayerState*                                StateChanged;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PortalWars.PWVoiceNotifications.Init
struct UPWVoiceNotifications_Init_Params
{
};

// Function PortalWars.Shotgun.ServerProcessHits
struct AShotgun_ServerProcessHits_Params
{
	TArray<struct FLineTraceHitResult>                 HitResults;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FLineTraceInfo>                      bulletTracesPacked;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PortalWars.Shotgun.ReloadWeapon_Multicast
struct AShotgun_ReloadWeapon_Multicast_Params
{
	bool                                               ShouldInsert;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
