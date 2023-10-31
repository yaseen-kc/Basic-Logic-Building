#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int n = 9;

    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= n; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d ", k);
                k++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
