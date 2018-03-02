// test_if_else.c
#include <stdio.h>

int main() {
    int mark_cent;
    double mark_dec;
    printf("Введите оценку(1-100)\n");
    scanf("%d", &mark_cent);

    if (mark_cent >= 60) {
        mark_dec = mark_cent * 10.0 / 100.0;
        printf("Зачет!\n");
        printf("Оценка (1-10) составляет %f\n", mark_dec);
    } else printf("Незачет!\n");
    
    return 0;
}
