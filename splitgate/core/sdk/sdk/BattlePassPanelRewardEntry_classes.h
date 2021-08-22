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

// WidgetBlueprintGeneratedClass BattlePassPanelRewardEntry.BattlePassPanelRewardEntry_C
// 0x0008 (FullSize[0x0730] - InheritedSize[0x0728])
class UBattlePassPanelRewardEntry_C : public UPortalWarsRewardEntryWidget
{
public:
	class UImage*                                      Image_88;                                                  // 0x0728(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattlePassPanelRewardEntry.BattlePassPanelRewardEntry_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
