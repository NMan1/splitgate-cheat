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

// Function EditableMesh.EditableMesh.WeldVertices
struct UEditableMesh_WeldVertices_Params
{
	TArray<struct FVertexID>                           VertexIDs;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVertexID                                   OutNewVertexID;                                            // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.TryToRemoveVertex
struct UEditableMesh_TryToRemoveVertex_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutWasVertexRemoved;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     OutNewEdgeID;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
struct UEditableMesh_TryToRemovePolygonEdge_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutWasEdgeRemoved;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  OutNewPolygonID;                                           // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.TriangulatePolygons
struct UEditableMesh_TriangulatePolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewTrianglePolygons;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.TessellatePolygons
struct UEditableMesh_TessellatePolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EditableMesh_ETriangleTessellationMode             TriangleTessellationMode;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewPolygonIDs;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.StartModification
struct UEditableMesh_StartModification_Params
{
	EditableMesh_EMeshModificationType                 MeshModificationType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EditableMesh_EMeshTopologyChange                   MeshTopologyChange;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SplitPolygons
struct UEditableMesh_SplitPolygons_Params
{
	TArray<struct FPolygonToSplit>                     PolygonsToSplit;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewEdgeIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SplitPolygonalMesh
struct UEditableMesh_SplitPolygonalMesh_Params
{
	struct FPlane                                      InPlane;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          PolygonIDs1;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          PolygonIDs2;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             BoundaryIDs;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SplitEdge
struct UEditableMesh_SplitEdge_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Splits;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutNewVertexIDs;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
struct UEditableMesh_SetVerticesCornerSharpness_Params
{
	TArray<struct FVertexID>                           VertexIDs;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      VerticesNewCornerSharpness;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetVerticesAttributes
struct UEditableMesh_SetVerticesAttributes_Params
{
	TArray<struct FAttributesForVertex>                AttributesForVertices;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
struct UEditableMesh_SetVertexInstancesAttributes_Params
{
	TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
struct UEditableMesh_SetTextureCoordinateCount_Params
{
	int                                                NumTexCoords;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetSubdivisionCount
struct UEditableMesh_SetSubdivisionCount_Params
{
	int                                                NewSubdivisionCount;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
struct UEditableMesh_SetPolygonsVertexAttributes_Params
{
	TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
struct UEditableMesh_SetEdgesHardnessAutomatically_Params
{
	TArray<struct FEdgeID>                             EdgeIDs;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              MaxDotProductForSoftEdge;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetEdgesHardness
struct UEditableMesh_SetEdgesHardness_Params
{
	TArray<struct FEdgeID>                             EdgeIDs;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<bool>                                       EdgesNewIsHard;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
struct UEditableMesh_SetEdgesCreaseSharpness_Params
{
	TArray<struct FEdgeID>                             EdgeIDs;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      EdgesNewCreaseSharpness;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetEdgesAttributes
struct UEditableMesh_SetEdgesAttributes_Params
{
	TArray<struct FAttributesForEdge>                  AttributesForEdges;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetAllowUndo
struct UEditableMesh_SetAllowUndo_Params
{
	bool                                               bInAllowUndo;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
struct UEditableMesh_SetAllowSpatialDatabase_Params
{
	bool                                               bInAllowSpatialDatabase;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SetAllowCompact
struct UEditableMesh_SetAllowCompact_Params
{
	bool                                               bInAllowCompact;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
struct UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params
{
	struct FPlane                                      InPlane;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygons;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
struct UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params
{
	struct FVector                                     LineSegmentStart;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LineSegmentEnd;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygons;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
struct UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params
{
	TArray<struct FPlane>                              Planes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygons;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.RevertInstance
struct UEditableMesh_RevertInstance_Params
{
	class UEditableMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.Revert
struct UEditableMesh_Revert_Params
{
};

// Function EditableMesh.EditableMesh.RebuildRenderMesh
struct UEditableMesh_RebuildRenderMesh_Params
{
};

// Function EditableMesh.EditableMesh.QuadrangulateMesh
struct UEditableMesh_QuadrangulateMesh_Params
{
	TArray<struct FPolygonID>                          OutNewPolygonIDs;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.PropagateInstanceChanges
struct UEditableMesh_PropagateInstanceChanges_Params
{
};

// Function EditableMesh.EditableMesh.MoveVertices
struct UEditableMesh_MoveVertices_Params
{
	TArray<struct FVertexToMove>                       VerticesToMove;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.MakeVertexID
struct UEditableMesh_MakeVertexID_Params
{
	int                                                VertexIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.MakePolygonID
struct UEditableMesh_MakePolygonID_Params
{
	int                                                PolygonIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.MakePolygonGroupID
struct UEditableMesh_MakePolygonGroupID_Params
{
	int                                                PolygonGroupIndex;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.MakeEdgeID
struct UEditableMesh_MakeEdgeID_Params
{
	int                                                EdgeIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsValidVertex
struct UEditableMesh_IsValidVertex_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsValidPolygonGroup
struct UEditableMesh_IsValidPolygonGroup_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsValidPolygon
struct UEditableMesh_IsValidPolygon_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsValidEdge
struct UEditableMesh_IsValidEdge_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsUndoAllowed
struct UEditableMesh_IsUndoAllowed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
struct UEditableMesh_IsSpatialDatabaseAllowed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
struct UEditableMesh_IsPreviewingSubdivisions_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsOrphanedVertex
struct UEditableMesh_IsOrphanedVertex_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsCompactAllowed
struct UEditableMesh_IsCompactAllowed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsCommittedAsInstance
struct UEditableMesh_IsCommittedAsInstance_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsCommitted
struct UEditableMesh_IsCommitted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.IsBeingModified
struct UEditableMesh_IsBeingModified_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InvalidVertexID
struct UEditableMesh_InvalidVertexID_Params
{
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InvalidPolygonID
struct UEditableMesh_InvalidPolygonID_Params
{
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
struct UEditableMesh_InvalidPolygonGroupID_Params
{
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InvalidEdgeID
struct UEditableMesh_InvalidEdgeID_Params
{
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InsetPolygons
struct UEditableMesh_InsetPolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              InsetFixedDistance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InsetProgressTowardCenter;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EditableMesh_EInsetPolygonsMode                    Mode;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewSidePolygonIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InsertEdgeLoop
struct UEditableMesh_InsertEdgeLoop_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Splits;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewEdgeIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.InitializeAdapters
struct UEditableMesh_InitializeAdapters_Params
{
};

// Function EditableMesh.EditableMesh.GetVertexPairEdge
struct UEditableMesh_GetVertexPairEdge_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   NextVertexID;                                              // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutEdgeWindingIsReversed;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
struct UEditableMesh_GetVertexInstanceVertex_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceCount
struct UEditableMesh_GetVertexInstanceCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
struct UEditableMesh_GetVertexInstanceConnectedPolygons_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
struct UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
struct UEditableMesh_GetVertexInstanceConnectedPolygon_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectedPolygonNumber;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexCount
struct UEditableMesh_GetVertexCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
struct UEditableMesh_GetVertexConnectedPolygons_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
struct UEditableMesh_GetVertexConnectedEdges_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutConnectedEdgeIDs;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
struct UEditableMesh_GetVertexConnectedEdgeCount_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
struct UEditableMesh_GetVertexConnectedEdge_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectedEdgeNumber;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
struct UEditableMesh_GetVertexAdjacentVertices_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutAdjacentVertexIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
struct UEditableMesh_GetTextureCoordinateCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
struct UEditableMesh_GetSubdivisionLimitData_Params
{
	struct FSubdivisionLimitData                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetSubdivisionCount
struct UEditableMesh_GetSubdivisionCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
struct UEditableMesh_GetPolygonTriangulatedTriangleCount_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
struct UEditableMesh_GetPolygonTriangulatedTriangle_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolygonTriangleNumber;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTriangleID                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
struct UEditableMesh_GetPolygonPerimeterVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs;                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
struct UEditableMesh_GetPolygonPerimeterVertexInstances_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs;                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
struct UEditableMesh_GetPolygonPerimeterVertexInstance_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolygonVertexNumber;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
struct UEditableMesh_GetPolygonPerimeterVertexCount_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
struct UEditableMesh_GetPolygonPerimeterVertex_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolygonVertexNumber;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
struct UEditableMesh_GetPolygonPerimeterEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs;                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
struct UEditableMesh_GetPolygonPerimeterEdgeCount_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
struct UEditableMesh_GetPolygonPerimeterEdge_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerimeterEdgeNumber;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutEdgeWindingIsReversedForPolygon;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonInGroup
struct UEditableMesh_GetPolygonInGroup_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolygonNumber;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonGroupCount
struct UEditableMesh_GetPolygonGroupCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
struct UEditableMesh_GetPolygonCountInGroup_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonCount
struct UEditableMesh_GetPolygonCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
struct UEditableMesh_GetPolygonAdjacentPolygons_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutAdjacentPolygons;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetGroupForPolygon
struct UEditableMesh_GetGroupForPolygon_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
struct UEditableMesh_GetFirstValidPolygonGroup_Params
{
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeVertices
struct UEditableMesh_GetEdgeVertices_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   OutEdgeVertexID0;                                          // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   OutEdgeVertexID1;                                          // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeVertex
struct UEditableMesh_GetEdgeVertex_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EdgeVertexNumber;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
struct UEditableMesh_GetEdgeThatConnectsVertices_Params
{
	struct FVertexID                                   VertexID0;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeLoopElements
struct UEditableMesh_GetEdgeLoopElements_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             EdgeLoopIDs;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeCount
struct UEditableMesh_GetEdgeCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
struct UEditableMesh_GetEdgeConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
struct UEditableMesh_GetEdgeConnectedPolygonCount_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
struct UEditableMesh_GetEdgeConnectedPolygon_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectedPolygonNumber;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
struct UEditableMesh_GeneratePolygonTangentsAndNormals_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.FlipPolygons
struct UEditableMesh_FlipPolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
struct UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
struct UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   EdgeVertexID0;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   EdgeVertexID1;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.FindPolygonLoop
struct UEditableMesh_FindPolygonLoop_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs;                                        // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutFlippedEdgeIDs;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake;                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygonIDsToSplit;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ExtrudePolygons
struct UEditableMesh_ExtrudePolygons_Params
{
	TArray<struct FPolygonID>                          Polygons;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ExtrudeDistance;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepNeighborsTogether;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons;                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ExtendVertices
struct UEditableMesh_ExtendVertices_Params
{
	TArray<struct FVertexID>                           VertexIDs;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bOnlyExtendClosestEdge;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutNewExtendedVertexIDs;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ExtendEdges
struct UEditableMesh_ExtendEdges_Params
{
	TArray<struct FEdgeID>                             EdgeIDs;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWeldNeighbors;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.EndModification
struct UEditableMesh_EndModification_Params
{
	bool                                               bFromUndo;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeleteVertexInstances
struct UEditableMesh_DeleteVertexInstances_Params
{
	TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertices;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
struct UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params
{
	struct FVertexID                                   VertexID;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedEdges;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertices;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertexInstances;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteEmptyPolygonGroups;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeletePolygons
struct UEditableMesh_DeletePolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDsToDelete;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedEdges;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertices;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertexInstances;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteEmptyPolygonGroups;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeletePolygonGroups
struct UEditableMesh_DeletePolygonGroups_Params
{
	TArray<struct FPolygonGroupID>                     PolygonGroupIDs;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeleteOrphanVertices
struct UEditableMesh_DeleteOrphanVertices_Params
{
	TArray<struct FVertexID>                           VertexIDsToDelete;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeleteEdges
struct UEditableMesh_DeleteEdges_Params
{
	TArray<struct FEdgeID>                             EdgeIDsToDelete;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertices;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
struct UEditableMesh_DeleteEdgeAndConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedEdges;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertices;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedVertexInstances;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteEmptyPolygonGroups;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreateVertices
struct UEditableMesh_CreateVertices_Params
{
	TArray<struct FVertexToCreate>                     VerticesToCreate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutNewVertexIDs;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreateVertexInstances
struct UEditableMesh_CreateVertexInstances_Params
{
	TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreatePolygons
struct UEditableMesh_CreatePolygons_Params
{
	TArray<struct FPolygonToCreate>                    PolygonsToCreate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewPolygonIDs;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewEdgeIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreatePolygonGroups
struct UEditableMesh_CreatePolygonGroups_Params
{
	TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
struct UEditableMesh_CreateMissingPolygonPerimeterEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewEdgeIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
struct UEditableMesh_CreateEmptyVertexRange_Params
{
	int                                                NumVerticesToCreate;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutNewVertexIDs;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CreateEdges
struct UEditableMesh_CreateEdges_Params
{
	TArray<struct FEdgeToCreate>                       EdgesToCreate;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutNewEdgeIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
struct UEditableMesh_ComputePolygonsSharedEdges_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutSharedEdgeIDs;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputePolygonPlane
struct UEditableMesh_ComputePolygonPlane_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputePolygonNormal
struct UEditableMesh_ComputePolygonNormal_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputePolygonCenter
struct UEditableMesh_ComputePolygonCenter_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
struct UEditableMesh_ComputeBoundingBoxAndSphere_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.ComputeBoundingBox
struct UEditableMesh_ComputeBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.CommitInstance
struct UEditableMesh_CommitInstance_Params
{
	class UPrimitiveComponent*                         ComponentToInstanceTo;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditableMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.Commit
struct UEditableMesh_Commit_Params
{
};

// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
struct UEditableMesh_ChangePolygonsVertexInstances_Params
{
	TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.BevelPolygons
struct UEditableMesh_BevelPolygons_Params
{
	TArray<struct FPolygonID>                          PolygonIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              BevelFixedDistance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BevelProgressTowardCenter;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutNewSidePolygonIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
struct UEditableMesh_AssignPolygonsToPolygonGroups_Params
{
	TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bDeleteOrphanedPolygonGroups;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMesh.AnyChangesToUndo
struct UEditableMesh_AnyChangesToUndo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
struct UEditableMeshFactory_MakeEditableMesh_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditableMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
