//
// Created by vladi on 2/21/18.
//

#include "floating_point_digits.h"

int floatingPointDigits(double n) {
    unsigned digits;

    while (n - ((long long) n) != 0) {
        n *= 10;
    }

    long long a = (long long)n;

    for(digits = 0; a>0; a/=10, digits++);

    return digits;
}