#pragma once
#include <cstdint>
#include <string>
#include <stdarg.h>

#define THROW_ERROR(msg) MessageBoxA(NULL, "Error", msg, MB_OK);

namespace utils {
	void log(const char* format, ...);

	void initialize(const char* title);

	void release();

	uintptr_t rva(uintptr_t instruction_address, int instruction_size);

	uint8_t* pattern_scan(void* module, const char* signature);

	bool is_bad_ptr(uintptr_t* ptr);
}