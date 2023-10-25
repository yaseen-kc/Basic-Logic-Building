#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, n = 4, c = 7;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= c; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                printf("%d ", k);
                if (j < 4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
