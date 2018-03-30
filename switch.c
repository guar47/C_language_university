#include <stdio.h>

int main() {
    int countSix = 0, countSeven = 0, countEight = 0, countNine = 0, countTen = 0, countNull = 0, count, mark;

    for (count = 1; count <= 20; count++) {
        printf("Enter exam mark n.%d\n", count);
        scanf("%d", &mark);
        switch (mark) {
            case 6:
                countSix++;
                break;
            case 7:
                countSeven++;
                break;
            case 8:
                countEight++;
                break;
            case 9:
                countNine++;
                break;
            case 10:
                countTen++;
                break;
            default:
                countNull++;
                break;
        }
    }

    printf("Экзамены с оценкой 6: %d\n", countSix);
    printf("Экзамены с оценкой 6: %d\n", countSix);
    printf("Экзамены с оценкой 7: %d\n", countSeven);
    printf("Экзамены с оценкой 8: %d\n", countEight);
    printf("Экзамены с оценкой 9: %d\n", countNine);
    printf("Экзамены с оценкой 10: %d\n", countTen);
    printf("с нулевыми оценками: %d\n", countNull);

    return 0;
}





