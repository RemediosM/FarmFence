#ifndef MOTOROLA_CALCULATIONS_H
#define MOTOROLA_CALCULATIONS_H


#include <cmath>

class Calculations {

public:

    int calculateA(int fence_length) {
        double a = fence_length / 4.0;
        return round(a);
    }

    int calculateB(int fence_length) {
        double b = fence_length / 2.0;
        int intB = round(b) - (round(b / 2) * 2 + round(b) - fence_length);
        return intB;
    }

    long long calculateArea(int a, int b) {
        long long c = (long long) a * (long long) b;
        return c;
    }

};


#endif
