#pragma once
#include <wtypes.h>

namespace CG {
	class UObject;
	class UFunction;
}

namespace hooks {
	bool init();

	void unhook();

	namespace process_event {
		using fn = void(__stdcall*)(CG::UObject*, CG::UFunction*, void*, void*);
		void process_event(CG::UObject* object, CG::UFunction* function, void* params, void* unused);
	}

	namespace return_to_menu {
		using fn = void*(__stdcall*)(void*, uint64_t);
		void* return_to_menu(void* some_class, uint64_t some_var);
	}

	namespace equ8 {
		namespace suspicious_activity {
			using fn = uint64_t(__stdcall*)(unsigned int*);
			uint64_t suspicious_activity(unsigned int* a1);
		}
	}

	namespace win_api {
		namespace create_file {
			using fn = HANDLE(WINAPI*)(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
			HANDLE WINAPI create_file(LPCWSTR file_name, DWORD desired_access, DWORD share_mode, LPSECURITY_ATTRIBUTES security_attributes,
				DWORD creation_disposition, DWORD flags_and_attributes, HANDLE template_file);
		}

		namespace reg_open_key {
			using fn = LSTATUS(WINAPI*)(HKEY, LPCWSTR, DWORD, REGSAM, PHKEY);
			LSTATUS WINAPI reg_open_key(HKEY key, LPCWSTR sub_key, DWORD options, REGSAM desired, PHKEY result);
		}

		namespace reg_create_key {
			using fn = LSTATUS(WINAPI*)(HKEY, LPCSTR, DWORD, LPSTR, DWORD, REGSAM, CONST LPSECURITY_ATTRIBUTES, PHKEY, LPDWORD);
			LSTATUS WINAPI reg_create_key(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired,
				CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
		}
		
		namespace reg_query_key {
			using fn = LSTATUS(WINAPI*)(HKEY, LPCWSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD);
			LSTATUS WINAPI reg_query_key(HKEY key, LPCWSTR value_name, LPDWORD reserved, LPDWORD type, LPBYTE data, LPDWORD cb_data);
		}

		namespace write_file {
			using fn = BOOL(WINAPI*)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED);
			BOOL WINAPI write_file(HANDLE file, LPCVOID buffer, DWORD number_of_bytes_to_write, LPDWORD number_of_bytes_written, LPOVERLAPPED overlapped);
		}

		namespace read_file {
			using fn = BOOL(WINAPI*)(HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED);
			BOOL WINAPI read_file(HANDLE file, LPVOID buffer, DWORD number_of_bytes_to_read, LPDWORD number_of_bytes_read, LPOVERLAPPED overlapped);
		}

		namespace get_username {
			using fn = BOOL(WINAPI*)(LPWSTR, LPDWORD);
			BOOL WINAPI get_username(LPWSTR buffer, LPDWORD cb_buffer);
		}
	}
}
