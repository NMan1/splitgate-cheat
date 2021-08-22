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
// Enums
//---------------------------------------------------------------------------

// Enum PortalWarsGlobals.ECustomizationAvailability
enum class PortalWarsGlobals_ECustomizationAvailability : uint8_t
{
	ECustomizationAvailability__Normal = 0,
	ECustomizationAvailability__Default = 1,
	ECustomizationAvailability__Challenge = 2,
	ECustomizationAvailability__Reward = 3,
	ECustomizationAvailability__Store = 4,
	ECustomizationAvailability__Partner = 5,
	ECustomizationAvailability__Streamer = 6,
	ECustomizationAvailability__DLC = 7,
	ECustomizationAvailability__VIP = 8,
	ECustomizationAvailability__CreatorCode = 9,
	ECustomizationAvailability__BattlePass = 10,
	ECustomizationAvailability__ReferralPass = 11,
	ECustomizationAvailability__Reserved = 12,
	ECustomizationAvailability__Developer = 13,
	ECustomizationAvailability__Decommissioned = 14,
	ECustomizationAvailability__ECustomizationAvailability_MAX = 15,

};

// Enum PortalWarsGlobals.ECustomizationRarity
enum class PortalWarsGlobals_ECustomizationRarity : uint8_t
{
	ECustomizationRarity__None     = 0,
	ECustomizationRarity__Common   = 1,
	ECustomizationRarity__Rare     = 2,
	ECustomizationRarity__Epic     = 3,
	ECustomizationRarity__Legendary = 4,
	ECustomizationRarity__ECustomizationRarity_MAX = 5,

};

// Enum PortalWarsGlobals.ECustomizationType
enum class PortalWarsGlobals_ECustomizationType : uint8_t
{
	ECustomizationType__None       = 0,
	ECustomizationType__Armor      = 1,
	ECustomizationType__Jetpack    = 2,
	ECustomizationType__PortalGun  = 3,
	ECustomizationType__AssaultRifle = 4,
	ECustomizationType__Bat        = 5,
	ECustomizationType__BattleRifle = 6,
	ECustomizationType__DMR        = 7,
	ECustomizationType__Pistol     = 8,
	ECustomizationType__PlasmaRifle = 9,
	ECustomizationType__Railgun    = 10,
	ECustomizationType__RocketLauncher = 11,
	ECustomizationType__Shotgun    = 12,
	ECustomizationType__SMG        = 13,
	ECustomizationType__Sniper     = 14,
	ECustomizationType__Oddball    = 15,
	ECustomizationType__Portal     = 16,
	ECustomizationType__Spray      = 17,
	ECustomizationType__Emote      = 18,
	ECustomizationType__NameTag    = 19,
	ECustomizationType__Banner     = 20,
	ECustomizationType__MAX        = 21,

};

// Enum PortalWarsGlobals.EBotDifficulty
enum class PortalWarsGlobals_EBotDifficulty : uint8_t
{
	EBotDifficulty__Easy           = 0,
	EBotDifficulty__Medium         = 1,
	EBotDifficulty__Hard           = 2,
	EBotDifficulty__EBotDifficulty_MAX = 3,

};

// Enum PortalWarsGlobals.EPurchasableType
enum class PortalWarsGlobals_EPurchasableType : uint8_t
{
	EPurchasableType__Currency     = 0,
	EPurchasableType__LimitedTimeOffer = 1,
	EPurchasableType__EPurchasableType_MAX = 2,

};

// Enum PortalWarsGlobals.EUnlockType
enum class PortalWarsGlobals_EUnlockType : uint8_t
{
	EUnlockType__Playlist          = 0,
	EUnlockType__Challenges        = 1,
	EUnlockType__EUnlockType_MAX   = 2,

};

// Enum PortalWarsGlobals.EChallengeType
enum class PortalWarsGlobals_EChallengeType : uint8_t
{
	EChallengeType__None           = 0,
	EChallengeType__Daily          = 1,
	EChallengeType__Weekly         = 2,
	EChallengeType__Weapon         = 3,
	EChallengeType__Season         = 4,
	EChallengeType__Featured       = 5,
	EChallengeType__MAX            = 6,

};

