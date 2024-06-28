#include "cobra/win32_log.h"

#include "Windows.h"

DWORD written = 0;

void win32_LogInfo(const char* msg) {
    HANDLE stdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteConsole(stdOut, msg, strlen(msg), &written, NULL);
    written += strlen(msg);
}