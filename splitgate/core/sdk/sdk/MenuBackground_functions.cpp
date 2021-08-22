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

// Function MenuBackground.MenuBackground_C.SetComponentVisbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuBackground_C::SetComponentVisbility(class UWidget* Widget, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBackground.MenuBackground_C.SetComponentVisbility");

	UMenuBackground_C_SetComponentVisbility_Params params;
	params.Widget = Widget;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuBackground.MenuBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuBackground_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBackground.MenuBackground_C.PreConstruct");

	UMenuBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuBackground.MenuBackground_C.RefreshWidget
// (BlueprintCallable, BlueprintEvent)
void UMenuBackground_C::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBackground.MenuBackground_C.RefreshWidget");

	UMenuBackground_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuBackground.MenuBackground_C.ExecuteUbergraph_MenuBackground
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuBackground_C::ExecuteUbergraph_MenuBackground(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBackground.MenuBackground_C.ExecuteUbergraph_MenuBackground");

	UMenuBackground_C_ExecuteUbergraph_MenuBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
