#pragma once

#include "cobra/core.h"

void InitLog();
#ifdef CBRA_PLAT_WIN32
#include "win32_log.h"
#define LogInfo win32_LogInfo;
#endif