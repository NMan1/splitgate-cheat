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

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
struct UGizmoBaseComponent_UpdateWorldLocalState_Params
{
	bool                                               bWorldIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
struct UGizmoBaseComponent_UpdateHoverState_Params
{
	bool                                               bHoveringIn;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
struct UGizmoTransformSource_SetTransform_Params
{
	struct FTransform                                  NewTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
struct UGizmoTransformSource_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
struct UGizmoAxisSource_HasTangentVectors_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
struct UGizmoAxisSource_GetTangentVectors_Params
{
	struct FVector                                     TangentXOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TangentYOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
struct UGizmoAxisSource_GetOrigin_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
struct UGizmoAxisSource_GetDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
struct UGizmoClickTarget_UpdateHoverState_Params
{
	bool                                               bHovering;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
struct UGizmoStateTarget_EndUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
struct UGizmoStateTarget_BeginUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
struct UGizmoFloatParameterSource_SetParameter_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
struct UGizmoFloatParameterSource_GetParameter_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
struct UGizmoFloatParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
struct UGizmoFloatParameterSource_BeginModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
struct UGizmoVec2ParameterSource_SetParameter_Params
{
	struct FVector2D                                   NewValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
struct UGizmoVec2ParameterSource_GetParameter_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
struct UGizmoVec2ParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
struct UGizmoVec2ParameterSource_BeginModify_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
