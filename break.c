#include <stdio.h>

int main() {
    int k, count;

    printf("Ввести целое число\n");
    scanf("%d", &k);

    for (count = 1; count <= 1000000; count++)
        if ((count % k == 0) && (k != count)) break;

    if (count != k * 2) count = k;
    printf("Первое кратное %d это % d\n", k, count);

    return 0;
}