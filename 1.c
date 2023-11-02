#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 6;
    int c = 7;
    int k;

    for (i = 1; i <= n; i++)
    {
        k = 0;
        for (j = 1; j <= c; j++)
        {
            if (j <= 1 + i)
            {
                printf("%d ", k);
                k = k + i;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
