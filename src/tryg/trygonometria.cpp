#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

namespace degreemath 
{
    double sin(double degree) {
        return std::sin((degree * M_PI) / 180.0);
    }
    double cos(double degree) {
        return std::cos((degree * M_PI) / 180.0);
    }
    double tg(double degree) {
        return std::tan((degree * M_PI) / 180.0);
    }
    double ctg(double degree) {
        return 1.0 / std::tan((degree * M_PI) / 180.0);
    }
}

