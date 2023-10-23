#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    int c = 9;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j <= n + 1 - i || j >= n - 1 + i)
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
