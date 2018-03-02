/* Program that sums two integers */
#include <stdio.h>

int main() {
    int integer1, integer2, sum;
    printf("Enter the first integer\n");
    scanf("%d", &integer1);
    printf("Insert the second integer\n ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Their sum is %d\n", sum);

    return 0;
}