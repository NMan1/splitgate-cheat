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

// Function B_Spline_Impact_Road2.B_Spline_Impact_Road2_C.ExecuteUbergraph_B_Spline_Impact_Road2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_Spline_Impact_Road2_C::ExecuteUbergraph_B_Spline_Impact_Road2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Spline_Impact_Road2.B_Spline_Impact_Road2_C.ExecuteUbergraph_B_Spline_Impact_Road2");

	AB_Spline_Impact_Road2_C_ExecuteUbergraph_B_Spline_Impact_Road2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
