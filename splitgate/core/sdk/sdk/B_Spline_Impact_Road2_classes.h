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

// BlueprintGeneratedClass B_Spline_Impact_Road2.B_Spline_Impact_Road2_C
// 0x000F (FullSize[0x0250] - InheritedSize[0x0241])
class AB_Spline_Impact_Road2_C : public AB_Spline_Impact_Road_C
{
public:
	unsigned char                                      UnknownData_HDE5[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Spline_Impact_Road2.B_Spline_Impact_Road2_C");
		return ptr;
	}



	void ExecuteUbergraph_B_Spline_Impact_Road2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
