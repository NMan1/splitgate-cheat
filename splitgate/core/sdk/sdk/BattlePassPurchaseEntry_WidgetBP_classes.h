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

// WidgetBlueprintGeneratedClass BattlePassPurchaseEntry_WidgetBP.BattlePassPurchaseEntry_WidgetBP_C
// 0x0010 (FullSize[0x07C8] - InheritedSize[0x07B8])
class UBattlePassPurchaseEntry_WidgetBP_C : public UPortalWarsBattlePassEntryWidget
{
public:
	class UImage*                                      NormalButtonBG;                                            // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PremiumIndicator;                                          // 0x07C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattlePassPurchaseEntry_WidgetBP.BattlePassPurchaseEntry_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
