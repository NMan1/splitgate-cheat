#include "utils.h"
#include <windows.h>
#include <vector>

namespace utils {
    void log(const char* format, ...) {
		va_list args;
		va_start(args, format);
		vprintf(std::string("[~] " + std::string(format) + "\n").c_str(), args);
		va_end(args);
	}

    void initialize(const char* title) {
		AllocConsole();

		freopen_s((_iobuf**)__acrt_iob_func(0), "conin$", "r", (_iobuf*)__acrt_iob_func(0));
		freopen_s((_iobuf**)__acrt_iob_func(1), "conout$", "w", (_iobuf*)__acrt_iob_func(1));
		freopen_s((_iobuf**)__acrt_iob_func(2), "conout$", "w", (_iobuf*)__acrt_iob_func(2));

		SetConsoleTitleA(title);
	}

	void release() {
		log("exiting...");
		Sleep(2000);

		fclose((_iobuf*)__acrt_iob_func(0));
		fclose((_iobuf*)__acrt_iob_func(1));
		fclose((_iobuf*)__acrt_iob_func(2));

		HWND hw_ConsoleHwnd = GetConsoleWindow();     //Get the HWND of the console.
		FreeConsole();                                //Detach the console.
	}

	uintptr_t rva(uintptr_t instruction_address, int instruction_size) {
		return instruction_address + instruction_size + (uintptr_t) * (int*)(instruction_address + (instruction_size - sizeof(int)));
	}

	uint8_t* pattern_scan(void* module, const char* signature) {
		static auto pattern_to_byte = [](const char* pattern) {
			auto bytes = std::vector<int>{};
			auto start = const_cast<char*>(pattern);
			auto end = const_cast<char*>(pattern) + strlen(pattern);

			for (auto current = start; current < end; ++current) {
				if (*current == '?') {
					++current;
					if (*current == '?')
						++current;
					bytes.push_back(-1);
				}
				else {
					bytes.push_back(strtoul(current, &current, 16));
				}
			}
			return bytes;
		};

		auto dos_headers = reinterpret_cast<PIMAGE_DOS_HEADER>(module);
		auto nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>((std::uint8_t*)module + dos_headers->e_lfanew);

		auto size_of_image = nt_headers->OptionalHeader.SizeOfImage;
		auto pattern_bytes = pattern_to_byte(signature);
		auto scan_bytes = reinterpret_cast<std::uint8_t*>(module);

		auto s = pattern_bytes.size();
		auto d = pattern_bytes.data();

		for (auto i = 0ul; i < size_of_image - s; ++i) {
			bool found = true;
			for (auto j = 0ul; j < s; ++j) {
				if (scan_bytes[i + j] != d[j] && d[j] != -1) {
					found = false;
					break;
				}
			}
			if (found) {
				return &scan_bytes[i];
			}
		}
		return nullptr;
	}

	bool is_bad_ptr(uintptr_t* ptr) {
		if (!ptr || (uint64_t)ptr > 0xffffffffffff)
			return true;

		__try
		{
			volatile auto result = *ptr;
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			return true;
		}
		return false;
	}
}
