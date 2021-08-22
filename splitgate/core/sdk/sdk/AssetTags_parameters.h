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

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
{
	class UObject*                                     AssetPtr;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params
{
	struct FAssetData                                  AssetData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct UAssetTagsSubsystem_GetCollectionsContainingAsset_Params
{
	struct FName                                       AssetPathName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetCollections
struct UAssetTagsSubsystem_GetCollections_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct UAssetTagsSubsystem_GetAssetsInCollection_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct UAssetTagsSubsystem_CollectionExists_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
