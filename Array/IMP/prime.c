#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 6;
    int c = 12;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j >= i && j <= 6 + i)
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
