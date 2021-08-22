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

// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime");

	UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;

}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime");

	UConstantQNRT_GetChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime");

	ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime");

	ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime");

	ULoudnessNRT_GetLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime");

	ULoudnessNRT_GetChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes");

	UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;

}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes");

	UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
