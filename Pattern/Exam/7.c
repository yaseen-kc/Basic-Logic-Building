#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, l, x, z;
    int n = 5;
    int c = 9;
    int o = 4;

    for (i = 1; i <= n; i++)
    {
        x = 1;
        for (j = 1; j <= c; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d ", x);
                x++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (k = 1; k <= o; k++)
    {
        z = 1;
        for (l = 1; l <= c; l++)
        {
            if (l >= 1 + k && l <= 9 - k)
            {
                printf("%d ", z);
                z++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
