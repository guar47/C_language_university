#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COLUMNS 4
#define ROWS 4

int matrix[ROWS][COLUMNS];

void printMatrix();

void transpose();

int calcDeltaOrd2(int matrix[2][2]);

int calcDeltaOrd3(int matrix[3][3]);

int calcDeltaOrd4(int matrix[4][4]);

int main() {
    srand(time(NULL));
    for (int i = 0, count = 0; i < ROWS; i++, count++) {
        for (int j = 0; j < COLUMNS; ++j) {
            matrix[i][j] = rand() / (i * j + count + 1);
        }
    }

    printf("Matrix values:\n");
    printMatrix();
    printf("Determinant: %d\n", calcDeltaOrd4(matrix));
    transpose();
    printf("Transposed matrix values:\n");
    printMatrix();
    printf("Determinant of transposed matrix: %d\n", calcDeltaOrd4(matrix));

    return 0;
}

void transpose() {
    int temp;

    for (int i = 1; i < ROWS; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            if (i != j) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}

void printMatrix() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int calcDeltaOrd2(int matrixTwo[2][2]) {
    int det = matrixTwo[0][0] * matrixTwo[1][1] - matrixTwo[0][1] * matrixTwo[1][0];

    return det;
}

int calcDeltaOrd3(int matrixThree[3][3]) {
    int matrix1[2][2], matrix2[2][2], matrix3[2][2], det = 0;

    matrix1[0][0] = matrixThree[1][1];
    matrix1[0][1] = matrixThree[1][2];
    matrix1[1][0] = matrixThree[2][1];
    matrix1[1][1] = matrixThree[2][2];

    matrix2[0][0] = matrixThree[1][0];
    matrix2[0][1] = matrixThree[1][2];
    matrix2[1][0] = matrixThree[2][0];
    matrix2[1][1] = matrixThree[2][2];

    matrix3[0][0] = matrixThree[1][0];
    matrix3[0][1] = matrixThree[1][1];
    matrix3[1][0] = matrixThree[2][0];
    matrix3[1][1] = matrixThree[2][1];

    det = matrixThree[0][0] * calcDeltaOrd2(matrix1) - matrixThree[0][1] * calcDeltaOrd2(matrix2) +
          matrixThree[0][2] * calcDeltaOrd2(matrix3);

    return det;
}

int calcDeltaOrd4(int matrixFour[4][4]) {
    int matrix1[3][3], matrix2[3][3], matrix3[3][3], matrix4[3][3], det = 0;

    matrix1[0][0] = matrixFour[1][1];
    matrix1[0][2] = matrixFour[1][3];
    matrix1[1][1] = matrixFour[2][2];
    matrix1[2][0] = matrixFour[3][1];
    matrix1[2][2] = matrixFour[3][3];
    matrix1[0][1] = matrixFour[1][2];
    matrix1[1][0] = matrixFour[2][1];
    matrix1[1][2] = matrixFour[2][3];
    matrix1[2][1] = matrixFour[3][2];

    matrix2[0][1] = matrixFour[1][2];
    matrix2[1][0] = matrixFour[2][0];
    matrix2[1][1] = matrixFour[2][2];
    matrix2[1][2] = matrixFour[2][3];
    matrix2[2][0] = matrixFour[3][0];
    matrix2[2][1] = matrixFour[3][2];
    matrix2[2][2] = matrixFour[3][3];
    matrix2[0][0] = matrixFour[1][0];
    matrix2[0][2] = matrixFour[1][3];

    matrix3[0][0] = matrixFour[1][0];
    matrix3[0][2] = matrixFour[1][3];
    matrix3[1][1] = matrixFour[2][1];
    matrix3[2][0] = matrixFour[3][0];
    matrix3[2][2] = matrixFour[3][3];
    matrix3[0][1] = matrixFour[1][1];
    matrix3[1][0] = matrixFour[2][0];
    matrix3[1][2] = matrixFour[2][3];
    matrix3[2][1] = matrixFour[3][1];

    matrix4[0][1] = matrixFour[1][1];
    matrix4[1][0] = matrixFour[2][0];
    matrix4[1][2] = matrixFour[2][2];
    matrix4[2][1] = matrixFour[3][1];
    matrix4[2][2] = matrixFour[3][2];
    matrix4[0][0] = matrixFour[1][0];
    matrix4[0][2] = matrixFour[1][2];
    matrix4[1][1] = matrixFour[2][1];
    matrix4[2][0] = matrixFour[3][0];

    det = matrixFour[0][0] * calcDeltaOrd3(matrix1) - matrixFour[0][1] * calcDeltaOrd3(matrix2) +
          matrixFour[0][2] * calcDeltaOrd3(matrix3) - matrixFour[0][3] * calcDeltaOrd3(matrix4);

    return det;
}
