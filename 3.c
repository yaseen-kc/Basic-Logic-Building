#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 4;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j > n - i + 1)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        for (j = n; j >= 1; j--)
        {
            if (j > n - i + 1)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
}
