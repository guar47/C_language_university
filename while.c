// print_k_numbers_odd.c
#include <stdio.h>

main() {
    int k, odd, count;
    printf("Ввести целое число\n");
    scanf("%d", &k);
    count = 1;
    odd = 1;
    while (count <= k) {
        printf("Нечетное число %d = %d\n", count, odd);
        odd = odd + 2;
        count = count + 1;
    }

    return 0;
}