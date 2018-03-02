/* visibility.c */

#include <stdio.h>

void a(void); // function prototype
void b(void); // function prototype
int x = 1; // global variable

int main() {
    int x = 5; // local variable for main()
    printf("Value x variable local to main() equal to %d\n", x);
    if (x == 5) {
        int x = 3; // x visible only inside the block
        printf("Value x variable local to if block equal to %d\n", x);
    }
    printf("Value x variable local to main() equal to %d\n", x);

    a(); // a() has local variable x
    b(); // using global variable x
    a(); // a() has local variable x
    b(); // using global variable x

    printf("Value x variable local to main() equal to %d\n", x);

    return 0;
}

void a(void) {
    int x = 25;
    printf("Value x variable local to a() equal to %d\n", x);
    ++x;
    printf("Value x variable local to a() equal to %d\n", x);
}

void b(void) {
    printf("Value x variable at the start of b() equal to %d\n", x);
    x = x * 10 + 3;
    printf("Value x variable at the finish of b() equal to %d\n", x);
}