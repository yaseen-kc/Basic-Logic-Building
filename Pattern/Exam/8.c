#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, x;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        x = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i && x)
            {
                printf("* ");
                x = 0;
            }
            else
            {
                printf("  ");
                x = 1;
            }
        }
        printf("\n");
    }

    int k, l;
    int m = 4;

    for (k = 1; k <= m; k++)
    {
        x = 1;
        for (l = 1; l <= 9; l++)
        {
            if (l >= 5 - k && l <= 5 + k && x)
            {
                printf("* ");
                x = 0;
            }
            else
            {
                printf("  ");
                x = 1;
            }
        }
        printf("\n");
    }
}
