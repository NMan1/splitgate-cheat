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

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer");

	ULayersBlueprintLibrary_RemoveActorFromLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             ActorLayer                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> ULayersBlueprintLibrary::STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors");

	ULayersBlueprintLibrary_GetActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorLayer = ActorLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer");

	ULayersBlueprintLibrary_AddActorToLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
