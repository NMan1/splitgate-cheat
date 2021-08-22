#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.AnimGraph
struct USAW_MM_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintUpdateAnimation
struct USAW_MM_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.BlueprintInitializeAnimation
struct USAW_MM_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function SAW_MM_AnimBP.SAW_MM_AnimBP_C.ExecuteUbergraph_SAW_MM_AnimBP
struct USAW_MM_AnimBP_C_ExecuteUbergraph_SAW_MM_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
