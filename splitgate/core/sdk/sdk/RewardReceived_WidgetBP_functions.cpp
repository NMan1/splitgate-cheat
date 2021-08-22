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

// Function RewardReceived_WidgetBP.RewardReceived_WidgetBP_C.SetRewardType
// (Event, Public, BlueprintEvent)
// Parameters:
// PortalWars_ERewardReceivedType InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URewardReceived_WidgetBP_C::SetRewardType(PortalWars_ERewardReceivedType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardReceived_WidgetBP.RewardReceived_WidgetBP_C.SetRewardType");

	URewardReceived_WidgetBP_C_SetRewardType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RewardReceived_WidgetBP.RewardReceived_WidgetBP_C.ExecuteUbergraph_RewardReceived_WidgetBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URewardReceived_WidgetBP_C::ExecuteUbergraph_RewardReceived_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardReceived_WidgetBP.RewardReceived_WidgetBP_C.ExecuteUbergraph_RewardReceived_WidgetBP");

	URewardReceived_WidgetBP_C_ExecuteUbergraph_RewardReceived_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
