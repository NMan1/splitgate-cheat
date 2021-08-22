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

// Function EditableMesh.EditableMesh.WeldVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVertexID               OutNewVertexID                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	UEditableMesh_WeldVertices_Params params;
	params.VertexIDs = VertexIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewVertexID != nullptr)
		*OutNewVertexID = params.OutNewVertexID;

}


// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutWasVertexRemoved           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 OutNewEdgeID                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	UEditableMesh_TryToRemoveVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = params.OutNewEdgeID;

}


// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutWasEdgeRemoved             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              OutNewPolygonID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	UEditableMesh_TryToRemovePolygonEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = params.OutNewPolygonID;

}


// Function EditableMesh.EditableMesh.TriangulatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewTrianglePolygons         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	UEditableMesh_TriangulatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = params.OutNewTrianglePolygons;

}


// Function EditableMesh.EditableMesh.TessellatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// EditableMesh_ETriangleTessellationMode TriangleTessellationMode       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, EditableMesh_ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	UEditableMesh_TessellatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.TriangleTessellationMode = TriangleTessellationMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;

}


// Function EditableMesh.EditableMesh.StartModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EditableMesh_EMeshModificationType MeshModificationType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EditableMesh_EMeshTopologyChange MeshTopologyChange             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::StartModification(EditableMesh_EMeshModificationType MeshModificationType, EditableMesh_EMeshTopologyChange MeshTopologyChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	UEditableMesh_StartModification_Params params;
	params.MeshModificationType = MeshModificationType;
	params.MeshTopologyChange = MeshTopologyChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SplitPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToSplit> PolygonsToSplit                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	UEditableMesh_SplitPolygons_Params params;
	params.PolygonsToSplit = PolygonsToSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;

}


// Function EditableMesh.EditableMesh.SplitPolygonalMesh
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane                  InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      PolygonIDs1                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      PolygonIDs2                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         BoundaryIDs                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");

	UEditableMesh_SplitPolygonalMesh_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PolygonIDs1 != nullptr)
		*PolygonIDs1 = params.PolygonIDs1;
	if (PolygonIDs2 != nullptr)
		*PolygonIDs2 = params.PolygonIDs2;
	if (BoundaryIDs != nullptr)
		*BoundaryIDs = params.BoundaryIDs;

}


// Function EditableMesh.EditableMesh.SplitEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	UEditableMesh_SplitEdge_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;

}


// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                  VerticesNewCornerSharpness     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	UEditableMesh_SetVerticesCornerSharpness_Params params;
	params.VertexIDs = VertexIDs;
	params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertex> AttributesForVertices          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	UEditableMesh_SetVerticesAttributes_Params params;
	params.AttributesForVertices = AttributesForVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	UEditableMesh_SetVertexInstancesAttributes_Params params;
	params.AttributesForVertexInstances = AttributesForVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumTexCoords                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetTextureCoordinateCount(int NumTexCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");

	UEditableMesh_SetTextureCoordinateCount_Params params;
	params.NumTexCoords = NumTexCoords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewSubdivisionCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetSubdivisionCount(int NewSubdivisionCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");

	UEditableMesh_SetSubdivisionCount_Params params;
	params.NewSubdivisionCount = NewSubdivisionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	UEditableMesh_SetPolygonsVertexAttributes_Params params;
	params.VertexAttributesForPolygons = VertexAttributesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          MaxDotProductForSoftEdge       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	UEditableMesh_SetEdgesHardnessAutomatically_Params params;
	params.EdgeIDs = EdgeIDs;
	params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetEdgesHardness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<bool>                   EdgesNewIsHard                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	UEditableMesh_SetEdgesHardness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewIsHard = EdgesNewIsHard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                  EdgesNewCreaseSharpness        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	UEditableMesh_SetEdgesCreaseSharpness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForEdge> AttributesForEdges             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	UEditableMesh_SetEdgesAttributes_Params params;
	params.AttributesForEdges = AttributesForEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetAllowUndo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowUndo                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");

	UEditableMesh_SetAllowUndo_Params params;
	params.bInAllowUndo = bInAllowUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowSpatialDatabase        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");

	UEditableMesh_SetAllowSpatialDatabase_Params params;
	params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SetAllowCompact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowCompact                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");

	UEditableMesh_SetAllowCompact_Params params;
	params.bInAllowCompact = bInAllowCompact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlane                  InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;

}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 LineSegmentStart               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LineSegmentEnd                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params params;
	params.LineSegmentStart = LineSegmentStart;
	params.LineSegmentEnd = LineSegmentEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;

}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlane>          Planes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");

	UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params params;
	params.Planes = Planes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;

}


