#include <stdio.h>

int main()
{
    int k = 5;
    int pattern[] = {5, 5, 5, 5, 5};
    int n = sizeof(pattern) / sizeof(pattern[0]);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < pattern[i]; j++)
        {
            printf("%d ", (i * j) % 2);
        }
        printf("\n");
    }

    return 0;
}
