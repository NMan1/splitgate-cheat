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

// Function SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void USAW_3P_IK_AnimBP_V3_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C.AnimGraph");

	USAW_3P_IK_AnimBP_V3_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C.ExecuteUbergraph_SAW_3P_IK_AnimBP_V3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USAW_3P_IK_AnimBP_V3_C::ExecuteUbergraph_SAW_3P_IK_AnimBP_V3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C.ExecuteUbergraph_SAW_3P_IK_AnimBP_V3");

	USAW_3P_IK_AnimBP_V3_C_ExecuteUbergraph_SAW_3P_IK_AnimBP_V3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
