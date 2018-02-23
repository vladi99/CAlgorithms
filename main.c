#include <stdio.h>
#include "FundamentalMath/IntegerDivision/floating_point_digits.h"
#include "FundamentalMath/Matrixes/diagonal_matrix.h"

int main() {
//    double d;
//    scanf("%lf", &d);
//    printf("Броят на цифрите на нецялото число %lf е %u\n", d, floatingPointDigits(d));
    int i;
    scanf("%d", &i);
    diagonalMatrix(i);
    return 0;
}