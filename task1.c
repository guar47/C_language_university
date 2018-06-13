#include <stdio.h>
#include <string.h>

#define SIZE 6
#define MAX_STRING 256

int main() {
    char array_of_strings[SIZE][MAX_STRING];
    int i, j;

    for (i = 0; i < 6; i += 2) {
        printf("Enter book name and author:\n");
        scanf("%255s %255s", array_of_strings[i], array_of_strings[i+1]);
    }

    for (j = 0; j < 6; j += 2) {
        printf("%s\n", array_of_strings[j]);
    }

    return 0;
}