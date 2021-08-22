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

// Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Spline_Impact_Road_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.Init");

	AB_Spline_Impact_Road_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AB_Spline_Impact_Road_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.ReceiveBeginPlay");

	AB_Spline_Impact_Road_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.EditorInit
// (Event, Protected, BlueprintEvent)
void AB_Spline_Impact_Road_C::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.EditorInit");

	AB_Spline_Impact_Road_C_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.ExecuteUbergraph_B_Spline_Impact_Road
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_Spline_Impact_Road_C::ExecuteUbergraph_B_Spline_Impact_Road(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Spline_Impact_Road.B_Spline_Impact_Road_C.ExecuteUbergraph_B_Spline_Impact_Road");

	AB_Spline_Impact_Road_C_ExecuteUbergraph_B_Spline_Impact_Road_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
