#pragma once

#include "core.h"

#ifdef CBRA_PLAT_WIN32
#include <Windows.h>

typedef struct {
    WNDCLASSW wc;
    HWND hwnd;
} win32_Window;

win32_Window cbra_win32_CreateWindow(HINSTANCE hInstance);

#endif