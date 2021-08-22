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

// Class TemplateSequence.TemplateSequence
// 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BoundActorClass[0x28];                                     // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      BoundPreviewActor[0x28];                                   // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<struct FGuid, struct FName>                   BoundActorComponents;                                      // 0x00B8(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequence");
		return ptr;
	}



};

// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UCameraAnimationSequence : public UTemplateSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.CameraAnimationSequence");
		return ptr;
	}



};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// 0x0638 (FullSize[0x0660] - InheritedSize[0x0028])
class USequenceCameraShakeCameraStandIn : public UObject
{
public:
	unsigned char                                      UnknownData_6LI9[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FieldOfView;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainAspectRatio : 1;                                 // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CI12[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AspectRatio;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSHL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        PostProcessSettings;                                       // 0x0040(0x0550) (NativeAccessSpecifierPublic)
	float                                              PostProcessBlendWeight;                                    // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                     Filmback;                                                  // 0x0594(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                         LensSettings;                                              // 0x05A0(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                        FocusSettings;                                             // 0x05B8(0x0058) (NativeAccessSpecifierPublic)
	float                                              CurrentFocalLength;                                        // 0x0610(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentAperture;                                           // 0x0614(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentFocusDistance;                                      // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYOE[0x44];                                    // 0x061C(0x0044) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShakeCameraStandIn");
		return ptr;
	}



};

// Class TemplateSequence.SequenceCameraShakePattern
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*                    Sequence;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomSegmentDuration;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomSegment;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1OW[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USequenceCameraShakeSequencePlayer*          Player;                                                    // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                             // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShakePattern");
		return ptr;
	}



};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// 0x05B8 (FullSize[0x05E0] - InheritedSize[0x0028])
class USequenceCameraShakeSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_JGP0[0x460];                                   // 0x0028(0x0460) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     BoundObjectOverride;                                       // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                         Sequence;                                                  // 0x0490(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                      // 0x0498(0x00E8) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3MF3[0x60];                                    // 0x0580(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShakeSequencePlayer");
		return ptr;
	}



};

// Class TemplateSequence.TemplateSequenceActor
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ATemplateSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_ALO7[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0228(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXQC[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTemplateSequencePlayer*                     SequencePlayer;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             TemplateSequence;                                          // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData        BindingOverride;                                           // 0x0260(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_102H[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceActor");
		return ptr;
	}



	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class AActor* Actor);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (FullSize[0x06A8] - InheritedSize[0x06A0])
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData_LOIQ[0x8];                                     // 0x06A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequencePlayer");
		return ptr;
	}



	class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
};

// Class TemplateSequence.TemplateSequenceSection
// 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData_HY9O[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSection");
		return ptr;
	}



};

// Class TemplateSequence.TemplateSequenceSystem
// 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_IACC[0x70];                                    // 0x0040(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSystem");
		return ptr;
	}



};

// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
