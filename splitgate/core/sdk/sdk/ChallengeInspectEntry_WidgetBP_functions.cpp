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

// Function ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C.RefreshEntry_BP
// (Event, Public, BlueprintEvent)
void UChallengeInspectEntry_WidgetBP_C::RefreshEntry_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C.RefreshEntry_BP");

	UChallengeInspectEntry_WidgetBP_C_RefreshEntry_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C.ExecuteUbergraph_ChallengeInspectEntry_WidgetBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChallengeInspectEntry_WidgetBP_C::ExecuteUbergraph_ChallengeInspectEntry_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C.ExecuteUbergraph_ChallengeInspectEntry_WidgetBP");

	UChallengeInspectEntry_WidgetBP_C_ExecuteUbergraph_ChallengeInspectEntry_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
