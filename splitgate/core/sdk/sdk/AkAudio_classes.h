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
// Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAcousticPortal
// 0x0090 (FullSize[0x02E8] - InheritedSize[0x0258])
class AAkAcousticPortal : public AVolume
{
public:
	AkAudio_EAkAcousticPortalState                     InitialState;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MUI[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObstructionRefreshInterval;                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              ObstructionCollisionChannel;                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NVQZ[0x87];                                    // 0x0261(0x0087) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}



	void OpenPortal();
	AkAudio_EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// Class AkAudio.AkPortalComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UAkPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_UNGY[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}



};

// Class AkAudio.AkAcousticTexture
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UAkAcousticTexture : public UPhysicalMaterial
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}



};

// Class AkAudio.AkAmbientSound
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0220(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                AkComponent;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopWhenOwnerIsDestroyed;                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TUZ[0x2E];                                    // 0x0232(0x002E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}



	void StopAmbientSound();
	void StartAmbientSound();
};

// Class AkAudio.AkAndroidInitializationSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDLE[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkAudioBank
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZQO[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}



};

// Class AkAudio.AkAudioEvent
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAttenuationRadius;                                      // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInfinite;                                                // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPYI[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDuration;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDuration;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}



};

// Class AkAudio.AkComponent
// 0x0228 (FullSize[0x0420] - InheritedSize[0x01F8])
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_VO16[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                     // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EarlyReflectionAuxBusName;                                 // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EarlyReflectionOrder;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarlyReflectionBusSendGain;                                // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarlyReflectionMaxPathLength;                              // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OcclusionCollisionChannel;                                 // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G380[0x7];                                     // 0x0225(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EnableSpotReflectors : 1;                                  // 0x022C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JBU[0x3];                                     // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              roomReverbAuxBusGain;                                      // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffractionMaxEdges;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffractionMaxPaths;                                       // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              diffractionMaxPathLength;                                  // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawFirstOrderReflections : 1;                             // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawSecondOrderReflections : 1;                            // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawHigherOrderReflections : 1;                            // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawDiffraction : 1;                                       // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYH6[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               StopWhenOwnerDestroyed;                                    // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLSF[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttenuationScalingFactor;                                  // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionRefreshInterval;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseReverbVolumes;                                         // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U77K[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKZV[0x170];                                   // 0x0270(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoManageAttachment : 1;                                 // 0x03E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachLocationRule;                                    // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachRotationRule;                                    // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachScaleRule;                                       // 0x03E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                          // 0x03E4(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachSocketName;                                      // 0x03EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHI0[0x2C];                                    // 0x03F4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}



	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void Stop();
	void SetUseSpatialAudio(bool bNewValue);
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName);
	void GetRTPCValue(const struct FString& RTPC, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType);
	float GetAttenuationRadius();
};

// Class AkAudio.AkAudioInputComponent
// 0x0010 (FullSize[0x0430] - InheritedSize[0x0420])
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData_0PNE[0x10];                                    // 0x0420(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}



	int PostAssociatedAudioInputEvent();
};

// Class AkAudio.AkAuxBus
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRNC[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}



};

// Class AkAudio.AkCheckBox
// 0x09B8 (FullSize[0x0AD8] - InheritedSize[0x0120])
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData_I814[0x348];                                   // 0x0120(0x0348) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XDJG[0x3];                                     // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x046C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97WF[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x0480(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0A00(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0A01(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDZX[0x6];                                     // 0x0A02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                      // 0x0A08(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x0A18(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                     // 0x0A58(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x0A68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0A78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBHI[0x50];                                    // 0x0A88(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};

// Class AkAudio.AkGameplayStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}



	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void STATIC_UnloadBankByName(const struct FString& BankName);
	void STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback);
	void STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const struct FString& Filename);
	void STATIC_StartOutputCapture(const struct FString& Filename);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset);
	void STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void STATIC_SetPanningRule(AkAudio_EPanningRule PanRule);
	void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration);
	void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
	void STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, bool UseSpatialAudio);
	int STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, bool UseSpatialAudio);
	int STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	int STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const struct FString& BankName);
	void STATIC_LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback);
	void STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool STATIC_IsGame(class UObject* WorldContextObject);
	bool STATIC_IsEditor();
	void STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset);
	void STATIC_GetRTPCValue(const struct FName& RTPC, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, class AActor* Actor);
	float STATIC_GetOcclusionScalingFactor();
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType);
	void STATIC_ExecuteActionOnPlayingID(AkAudio_EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve);
	void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkAudio_EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID);
	void STATIC_ClearBanks();
	void STATIC_CancelEventCallback(const struct FScriptDelegate& PostEventCallback);
	void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
};

// Class AkAudio.AkCallbackInfo
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkEventCallbackInfo
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventId;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData_0LXT[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}



	AkAudio_EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};

// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Position;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EstimatedDuration;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AudioNodeID;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MediaID;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStreaming;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDEZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                              SegmentInfo;                                               // 0x0034(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	AkAudio_EAkCallbackType                            MusicSyncType;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2O0[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserCueName;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkIOSInitializationSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                             AudioSession;                                              // 0x0098(0x000C) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXY7[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x00A8(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                          // 0x00D0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	struct FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// Class AkAudio.AkItemBoolProperties
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYSF[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};

// Class AkAudio.AkItemPropertiesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	struct FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};

// Class AkAudio.AkItemProperties
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SEB4[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};

// Class AkAudio.AkLateReverbComponent
// 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_6E71[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0V4[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6NZ[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}



};

// Class AkAudio.AkLinuxInitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0I7H[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkLuminInitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkLuminInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2LNZ[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLuminInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkMacInitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1TQK[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkPS4InitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0028(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0090(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings        AdvancedSettings;                                          // 0x00B8(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNT3[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkPS5InitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkPS5InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0028(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0090(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS5AdvancedInitializationSettings        AdvancedSettings;                                          // 0x00B8(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWRE[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS5InitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkDPXInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDPXInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkReverbVolume
// 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                              // 0x0258(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G52W[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0260(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0268(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0278(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x027C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0280(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBHD[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      LateReverbComponent;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}



};

// Class AkAudio.AkRoomComponent
// 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_1NWC[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkRoomComponent*                            NextLowerPriorityComponent;                                // 0x0200(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallOcclusion;                                             // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               RoomTone;                                                  // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FUPH[0x18];                                    // 0x0218(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}



	void StartRoomTone();
	void PostEventToRoom(class UAkAudioEvent* EventToPost);
};

// Class AkAudio.AkSettings
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3A8[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   WwiseProjectPath;                                          // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WwiseSoundBankFolder;                                      // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bAutoConnectToWAAPI;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DefaultOcclusionCollisionChannel;                          // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMultiCoreRendering;                                 // 0x0052(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MigratedEnableMultiCoreRendering;                          // 0x0053(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKGG[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0058(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0068(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UT50[0x40];                                    // 0x0078(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}



};

// Class AkAudio.AkSettingsPerUser
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0028(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0038(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     WaapiIPAddress;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           WaapiPort;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SuppressWwiseProjectPathWarnings;                          // 0x005C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJQR[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}



};

// Class AkAudio.AkSlider
// 0x0428 (FullSize[0x0530] - InheritedSize[0x0108])
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5GL[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0120(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YVT[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               locked;                                                    // 0x0485(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVL4[0x2];                                     // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZY5N[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkPropertyToControl                        ThePropertyToControl;                                      // 0x0490(0x0010) (Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x04A0(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZJX[0x20];                                    // 0x0510(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct FGuid& ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};

// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                      LateReverb;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                            Room;                                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}



};

// Class AkAudio.AkSpotReflector
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                          AcousticTexture;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceScalingFactor;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQVV[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}



};

// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_S2GH[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	TArray<struct FAkPoly>                             AcousticPolys;                                             // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                    // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                     // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LF1Z[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AssociatedRoom;                                            // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIGB[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}



	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// Class AkAudio.AkSwitchInitializationSettings
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettings                    CommunicationSettings;                                     // 0x0098(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00B8(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0USM[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkWaapiCalls
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}



	struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID);
	bool STATIC_RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback);
	bool STATIC_RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback);
	int STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	struct FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};

// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	struct FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// Class AkAudio.AkWaapiJsonManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}



	struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	struct FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	int STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	struct FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};

// Class AkAudio.AkWaapiUriConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	struct FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};

// Class AkAudio.AkWindowsInitializationSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NGU5[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkWinGDKInitializationSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UAkWinGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0028(0x0070) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWinGDKAdvancedInitializationSettings     AdvancedSettings;                                          // 0x00C0(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8IQ[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinGDKInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkWinAnvilInitializationSettings
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinAnvilInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkWwiseTree
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P8X0[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};

// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97OF[0x40];                                    // 0x0128(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkXboxOneGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0028(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKApuHeapInitializationSettings  ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneGDKInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneAnvilInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneInitializationSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UAkXboxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0028(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings     ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x0044) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INYY[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkXSXInitializationSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAkXSXInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0028(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXApuHeapInitializationSettings         ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXAdvancedInitializationSettings        AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXSXInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkMPXInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMPXInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                    // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                            // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDJP[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayOnReverse : 1;                                        // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                             // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N25T[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3CQ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OX2U[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_ZW9L[0x40];                                    // 0x00E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               Event;                                                     // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RetriggerEvent;                                            // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V08D[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScrubTailLengthMs;                                         // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               StopAtSectionEnd;                                          // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G6TF[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0140(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q9MS[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSourceDuration;                                         // 0x0170(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NG2B[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MaxDurationSourceID;                                       // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KSE8[0x48];                                    // 0x0188(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bIsAMasterTrack : 1;                                       // 0x0088(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RC72[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0160 (FullSize[0x0248] - InheritedSize[0x00E8])
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	struct FString                                     Name;                                                      // 0x00E8(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                                  FloatCurve;                                                // 0x00F8(0x0080) (Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                           // 0x0178(0x0030) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M704[0xA0];                                    // 0x01A8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
