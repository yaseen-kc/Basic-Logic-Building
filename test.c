#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int n = 7;
    int c = 7;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
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