# include <stdio.h>

# define COLUMNS 4
# define ROWS 4

void printMatrix(int [][COLUMNS]);

double calculateAverage(int [][COLUMNS]);

int calculateMax(int [][COLUMNS]);

int calculateMin(int [][COLUMNS]);

int main() {
    int matrix[COLUMNS][ROWS];

    for (int i = 0; i < COLUMNS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            matrix[i][j] = i * j + i + j + ROWS + COLUMNS;
        }
    }

    printf("Matrix values:\n");
    printMatrix(matrix);
    printf("Average value of matrix: %.2lf\n", calculateAverage(matrix));
    printf("Max value of matrix: %d\n", calculateMax(matrix));
    printf("Min value of matrix: %d\n", calculateMin(matrix));

    return 0;
}

void printMatrix(int matrix[][COLUMNS]) {
    for (int i = 0; i < COLUMNS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

double calculateAverage(int matrix[][COLUMNS]) {
    double averageValue;

    for (int i = 0; i < COLUMNS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            averageValue += matrix[i][j];
        }
    }

    return averageValue / (ROWS * COLUMNS);
}

int calculateMax(int matrix[][COLUMNS]) {
    int maxValue = matrix[0][0];

    for (int i = 0; i < COLUMNS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }

    return maxValue;
}

int calculateMin(int matrix[][COLUMNS]) {
    int minValue = matrix[0][0];

    for (int i = 0; i < COLUMNS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
        }
    }

    return minValue;
}