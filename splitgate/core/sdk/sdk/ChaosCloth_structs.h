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

// Enum ChaosCloth.EChaosClothTetherMode
enum class ChaosCloth_EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength = 0,
	EChaosClothTetherMode__AccurateTetherFastLength = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX = 4,

};

// Enum ChaosCloth.EChaosWeightMapTarget
enum class ChaosCloth_EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None    = 0,
	EChaosWeightMapTarget__MaxDistance = 1,
	EChaosWeightMapTarget__BackstopDistance = 2,
	EChaosWeightMapTarget__BackstopRadius = 3,
	EChaosWeightMapTarget__AnimDriveStiffness = 4,
	EChaosWeightMapTarget__AnimDriveDamping = 5,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosCloth.ChaosClothWeightedValue
// 0x0008
struct FChaosClothWeightedValue
{
	float                                              Low;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              High;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
