/* pass_array.c */
#include <stdio.h>

void convertEven(int[], int);

main() {
    int even[] = {0, 2, 4, 6, 8, 10}, i, size = 6;

    for (i = 0; i < size; i++) {
        printf("even[%d] = %d ", i, even[i]);
    }
    printf("\n");
    convertEven(even, size);

    for (i = 0; i < size; i++) {
        printf("even[%d] = %d ", i, even[i]);
    }
    printf("\n");

    return 0;
}

void convertEven(int vector[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        vector[i] = vector[i] + 1;
    }
}