#include <stdio.h>

long fibonacci(long);

int main() {
    long f, i;
    printf("Введи целое число\n");
    scanf("%ld", &i);
    f = fibonacci(i);
    printf("Число Фибоначчи номер %ld равно %ld\n", i, f);

    return 0;
}

long fibonacci(long i) {
    if (i == 0 || i == 1) // basic case
        return i;
    else return fibonacci(i - 1) + fibonacci(i - 2); // recursion
}