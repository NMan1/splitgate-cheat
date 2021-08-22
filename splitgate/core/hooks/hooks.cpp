#include "../pch.h"
#include "hooks.h"
#include "minhook/minhook.h"
#include "../utils/globals.h"
#include "../renderer/renderer.h"
#include "../utils/utils.h"
#include "../features/features.h"

hooks::process_event::fn process_event_original = nullptr;
hooks::return_to_menu::fn return_to_menu_original = nullptr;
hooks::equ8::suspicious_activity::fn suspicious_activity_original = nullptr;
hooks::win_api::create_file::fn create_file_original = nullptr;
hooks::win_api::reg_open_key::fn reg_open_key_original = nullptr;
hooks::win_api::reg_create_key::fn reg_create_key_original = nullptr;
hooks::win_api::reg_query_key::fn reg_query_key_original = nullptr;
hooks::win_api::write_file::fn write_file_original = nullptr;
hooks::win_api::read_file::fn read_file_original = nullptr;
hooks::win_api::get_username::fn get_username_original = nullptr;

namespace hooks {
	bool init() {
		auto player_controller_table = (uintptr_t*)*(uintptr_t*)globals::uworld->OwningGameInstance->LocalPlayers[0]->PlayerController;
		if (!player_controller_table) {
			THROW_ERROR("invalid hook addresses");
			return false;
		}

		if (MH_Initialize() != MH_OK) { 
			THROW_ERROR("failed to init minhook");
			return false;
		}

		if (MH_CreateHook((uintptr_t*)player_controller_table[68], process_event::process_event, reinterpret_cast<void**>(&process_event_original)) != MH_OK) {
			THROW_ERROR("failed to create process_event hook");
			return false;
		}
		
		// hooked stuff messsing with their kicking stuff
		//if (MH_CreateHook((uintptr_t*)(globals::base + 0xE94D00), return_to_menu::return_to_menu, reinterpret_cast<void**>(&return_to_menu_original)) != MH_OK) {
		//	THROW_ERROR("failed to create return_to_menu hook");
		//	return false;
		//}
				
		//if (MH_CreateHook((uintptr_t*)(globals::base + 0x95AEC0), equ8::suspicious_activity::suspicious_activity, reinterpret_cast<void**>(&suspicious_activity_original)) != MH_OK) {
		//	THROW_ERROR("failed to create return_to_menu hook");
		//	return false;
		//}
		
		// hooked apis for research, none of these really get called except readfile, and creatiefile/writefile which is just writting to log files
		// nothing related to the anti cheat trackin files, if u hook the anticheat.exe same apis u will see they open reigstrys etc
		if (MH_CreateHookApi(L"Kernel32", "CreateFileW", win_api::create_file::create_file, (PVOID*)&create_file_original) != MH_OK) {
			THROW_ERROR("failed to create create_file hook");
			return false;
		}
		
		if (MH_CreateHookApi(L"Advapi32", "RegOpenKeyExW", win_api::reg_open_key::reg_open_key, (PVOID*)&reg_open_key_original) != MH_OK) {
			THROW_ERROR("failed to create reg_open_key hook");
			return false;
		}
			
		if (MH_CreateHookApi(L"Advapi32", "RegCreateKeyExW", win_api::reg_create_key::reg_create_key, (PVOID*)&reg_create_key_original) != MH_OK) {
			THROW_ERROR("failed to create reg_create_key hook");
			return false;
		}	

		if (MH_CreateHookApi(L"Advapi32", "RegQueryValueExW", win_api::reg_query_key::reg_query_key, (PVOID*)&reg_query_key_original) != MH_OK) {
			THROW_ERROR("failed to create reg_query_key hook");
			return false;
		}

		if (MH_CreateHookApi(L"Kernel32", "WriteFile", win_api::write_file::write_file, (PVOID*)&write_file_original) != MH_OK) {
			THROW_ERROR("failed to create write_file hook");
			return false;
		}

		if (MH_CreateHookApi(L"Kernel32", "ReadFile", win_api::read_file::read_file, (PVOID*)&read_file_original) != MH_OK) {
			THROW_ERROR("failed to create read_file hook");
			return false;
		}
		
		if (MH_CreateHookApi(L"Advapi32", "GetUserNameW", win_api::get_username::get_username, (PVOID*)&get_username_original) != MH_OK) {
			THROW_ERROR("failed to create get_username hook");
			return false;
		}
				
		if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) {
			THROW_ERROR("failed to enable minhook");
			return false;
		}

		if (globals::uworld->OwningGameInstance->IsA(CG::UGameInstance::StaticClass())) {
			auto local_player = globals::uworld->OwningGameInstance->LocalPlayers[0];
			if (local_player) {
				auto save = ((CG::UPortalWarsLocalPlayer*)local_player)->GetUserSaveGame();
				save->bHasCompletedTutorial = true;
				save->bHasWatchedIntroVideo = true;
			}
		}

		auto queue_address = utils::pattern_scan((void*)globals::base, "41 80 38 00 74 0D");
		if (queue_address) {
			DWORD old_protection;
			VirtualProtect((void*)queue_address, 0x6, PAGE_READWRITE, &old_protection);
			memset((void*)queue_address, 0x90, 0x6);
			VirtualProtect((void*)queue_address, 0x6, old_protection, &old_protection);
		}
		
