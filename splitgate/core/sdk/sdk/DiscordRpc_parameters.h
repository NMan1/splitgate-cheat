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

// Function DiscordRpc.DiscordRpc.UpdatePresence
struct UDiscordRpc_UpdatePresence_Params
{
};

// Function DiscordRpc.DiscordRpc.Shutdown
struct UDiscordRpc_Shutdown_Params
{
};

// Function DiscordRpc.DiscordRpc.RunCallbacks
struct UDiscordRpc_RunCallbacks_Params
{
};

// Function DiscordRpc.DiscordRpc.Respond
struct UDiscordRpc_Respond_Params
{
	struct FString                                     userId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Reply;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DiscordRpc.DiscordRpc.Initialize
struct UDiscordRpc_Initialize_Params
{
	struct FString                                     applicationId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               autoRegister;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     optionalSteamId;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DiscordRpc.DiscordRpc.ClearPresence
struct UDiscordRpc_ClearPresence_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
