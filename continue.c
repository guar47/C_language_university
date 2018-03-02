#include <stdio.h>

int main() {
    int k, count;

    printf("Ввести целое число\n");
    scanf("%d", &k);

    for (count = 1; count < k; count++) {
        if (count % 5 == 0) continue;
        printf("\t%d\n", count);
    }

    return 0;
}