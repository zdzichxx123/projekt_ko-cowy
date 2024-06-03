#include "calculator.h"
#include <math.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("B��d: Nie mo�na dzieli� przez zero!\n");
        return 0;
    }
    return a / b;
}

float (float base, float exponent) {
    return pow(base, exponent);
}

float percentage(float value, float percent) {
    return (value * percent) / 100.0;
}
