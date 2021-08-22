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
// Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothConfigCommon : public UClothConfigBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothingAssetCustomData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class UClothConfigBase*>        ClothConfigs;                                              // 0x0050(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>                 LODData;                                                   // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        LodMap;                                                    // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UsedBoneNames;                                             // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        UsedBoneIndices;                                           // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReferenceBoneIndex;                                        // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8J4O[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClothingAssetCustomData*                    CustomData;                                                // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                          // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                      ClothPhysicalMeshData;                                     // 0x0030(0x00F8) (NativeAccessSpecifierPublic)
	struct FClothCollisionData                         CollisionData;                                             // 0x0128(0x0040) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56OM[0x20];                                    // 0x0168(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
