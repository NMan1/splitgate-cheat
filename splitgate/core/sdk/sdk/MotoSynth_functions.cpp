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

// Function MotoSynth.SynthComponentMoto.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMotoSynthRuntimeSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetSettings");

	USynthComponentMoto_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MotoSynth.SynthComponentMoto.SetRPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRPM                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InTimeSec                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetRPM");

	USynthComponentMoto_SetRPM_Params params;
	params.InRPM = InRPM;
	params.InTimeSec = InTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMoto::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.IsEnabled");

	USynthComponentMoto_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          OutMinRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutMaxRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.GetRPMRange");

	USynthComponentMoto_GetRPMRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMinRPM != nullptr)
		*OutMinRPM = params.OutMinRPM;
	if (OutMaxRPM != nullptr)
		*OutMaxRPM = params.OutMaxRPM;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
