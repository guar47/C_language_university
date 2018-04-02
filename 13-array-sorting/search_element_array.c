// search_element_array.c
#include <stdio.h>

#define SIZE 128

int linearSearch(int[], int, int);

void printArray(int[], int);

int comparisons;

main() {
    int array[SIZE], i, searchKey, element;

    for (i = 0; i < SIZE; i++) {
        array[i] = 2 * i + i;
    }
    printf("Enter integer number for the search\n");
    scanf("%d", &searchKey);
    element = linearSearch(array, SIZE, searchKey);

    if (element != -1) {
        printf("Number have found in the element %d of array\n", element);
    } else {
        printf("Number haven't found!\n");
    }

    printf("Comparisons amount: %d\n", comparisons);
    printArray(array, SIZE);

    return 0;
}

void printArray(int array[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        if (i % 10 == 0) printf("\n");
        printf("%d ", array[i]);
    }

    printf("\n");
}

int linearSearch(int vector[], int size, int key) {
    int i;
    comparisons = 0;

    for (i = 0; i < size; i++) {
        comparisons++;
        if (vector[i] == key) {
            return i;
        }
    }

    return -1;
}