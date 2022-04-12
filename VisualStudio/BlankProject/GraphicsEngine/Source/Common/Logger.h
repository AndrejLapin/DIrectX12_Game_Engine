#pragma once

#include <string>

class ENGINE_API Logger
{
public:
	Logger();
	~Logger();

private:
	static Logger* inst;
public:
	static Logger* Instance() { return inst; }

	static void PrintLog(const WCHAR* fmt, ...);
	static std::wstring LogDirectory();
	static std::wstring LogFile();

	// Print a line of '-' char's
	static void PrintDebugSeperator();

	// Check to see if MTail is already Running
	static bool IsMTailRunning();

	// Start MTail Application
	static void StartMTail();
};