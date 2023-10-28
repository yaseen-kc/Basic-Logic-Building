#include <stdio.h>

int main() {
    int array[] = {4, 2, 4, 5, 2, 3, 6, 7, 4, 3};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Repeated elements and their counts:\n");

    for (int i = 0; i < size; i++) {
        int count = 1;  // Initialize count to 1 for the current element.

        if (array[i] == -1) {
            continue;  // Element already counted, move to the next.
        }

        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                array[j] = -1;  // Mark the element as counted.
            }
        }

        if (count > 1) {
            printf("%d (count: %d)\n", array[i], count);
        }
    }

    return 0;
}
