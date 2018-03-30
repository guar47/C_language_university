/* pass_element.c */
#include <stdio.h>

int convertEven(int);

main() {
    int even[] = {0, 2, 4, 6, 8, 10}, i, size = 6;

    for (i = 0; i < size; i++) {
        printf("even[%d] = %d ", i, even[i]);
    }
    printf("\n");

    for (i = 0; i < size; i++) {
        printf("even[%d] = %d ", i, convertEven(even[i]));
    }
    printf("\n");

    for (i = 0; i < size; i++) {
        printf("even[%d] = %d ", i, even[i]);
    }
    printf("\n");

    return 0;
}

int convertEven(int element) {
    element = element + 1;

    return element;
}