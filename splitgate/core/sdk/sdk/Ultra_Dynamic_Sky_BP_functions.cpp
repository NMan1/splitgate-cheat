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

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEditorInit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AUltra_Dynamic_Sky_BP_C::Init(bool IsEditorInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Init");

	AUltra_Dynamic_Sky_BP_C_Init_Params params;
	params.IsEditorInit = IsEditorInit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");

	AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Move_Static_Lights             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AUltra_Dynamic_Sky_BP_C::Set_Sun_and_Moon_Rotation(bool Move_Static_Lights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation");

	AUltra_Dynamic_Sky_BP_C_Set_Sun_and_Moon_Rotation_Params params;
	params.Move_Static_Lights = Move_Static_Lights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");

	AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.EditorInit
// (Event, Protected, BlueprintEvent)
void AUltra_Dynamic_Sky_BP_C::EditorInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.EditorInit");

	AUltra_Dynamic_Sky_BP_C_EditorInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

	AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
