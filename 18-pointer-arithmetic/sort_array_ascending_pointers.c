#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void sortArray(int *, const int);

void printArray(int *, const int);

int main() {
    srand(time(NULL));
    int vector[SIZE], count;

    for (count = 0; count < SIZE; count++) {
        vector[count] = rand();
    }

    printArray(vector, SIZE);
    sortArray(vector, SIZE);
    printArray(vector, SIZE);

    return 0;
}

void printArray(int *array, const int size) {
    int i;
    for (i = 0; i < size; i++) printf("%d\t", array[i]);
    printf("\n");
}

void sortArray(int *array, const int size) {
    int i, j;
    void swap(int *, int *);

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                swap(&array[j], &array[i]);
            }
        }
    }
}

void swap(int *iPtr, int *yPtr) {
    int temp;
    temp = *iPtr;
    *iPtr = *yPtr;
    *yPtr = temp;
}
