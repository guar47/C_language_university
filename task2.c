#include <stdio.h>

int main() {
    float array_of_numbers[4], sum = 0;
    int i, j;

    for (i = 0; i < 4; ++i) {
        printf("Enter rational number:\n");
        scanf("%f", &array_of_numbers[i]);
    }

    for (j = 0; j < 4; ++j) {
        sum += array_of_numbers[j];
    }
    printf("Sum of values: ");
    printf("%.4f\n", sum);

    printf("Average of values: ");
    printf("%.4f\n", sum / 4);

    return 0;
}