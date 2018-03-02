/* test_square_function.c */
#include <stdio.h>

int square(int); //function prototype

int main() {
    int x;
    for (x = 0; x < 10; ++x) {
        printf("square %d = %d\n", x, square(x));
    }

    return 0;
}

// define function
int square(int i) {
    return i * i;
}