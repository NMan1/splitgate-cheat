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

// Function RadioEntry.RadioEntry_C.RefreshEntry_BP
// (Event, Public, BlueprintEvent)
void URadioEntry_C::RefreshEntry_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioEntry.RadioEntry_C.RefreshEntry_BP");

	URadioEntry_C_RefreshEntry_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadioEntry.RadioEntry_C.ExecuteUbergraph_RadioEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadioEntry_C::ExecuteUbergraph_RadioEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadioEntry.RadioEntry_C.ExecuteUbergraph_RadioEntry");

	URadioEntry_C_ExecuteUbergraph_RadioEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