// Function EditableMesh.EditableMesh.RevertInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEditableMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEditableMesh* UEditableMesh::RevertInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	UEditableMesh_RevertInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Revert
// (Final, Native, Public, BlueprintCallable)
void UEditableMesh::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");

	UEditableMesh_Revert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (Final, Native, Public, BlueprintCallable)
void UEditableMesh::RebuildRenderMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");

	UEditableMesh_RebuildRenderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	UEditableMesh_QuadrangulateMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;

}


// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (Final, Native, Public, BlueprintCallable)
void UEditableMesh::PropagateInstanceChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");

	UEditableMesh_PropagateInstanceChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.MoveVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToMove>   VerticesToMove                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	UEditableMesh_MoveVertices_Params params;
	params.VerticesToMove = VerticesToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.MakeVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VertexIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UEditableMesh::STATIC_MakeVertexID(int VertexIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	UEditableMesh_MakeVertexID_Params params;
	params.VertexIndex = VertexIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PolygonIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UEditableMesh::STATIC_MakePolygonID(int PolygonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	UEditableMesh_MakePolygonID_Params params;
	params.PolygonIndex = PolygonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PolygonGroupIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UEditableMesh::STATIC_MakePolygonGroupID(int PolygonGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	UEditableMesh_MakePolygonGroupID_Params params;
	params.PolygonGroupIndex = PolygonGroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EdgeIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::STATIC_MakeEdgeID(int EdgeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	UEditableMesh_MakeEdgeID_Params params;
	params.EdgeIndex = EdgeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	UEditableMesh_IsValidVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	UEditableMesh_IsValidPolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	UEditableMesh_IsValidPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	UEditableMesh_IsValidEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsUndoAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsUndoAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");

	UEditableMesh_IsUndoAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsSpatialDatabaseAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");

	UEditableMesh_IsSpatialDatabaseAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsPreviewingSubdivisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");

	UEditableMesh_IsPreviewingSubdivisions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	UEditableMesh_IsOrphanedVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCompactAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsCompactAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");

	UEditableMesh_IsCompactAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsCommittedAsInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");

	UEditableMesh_IsCommittedAsInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommitted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsCommitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");

	UEditableMesh_IsCommitted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsBeingModified
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::IsBeingModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");

	UEditableMesh_IsBeingModified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UEditableMesh::STATIC_InvalidVertexID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	UEditableMesh_InvalidVertexID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UEditableMesh::STATIC_InvalidPolygonID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	UEditableMesh_InvalidPolygonID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UEditableMesh::STATIC_InvalidPolygonGroupID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	UEditableMesh_InvalidPolygonGroupID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::STATIC_InvalidEdgeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	UEditableMesh_InvalidEdgeID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InsetPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          InsetFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InsetProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EditableMesh_EInsetPolygonsMode Mode                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EditableMesh_EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	UEditableMesh_InsetPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.InsetFixedDistance = InsetFixedDistance;
	params.InsetProgressTowardCenter = InsetProgressTowardCenter;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;

}


// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	UEditableMesh_InsertEdgeLoop_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;

}


// Function EditableMesh.EditableMesh.InitializeAdapters
// (Final, Native, Public, BlueprintCallable)
void UEditableMesh::InitializeAdapters()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");

	UEditableMesh_InitializeAdapters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               NextVertexID                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutEdgeWindingIsReversed      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	UEditableMesh_GetVertexPairEdge_Params params;
	params.VertexID = VertexID;
	params.NextVertexID = NextVertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	UEditableMesh_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetVertexInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");

	UEditableMesh_GetVertexInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	UEditableMesh_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	UEditableMesh_GetVertexInstanceConnectedPolygon_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetVertexCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");

	UEditableMesh_GetVertexCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	UEditableMesh_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutConnectedEdgeIDs            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	UEditableMesh_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;

}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	UEditableMesh_GetVertexConnectedEdgeCount_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectedEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	UEditableMesh_GetVertexConnectedEdge_Params params;
	params.VertexID = VertexID;
	params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	UEditableMesh_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;

}


// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetTextureCoordinateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");

	UEditableMesh_GetTextureCoordinateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSubdivisionLimitData   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	UEditableMesh_GetSubdivisionLimitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetSubdivisionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");

	UEditableMesh_GetSubdivisionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	UEditableMesh_GetPolygonTriangulatedTriangleCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PolygonTriangleNumber          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTriangleID             ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	UEditableMesh_GetPolygonTriangulatedTriangle_Params params;
	params.PolygonID = PolygonID;
	params.PolygonTriangleNumber = PolygonTriangleNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutPolygonPerimeterVertexIDs   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	UEditableMesh_GetPolygonPerimeterVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;

}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	UEditableMesh_GetPolygonPerimeterVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;

}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	UEditableMesh_GetPolygonPerimeterVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	UEditableMesh_GetPolygonPerimeterVertexCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	UEditableMesh_GetPolygonPerimeterVertex_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutPolygonPerimeterEdgeIDs     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	UEditableMesh_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;

}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	UEditableMesh_GetPolygonPerimeterEdgeCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PerimeterEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutEdgeWindingIsReversedForPolygon (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	UEditableMesh_GetPolygonPerimeterEdge_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PolygonNumber                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	UEditableMesh_GetPolygonInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.PolygonNumber = PolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonGroupCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");

	UEditableMesh_GetPolygonGroupCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	UEditableMesh_GetPolygonCountInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetPolygonCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");

	UEditableMesh_GetPolygonCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutAdjacentPolygons            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	UEditableMesh_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = params.OutAdjacentPolygons;

}


// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	UEditableMesh_GetGroupForPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	UEditableMesh_GetFirstValidPolygonGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               OutEdgeVertexID0               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               OutEdgeVertexID1               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	UEditableMesh_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = params.OutEdgeVertexID0;
	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = params.OutEdgeVertexID1;

}


// Function EditableMesh.EditableMesh.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EdgeVertexNumber               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	UEditableMesh_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.EdgeVertexNumber = EdgeVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID               VertexID0                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	UEditableMesh_GetEdgeThatConnectsVertices_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         EdgeLoopIDs                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	UEditableMesh_GetEdgeLoopElements_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = params.EdgeLoopIDs;

}


// Function EditableMesh.EditableMesh.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetEdgeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");

	UEditableMesh_GetEdgeCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	UEditableMesh_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;

}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	UEditableMesh_GetEdgeConnectedPolygonCount_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	UEditableMesh_GetEdgeConnectedPolygon_Params params;
	params.EdgeID = EdgeID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	UEditableMesh_GeneratePolygonTangentsAndNormals_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.FlipPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	UEditableMesh_FlipPolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               EdgeVertexID0                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID               EdgeVertexID1                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params params;
	params.PolygonID = PolygonID;
	params.EdgeVertexID0 = EdgeVertexID0;
	params.EdgeVertexID1 = EdgeVertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeLoopEdgeIDs             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutFlippedEdgeIDs              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutReversedEdgeIDPathToTake    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygonIDsToSplit           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	UEditableMesh_FindPolygonLoop_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;

}


// Function EditableMesh.EditableMesh.ExtrudePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      Polygons                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ExtrudeDistance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bKeepNeighborsTogether         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewExtrudedFrontPolygons    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	UEditableMesh_ExtrudePolygons_Params params;
	params.Polygons = Polygons;
	params.ExtrudeDistance = ExtrudeDistance;
	params.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;

}


