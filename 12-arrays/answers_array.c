#include <stdio.h>

#define SIZE_FREQUENCY 10
#define SIZE_ANSWERS 40

int main() {
    double average = 0.0;
    int frequencies[SIZE_FREQUENCY] = {0};
    int answers[SIZE_ANSWERS] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5,
                                 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    for (int i = 0; i < SIZE_ANSWERS; ++i) {
        frequencies[answers[i] - 1]++;
    }

    for (int j = 0; j < SIZE_ANSWERS; ++j) {
        average += answers[j];
    }

    average /= SIZE_ANSWERS;
    printf("%s%14s\n", "Mark", "Frequency");

    for (int k = 0; k < SIZE_FREQUENCY; ++k) {
        printf("%4d%14d\n", k + 1, frequencies[k]);
    }
    printf("Average mark = %.lf\n", average);

    return 0;
}