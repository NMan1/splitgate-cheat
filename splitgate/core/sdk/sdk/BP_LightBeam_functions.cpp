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

// Function BP_LightBeam.BP_LightBeam_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_LightBeam_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.Init");

	ABP_LightBeam_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightBeam.BP_LightBeam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_LightBeam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.ReceiveBeginPlay");

	ABP_LightBeam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightBeam.BP_LightBeam_C.EditorInit
// (Event, Protected, BlueprintEvent)
void ABP_LightBeam_C::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.EditorInit");

	ABP_LightBeam_C_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightBeam.BP_LightBeam_C.ExecuteUbergraph_BP_LightBeam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightBeam_C::ExecuteUbergraph_BP_LightBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.ExecuteUbergraph_BP_LightBeam");

	ABP_LightBeam_C_ExecuteUbergraph_BP_LightBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
