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

// Function OWGameEvents.OWGameEventsUtility.TriggerEventValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOWGameEventsUtility::STATIC_TriggerEventValue(const struct FString& Name, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OWGameEvents.OWGameEventsUtility.TriggerEventValue");

	UOWGameEventsUtility_TriggerEventValue_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OWGameEvents.OWGameEventsUtility.TriggerEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOWGameEventsUtility::STATIC_TriggerEvent(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function OWGameEvents.OWGameEventsUtility.TriggerEvent");

	UOWGameEventsUtility_TriggerEvent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OWGameEvents.OWGameEventsUtility.SetInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOWGameEventsUtility::STATIC_SetInfo(const struct FString& Category, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OWGameEvents.OWGameEventsUtility.SetInfo");

	UOWGameEventsUtility_SetInfo_Params params;
	params.Category = Category;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OWGameEvents.OWGameEventsUtility.Commit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOWGameEventsUtility::STATIC_Commit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OWGameEvents.OWGameEventsUtility.Commit");

	UOWGameEventsUtility_Commit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OWGameEvents.OWGameEventsUtility.BeginTransaction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOWGameEventsUtility::STATIC_BeginTransaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function OWGameEvents.OWGameEventsUtility.BeginTransaction");

	UOWGameEventsUtility_BeginTransaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
