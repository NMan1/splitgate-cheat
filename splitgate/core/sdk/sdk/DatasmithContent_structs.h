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

// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class DatasmithContent_EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point = 0,
	EDatasmithAreaLightActorType__Spot = 1,
	EDatasmithAreaLightActorType__Rect = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX = 3,

};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class DatasmithContent_EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__None = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 5,

};

// Enum DatasmithContent.EDatasmithCADRetessellationRule
enum class DatasmithContent_EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule__EDatasmithCADRetessellationRule_MAX = 2,

};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class DatasmithContent_EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal = 1,
	EDatasmithCADStitchingTechnique__StitchingSew = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportScene
enum class DatasmithContent_EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel = 0,
	EDatasmithImportScene__CurrentLevel = 1,
	EDatasmithImportScene__AssetsOnly = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class DatasmithContent_EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP = 0,
	EDatasmithImportLightmapMax__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMax__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMax__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMax__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMax__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMax__LIGHTMAP06 = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX = 7,

};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class DatasmithContent_EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP = 0,
	EDatasmithImportLightmapMin__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMin__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMin__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMin__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMin__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX = 6,

};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class DatasmithContent_EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class DatasmithContent_EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update = 0,
	EDatasmithImportActorPolicy__Full = 1,
	EDatasmithImportActorPolicy__Ignore = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class DatasmithContent_EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace = 0,
	EDatasmithImportAssetConflictPolicy__Update = 1,
	EDatasmithImportAssetConflictPolicy__Use = 2,
	EDatasmithImportAssetConflictPolicy__Ignore = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX = 4,

};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class DatasmithContent_EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current = 0,
	EDatasmithImportSearchPackagePolicy__All = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x0030
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	unsigned char                                      bEnableLookAtTracking : 1;                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowRoll : 1;                                            // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E64Z[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorToTrack[0x28];                                        // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float                                              SensorWidth;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensorHeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004
struct FDatasmithCameraLensSettingsTemplate
{
	float                                              MaxFStop;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0008
struct FDatasmithCameraFocusSettingsTemplate
{
	CinematicCamera_ECameraFocusMethod                 FocusMethod;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2A3K[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ManualFocusDistance;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040
struct FDatasmithPostProcessSettingsTemplate
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                   // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturation : 1;                             // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_VignetteIntensity : 1;                           // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                              // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_CameraISO : 1;                                   // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWK1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                           // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCQL[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WhiteTemp;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VignetteIntensity;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmWhitePoint;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorSaturation;                                           // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAutoExposureMethod>            AutoExposureMethod;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LY7Z[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraISO;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraShutterSpeed;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFstop;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x0010
struct FDatasmithTessellationOptions
{
	float                                              ChordTolerance;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxEdgeLength;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalTolerance;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithCADStitchingTechnique   StitchingTechnique;                                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPNS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008
struct FDatasmithAssetImportOptions
{
	struct FName                                       PackagePath;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004
struct FDatasmithStaticMeshImportOptions
{
	DatasmithContent_EDatasmithImportLightmapMin       MinLightmapResolution;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportLightmapMax       MaxLightmapResolution;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateLightmapUVs;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveDegenerates;                                        // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002
struct FDatasmithReimportOptions
{
	bool                                               bUpdateActors;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRespawnDeletedActors;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0014
struct FDatasmithImportBaseOptions
{
	DatasmithContent_EDatasmithImportScene             SceneHandling;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeGeometry;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeMaterial;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeLight;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeCamera;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAnimation;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4J7C[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithAssetImportOptions                AssetOptions;                                              // 0x0008(0x0008) (BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDatasmithStaticMeshImportOptions           StaticMeshOptions;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x0050
struct FDatasmithStaticParameterSetTemplate
{
	TMap<struct FName, bool>                           StaticSwitchParameters;                                    // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004
struct FDatasmithMeshSectionInfoTemplate
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{
	unsigned char                                      bUseMikkTSpace : 1;                                        // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecomputeNormals : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecomputeTangents : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveDegenerates : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                         // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                  // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateLightmapUVs : 1;                                  // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0VV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLightmapResolution;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SrcLightmapIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DstLightmapIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010
struct FDatasmithStaticMaterialTemplate
{
	struct FName                                       MaterialSlotName;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{
	TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;                                                       // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct DatasmithContent.DatasmithRetessellationOptions
// 0x0004 (0x0014 - 0x0010)
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
	DatasmithContent_EDatasmithCADRetessellationRule   RetessellationRule;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7HZQ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
