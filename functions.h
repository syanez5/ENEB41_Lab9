// Prevent multiple inclusions of header
#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#define MAX_SIZE 100  // Maximum matrix size

// Function prototypes
void transposeMatrix(int original[][MAX_SIZE], int transposed[][MAX_SIZE], int row, int col);
void printMatrix(int matrix[][MAX_SIZE], int row, int col) ;

#endif