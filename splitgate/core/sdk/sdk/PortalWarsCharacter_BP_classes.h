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

// BlueprintGeneratedClass PortalWarsCharacter_BP.PortalWarsCharacter_BP_C
// 0x0004 (FullSize[0x0DB0] - InheritedSize[0x0DAC])
class APortalWarsCharacter_BP_C : public APortalWarsCharacter
{
public:
	unsigned char                                      UnknownData_EMTK[0x4];                                     // 0x0DAC(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PortalWarsCharacter_BP.PortalWarsCharacter_BP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
