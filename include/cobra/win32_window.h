#pragma once

#include <windows.h>

typedef struct {
    WNDCLASSW wc;
    HWND hwnd;
} win32_Window;

win32_Window cbra_win32_CreateWindow(HINSTANCE hInstance);
