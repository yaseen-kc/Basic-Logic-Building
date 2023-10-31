#include <stdio.h>

int main() {
    int n = 5; // The number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print asterisks and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
