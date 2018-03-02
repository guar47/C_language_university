#include <stdio.h>

int main() {
    int k, odd, count;

    printf("Ввести целое число\n");
    scanf("%d", &k);
    count = 1;
    odd = 1;

    do {
        printf("Нечетное число %d = %d\n", count, odd);
        odd = odd + 2;
        count = count + 1;
    } while (count <= k);

    return 0;
}