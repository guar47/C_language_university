#include <stdio.h>
#define SIZE 10

int main() {
    int even[SIZE], sum;

    for (int i = 0; i < SIZE; ++i) {
        even[i] = 2 + 2 * i;
    }
    sum = 0;

    for (int j = 0; j < SIZE; ++j) {
        sum += even[j];
    }
    printf("%s%13s\n", "Element", "Value");

    for (int k = 0; k < SIZE; ++k) {
        printf("%8d%13d\n", k, even[k]);
    }
    printf("First 10 even number sum =  %d\n", sum);

    return 0;
}