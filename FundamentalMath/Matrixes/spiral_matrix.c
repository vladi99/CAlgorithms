//
// Created by vladi on 2/23/18.
//

#include <stdio.h>
#include "spiral_matrix.h"

void spiralMatrix(int n) {
    int a[n][n];
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = n - 1;
    int counter = 0;

    while (startRow <= endRow && startCol <= endCol) {
        for (int row = startRow; row <= endRow; row++) {
            a[row][startCol] = ++counter;
        }
        startCol++;
        for (int col = startCol; col <= endCol; col++) {
            a[endRow][col] = ++counter;
        }
        endRow--;
        for (int row = endRow; row >= startRow; row--) {
            a[row][endCol] = ++counter;
        }
        endCol--;
        for (int col = endCol; col >= startCol; col--) {
            a[startRow][col] = ++counter;
        }
        startRow++;
    }

    int row, col;
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%i  ", a[row][col]);
        }
        printf("\n");
    }
}