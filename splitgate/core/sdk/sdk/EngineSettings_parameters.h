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

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params
{
	bool                                               bSkipFirstPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
struct UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
struct UGameMapsSettings_GetGameMapsSettings_Params
{
	class UGameMapsSettings*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
