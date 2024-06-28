#include "cobra/log.h"

#include "cobra/core.h"

#ifdef CBRA_PLAT_WIN32
#include "win32_log.h"

void InitLog() {
    LogInfo = &win32_LogInfo;
}
#endif