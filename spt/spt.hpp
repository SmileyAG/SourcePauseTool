#pragma once

#include <string>

#define SPT_VERSION "0.6-beta"

extern void ( *EngineMsg )( const char *format, ... );
extern void ( *EngineDevMsg )( const char *format, ... );
extern void ( *EngineWarning )( const char *format, ... );
extern void ( *EngineDevWarning )( const char *format, ... );
extern void ( *EngineConCmd )( const char *cmd );

std::wstring GetFileName( const std::wstring &fileNameWithPath );
