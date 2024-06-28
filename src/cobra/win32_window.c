#include "cobra/win32_window.h"

LRESULT WindowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    switch (Msg) {
        case WM_DESTROY:
            // #ifdef CBRA_DEBUG
            FreeConsole();
            // #endif
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hWnd, Msg, wParam, lParam);
}

win32_Window cbra_win32_CreateWindow(HINSTANCE hInstance) {
    win32_Window w = { 0 };

    WNDCLASSW wc = { 0 };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"Engine";

    RegisterClassW(&wc);

    HWND hwnd = CreateWindowEx(
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