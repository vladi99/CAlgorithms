#include <stdio.h>
#include "floating_point_digits.h"

int main() {
    double a;
    scanf("%lf", &a);
    printf("Броят на цифрите на нецялото число %lf е %u\n", a, floatingPointDigits(a));
    return 0;
}