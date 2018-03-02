/* dice_generator.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int throw;
    for (int i = 1; i <= 20; i++) {
        throw = rand() % 6 + 1;
        printf("%10d", throw);

        if (i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}