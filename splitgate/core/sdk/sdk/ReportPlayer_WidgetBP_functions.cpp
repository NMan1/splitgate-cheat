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

// Function ReportPlayer_WidgetBP.ReportPlayer_WidgetBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UReportPlayer_WidgetBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer_WidgetBP.ReportPlayer_WidgetBP_C.PreConstruct");

	UReportPlayer_WidgetBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReportPlayer_WidgetBP.ReportPlayer_WidgetBP_C.ExecuteUbergraph_ReportPlayer_WidgetBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportPlayer_WidgetBP_C::ExecuteUbergraph_ReportPlayer_WidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer_WidgetBP.ReportPlayer_WidgetBP_C.ExecuteUbergraph_ReportPlayer_WidgetBP");

	UReportPlayer_WidgetBP_C_ExecuteUbergraph_ReportPlayer_WidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
