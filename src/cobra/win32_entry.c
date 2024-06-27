#include "cobra/core.h"
#include "cobra/application.h"

#ifdef CBRA_PLAT_WIN32
#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    ApplicationStart();
}
#endif
