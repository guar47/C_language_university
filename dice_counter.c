/* dice_counter.c throws 10000 times a six face dice */
#include <stdlib.h>
#include <stdio.h>

int diceGenerator(); // generator function prototype

int main() {
    int throw, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;

    for (int i = 1; i < 10000; i++) {
        throw = diceGenerator();

        switch (throw) {
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case 6:
                f6++;
                break;
        }
    }

    printf("%s%13s\n", "Side", "Frequency");
    printf("1%13d\n", f1);
    printf("2%13d\n", f2);
    printf("3%13d\n", f3);
    printf("4%13d\n", f4);
    printf("5%13d\n", f5);
    printf("6%13d\n", f6);

    return 0;
}

int diceGenerator() {
    return (rand() % 6 + 1);
}