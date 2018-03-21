// fibonacci_iteration.c
#include <stdio.h>

long fibonacciIterative(long);

int main() {
    long f, i, k;

    printf("Enter integer number\n");
    scanf("%ld", &i);
    for (k = 0; k <= i; k++) {
        f = fibonacciIterative(k);
        printf("Fibonacci number for %ld equal to %ld\n", k, f);
    }

    return 0;
}

long fibonacciIterative(long i) {
    long f, fpp, fp, count;

    if (i == 0 || i == 1) {
        return i;
    } else {
        fpp = 0;
        fp = 1;
        for (count = 2; count <= i; ++count) {
            f = fpp + fp;
            fpp = fp;
            fp = f;
        }
    }

    return f;
}