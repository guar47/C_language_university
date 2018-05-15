#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLUMNS 4
#define ROWS 4
#define DEPTH 3

void printMatrix3D(int[][COLUMNS][DEPTH]);

int main() {
    srand(time(NULL));
    int matrix[ROWS][COLUMNS][DEPTH];
    for (int i = 0, count = 0; i < ROWS; ++i, ++count) {
        for (int j = 0; j < COLUMNS; ++j) {
            for (int k = 0; k < DEPTH; ++k) {
                matrix[i][j][k] = rand() / (i * j * k + count + 1);
            }
        }
    }
    printMatrix3D(matrix);

    return 0;
}

void printMatrix3D(int a[][COLUMNS][DEPTH]) {
    for (int i = 0; i < DEPTH; ++i) {
        printf("Matrix with depth %d\n", i);
        for (int j = 0; j < ROWS; ++j) {
            for (int k = 0; k < COLUMNS; ++k) {
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
    }
}