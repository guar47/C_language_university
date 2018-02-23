
#include <stdio.h>

main() {
    int num1, num2;
    printf("Ввести первое целое число\n");
    scanf("%d", &num1);
    printf("Ввести второе целое число \n");
    scanf("%d", &num2);

    if (num1 == num2) printf("%d равно %d\n", num1, num2);
    if (num1 != num2) printf("%d не равно %d\n", num1, num2);
    if (num1 < num2) printf("%d меньше %d\n", num1, num2);
    if (num1 > num2) printf("%d больше %d\n", num1, num2);
    if (num1 <= num2) printf("%d меньше или равно %d\n", num1, num2);
    if (num1 >= num2) printf("%d больше или равно %d\n", num1, num2);

    return 0;
}