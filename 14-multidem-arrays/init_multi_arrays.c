#include <stdio.h>

#define COLUMNS 3
#define ROWS 2

void printMatrix(int [][COLUMNS]);

int main() {
    int matrix1[ROWS][COLUMNS] = {{1, 2, 3},
                                  {4, 5, 6}};
    int matrix2[ROWS][COLUMNS] = {1, 2, 3, 4, 5};
    int matrix3[ROWS][COLUMNS] = {{1, 2},
                                  {4}};

    printf("Matrix 1:\n");
    printMatrix(matrix1);
    printf("Matrix 2:\n");
    printMatrix(matrix2);
    printf("Matrix 3:\n");
    printMatrix(matrix3);

    return 0;
}

void printMatrix(int a[][COLUMNS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}