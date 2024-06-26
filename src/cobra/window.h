#pragma once

#include "core.h"

typedef struct Window {
    char *title;
    int width;
    int height;
} Window;

CBRA_API Window cbra_WindowInit();