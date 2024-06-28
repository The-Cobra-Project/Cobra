#include "core.h"
#include "application.h"

#ifdef CBRA_PLAT_WIN32
#include <windows.h>

#include "win32_window.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    win32_Window w = cbra_win32_CreateWindow(hInstance);

    ShowWindow(w.hwnd, nCmdShow);

    ApplicationStart();
    
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}
#endif
