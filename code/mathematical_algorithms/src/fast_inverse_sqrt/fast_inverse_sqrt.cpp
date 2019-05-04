// AUTHOR:      Mitchell Haugen
// GITHUB:      https://github.com/haugenmitch
// DATE:        October 9, 2017
// SOURCE:      https://stackoverflow.com/questions/1349542/john-carmacks-unusual-fast-inverse-square-root-quake-iii User: Rushyo
// DESCRIPTION: This algorithm use bit manipulation to calculate the inverse square root much faster than could be done if calculated in the proper way. It has surprising levels of accuracy that is sufficient for graphical applications.

// Part of Cosmos by OpenGenus Foundation

#include "fast_inverse_sqrt.hpp"
#include <cstdint>

double fastInverseSqrt(double x)
{
    float xhalf = 0.5f * x;
    int64_t i = reinterpret_cast<int64_t>(x);              // get bits for floating value
    i = 0x5f375a86 - (i >> 1);      // gives initial guess y0
    x = reinterpret_cast<double>(i);                // convert bits back to float
    x = x * (1.5f - xhalf * x * x); // Newton step, repeating increases accuracy
    return x;
}
