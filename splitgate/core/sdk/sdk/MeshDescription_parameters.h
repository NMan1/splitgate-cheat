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

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
struct UMeshDescriptionBase_SetVertexPosition_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
struct UMeshDescriptionBase_SetPolygonVertexInstance_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerimeterIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct UMeshDescriptionBase_SetPolygonPolygonGroup_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct UMeshDescriptionBase_ReversePolygonFacing_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct UMeshDescriptionBase_ReserveNewVertices_Params
{
	int                                                NumberOfNewVertices;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct UMeshDescriptionBase_ReserveNewVertexInstances_Params
{
	int                                                NumberOfNewVertexInstances;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct UMeshDescriptionBase_ReserveNewTriangles_Params
{
	int                                                NumberOfNewTriangles;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct UMeshDescriptionBase_ReserveNewPolygons_Params
{
	int                                                NumberOfNewPolygons;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct UMeshDescriptionBase_ReserveNewPolygonGroups_Params
{
	int                                                NumberOfNewPolygonGroups;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct UMeshDescriptionBase_ReserveNewEdges_Params
{
	int                                                NumberOfNewEdges;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct UMeshDescriptionBase_IsVertexValid_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct UMeshDescriptionBase_IsVertexOrphaned_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct UMeshDescriptionBase_IsVertexInstanceValid_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct UMeshDescriptionBase_IsTriangleValid_Params
{
	struct FTriangleID                                 TriangleID;                                                // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct UMeshDescriptionBase_IsTrianglePartOfNgon_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct UMeshDescriptionBase_IsPolygonValid_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct UMeshDescriptionBase_IsPolygonGroupValid_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsEmpty
struct UMeshDescriptionBase_IsEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct UMeshDescriptionBase_IsEdgeValid_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct UMeshDescriptionBase_IsEdgeInternalToPolygon_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct UMeshDescriptionBase_IsEdgeInternal_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct UMeshDescriptionBase_GetVertexVertexInstances_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct UMeshDescriptionBase_GetVertexPosition_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct UMeshDescriptionBase_GetVertexPairEdge_Params
{
	struct FVertexID                                   VertexID0;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct UMeshDescriptionBase_GetVertexInstanceVertex_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct UMeshDescriptionBase_GetVertexInstancePairEdge_Params
{
	struct FVertexInstanceID                           VertexInstanceID0;                                         // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           VertexInstanceID1;                                         // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct UMeshDescriptionBase_GetVertexConnectedTriangles_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct UMeshDescriptionBase_GetVertexConnectedPolygons_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct UMeshDescriptionBase_GetVertexConnectedEdges_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct UMeshDescriptionBase_GetVertexAdjacentVertices_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutAdjacentVertexIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct UMeshDescriptionBase_GetTriangleVertices_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutVertexIDs;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct UMeshDescriptionBase_GetTriangleVertexInstances_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct UMeshDescriptionBase_GetTriangleVertexInstance_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct UMeshDescriptionBase_GetTrianglePolygonGroup_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct UMeshDescriptionBase_GetTrianglePolygon_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct UMeshDescriptionBase_GetTriangleEdges_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleID>                         OutTriangleIDs;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct UMeshDescriptionBase_GetPolygonVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutVertexIDs;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct UMeshDescriptionBase_GetPolygonVertexInstances_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct UMeshDescriptionBase_GetPolygonTriangles_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleID>                         OutTriangleIDs;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct UMeshDescriptionBase_GetPolygonPolygonGroup_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct UMeshDescriptionBase_GetPolygonPerimeterEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct UMeshDescriptionBase_GetPolygonInternalEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct UMeshDescriptionBase_GetPolygonGroupPolygons_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygonIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutPolygonIDs;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct UMeshDescriptionBase_GetNumVertexVertexInstances_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct UMeshDescriptionBase_GetNumVertexConnectedEdges_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct UMeshDescriptionBase_GetNumPolygonVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct UMeshDescriptionBase_GetNumPolygonTriangles_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct UMeshDescriptionBase_GetNumPolygonInternalEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct UMeshDescriptionBase_GetEdgeVertices_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OutVertexIDs;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct UMeshDescriptionBase_GetEdgeVertex_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VertexNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct UMeshDescriptionBase_GetEdgeConnectedTriangles_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct UMeshDescriptionBase_GetEdgeConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.Empty
struct UMeshDescriptionBase_Empty_Params
{
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct UMeshDescriptionBase_DeleteVertexInstance_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OrphanedVertices;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct UMeshDescriptionBase_DeleteVertex_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct UMeshDescriptionBase_DeleteTriangle_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OrphanedEdges;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>                     OrphanedPolygonGroupsPtr;                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct UMeshDescriptionBase_DeletePolygonGroup_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct UMeshDescriptionBase_DeletePolygon_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             OrphanedEdges;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>                     OrphanedPolygonGroups;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct UMeshDescriptionBase_DeleteEdge_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                           OrphanedVertices;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct UMeshDescriptionBase_CreateVertexWithID_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct UMeshDescriptionBase_CreateVertexInstanceWithID_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct UMeshDescriptionBase_CreateVertexInstance_Params
{
	struct FVertexID                                   VertexID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertex
struct UMeshDescriptionBase_CreateVertex_Params
{
	struct FVertexID                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct UMeshDescriptionBase_CreateTriangleWithID_Params
{
	struct FTriangleID                                 TriangleID;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct UMeshDescriptionBase_CreateTriangle_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTriangleID                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct UMeshDescriptionBase_CreatePolygonWithID_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct UMeshDescriptionBase_CreatePolygonGroupWithID_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct UMeshDescriptionBase_CreatePolygonGroup_Params
{
	struct FPolygonGroupID                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct UMeshDescriptionBase_CreatePolygon_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPolygonID                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct UMeshDescriptionBase_CreateEdgeWithID_Params
{
	struct FEdgeID                                     EdgeID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID0;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdge
struct UMeshDescriptionBase_CreateEdge_Params
{
	struct FVertexID                                   VertexID0;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct UMeshDescriptionBase_ComputePolygonTriangulation_Params
{
	struct FPolygonID                                  PolygonID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
