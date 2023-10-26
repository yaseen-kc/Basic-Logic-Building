#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int n = 4, c = 7;

    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= c; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d ", k);
                if (k < 4)
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
