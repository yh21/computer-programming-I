#include "power.h"

double power(int x, int y){
    double result = 1.0;

    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}