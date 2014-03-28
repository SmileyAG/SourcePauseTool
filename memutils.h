#ifndef __MEMUTILS_H_
#define __MEMUTILS_H_

#ifdef _WIN32
#pragma once
#endif

#include <vector>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>

namespace MemUtils
{
	typedef struct
	{
		unsigned int build;
		std::vector<BYTE> pattern;
		std::string mask;
	} pattern_def_t;

	typedef std::vector<pattern_def_t> ptnvec;

	bool GetModuleInfo(const WCHAR *szModuleName, size_t &moduleBase, size_t &moduleSize);
	bool GetModuleInfo(HMODULE hModule, size_t &moduleBase, size_t &moduleSize);

	inline bool DataCompare(const BYTE *pData, const BYTE *pSig, const char *szPattern);
	DWORD_PTR FindPattern(size_t dwStart, size_t dwLength, const BYTE *pSig, const char *szMask);

	unsigned int FindUniqueSequence( size_t dwStart, size_t dwLength, ptnvec patterns, DWORD_PTR *pdwAddress = NULL );

	void ReplaceBytes(const DWORD_PTR dwAddr, const size_t length, const BYTE *pNewBytes);
}

#endif