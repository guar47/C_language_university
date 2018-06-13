#include <stdio.h>

int main() {
    int number = 0, i, not_prime = 0;

    while (number >= 17892 || number <= 234) {
        printf("Enter an integer between 234 and 17892:\n");
        scanf("%d", &number);
    }

    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            not_prime = 1;
            break;
        }
    }

    if (not_prime == 0) {
        printf("%d is a prime number.", number);
    } else {
        printf("%d is not a prime number.", number);
    }

    return 0;
}