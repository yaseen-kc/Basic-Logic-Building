#include <stdio.h>

int main()
{
    int pattern[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(pattern) / sizeof(pattern[0]);
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= pattern[i]; j++)
        {
            printf("%d", k);
            k = 1 - k;
        }
        printf("\n");
    }

    return 0;
}
