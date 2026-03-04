#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print pattern
        if (i % 2 == 1) {
            // Odd row: characters from left to right
            char ch = 'A' + rows - i;
            for (j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        } else {
            // Even row: numbers from 1 to i
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}

