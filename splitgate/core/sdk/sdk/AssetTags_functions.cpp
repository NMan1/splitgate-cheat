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

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 AssetPtr                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");

	UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params params;
	params.AssetPtr = AssetPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData              AssetData                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");

	UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params params;
	params.AssetData = AssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AssetPathName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const struct FName& AssetPathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");

	UAssetTagsSubsystem_GetCollectionsContainingAsset_Params params;
	params.AssetPathName = AssetPathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UAssetTagsSubsystem::GetCollections()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");

	UAssetTagsSubsystem_GetCollections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");

	UAssetTagsSubsystem_GetAssetsInCollection_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetTagsSubsystem::CollectionExists(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");

	UAssetTagsSubsystem_CollectionExists_Params params;
	params.Name = Name;

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
