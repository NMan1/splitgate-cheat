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

// BlueprintGeneratedClass Melee_DmgType.Melee_DmgType_C
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMelee_DmgType_C : public UPortalWarsMeleeDmgType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Melee_DmgType.Melee_DmgType_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
