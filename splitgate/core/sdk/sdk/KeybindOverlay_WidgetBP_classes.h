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

// WidgetBlueprintGeneratedClass KeybindOverlay_WidgetBP.KeybindOverlay_WidgetBP_C
// 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
class UKeybindOverlay_WidgetBP_C : public UPortalWarsKeybindOverlayWidget
{
public:
	class UDialogBackground_C*                         DialogBackground;                                          // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeybindOverlay_WidgetBP.KeybindOverlay_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
