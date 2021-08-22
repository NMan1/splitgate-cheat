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

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                           bWorldIn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	UGizmoBaseComponent_UpdateWorldLocalState_Params params;
	params.bWorldIn = bWorldIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                           bHoveringIn                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	UGizmoBaseComponent_UpdateHoverState_Params params;
	params.bHoveringIn = bHoveringIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");

	UGizmoTransformSource_SetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGizmoTransformSource::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");

	UGizmoTransformSource_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGizmoAxisSource::HasTangentVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");

	UGizmoAxisSource_HasTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 TangentXOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TangentYOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");

	UGizmoAxisSource_GetTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TangentXOut != nullptr)
		*TangentXOut = params.TangentXOut;
	if (TangentYOut != nullptr)
		*TangentYOut = params.TangentYOut;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");

	UGizmoAxisSource_GetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");

	UGizmoAxisSource_GetDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public, Const)
// Parameters:
// bool                           bHovering                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");

	UGizmoClickTarget_UpdateHoverState_Params params;
	params.bHovering = bHovering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)
void UGizmoStateTarget::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");

	UGizmoStateTarget_EndUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)
void UGizmoStateTarget::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");

	UGizmoStateTarget_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");

	UGizmoFloatParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGizmoFloatParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");

	UGizmoFloatParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)
void UGizmoFloatParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");

	UGizmoFloatParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)
void UGizmoFloatParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");

	UGizmoFloatParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");

	UGizmoVec2ParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");

	UGizmoVec2ParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)
void UGizmoVec2ParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");

	UGizmoVec2ParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)
void UGizmoVec2ParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");

	UGizmoVec2ParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
