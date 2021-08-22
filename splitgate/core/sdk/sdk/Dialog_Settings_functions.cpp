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

// Function Dialog_Settings.Dialog_Settings_C.GetWidgetToFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UDialog_Settings_C::GetWidgetToFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Settings.Dialog_Settings_C.GetWidgetToFocus");

	UDialog_Settings_C_GetWidgetToFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Dialog_Settings.Dialog_Settings_C.BndEvt__Settings_WidgetBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UDialog_Settings_C::BndEvt__Settings_WidgetBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Settings.Dialog_Settings_C.BndEvt__Settings_WidgetBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDialog_Settings_C_BndEvt__Settings_WidgetBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Settings.Dialog_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDialog_Settings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Settings.Dialog_Settings_C.Construct");

	UDialog_Settings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Settings.Dialog_Settings_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDialog_Settings_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Settings.Dialog_Settings_C.Destruct");

	UDialog_Settings_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Settings.Dialog_Settings_C.ExecuteUbergraph_Dialog_Settings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDialog_Settings_C::ExecuteUbergraph_Dialog_Settings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Settings.Dialog_Settings_C.ExecuteUbergraph_Dialog_Settings");

	UDialog_Settings_C_ExecuteUbergraph_Dialog_Settings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
