#include <stdio.h>

long calcFactorial(unsigned); // function prototype

int main() {
    unsigned number;
    printf("Enter the number for calculate factorial\n");
    scanf("%u", &number);
    printf("Factorial of %u equal to %1d\n", number, calcFactorial(number));

    return 0;
}

long calcFactorial(unsigned number) {
    if ((number == 1) || (number == 0)) {
        return 1;
    } else {
        return (number * calcFactorial(number - 1));
    }
}