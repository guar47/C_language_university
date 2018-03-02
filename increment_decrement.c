// test_increment_decrement.c
#include <stdio.h>

int main() {
    int c = 5, d = 8;
    printf("Post-increment\n");
    printf("%d\n %d\n %d\n", c, c++, c);
    printf("Post-decrement\n");
    printf("%d\n %d\n %d\n", d, d--, d);
    c = 5;
    d = 8;
    printf("Pre-increment\n");
    printf("%d\n %d\n %d\n", c, ++c, c);
    printf("Pre-decrement\n");
    printf("%d\n %d\n %d\n", d, --d, d);

    return 0;
}


