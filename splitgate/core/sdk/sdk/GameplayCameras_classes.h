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

// Class GameplayCameras.TestCameraShake
// 0x0004 (FullSize[0x00B0] - InheritedSize[0x00AC])
class UTestCameraShake : public UCameraShakeBase
{
public:
	unsigned char                                      UnknownData_8588[0x4];                                     // 0x00AC(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.TestCameraShake");
		return ptr;
	}



};

// Class GameplayCameras.SimpleCameraShakePattern
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                              Duration;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BG2[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.SimpleCameraShakePattern");
		return ptr;
	}



};

// Class GameplayCameras.ConstantCameraShakePattern
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                                     LocationOffset;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.ConstantCameraShakePattern");
		return ptr;
	}



};

// Class GameplayCameras.CompositeCameraShakePattern
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>                 ChildPatterns;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4S70[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.CompositeCameraShakePattern");
		return ptr;
	}



};

// Class GameplayCameras.DefaultCameraShakeBase
// 0x0004 (FullSize[0x00B0] - InheritedSize[0x00AC])
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:
	unsigned char                                      UnknownData_0OCV[0x4];                                     // 0x00AC(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.DefaultCameraShakeBase");
		return ptr;
	}



};

// Class GameplayCameras.MatineeCameraShake
// 0x0104 (FullSize[0x01B0] - InheritedSize[0x00AC])
class UMatineeCameraShake : public UCameraShakeBase
{
public:
	float                                              OscillationBlendInTime;                                    // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscillationBlendOutTime;                                   // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                                RotOscillation;                                            // 0x00B4(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                                LocOscillation;                                            // 0x00D8(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                FOVOscillation;                                            // 0x00FC(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                              // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimScale;                                                 // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimBlendInTime;                                           // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimBlendOutTime;                                          // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomAnimSegmentDuration;                                 // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WIKY[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraAnim*                                 Anim;                                                      // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequence*                    AnimSequence;                                              // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomAnimSegment : 1;                                    // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAKJ[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OscillatorTimeRemaining;                                   // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimInst*                             AnimInst;                                                  // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9LI[0x40];                                    // 0x0140(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USequenceCameraShakePattern*                 SequenceShakePattern;                                      // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UA1P[0x28];                                    // 0x0188(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShake");
		return ptr;
	}



	class UMatineeCameraShake* STATIC_StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, Engine_ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UMatineeCameraShake* STATIC_StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, Engine_ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};

// Class GameplayCameras.MatineeCameraShakePattern
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMatineeCameraShakePattern : public UCameraShakePattern
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakePattern");
		return ptr;
	}



};

// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator");
		return ptr;
	}



};

// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakeFunctionLibrary");
		return ptr;
	}



	class UMatineeCameraShake* STATIC_Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                              LocationAmplitudeMultiplier;                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationFrequencyMultiplier;                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          X;                                                         // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          Y;                                                         // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          Z;                                                         // 0x0050(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RotationAmplitudeMultiplier;                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationFrequencyMultiplier;                               // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          Pitch;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          Yaw;                                                       // 0x0068(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          Roll;                                                      // 0x0070(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                          FOV;                                                       // 0x0078(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KG1S[0x38];                                    // 0x0080(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.PerlinNoiseCameraShakePattern");
		return ptr;
	}



};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                              LocationAmplitudeMultiplier;                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationFrequencyMultiplier;                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             X;                                                         // 0x0040(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             Y;                                                         // 0x004C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             Z;                                                         // 0x0058(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RotationAmplitudeMultiplier;                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationFrequencyMultiplier;                               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             Pitch;                                                     // 0x006C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             Yaw;                                                       // 0x0078(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             Roll;                                                      // 0x0084(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                             FOV;                                                       // 0x0090(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPS2[0x3C];                                    // 0x009C(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayCameras.WaveOscillatorCameraShakePattern");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
