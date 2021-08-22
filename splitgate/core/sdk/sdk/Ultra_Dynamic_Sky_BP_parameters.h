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

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Init
struct AUltra_Dynamic_Sky_BP_C_Init_Params
{
	bool                                               IsEditorInit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
struct AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation
struct AUltra_Dynamic_Sky_BP_C_Set_Sun_and_Moon_Rotation_Params
{
	bool                                               Move_Static_Lights;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
struct AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.EditorInit
struct AUltra_Dynamic_Sky_BP_C_EditorInit_Params
{
};

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
struct AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
