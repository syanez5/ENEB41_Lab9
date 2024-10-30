#include <stdio.h>
#include "functions.h"

#define MAX_SIZE 100  // Maximum matrix size

void transposeMatrix(int original[][MAX_SIZE], int transposed[][MAX_SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
