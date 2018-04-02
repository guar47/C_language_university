// array_operations.c
#include <stdio.h>

#define SIZE 100
#define MARKS 9

// prototypes
double calculateAverage(int[]);

double calculateMedian(int[]);

void calculateFrequency(int[]);

int calculateMode();

void bubbleSort(int[]);

void printArray(int[]);

void printFrequency();

int frequencies[MARKS] = {0}; // global variable

int main() {
    int values[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 6, 7, 8, 9, 3,
                        7, 8, 9, 8, 9, 6, 7, 8, 7, 8, 7, 8, 9, 8, 9, 5, 6, 7, 2, 5,
                        7, 8, 9, 6, 8, 7, 4, 4, 2, 5, 4, 5, 6, 1, 6, 8, 7, 8, 7, 8,
                        9, 8, 7, 8, 7, 8, 9, 7, 8, 9, 7, 9, 8, 9, 2, 8, 9, 7, 5, 3,
                        3, 9, 4, 6, 4, 7, 8, 9, 7, 8, 3, 8, 7, 5, 6, 5, 7, 8, 7, 2};
    int mode;
    double average, median;

    printf("Unsorted values");
    printArray(values);

    bubbleSort(values);
    printf("Bubble sorted values:");
    printArray(values);

    average = calculateAverage(values);
    printf("\nAverage equal to: %.2lf\n", average);

    median = calculateMedian(values);
    printf("Median equal to: %.2lf\n", median);

    calculateFrequency(values);
    printFrequency();

    mode = calculateMode();
    printf("Mode equal to: %d\n", mode);

    return 0;
}

double calculateAverage(int array[]) {
    int i;
    double average;
    for (i = 0, average = 0.0; i < SIZE; i++) {
        average = average + array[i];
    }
    average = average / SIZE;

    return average;
}

double calculateMedian(int array[]) {
    double median;

    if (SIZE % 2 != 0) {
        median = array[SIZE / 2];
    } else {
        median = (array[SIZE / 2 - 1] + array[SIZE / 2]) / 2.0;
    }

    return median;
}

void calculateFrequency(int array[]) {
    int i;

    for (i = 0; i < MARKS; i++) {
        frequencies[i] = 0;
    }
    for (i = 0; i < SIZE; i++) {
        frequencies[array[i] - 1]++;
    }
}

int calculateMode() {
    int i, mode, modeFreq;
    mode = 1;
    modeFreq = frequencies[0];

    for (i = 1; i < MARKS; i++) {
        if (frequencies[i] > modeFreq) {
            modeFreq = frequencies[i];
            mode = i + 1;
        }
    }

    return mode;
}

void bubbleSort(int array[]) {
    int i, j, temp;

    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[]) {
    int i;

    for (i = 0; i < SIZE; i++) {
        if (i % 20 == 0) printf("\n");
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printFrequency() {
    int i, j;
    printf("%8s%11s%12s\n", "Value", "Frequency", "Histogram");

    for (i = 0; i < MARKS; i++) {
        printf("%8d%11d   ", i + 1, frequencies[i]);

        for (j = 0; j < frequencies[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}


