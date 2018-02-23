#include <stdio.h>
#include "FundamentalMath/IntegerDivision/floating_point_digits.h"
#include "FundamentalMath/Matrixes/diagonal_matrix.h"
#include "FundamentalMath/Matrixes/spiral_matrix.h"

int main() {
    int i;
    scanf("%d", &i);

//    double d;
//    scanf("%lf", &d);

//    printf("Броят на цифрите на нецялото число %lf е %u\n", d, floatingPointDigits(d));
//    diagonalMatrix(i);
    spiralMatrix(i);

    return 0;
}