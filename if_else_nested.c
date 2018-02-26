// test_if_else_nested2.c
#include <stdio.h>

main() {
    int mark;
    int year;

    printf("Ввести оценку в момент окончания ВУЗа\n");
    scanf("%d", &mark);
    printf("Ввести год окончания\n");
    scanf("%d", &year);

    if ((mark >= 60) && (year >= 1997)) {
        if (mark >= 90) printf("Итоговая оценка A\n");
        else {
            if (mark >= 80) printf("Итоговая оценка B\n");
            else {
                if (mark >= 70) printf("Итоговая оценка C\n");
                else printf("Итоговая оценка D\n");
            }
        }
    } else {
        if ((mark < 60) && (year >= 1997)) printf("незачет\n");
        else {
            if ((mark >= 36) && (year < 1997)) printf("Зачет! Оценка в диапазоне 1-60\n");
            else {
                if ((mark < 36) && (year < 1997))
                    printf("Незачет!! Оценка в диапазоне 1-60\n");
            }
        }
    }

    return 0;
}