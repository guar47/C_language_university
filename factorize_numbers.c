// factorize_numbers.c
#include <stdio.h>

/* Global constants */
const short prime = 1; //Prime number flag
const short perfect = 2; //Perfect number
const short factorizable = 0; //Factorization possibility flag
const short zero = 0; //Min allowed number
const long max = 2147483647; //Max allowed number

/* Functions prototypes */
void factorize(long);

short verifyPrime(long);

short verifyPerfect(long);

int main() {
    long number = 0;
    double temp = 0.0; //Buffer for inserted value

    while (temp <= zero || temp > max) {
        printf("Enter the number between 0 and 2147483647\n");
        scanf("%lf", &temp);
    }
    number = temp;

    if (verifyPrime(number) == prime) {
        printf("======================\n");
        printf("%ld - PRIME\n", number);
        printf("%ld = 1 * %ld\n", number, number);
        printf("======================\n");
    } else {
        if (verifyPerfect(number) == perfect) {
            printf("======================\n");
            printf("%ld - PERFECT\n", number);
            printf("======================\n");
        }
        printf("================================================\n");
        printf("%ld = ", number);
        factorize(number);
        printf("================================================\n");
    }

    return 0;
}

short verifyPrime(long number) {
    long k, remainder;
    short res = prime;

    for (k = 1; k <= (number / 2); k++) {
        remainder = number % k;

        if (remainder == 0 && k != 1) {
            // number isn't prime
            res = factorizable;
            break;
        }
    }

    return res;
}

short verifyPerfect(long number) {
    long k, remainder, sum;
    sum = 0;

    for (k = 1; k < number; k++) {
        remainder = number % k;
        if (remainder == 0) {
            sum += k;
        }
    }

    if (sum == number) {
        return perfect;
    } else {
        return 0;
    }
}

void factorize(long number) {
    long k = 2, remainder;

    while (number > 1) {
        remainder = number % k;

        if (remainder == 0) {
            printf(" %ld", k);
            number = number / k;
            if (number != 1) {
                printf(" *");
            } else {
                break;
            }
        } else {
            k++;
        }
    }

    printf("\n");
}