#include <stdio.h>

main() {
    int k, count;

    printf("Ввести целое число\n");
    scanf("%d", &k);

    for (count = 1; count < k; count++) {
        if (count % 5 == 0) continue;
        printf("\t%d\n", count);
    }

    system("PAUSE");
    return 0;
}