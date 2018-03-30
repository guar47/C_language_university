/* third_array.c */
#include <stdio.h>
#define SIZE 10 // объявление директивы define для константы SIZE

main() {
    int i, even[SIZE]; //using SIZE for even array size

    for (i = 0; i < SIZE; i++) {
        even[i] = 2 + 2 * i; // i-th element of array is i-th even number
    }
    printf("%s%17s\n", "Element", "Value");

    for (i = 0; i < 10; i++) {
        printf("%5d%17d\n", i, even[i]);
    }

    return 0;
}