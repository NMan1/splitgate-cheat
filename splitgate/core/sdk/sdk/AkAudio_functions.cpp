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

// Function AkAudio.AkAcousticPortal.OpenPortal
// (Final, Native, Public, BlueprintCallable)
void AAkAcousticPortal::OpenPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AkAudio_EAkAcousticPortalState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (Final, Native, Public, BlueprintCallable)
void AAkAcousticPortal::ClosePortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void AAkAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void AAkAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");

	UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Order                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.Stop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void UAkComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.Stop");

	UAkComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetUseSpatialAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetUseSpatialAudio(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetUseSpatialAudio");

	UAkComponent_SetUseSpatialAudio_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SwitchState                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Trigger                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");

	UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEvent");

	UAkComponent_PostAssociatedAkEvent_Params params;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");

	UAkComponent_PostAkEventAndWaitForEnd_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEvent");

	UAkComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_ERTPCValueType         InputValueType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_ERTPCValueType         OutputValueType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::GetRTPCValue(const struct FString& RTPC, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetRTPCValue");

	UAkComponent_GetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;

}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkComponent::GetAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");

	UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");

	UAkCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SlateCore_ECheckBoxState       InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");

	UAkCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetAkItemId
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");

	UAkCheckBox_SetAkItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkBoolProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");

	UAkCheckBox_SetAkBoolProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");

	UAkCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");

	UAkCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");

	UAkCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkCheckBox::GetAkProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");

	UAkCheckBox_GetAkProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkCheckBox::GetAkItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");

	UAkCheckBox_GetAkItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Order                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	UAkGameplayStatics_UseEarlyReflections_Params params;
	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankUnloadedCallback           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankAsync");

	UAkGameplayStatics_UnloadBankAsync_Params params;
	params.Bank = Bank;
	params.BankUnloadedCallback = BankUnloadedCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BankName                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopProfilerCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopOutputCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	UAkGameplayStatics_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StopActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartProfilerCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartOutputCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*               EarlyReflectionsBus            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EarlyReflectionsBusName        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
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


// Function AkAudio.AkGameplayStatics.SetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetState(const struct FName& StateGroup, const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	UAkGameplayStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  SpeakerAngles                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          HeightAngle                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSpeakerAngles");

	UAkGameplayStatics_SetSpeakerAngles_Params params;
	params.SpeakerAngles = SpeakerAngles;
	params.HeightAngle = HeightAngle;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AkAudio_EPanningRule           PanRule                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetPanningRule(AkAudio_EPanningRule PanRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	UAkGameplayStatics_SetPanningRule_Params params;
	params.PanRule = PanRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOcclusionScalingFactor(float ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");

	UAkGameplayStatics_SetOcclusionScalingFactor_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RefreshInterval                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	UAkGameplayStatics_SetOcclusionRefreshInterval_Params params;
	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// AkAudio_EAkMultiPositionType   MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");

	UAkGameplayStatics_SetMultiplePositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkChannelMask>  ChannelMasks                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// AkAudio_EAkMultiPositionType   MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions");

	UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<AkAudio_EAkChannelConfiguration> ChannelMasks                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// AkAudio_EAkMultiPositionType   MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");

	UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkChannelConfiguration ChannelConfiguration           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	UAkGameplayStatics_SetBusConfig_Params params;
	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Trigger                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	UAkGameplayStatics_PostTrigger_Params params;
	params.Trigger = Trigger;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");

	UAkGameplayStatics_PostEventAttached_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UseSpatialAudio                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, bool UseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;
	params.UseSpatialAudio = UseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UseSpatialAudio                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, bool UseSpatialAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;
	params.UseSpatialAudio = UseSpatialAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	UAkGameplayStatics_PostEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");

	UAkGameplayStatics_PostAndWaitForEndOfEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.ExternalSources = ExternalSources;
	params.EventName = EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_LoadInitBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankLoadedCallback             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankAsync");

	UAkGameplayStatics_LoadBankAsync_Params params;
	params.Bank = Bank;
	params.BankLoadedCallback = BankLoadedCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BankName                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.IsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::STATIC_IsGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	UAkGameplayStatics_IsGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::STATIC_IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	UAkGameplayStatics_IsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  SpeakerAngles                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                          HeightAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSpeakerAngles");

	UAkGameplayStatics_GetSpeakerAngles_Params params;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = params.SpeakerAngles;
	if (HeightAngle != nullptr)
		*HeightAngle = params.HeightAngle;

}


// Function AkAudio.AkGameplayStatics.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_ERTPCValueType         InputValueType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_ERTPCValueType         OutputValueType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_GetRTPCValue(const struct FName& RTPC, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetRTPCValue");

	UAkGameplayStatics_GetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;

}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkGameplayStatics::STATIC_GetOcclusionScalingFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");

	UAkGameplayStatics_GetOcclusionScalingFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ComponentCreated               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ComponentCreated != nullptr)
		*ComponentCreated = params.ComponentCreated;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// AkAudio_EAkActionOnEventType   ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkCurveInterpolation  FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_ExecuteActionOnPlayingID(AkAudio_EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID");

	UAkGameplayStatics_ExecuteActionOnPlayingID_Params params;
	params.ActionType = ActionType;
	params.PlayingID = PlayingID;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkActionOnEventType   ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkCurveInterpolation  FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkAudio_EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent");

	UAkGameplayStatics_ExecuteActionOnEvent_Params params;
	params.AkEvent = AkEvent;
	params.ActionType = ActionType;
	params.Actor = Actor;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_ClearBanks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.CancelEventCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_CancelEventCallback(const struct FScriptDelegate& PostEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.CancelEventCallback");

	UAkGameplayStatics_CancelEventCallback_Params params;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MarkerText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AkAudio_EAkMidiEventType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");

	UAkMIDIEventCallbackInfo_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiProgramChange    AsProgramChange                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");

	UAkMIDIEventCallbackInfo_GetProgramChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsProgramChange != nullptr)
		*AsProgramChange = params.AsProgramChange;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend        AsPitchBend                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");

	UAkMIDIEventCallbackInfo_GetPitchBend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPitchBend != nullptr)
		*AsPitchBend = params.AsPitchBend;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOn                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");

	UAkMIDIEventCallbackInfo_GetNoteOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOn != nullptr)
		*AsNoteOn = params.AsNoteOn;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOff                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");

	UAkMIDIEventCallbackInfo_GetNoteOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOff != nullptr)
		*AsNoteOff = params.AsNoteOff;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch   AsNoteAftertouch               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");

	UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = params.AsNoteAftertouch;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric          AsGeneric                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");

	UAkMIDIEventCallbackInfo_GetGeneric_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGeneric != nullptr)
		*AsGeneric = params.AsGeneric;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch AsChannelAftertouch            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");

	UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = params.AsChannelAftertouch;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UAkMIDIEventCallbackInfo::GetChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");

	UAkMIDIEventCallbackInfo_GetChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkMidiCc               AsCc                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");

	UAkMIDIEventCallbackInfo_GetCc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCc != nullptr)
		*AsCc = params.AsCc;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemBoolProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");

	UAkItemBoolProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");

	UAkItemBoolProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");

	UAkItemBoolProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");

	UAkItemProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");

	UAkItemProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");

	UAkItemProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");

	UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkLuminInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering");

	UAkLuminInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");

	UAkMacInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering");

	UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkRoomComponent.StartRoomTone
