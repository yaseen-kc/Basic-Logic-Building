#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, n = 5, c = 9;

    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= c; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i && k)
            {
                printf("* ");
                k = 0;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}
