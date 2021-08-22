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

// Function DiscordRpc.DiscordRpc.UpdatePresence
// (Final, Native, Public, BlueprintCallable)
void UDiscordRpc::UpdatePresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.UpdatePresence");

	UDiscordRpc_UpdatePresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DiscordRpc.DiscordRpc.Shutdown
// (Final, Native, Public, BlueprintCallable)
void UDiscordRpc::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Shutdown");

	UDiscordRpc_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DiscordRpc.DiscordRpc.RunCallbacks
// (Final, Native, Public, BlueprintCallable)
void UDiscordRpc::RunCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.RunCallbacks");

	UDiscordRpc_RunCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DiscordRpc.DiscordRpc.Respond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Reply                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDiscordRpc::Respond(const struct FString& userId, int Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Respond");

	UDiscordRpc_Respond_Params params;
	params.userId = userId;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DiscordRpc.DiscordRpc.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 applicationId                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           autoRegister                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 optionalSteamId                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDiscordRpc::Initialize(const struct FString& applicationId, bool autoRegister, const struct FString& optionalSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Initialize");

	UDiscordRpc_Initialize_Params params;
	params.applicationId = applicationId;
	params.autoRegister = autoRegister;
	params.optionalSteamId = optionalSteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DiscordRpc.DiscordRpc.ClearPresence
// (Final, Native, Public, BlueprintCallable)
void UDiscordRpc::ClearPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.ClearPresence");

	UDiscordRpc_ClearPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