// (Final, Native, Public, BlueprintCallable)
void UAkRoomComponent::StartRoomTone()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.StartRoomTone");

	UAkRoomComponent_StartRoomTone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkRoomComponent.PostEventToRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           EventToPost                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkRoomComponent::PostEventToRoom(class UAkAudioEvent* EventToPost)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.PostEventToRoom");

	UAkRoomComponent_PostEventToRoom_Params params;
	params.EventToPost = EventToPost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");

	UAkSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");

	UAkSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");

	UAkSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");

	UAkSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");

	UAkSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");

	UAkSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");

	UAkSlider_SetAkSliderItemProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");

	UAkSlider_SetAkSliderItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");

	UAkSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkSlider::GetAkSliderItemProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");

	UAkSlider_GetAkSliderItemProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkSlider::GetAkSliderItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");

	UAkSlider_GetAkSliderItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering");

	UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWaapiCalls.Unsubscribe
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  SubscriptionId                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           UnsubscriptionDone             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");

	UAkWaapiCalls_Unsubscribe_Params params;
	params.SubscriptionId = SubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = params.UnsubscriptionDone;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAkWaapiSubscriptionId  SubscriptionId                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           SubscriptionDone               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");

	UAkWaapiCalls_SubscribeToWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiOptions = WaapiOptions;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubscriptionId != nullptr)
		*SubscriptionId = params.SubscriptionId;
	if (SubscriptionDone != nullptr)
		*SubscriptionDone = params.SubscriptionDone;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWaapiCalls::STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");

	UAkWaapiCalls_SetSubscriptionID_Params params;
	params.Subscription = Subscription;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::STATIC_RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");

	UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::STATIC_RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");

	UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiCalls::STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");

	UAkWaapiCalls_GetSubscriptionID_Params params;
	params.Subscription = Subscription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.CallWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiArgs                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");

	UAkWaapiCalls_CallWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiArgs = WaapiArgs;
	params.WaapiOptions = WaapiOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetStringField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 FieldValue                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");

	UAkWaapiJsonManager_SetStringField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      FieldValue                     (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");

	UAkWaapiJsonManager_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          FieldValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");

	UAkWaapiJsonManager_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           FieldValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");

	UAkWaapiJsonManager_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FString>         FieldStringValues              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");

	UAkWaapiJsonManager_SetArrayStringFields_Params params;
	params.FieldName = FieldName;
	params.FieldStringValues = FieldStringValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> FieldObjectValues              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");

	UAkWaapiJsonManager_SetArrayObjectFields_Params params;
	params.FieldName = FieldName;
	params.FieldObjectValues = FieldObjectValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");

	UAkWaapiJsonManager_GetStringField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");

	UAkWaapiJsonManager_GetObjectField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkWaapiJsonManager::STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");

	UAkWaapiJsonManager_GetNumberField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiJsonManager::STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");

	UAkWaapiJsonManager_GetIntegerField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiJsonManager::STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");

	UAkWaapiJsonManager_GetBoolField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");

	UAkWaapiJsonManager_GetArrayField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (Parm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");

	UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");

	UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");

	UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWinGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering");

	UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWwiseTree.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWwiseTree::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");

	UAkWwiseTree_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAkWwiseObjectDetails   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");

	UAkWwiseTree_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWwiseTree::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");

	UAkWwiseTree_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkXboxOneGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering");

	UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering");

	UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkXSXInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering");

	UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
