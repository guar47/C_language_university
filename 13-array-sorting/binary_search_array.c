// binary_search_array.c #include <stdio.h>
#define SIZE 128

int binarySearch(int[], int, int);

void printArray(int[], int);

int comparisons;

main() {
    int array[SIZE], i, searchKey, element;

    for (i = 0; i < SIZE; i++) {
        array[i] = 2 * i + i;
    }
    printf("Enter integer number for the search\n");
    scanf("%d", &searchKey);

    element = binarySearch(array, SIZE, searchKey);
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

int binarySearch(int vector[], int size, int key) {
    int medium, low, high, i;
    low = 0;
    high = size;
    comparisons = 0;

    while (low < high) {
        medium = (low + high) / 2;
        comparisons++;
        if (key == vector[medium]) {
            return medium;
        } else if (key < vector[medium]) {
            high = medium - 1;
        } else {
            low = medium + 1;
        }
    }

    return -1;
}