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

// WidgetBlueprintGeneratedClass JoinServerDialog_WidgetBP.JoinServerDialog_WidgetBP_C
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class UJoinServerDialog_WidgetBP_C : public UPortalWarsJoinServerDialogWidget
{
public:
	class UPurchaseDialogBackground_C*                 PurchaseDialogBackground;                                  // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinServerDialog_WidgetBP.JoinServerDialog_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
