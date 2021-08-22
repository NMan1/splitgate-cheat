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

// Function FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFriendRequestNotificationEntry_WidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C.Construct");

	UFriendRequestNotificationEntry_WidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C.ExecuteUbergraph_FriendRequestNotificationEntry_WidgetBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFriendRequestNotificationEntry_WidgetBP_C::ExecuteUbergraph_FriendRequestNotificationEntry_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C.ExecuteUbergraph_FriendRequestNotificationEntry_WidgetBP");

	UFriendRequestNotificationEntry_WidgetBP_C_ExecuteUbergraph_FriendRequestNotificationEntry_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
