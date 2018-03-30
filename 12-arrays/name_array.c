#include <stdio.h>

int main() {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    printf("vowels = %x\n", vowels);
    printf("&vowels[0] = %x\n", &vowels[0]);

    return 0;
}