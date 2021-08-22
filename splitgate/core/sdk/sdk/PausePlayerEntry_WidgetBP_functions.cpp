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

// Function PausePlayerEntry_WidgetBP.PausePlayerEntry_WidgetBP_C.SetSelectedState
// (BlueprintCallable, BlueprintEvent)
void UPausePlayerEntry_WidgetBP_C::SetSelectedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PausePlayerEntry_WidgetBP.PausePlayerEntry_WidgetBP_C.SetSelectedState");

	UPausePlayerEntry_WidgetBP_C_SetSelectedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PausePlayerEntry_WidgetBP.PausePlayerEntry_WidgetBP_C.ExecuteUbergraph_PausePlayerEntry_WidgetBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPausePlayerEntry_WidgetBP_C::ExecuteUbergraph_PausePlayerEntry_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PausePlayerEntry_WidgetBP.PausePlayerEntry_WidgetBP_C.ExecuteUbergraph_PausePlayerEntry_WidgetBP");

	UPausePlayerEntry_WidgetBP_C_ExecuteUbergraph_PausePlayerEntry_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
