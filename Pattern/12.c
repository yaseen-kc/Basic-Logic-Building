#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n = 5, j;
    int k = 0;

    for (i = 1; i <= n; i++)
    {
        k = 0;
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%d ", k);
                k = k + i - 1;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}