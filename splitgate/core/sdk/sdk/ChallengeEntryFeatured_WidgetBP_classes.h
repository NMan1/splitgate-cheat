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

// WidgetBlueprintGeneratedClass ChallengeEntryFeatured_WidgetBP.ChallengeEntryFeatured_WidgetBP_C
// 0x0010 (FullSize[0x0860] - InheritedSize[0x0850])
class UChallengeEntryFeatured_WidgetBP_C : public UPortalWarsChallengeEntryWidget
{
public:
	class UImage*                                      Image_248;                                                 // 0x0850(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      RewardImage_2;                                             // 0x0858(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeEntryFeatured_WidgetBP.ChallengeEntryFeatured_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
