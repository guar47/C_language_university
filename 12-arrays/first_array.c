#include <stdio.h>

int main() {
    int marks[10]; // array definition

    for (int i = 0; i < 10; i++) { // array elements initialization
        marks[i] = 0;
    }

    for (int j = 0; j < 10;) {
        printf("Enter exam mark n.%d\n", j + 1);
        scanf("%d", &marks[j]);

        if (marks[j] <= 30 && marks[j] >= 18) {
            j++;
        }
    }

    for (int k = 0; k < 10; k++) {
        printf("marks[%d] = %d\n", k, marks[k]);
    }

    return 0;
}