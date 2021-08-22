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

// BlueprintGeneratedClass FullLootSequence.SequenceDirector_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FullLootSequence.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class APortalWarsMainMenuCharacter_BP_C* PortalWarsMainMenuCharacter_BP);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class APortalWarsMainMenuCharacter_BP_C* PortalWarsMainMenuCharacter_BP);
	void PortalWarsMainMenuCharacter_BP_Event_1(class APortalWarsMainMenuCharacter_BP_C* PortalWarsMainMenuCharacter_BP);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
