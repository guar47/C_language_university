/* square_value.c */

#include <stdio.h>

int square(int); // function prototype

main() {
    int x;
    for (x = 0; x < 10; ++x) {
        printf("square of %d = %d\n", x, square(x));
    }

    return 0;
}

int square(int i) {
    i = 0;
    return i * i;
}