//
// Created by vladi on 2/23/18.
//

#include <stdio.h>
#include "diagonal_matrix.h"

void diagonalMatrix(int n) {
    int a[n][n];
    int counter = 0;

    //fill bottom left corner
    int row, col;
    for (col = 0; col < n; col++) {
        for (row = col + 1; row < n; row++) {
            a[row][col] = ++counter;
        }
    }

    //fill diagonal
    int d;
    for (d = 0; d < n; d++) {
        a[d][d] = 0;
    }

    //fill upper right corner
    int c, r;
    for (c = n - 1; c >= 0; c--) {
        for (r = c - 1; r >= 0; r--) {
            a[r][c] = ++counter;
        }
    }

    //print matrix
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%i  ", a[i][j]);
        }
        printf("\n");
    }

}