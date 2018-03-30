#include <stdio.h>

int main() {
    int i, marks[10] = {30, 28, 27, 29, 30, 18, 21, 24, 25, 22};

    for (i = 0; i < 10; ++i) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}