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

// WidgetBlueprintGeneratedClass CurrencyPurchaseEntry_WidgetBP.CurrencyPurchaseEntry_WidgetBP_C
// 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
class UCurrencyPurchaseEntry_WidgetBP_C : public UPortalWarsCurrencyStoreEntry
{
public:
	class UDiscountWidget_C*                           DiscountWidget;                                            // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CurrencyPurchaseEntry_WidgetBP.CurrencyPurchaseEntry_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
