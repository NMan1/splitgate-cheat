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

// Function RewardInspect_WidgetBP.RewardInspect_WidgetBP_C.SetBackgroundImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URewardInspect_WidgetBP_C::SetBackgroundImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInspect_WidgetBP.RewardInspect_WidgetBP_C.SetBackgroundImage");

	URewardInspect_WidgetBP_C_SetBackgroundImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RewardInspect_WidgetBP.RewardInspect_WidgetBP_C.ExecuteUbergraph_RewardInspect_WidgetBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URewardInspect_WidgetBP_C::ExecuteUbergraph_RewardInspect_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardInspect_WidgetBP.RewardInspect_WidgetBP_C.ExecuteUbergraph_RewardInspect_WidgetBP");

	URewardInspect_WidgetBP_C_ExecuteUbergraph_RewardInspect_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
