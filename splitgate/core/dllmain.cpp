#include <windows.h>
#include <stdio.h>
#include "utils/utils.h"
#include "utils/globals.h"
#include "hooks/hooks.h"
#include "hooks/minhook/minhook.h"

DWORD WINAPI init(void* instance) {
	utils::initialize("overflow");
	utils::log("console allocated");

	if (!globals::init()) {
		THROW_ERROR("failed to init globals");
		utils::release();
		FreeLibraryAndExitThread(static_cast<HMODULE>(instance), 1);
	}

	if (!hooks::init()) {
		THROW_ERROR("failed to init hooks");
		utils::release();
		FreeLibraryAndExitThread(static_cast<HMODULE>(instance), 1);
	}

	while (!GetAsyncKeyState(VK_END)) {
		Sleep(50);
	}

	hooks::unhook();
	utils::release();
	FreeLibraryAndExitThread(static_cast<HMODULE>(instance), 1);
}

BOOL APIENTRY DllMain(HMODULE instance, uintptr_t reason, void* reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(instance);
		CreateThread(nullptr, NULL, init, instance, NULL, nullptr);
	}

	return true;
}
