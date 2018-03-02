#include <stdio.h>

int maximum(int, int, int); // function prototype

int main() {
    int a, b, c, max;

    printf("Insert 3 integer numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = maximum(a, b, c);

    printf("max equal %d\n", max);

    return 0;
}

int maximum(int x, int y, int z) {
    int max = x;

    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }

    return max;
}