		//auto poll_return_address = utils::pattern_scan((void*)globals::base, "48 8B 44 24 ? 33 FF 48 89 7C");
		//if (poll_return_address) {
		//	DWORD old_protection;
		//	VirtualProtect((void*)poll_return_address, 0x1, PAGE_READWRITE, &old_protection);
		//	memset((void*)poll_return_address, 0xC3, 0x1);
		//	VirtualProtect((void*)poll_return_address, 0x1, old_protection, &old_protection);
		//}

		return true;
	}

	void unhook() {
		MH_Uninitialize();
		MH_DisableHook(MH_ALL_HOOKS);
	}

	void process_event::process_event(CG::UObject* object, CG::UFunction* function, void* params, void* unused) {
		if (!object)
			return process_event_original(object, function, params, unused);

		globals::uworld = (CG::UWorld*)(*(uintptr_t*)(globals::gworld));

		if (object->IsA(CG::AHUD::StaticClass())) {
			static auto init = false;
			if ((!init && reinterpret_cast<CG::AHUD*>(object)->Canvas) || !render::esp_font) {
				render::esp_font = render::find_font("Roboto");
				utils::log("renderer init, canvas: %p", reinterpret_cast<CG::AHUD*>(object)->Canvas);
				init = true;
			}

			render::canvas = reinterpret_cast<CG::AHUD*>(object)->Canvas;
			render::draw_text(render::esp_font, CG::FString{ L"overflow" }, 1920 - 65, 6, { 25, 0, 0, 255 });

			if (globals::uworld)
				features::esp();
		}

		//if (function->GetFullName().find("Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason") != std::string::npos) {
		//	utils::log("process_event return to menu");
		//	return;
		//}

		process_event_original(object, function, params, unused);
	}

	void* return_to_menu::return_to_menu(void* some_class, uint64_t some_var) {
		//utils::log("return to menu called");
		return nullptr;
	}
	
	uint64_t equ8::suspicious_activity::suspicious_activity(unsigned int* a1) {
		//utils::log("suspicious_activity called");
		return 1;
	}

	HANDLE WINAPI win_api::create_file::create_file(LPCWSTR file_name, DWORD desired_access, DWORD share_mode, LPSECURITY_ATTRIBUTES security_attributes, DWORD creation_disposition, DWORD flags_and_attributes, HANDLE template_file) {
		auto str = std::wstring(file_name);
		if (str.find(L".mp4") != std::wstring::npos && str.find(L".ucas") != std::wstring::npos && str.find(L".pak") != std::wstring::npos && str.find(L".sig") != std::wstring::npos)
			utils::log("create_file: %ls\n", file_name);

		return create_file_original(file_name, desired_access, share_mode, security_attributes, creation_disposition, flags_and_attributes, template_file);
	}

	LSTATUS WINAPI win_api::reg_open_key::reg_open_key(HKEY key, LPCWSTR sub_key, DWORD options, REGSAM desired, PHKEY result) {
		utils::log("reg_open_key: %ls\n", sub_key);
		return reg_open_key_original(key, sub_key, options, desired, result);
	}

	LSTATUS WINAPI win_api::reg_create_key::reg_create_key(HKEY key, LPCSTR sub_key, DWORD reserved, LPSTR class_, DWORD options, REGSAM desired,
		CONST LPSECURITY_ATTRIBUTES security_attributes, PHKEY result, LPDWORD disposition) {
		utils::log("reg_create_key: %s\n", sub_key);
		return reg_create_key_original(key, sub_key, reserved, class_, options, desired, security_attributes, result, disposition);
	}

	LSTATUS WINAPI win_api::reg_query_key::reg_query_key(HKEY key, LPCWSTR value_name, LPDWORD reserved, LPDWORD type, LPBYTE data, LPDWORD cb_data) {
		utils::log("reg_query_key: %ls\n", value_name);
		return reg_query_key_original(key, value_name, reserved, type, data, cb_data);
	}

	BOOL WINAPI win_api::write_file::write_file(HANDLE file, LPCVOID buffer, DWORD number_of_bytes_to_write, LPDWORD number_of_bytes_written, LPOVERLAPPED overlapped) {
		char path[MAX_PATH];
		if (GetFinalPathNameByHandleA(file, path, MAX_PATH, FILE_NAME_NORMALIZED)) {
			auto str = std::string(path);
			if (str.find("GameOverlayRenderer") != std::string::npos && str.find("\\Logs\\PortalWars.log") != std::string::npos)
				utils::log("write_file: %s", path);
		}
		return write_file_original(file, buffer, number_of_bytes_to_write, number_of_bytes_written, overlapped);
	}

	BOOL WINAPI win_api::read_file::read_file(HANDLE file, LPVOID buffer, DWORD number_of_bytes_to_read, LPDWORD number_of_bytes_read, LPOVERLAPPED overlapped) {
		char path[MAX_PATH];
		if (GetFinalPathNameByHandleA(file, path, MAX_PATH, FILE_NAME_NORMALIZED)) {
			auto str = std::string(path);
			if (str.find(".mp4") != std::string::npos && str.find(".ucas") != std::string::npos && str.find(".pak") != std::string::npos)
				utils::log("read_file: %s", path);
		}
		return read_file_original(file, buffer, number_of_bytes_to_read, number_of_bytes_read, overlapped);
	}
	
	BOOL WINAPI win_api::get_username::get_username(LPWSTR buffer, LPDWORD cb_buffer) {
		utils::log("get_username called");
		return get_username_original(buffer, cb_buffer);
	}
}
