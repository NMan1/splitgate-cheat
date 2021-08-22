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

// AnimBlueprintGeneratedClass SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C
// 0x0968 (FullSize[0x0C58] - InheritedSize[0x02F0])
class USAW_3P_IK_AnimBP_V3_C : public UPortalWarsIKAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02F8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                    // 0x0328(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0440(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0460(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0480(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x05D8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0730(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0758(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0780(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0820(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x0848(0x0108)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                       // 0x0950(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x0A48(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0B50(0x0108)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SAW_3P_IK_AnimBP_V3.SAW_3P_IK_AnimBP_V3_C");
		return ptr;
	}



	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SAW_3P_IK_AnimBP_V3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
