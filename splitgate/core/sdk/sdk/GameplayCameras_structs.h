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
// Enums
//---------------------------------------------------------------------------

// Enum GameplayCameras.EInitialOscillatorOffset
enum class GameplayCameras_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum GameplayCameras.EOscillatorWaveform
enum class GameplayCameras_EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave  = 0,
	EOscillatorWaveform__PerlinNoise = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 2,

};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
enum class GameplayCameras_EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random = 0,
	EInitialWaveOscillatorOffsetType__Zero = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayCameras.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayCameras_EInitialOscillatorOffset> InitialOffset;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayCameras_EOscillatorWaveform                Waveform;                                                  // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8BH[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayCameras.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                         // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Y;                                                         // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Z;                                                         // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayCameras.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Yaw;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Roll;                                                      // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// 0x0008
struct FPerlinNoiseShaker
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayCameras.WaveOscillator
// 0x000C
struct FWaveOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayCameras_EInitialWaveOscillatorOffsetType   InitialOffsetType;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_291L[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
