#include <stdio.h>
#include <stdlib.h>

int diceGenerator();

int main() {
    int throw;
    unsigned seed;
    printf("Enter init number\n");
    scanf("%u", &seed);
    srand(seed);

    for (int i = 1; i <= 20; i++) {
        throw = diceGenerator();
        printf("%10d", throw);

        if (i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}

int diceGenerator() {
    return (rand() % 6 + 1);
}