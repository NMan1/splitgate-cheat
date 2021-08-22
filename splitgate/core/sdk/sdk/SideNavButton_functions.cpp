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

// Function SideNavButton.SideNavButton_C.RefreshEntry_BP
// (Event, Public, BlueprintEvent)
void USideNavButton_C::RefreshEntry_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SideNavButton.SideNavButton_C.RefreshEntry_BP");

	USideNavButton_C_RefreshEntry_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SideNavButton.SideNavButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USideNavButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SideNavButton.SideNavButton_C.PreConstruct");

	USideNavButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SideNavButton.SideNavButton_C.ExecuteUbergraph_SideNavButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USideNavButton_C::ExecuteUbergraph_SideNavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SideNavButton.SideNavButton_C.ExecuteUbergraph_SideNavButton");

	USideNavButton_C_ExecuteUbergraph_SideNavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