// Enum PortalWarsGlobals.ERewardType
enum class PortalWarsGlobals_ERewardType : uint8_t
{
	ERewardType__None              = 0,
	ERewardType__Customization     = 1,
	ERewardType__XP                = 2,
	ERewardType__XPBoost           = 3,
	ERewardType__DoubleXP          = 4,
	ERewardType__Currency          = 5,
	ERewardType__Drop              = 6,
	ERewardType__ERewardType_MAX   = 7,

};

// Enum PortalWarsGlobals.ERegionSelectability
enum class PortalWarsGlobals_ERegionSelectability : uint8_t
{
	ERegionSelectability__Matchmaking = 0,
	ERegionSelectability__Custom   = 1,
	ERegionSelectability__MAX      = 2,

};

// Enum PortalWarsGlobals.EVotingPriority
enum class PortalWarsGlobals_EVotingPriority : uint8_t
{
	EVotingPriority__Normal        = 0,
	EVotingPriority__High          = 1,
	EVotingPriority__EVotingPriority_MAX = 2,

};

// Enum PortalWarsGlobals.EPlaylistType
enum class PortalWarsGlobals_EPlaylistType : uint8_t
{
	EPlaylistType__Unranked        = 0,
	EPlaylistType__Ranked          = 1,
	EPlaylistType__Featured        = 2,
	EPlaylistType__EPlaylistType_MAX = 3,

};

// Enum PortalWarsGlobals.EMapSelectability
enum class PortalWarsGlobals_EMapSelectability : uint8_t
{
	EMapSelectability__None        = 0,
	EMapSelectability__Default     = 1,
	EMapSelectability__Race        = 2,
	EMapSelectability__QA          = 3,
	EMapSelectability__MAX         = 4,

};

// Enum PortalWarsGlobals.EGameModeSelectability
enum class PortalWarsGlobals_EGameModeSelectability : uint8_t
{
	EGameModeSelectability__None   = 0,
	EGameModeSelectability__Custom = 1,
	EGameModeSelectability__Standard = 2,
	EGameModeSelectability__Hardcore = 3,
	EGameModeSelectability__MAX    = 4,

};

