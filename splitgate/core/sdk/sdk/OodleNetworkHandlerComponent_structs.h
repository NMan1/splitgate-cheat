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
// Enums
//---------------------------------------------------------------------------

// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class OodleNetworkHandlerComponent_EOodleEnableMode : uint8_t
{
	EOodleEnableMode__AlwaysEnabled = 0,
	EOodleEnableMode__WhenCompressedPacketReceived = 1,
	EOodleEnableMode__EOodleEnableMode_MAX = 2,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
