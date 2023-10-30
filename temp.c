#include <stdio.h>

int main()
{
    int n = 5; // The number of rows

    for (int i = 1; i <= n; i++)
    {
        int current = i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", current);
            current += 2;
        }
        printf("\n");
    }

    return 0;
}