// Enum PortalWarsGlobals.EServerType
enum class PortalWarsGlobals_EServerType : uint8_t
{
	EServerType__LAN               = 0,
	EServerType__Unranked          = 1,
	EServerType__Ranked            = 2,
	EServerType__Custom            = 3,
	EServerType__Standard          = 4,
	EServerType__Simulation        = 5,
	EServerType__WaitingArea       = 6,
	EServerType__EServerType_MAX   = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PortalWarsGlobals.ErrorData
// 0x0010
struct FErrorData
{
	TArray<struct FString>                             Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.ErrorInfo
// 0x0058
struct FErrorInfo
{
	struct FString                                     ErrorCode;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FErrorData>                          ErrorData;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       ErrorText;                                                 // 0x0020(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     Code;                                                      // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.CustomizationId
// 0x0018
struct FCustomizationId
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FIVE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomizationValue;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct PortalWarsGlobals.RewardData
// 0x0028
struct FRewardData
{
	PortalWarsGlobals_ERewardType                      RewardType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U1Q4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RewardValue;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizationId                            Customization;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2KV[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.ThumbnailData
// 0x0050 (0x0058 - 0x0008)
struct FThumbnailData : public FTableRowBase
{
	unsigned char                                      DisplayImageFeatured[0x28];                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DisplayImage[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.SkinSlotTextureInfo
// 0x0060
struct FSkinSlotTextureInfo
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Textures[0x50];                                            // 0x0010(0x0050) UNKNOWN PROPERTY: MapProperty

};

// ScriptStruct PortalWarsGlobals.SkinTextureSetData
// 0x0038 (0x0040 - 0x0008)
struct FSkinTextureSetData : public FTableRowBase
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOD4[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MeshName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TextureSetName;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkinSlotTextureInfo>                Slots;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PWTableRowBase
// 0x0070 (0x0078 - 0x0008)
struct FPWTableRowBase : public FTableRowBase
{
	int                                                ID;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXBE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      DisplayImage[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DisplayImageSmall[0x28];                                   // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.AvailabilityInfo
// 0x0018
struct FAvailabilityInfo
{
	PortalWarsGlobals_ECustomizationAvailability       Availability;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FIH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AvailabilityInfo;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.CustomizationItem
// 0x0028 (0x00A0 - 0x0078)
struct FCustomizationItem : public FPWTableRowBase
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUL3[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAvailabilityInfo                           Availability;                                              // 0x0080(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	PortalWarsGlobals_ECustomizationRarity             Rarity;                                                    // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DOA[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.NameTagCustomizationItem
// 0x0010 (0x00B0 - 0x00A0)
struct FNameTagCustomizationItem : public FCustomizationItem
{
	struct FLinearColor                                TextColor;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.EmoteCustomizationItem
// 0x0028 (0x00C8 - 0x00A0)
struct FEmoteCustomizationItem : public FCustomizationItem
{
	unsigned char                                      AnimationSequence[0x28];                                   // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.SprayCustomizationItem
// 0x0028 (0x00C8 - 0x00A0)
struct FSprayCustomizationItem : public FCustomizationItem
{
	unsigned char                                      Texture[0x28];                                             // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.MeshItem
// 0x0058 (0x00F8 - 0x00A0)
struct FMeshItem : public FCustomizationItem
{
	unsigned char                                      DefaultMaterialInstance[0x28];                             // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       DefaultSkinName;                                           // 0x00C8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               CompatibleWithAllSkins;                                    // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFEW[0x17];                                    // 0x00E1(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.WeaponMeshItem
// 0x0058 (0x0150 - 0x00F8)
struct FWeaponMeshItem : public FMeshItem
{
	unsigned char                                      Mesh1P[0x28];                                              // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Mesh3P[0x28];                                              // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       AmmoCounterSocketName;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PortalGunMeshItem
// 0x0028 (0x0178 - 0x0150)
struct FPortalGunMeshItem : public FWeaponMeshItem
{
	unsigned char                                      FireAnimation[0x28];                                       // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.JetpackMeshItem
// 0x0088 (0x0180 - 0x00F8)
struct FJetpackMeshItem : public FMeshItem
{
	unsigned char                                      Mesh[0x28];                                                // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      IdleAnimation[0x28];                                       // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      OpenAnimation[0x28];                                       // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      FlameMeshes[0x10];                                         // 0x0170(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct PortalWarsGlobals.PortalCustomizationItem
// 0x00A0 (0x0140 - 0x00A0)
struct FPortalCustomizationItem : public FCustomizationItem
{
	unsigned char                                      Mesh[0x28];                                                // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MaterialInstance[0x28];                                    // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      RingMesh[0x28];                                            // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      RingMaterialInstance[0x28];                                // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.SuitPreviewAnim
// 0x0030
struct FSuitPreviewAnim
{
	unsigned char                                      Animation[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              PreviewTime;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53W8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.SuitMeshItem
// 0x00B0 (0x01A8 - 0x00F8)
struct FSuitMeshItem : public FMeshItem
{
	unsigned char                                      Mesh3P[0x28];                                              // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Mesh1P[0x28];                                              // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              JetpackOffset;                                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PortalGunOffset;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSuitPreviewAnim                            PreviewAnimation;                                          // 0x0150(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      PreviewMaterialInstance[0x28];                             // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.SkinCompatibilityInfo
// 0x0018
struct FSkinCompatibilityInfo
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WYQ7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Meshes;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.SkinTextureSetOverride
// 0x0028
struct FSkinTextureSetOverride
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNY5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Meshes;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     TextureSet;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.AvailabilityOverride
// 0x0030
struct FAvailabilityOverride
{
	PortalWarsGlobals_ECustomizationType               CustomizationType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5MP6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Meshes;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAvailabilityInfo                           Availability;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.Skin
// 0x00E0 (0x0158 - 0x0078)
struct FSkin : public FPWTableRowBase
{
	unsigned char                                      MaterialInstance[0x28];                                    // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               CompatibleWithAll;                                         // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EU1P[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSkinCompatibilityInfo>              Compatibles;                                               // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkinCompatibilityInfo>              Incompatibles;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	PortalWarsGlobals_ECustomizationRarity             Rarity;                                                    // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VF2X[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<PortalWarsGlobals_ECustomizationType, PortalWarsGlobals_ECustomizationRarity> RarityOverrides;                                           // 0x00D0(0x0050) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FAvailabilityInfo                           Availability;                                              // 0x0120(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAvailabilityOverride>               AvailabilityOverrides;                                     // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSkinTextureSetOverride>             TextureSetOverrides;                                       // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct PortalWarsGlobals.TextureTableRow
// 0x0028 (0x0030 - 0x0008)
struct FTextureTableRow : public FTableRowBase
{
	unsigned char                                      Texture[0x28];                                             // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.StringTableRow
// 0x0010 (0x0018 - 0x0008)
struct FStringTableRow : public FTableRowBase
{
	struct FString                                     String;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.TextTableRow
// 0x0018 (0x0020 - 0x0008)
struct FTextTableRow : public FTableRowBase
{
	struct FText                                       Text;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.ScoreConfig
// 0x000C
struct FScoreConfig
{
	int                                                MinScore;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxScore;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PickupConfigOverride
// 0x0014
struct FPickupConfigOverride
{
	int                                                WeaponID;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEnabled;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideClips;                                             // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGA3[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmmoClips;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideSpawnTime;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYRN[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TimeBetweenSpawns;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.GameModeModifiers
// 0x0024
struct FGameModeModifiers
{
	bool                                               EnableBoundaries;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableJetpack;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableSprint;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnablePortalGun;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UnlimitedAmmo;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UnlimitedClipSize;                                         // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HeadshotsOnly;                                             // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BigHeadMode;                                               // 0x0007(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkSpeedModifier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JumpHeightModifier;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityModifier;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrusterPackFuelModifier;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrusterPackBoostModifier;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDmgModifier;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthModifier;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.KOTHConfig
// 0x0001
struct FKOTHConfig
{
	bool                                               RandomHillsEnabled;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.VIPConfig
// 0x0018
struct FVIPConfig
{
	TArray<int>                                        DefaultInventoryIDs;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              VIPWalkSpeedModifier;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BQB[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.RoundConfig
// 0x0010
struct FRoundConfig
{
	bool                                               bUseRoundTimer;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRoundScoreLimit;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSZE[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RoundScoreLimit;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundTimeLimit;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomWeapons;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRespawningDisabled;                                       // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ4Q[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.GameModeConfig
// 0x0090
struct FGameModeConfig
{
	bool                                               TeamGame;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NumTeams;                                                  // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF75[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScoreLimit;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RespawnTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZM6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        DefaultInventoryIDs;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               PickupsEnabled;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JN07[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPickupConfigOverride>               PickupOverrides;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               ShouldDropWeaponPickups;                                   // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldShowRadar;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               KillcamEnabled;                                            // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpectateAlliesWhenDead;                                    // 0x003B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeModifiers                          Modifiers;                                                 // 0x003C(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               RandomWeapons;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MeleeHeavyMode;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKOTHConfig                                 KOTHConfig;                                                // 0x0062(0x0001) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KV3[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVIPConfig                                  VIPConfig;                                                 // 0x0068(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FRoundConfig                                RoundConfig;                                               // 0x0080(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.GameConfig
// 0x00B8
struct FGameConfig
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameModeAlias;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeConfig                             GameModeConfig;                                            // 0x0020(0x0090) (NativeAccessSpecifierPublic)
	int                                                MatchTime;                                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BotsEnabled;                                               // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWarsGlobals_EBotDifficulty                   BotDifficulty;                                             // 0x00B5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U7XF[0x2];                                     // 0x00B6(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.WeaponPoseData
// 0x0030 (0x0038 - 0x0008)
struct FWeaponPoseData : public FTableRowBase
{
	PortalWarsGlobals_ECustomizationType               WeaponType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFSK[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Animation[0x28];                                           // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.TipData
// 0x0008 (0x0028 - 0x0020)
struct FTipData : public FTextTableRow
{
	bool                                               KeyboardOnly;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2L0U[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.MouseButtonData
// 0x0020 (0x0028 - 0x0008)
struct FMouseButtonData : public FTableRowBase
{
	struct FKey                                        Key;                                                       // 0x0008(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.GamepadButtonData
// 0x0020 (0x0028 - 0x0008)
struct FGamepadButtonData : public FTableRowBase
{
	struct FKey                                        Key;                                                       // 0x0008(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.TutorialStepData
// 0x0030
struct FTutorialStepData
{
	struct FText                                       Description;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FString>                             InputActions;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                GoalID;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J77F[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.SubtitleInfo
// 0x0018
struct FSubtitleInfo
{
	int                                                StartTimeSeconds;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTimeSeconds;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TableKey;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.VideoInfo
// 0x0038
struct FVideoInfo
{
	unsigned char                                      MediaSource[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FSubtitleInfo>                       Subtitles;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.TutorialStageData
// 0x0048 (0x00C0 - 0x0078)
struct FTutorialStageData : public FPWTableRowBase
{
	TArray<struct FTutorialStepData>                   Steps;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVideoInfo                                  VideoInfo;                                                 // 0x0088(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.BotProfileData
// 0x0048 (0x00C0 - 0x0078)
struct FBotProfileData : public FPWTableRowBase
{
	struct FString                                     Name;                                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      avatar[0x28];                                              // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FString                                     AvatarPath;                                                // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.RedeemableData
// 0x0030 (0x00A8 - 0x0078)
struct FRedeemableData : public FPWTableRowBase
{
	struct FText                                       Subtitle;                                                  // 0x0078(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                CurrencyCost;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct PortalWarsGlobals.MicroTxnPurchasable
// 0x0068 (0x00E0 - 0x0078)
struct FMicroTxnPurchasable : public FPWTableRowBase
{
	PortalWarsGlobals_EPurchasableType                 Type;                                                      // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AKH7[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRewardData>                         Rewards;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PlatformProductIds;                                        // 0x0090(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.RankData
// 0x0008 (0x0080 - 0x0078)
struct FRankData : public FPWTableRowBase
{
	int                                                RankDownXP;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankUpXP;                                                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.StreakIconData
// 0x0008 (0x0080 - 0x0078)
struct FStreakIconData : public FPWTableRowBase
{
	int                                                Streak;                                                    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9PF[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.ProgressionIconData
// 0x0008 (0x0080 - 0x0078)
struct FProgressionIconData : public FPWTableRowBase
{
	int                                                Level;                                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J80V[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UnlockNoteData
// 0x0020
struct FUnlockNoteData
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsImportant;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNLO[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UnlockData
// 0x0090 (0x0108 - 0x0078)
struct FUnlockData : public FPWTableRowBase
{
	PortalWarsGlobals_EUnlockType                      UnlockType;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QIZ[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlaylistName;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IconImage[0x28];                                           // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MedalImage[0x28];                                          // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       MessageText;                                               // 0x00E0(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FUnlockNoteData>                     Notes;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PlayStreakData
// 0x0028 (0x00A0 - 0x0078)
struct FPlayStreakData : public FPWTableRowBase
{
	struct FRewardData                                 Reward;                                                    // 0x0078(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.CheckInData
// 0x0010 (0x0088 - 0x0078)
struct FCheckInData : public FPWTableRowBase
{
	TArray<struct FRewardData>                         Rewards;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.ChallengeData
// 0x0068 (0x00E0 - 0x0078)
struct FChallengeData : public FPWTableRowBase
{
	PortalWarsGlobals_EChallengeType                   ChallengeType;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4UN[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TargetValue;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRewardData                                 Reward;                                                    // 0x0080(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                GroupId;                                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPremium;                                                 // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOKX[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GroupName;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatType;                                                  // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExcludedPlaylists;                                         // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.RewardPassData
// 0x0028 (0x00A0 - 0x0078)
struct FRewardPassData : public FPWTableRowBase
{
	int                                                MinXP;                                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxXP;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardData>                         FreeRewards;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRewardData>                         PremiumRewards;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.ProgressionData
// 0x0030 (0x00A8 - 0x0078)
struct FProgressionData : public FPWTableRowBase
{
	int                                                XPDifference;                                              // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelUpXP;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRewardData                                 Reward;                                                    // 0x0080(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.RegionData
// 0x0030 (0x00A8 - 0x0078)
struct FRegionData : public FPWTableRowBase
{
	struct FString                                     PingURL;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InternalName;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<PortalWarsGlobals_ERegionSelectability>     Selectability;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PlaylistData
// 0x0058 (0x00D0 - 0x0078)
struct FPlaylistData : public FPWTableRowBase
{
	struct FString                                     InternalName;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PortalWarsGlobals_EPlaylistType                    PlaylistType;                                              // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQHA[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0090(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      IconImage[0x28];                                           // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.ReticleData
// 0x0080
struct FReticleData
{
	bool                                               ShouldShowOuterCircle;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_77Y9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  OuterCircleImage;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterCircleRadius;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldShowInnerCircle;                                     // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDRA[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  InnerCircleImage;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerCircleRadius;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldShowDot;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldShowCrosshair;                                       // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FVS[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CrosshairBarImage;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CrosshairIndSize;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrosshairOffset;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6P8[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ZoomImage;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HitMarkerImage;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeadshotMarkerImage;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  KillMarkerImage;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitMarkerScale;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReticleOpacity;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReticleScale;                                              // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReticleColor;                                              // 0x006C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94OG[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.CustomReticleData
// 0x0080 (0x00F8 - 0x0078)
struct FCustomReticleData : public FPWTableRowBase
{
	struct FReticleData                                ReticleData;                                               // 0x0078(0x0080) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.AnnouncerEvent
// 0x0028 (0x0030 - 0x0008)
struct FAnnouncerEvent : public FTableRowBase
{
	struct FString                                     EventName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SubtitleText;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.MedalData
// 0x0010 (0x0088 - 0x0078)
struct FMedalData : public FPWTableRowBase
{
	struct FString                                     SoundName;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.WeaponMetadata
// 0x0048 (0x00C0 - 0x0078)
struct FWeaponMetadata : public FPWTableRowBase
{
	unsigned char                                      DefaultClass[0x28];                                        // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                CrosshairWeaponID;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TRL[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ShortDisplayName;                                          // 0x00A8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.MapData
// 0x0020 (0x0098 - 0x0078)
struct FMapData : public FPWTableRowBase
{
	struct FString                                     MapName;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<PortalWarsGlobals_EMapSelectability>        Selectability;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.GameModeData
// 0x0168 (0x01E0 - 0x0078)
struct FGameModeData : public FPWTableRowBase
{
	unsigned char                                      DefaultClass[0x28];                                        // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FString                                     Alias;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeConfig                             Config;                                                    // 0x00B0(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FScoreConfig                                ScoreConfig;                                               // 0x0140(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MatchTime;                                                 // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0150(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       ScoreFormatText;                                           // 0x0168(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     SoundName;                                                 // 0x0180(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4N49[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        CompatibleWeaponIDs;                                       // 0x0198(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<PortalWarsGlobals_EGameModeSelectability>   Selectability;                                             // 0x01A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      IconImage[0x28];                                           // 0x01B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct PortalWarsGlobals.MatchSummaryScoreInfo
// 0x0008
struct FMatchSummaryScoreInfo
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Points;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.WeaponStats
// 0x0050
struct FWeaponStats
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsFired;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsLanded;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadshotsLanded;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadshotKills;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillsThruPortal;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeKills;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Collaterals;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PossessionSecs;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageDealt;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DoubleKills;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TripleKills;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuadKills;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuintKills;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SexKills;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxKillsWithSinglePickup;                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserRankInfo
// 0x0020
struct FUserRankInfo
{
	struct FString                                     RankType;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankLevel;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankXP;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementGamesPlayedCount;                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementGamesPlayedTotal;                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserProgressionInfo
// 0x0008
struct FUserProgressionInfo
{
	int                                                Xp;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserDailyStreakInfo
// 0x0020
struct FUserDailyStreakInfo
{
	bool                                               HasPlayedToday;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Q5N[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BoostPercentage;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviousValue;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PreviousValueExpiresAtMs;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenReceived;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IN3J[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.PlayerStatsInfo
// 0x0068
struct FPlayerStatsInfo
{
	int                                                Kills;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Suicides;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadshotKills;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Teabags;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeleeKills;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PortalKills;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillsThruPortal;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DoubleKills;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TripleKills;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuadKills;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuintKills;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SexKills;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak1;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak2;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak3;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak4;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak5;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Killstreak6;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageDealt;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EmoteCount;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponStats>                        Weapons;                                                   // 0x0058(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct PortalWarsGlobals.PlayerStatsInfo_InDepth
// 0x0060 (0x00C8 - 0x0068)
struct FPlayerStatsInfo_InDepth : public FPlayerStatsInfo
{
	int                                                EnemyPortalsDestroyed;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AllyPortalsEntered;                                        // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemyPortalsEntered;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OwnPortalsEntered;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PortalsSpawned;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DistancePortaled;                                          // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HighestConsecutiveKills;                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HillsCaptured;                                             // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HillsNeutralized;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillsOnHill;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemyKillsOnHill;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagsPickedUp;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagsReturned;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagKills;                                                 // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagCarrierKills;                                          // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OddballsPickedUp;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OddballKills;                                              // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OddballCarrierKills;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VIPKills;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillsAsVIP;                                                // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeabagsDenied;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstBloods;                                               // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RevengeKills;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KingSlayers;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PlayerStatsInfo_MatchSummary
// 0x0010 (0x00D8 - 0x00C8)
struct FPlayerStatsInfo_MatchSummary : public FPlayerStatsInfo_InDepth
{
	int                                                Points;                                                    // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimePlayed;                                                // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdaptiveDifficultyAverage;                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWIC[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.EndGamePlayerInfo
// 0x0228
struct FEndGamePlayerInfo
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MYQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCustomizationId>                    Customizations;                                            // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPlayerStatsInfo_MatchSummary               Stats;                                                     // 0x0028(0x00D8) (NativeAccessSpecifierPublic)
	bool                                               bQuitter;                                                  // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLLJ[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserRankInfo                               PlaylistRank;                                              // 0x0118(0x0020) (NativeAccessSpecifierPublic)
	struct FUserProgressionInfo                        Progression;                                               // 0x0138(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FUserDailyStreakInfo                        DailyStreak;                                               // 0x0140(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsABot;                                                   // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1O7[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBotProfileData                             BotProfile;                                                // 0x0168(0x00C0) (NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.MatchSummaryInfo
// 0x00D8
struct FMatchSummaryInfo
{
	struct FGameModeConfig                             GameConfig;                                                // 0x0000(0x0090) (NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMatchSummaryScoreInfo>              Scores;                                                    // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEndGamePlayerInfo>                  Users;                                                     // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTeamGame;                                                 // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8OR[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Mode;                                                      // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PlayerStateInfo
// 0x0018
struct FPlayerStateInfo
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSpectator;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFlagged;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9S7Y[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.PlayerStatsInfo_Career
// 0x0008 (0x0070 - 0x0068)
struct FPlayerStatsInfo_Career : public FPlayerStatsInfo
{
	int                                                GamesPlayed;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GamesWon;                                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PingToRegionInfo
// 0x0018
struct FPingToRegionInfo
{
	struct FString                                     Region;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PingMs;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W3RQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UserReferFriendInfo
// 0x0028
struct FUserReferFriendInfo
{
	struct FString                                     Code;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBeReferred;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JA9C[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PassLevel;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReferralCode;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.PlaylistStats
// 0x0080
struct FPlaylistStats
{
	struct FString                                     PlaylistType;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerStatsInfo_Career                     PlaylistStats;                                             // 0x0010(0x0070) (NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserStatsInfo
// 0x0080
struct FUserStatsInfo
{
	struct FPlayerStatsInfo_Career                     TotalStats;                                                // 0x0000(0x0070) (NativeAccessSpecifierPublic)
	TArray<struct FPlaylistStats>                      Playlists;                                                 // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.XPAllocation
// 0x0018
struct FXPAllocation
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CCI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UserSeasonRewardInfo
// 0x0008
struct FUserSeasonRewardInfo
{
	int                                                Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinCount;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserBattlePassProgressionInfo
// 0x000C
struct FUserBattlePassProgressionInfo
{
	int                                                Xp;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OwnsPremium;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQVW[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UserDailyCheckInInfo
// 0x0020
struct FUserDailyCheckInInfo
{
	int                                                DayOfWeek;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DaysClaimedCount;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DaysMissedCount;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UB7A[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            WeekStartsAtMs;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            WeekExpiresAtMs;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserChallengeInfo
// 0x000C
struct FUserChallengeInfo
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentValue;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsComplete;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsClaimed;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5X1X[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalWarsGlobals.UserChallengesInfo
// 0x0010
struct FUserChallengesInfo
{
	TArray<struct FUserChallengeInfo>                  Challenges;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalWarsGlobals.UserInfo
// 0x0020
struct FUserInfo
{
	struct FString                                     EncodedCompositeUserId;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
