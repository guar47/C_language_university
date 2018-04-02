// sort_array_ascending.c
#include <stdio.h>

#define SIZE 10

void sortArray(int[], char);

main() {
    int vector[SIZE], count;

    for (count = 0; count < SIZE; count++) {
        printf("Enter the element n. %d\n", count + 1);
        scanf("%d", &vector[count]);
    }

    for (count = 0; count < SIZE; count++) {
        printf("%d ", vector[count]);
    }
    printf("\n");
    sortArray(vector, 1);

    for (count = 0; count < SIZE; count++) {
        printf("%d ", vector[count]);
    }
    printf("\n");
    return 0;
}

void sortArray(int array[], char sort_method) {
    int i, j, temp;

    for (i = 0; i < SIZE; i++) {
        switch (sort_method) {
            case 1:
                for (j = i + 1; j < SIZE; j++) {
                    if (array[j] < array[i]) {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
                break;
            case 2:
                for (j = i + 1; j < SIZE; j++) {
                    if (array[i] < array[j]) {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
                break;
            default:
                break;
        }
    }
}