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

// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void USAW_MM_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.AnimGraph");

	USAW_MM_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USAW_MM_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintUpdateAnimation");

	USAW_MM_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
void USAW_MM_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintInitializeAnimation");

	USAW_MM_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.ExecuteUbergraph_SAW_MM_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USAW_MM_AnimBP_C::ExecuteUbergraph_SAW_MM_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.ExecuteUbergraph_SAW_MM_AnimBP");

	USAW_MM_AnimBP_C_ExecuteUbergraph_SAW_MM_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
