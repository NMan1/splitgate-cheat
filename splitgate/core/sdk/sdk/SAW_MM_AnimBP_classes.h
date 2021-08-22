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

// AnimBlueprintGeneratedClass SAW_MM_AnimBP.SAW_MM_AnimBP_C
// 0x0FA0 (FullSize[0x14C0] - InheritedSize[0x0520])
class USAW_MM_AnimBP_C : public UPortalWarsAnimInstanceV2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0528(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0558(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x06B0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0750(0x0028)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_9;                       // 0x0778(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_8;                       // 0x0868(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_7;                       // 0x0958(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_6;                       // 0x0A48(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_5;                       // 0x0B38(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_4;                       // 0x0C28(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_3;                       // 0x0D18(0x00F0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_2;                       // 0x0E08(0x00F0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0EF8(0x0048)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator;                         // 0x0F40(0x00F0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x1030(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x10E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1108(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1130(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1158(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1188(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1208(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1238(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x12E8(0x0158)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1440(0x0080)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SAW_MM_AnimBP.SAW_MM_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SAW_MM_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
