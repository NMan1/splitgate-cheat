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

// Class EQU8.EQU8Channel
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UEQU8Channel : public UChannel
{
public:
	unsigned char                                      UnknownData_DIWC[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EQU8.EQU8Channel");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
