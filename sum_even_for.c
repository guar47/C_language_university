// sum_even_for.c
#include <stdio.h>

int main() {
    int sum = 0, count;
    for (count = 2; count <= 100; count += 2)
        sum += count;
    printf("Sum of even numbers from 0 to 100 equal to %d\n", sum);

    return 0;
}
