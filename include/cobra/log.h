#pragma once

#include "core.h"

#ifdef CBRA_PLAT_WIN32
#include "win32_log.h"
#define LogInfo(msg) win32_LogInfo(msg)
#endif