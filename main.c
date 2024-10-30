#include <stdio.h>
#include "functions.h"

#define MAX_SIZE 100  // Maximum matrix size

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], transposed[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter rows and columns of matrix:\n");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("Transposed Matrix:\n");
    printMatrix(transposed, cols, rows);

    return 0;
}