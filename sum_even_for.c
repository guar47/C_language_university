// sum_even_for.c
#include <stdio.h>

main() {
    int sum = 0, count;
    for (count = 2; count <= 100; count += 2)
        sum += count;
    printf("Сумма четных чисел от 0 до 100 равна %d\n", sum);

    system("PAUSE");
    return 0;
}