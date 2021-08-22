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

// Function NavButton.NavButton_C.RefreshEntry_BP
// (Event, Public, BlueprintEvent)
void UNavButton_C::RefreshEntry_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavButton.NavButton_C.RefreshEntry_BP");

	UNavButton_C_RefreshEntry_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavButton.NavButton_C.ExecuteUbergraph_NavButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNavButton_C::ExecuteUbergraph_NavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavButton.NavButton_C.ExecuteUbergraph_NavButton");

	UNavButton_C_ExecuteUbergraph_NavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
