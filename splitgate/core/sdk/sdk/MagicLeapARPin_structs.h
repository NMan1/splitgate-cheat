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

// Enum MagicLeapARPin.EMagicLeapARPinType
enum class MagicLeapARPin_EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession = 0,
	EMagicLeapARPinType__SingleUserMultiSession = 1,
	EMagicLeapARPinType__MultiUserMultiSession = 2,
	EMagicLeapARPinType__EMagicLeapARPinType_MAX = 3,

};

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class MagicLeapARPin_EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration = 0,
	EMagicLeapAutoPinType__Always  = 1,
	EMagicLeapAutoPinType__Never   = 2,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX = 3,

};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class MagicLeapARPin_EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None = 0,
	EMagicLeapPassableWorldError__LowMapQuality = 1,
	EMagicLeapPassableWorldError__UnableToLocalize = 2,
	EMagicLeapPassableWorldError__Unavailable = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied = 4,
	EMagicLeapPassableWorldError__InvalidParam = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending = 7,
	EMagicLeapPassableWorldError__StartupPending = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled = 9,
	EMagicLeapPassableWorldError__NotImplemented = 10,
	EMagicLeapPassableWorldError__PinNotFound = 11,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX = 12,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// 0x0014
struct FMagicLeapARPinState
{
	float                                              Confidence;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValidRadius;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationError;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TranslationError;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapARPinType                 PinType;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RF2I[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
// 0x0050
struct FMagicLeapARPinObjectIdList
{
	unsigned char                                      ObjectIdList[0x50];                                        // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty

};

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
// 0x0068
struct FMagicLeapARPinQuery
{
	unsigned char                                      Types[0x50];                                               // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                MaxResults;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetPoint;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSorted;                                                   // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6ZP[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
