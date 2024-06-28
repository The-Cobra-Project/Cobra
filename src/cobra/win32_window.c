#include "cobra/win32_window.h"

win32_Window cbra_win32_CreateWindow(HINSTANCE hInstance) {
    win32_Window w = { 0 };

    WNDCLASSW wc = { 0 };
    wc.lpfnWndProc = DefWindowProcW;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"Engine";

    RegisterClassW(&wc);

    HWND hwnd = CreateWindowExW(
        0,
        L"Engine",
        L"Window",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    w.wc = wc;
    w.hwnd = hwnd;

    return w;
}