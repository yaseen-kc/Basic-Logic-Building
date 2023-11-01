#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 9;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 6 - i || j == 4 + i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    int k, l;
    int m = 9;

    for (k = 1; k <= 4; k++)
    {
        for (l = 1; l <= m; l++)
        {
            if (l == 1 + k || l == 9 - k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
