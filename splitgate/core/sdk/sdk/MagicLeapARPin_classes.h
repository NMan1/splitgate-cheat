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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x01B8 (FullSize[0x03B0] - InheritedSize[0x01F8])
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	struct FString                                     ObjectUID;                                                 // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapAutoPinType               AutoPinType;                                               // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                           // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T2FX[0x2];                                     // 0x020E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PinDataClass;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SearchPinTypes[0x50];                                      // 0x0218(0x0050) UNKNOWN PROPERTY: SetProperty
	class USphereComponent*                            SearchVolume;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinned;                                  // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinLost;                                 // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPinDataLoadAttemptCompleted;                             // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                       PinnedCFUID;                                               // 0x02A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedSceneComponent;                                      // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                     PinData;                                                   // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T7MR[0xF0];                                    // 0x02C0(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}



	void UnPin();
	class UMagicLeapARPinSaveGame* TryGetPinData(class UClass* InPinDataClass, bool* OutPinDataValid);
	bool PinToRestoredOrSyncedID();
	bool PinToID(const struct FGuid& PinId);
	void PinToBestFit();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinId);
	class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);
	void AttemptPinDataRestorationAsync();
	bool AttemptPinDataRestoration();
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}



	void STATIC_UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter);
	void STATIC_SetContentBindingSaveGameUserIndex(int UserIndex);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins);
	bool STATIC_ParseStringToARPinId(const struct FString& PinIdString, struct FGuid* ARPinId);
	bool STATIC_IsTrackerValid();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int* Count);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter);
	int STATIC_GetContentBindingSaveGameUserIndex();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins);
	struct FString STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State);
	bool STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_DestroyTracker();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_CreateTracker();
	void STATIC_BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	struct FString STATIC_ARPinIdToString(const struct FGuid& ARPinId);
};

// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
	struct FGuid                                       PinId;                                                     // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisibilityOverride;                                       // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_079G[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinInfoActorBase");
		return ptr;
	}



	void OnUpdateARPinState();
};

// Class MagicLeapARPin.MagicLeapARPinRenderer
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class AMagicLeapARPinRenderer : public AActor
{
public:
	bool                                               bInfoActorsVisibilityOverride;                             // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNQY[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;                                             // 0x0228(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T1AB[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ClassToSpawn;                                              // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinRenderer");
		return ptr;
	}



	void SetVisibilityOverride(bool InVisibilityOverride);
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                                // 0x002C(0x0014) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		return ptr;
	}



};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                       PinnedID;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I12Z[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ComponentWorldTransform;                                   // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  PinTransform;                                              // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9WV[0xF];                                     // 0x00A1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}



};

// Class MagicLeapARPin.MagicLeapARPinContentBindings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMagicLeapARPinContentBindings : public USaveGame
{
public:
	TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings;                                        // 0x0028(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinContentBindings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