// Function EditableMesh.EditableMesh.ExtendVertices
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bOnlyExtendClosestEdge         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReferencePosition              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutNewExtendedVertexIDs        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	UEditableMesh_ExtendVertices_Params params;
	params.VertexIDs = VertexIDs;
	params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;

}


// Function EditableMesh.EditableMesh.ExtendEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWeldNeighbors                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewExtendedEdgeIDs          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	UEditableMesh_ExtendEdges_Params params;
	params.EdgeIDs = EdgeIDs;
	params.bWeldNeighbors = bWeldNeighbors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;

}


// Function EditableMesh.EditableMesh.EndModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFromUndo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::EndModification(bool bFromUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");

	UEditableMesh_EndModification_Params params;
	params.bFromUndo = bFromUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	UEditableMesh_DeleteVertexInstances_Params params;
	params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params params;
	params.VertexID = VertexID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeletePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDsToDelete             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	UEditableMesh_DeletePolygons_Params params;
	params.PolygonIDsToDelete = PolygonIDsToDelete;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupID> PolygonGroupIDs                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	UEditableMesh_DeletePolygonGroups_Params params;
	params.PolygonGroupIDs = PolygonGroupIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDsToDelete              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	UEditableMesh_DeleteOrphanVertices_Params params;
	params.VertexIDsToDelete = VertexIDsToDelete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeleteEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDsToDelete                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	UEditableMesh_DeleteEdges_Params params;
	params.EdgeIDsToDelete = EdgeIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	UEditableMesh_DeleteEdgeAndConnectedPolygons_Params params;
	params.EdgeID = EdgeID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.CreateVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToCreate> VerticesToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	UEditableMesh_CreateVertices_Params params;
	params.VerticesToCreate = VerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;

}


// Function EditableMesh.EditableMesh.CreateVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	UEditableMesh_CreateVertexInstances_Params params;
	params.VertexInstancesToCreate = VertexInstancesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;

}


// Function EditableMesh.EditableMesh.CreatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToCreate> PolygonsToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	UEditableMesh_CreatePolygons_Params params;
	params.PolygonsToCreate = PolygonsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;

}


// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	UEditableMesh_CreatePolygonGroups_Params params;
	params.PolygonGroupsToCreate = PolygonGroupsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;

}


// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	UEditableMesh_CreateMissingPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;

}


// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumVerticesToCreate            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	UEditableMesh_CreateEmptyVertexRange_Params params;
	params.NumVerticesToCreate = NumVerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;

}


// Function EditableMesh.EditableMesh.CreateEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeToCreate>   EdgesToCreate                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	UEditableMesh_CreateEdges_Params params;
	params.EdgesToCreate = EdgesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;

}


// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutSharedEdgeIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	UEditableMesh_ComputePolygonsSharedEdges_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = params.OutSharedEdgeIDs;

}


// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	UEditableMesh_ComputePolygonPlane_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	UEditableMesh_ComputePolygonNormal_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID              PolygonID                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	UEditableMesh_ComputePolygonCenter_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	UEditableMesh_ComputeBoundingBoxAndSphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FBox UEditableMesh::ComputeBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	UEditableMesh_ComputeBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.CommitInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ComponentToInstanceTo          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	UEditableMesh_CommitInstance_Params params;
	params.ComponentToInstanceTo = ComponentToInstanceTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Commit
// (Final, Native, Public, BlueprintCallable)
void UEditableMesh::Commit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");

	UEditableMesh_Commit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	UEditableMesh_ChangePolygonsVertexInstances_Params params;
	params.VertexInstancesForPolygons = VertexInstancesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.BevelPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          BevelFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BevelProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	UEditableMesh_BevelPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.BevelFixedDistance = BevelFixedDistance;
	params.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;

}


// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bDeleteOrphanedPolygonGroups   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	UEditableMesh_AssignPolygonsToPolygonGroups_Params params;
	params.PolygonGroupForPolygons = PolygonGroupForPolygons;
	params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableMesh::AnyChangesToUndo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");

	UEditableMesh_AnyChangesToUndo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LODIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEditableMesh* UEditableMeshFactory::STATIC_MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");

	UEditableMeshFactory_MakeEditableMesh_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.LODIndex = LODIndex;

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
