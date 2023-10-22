#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
