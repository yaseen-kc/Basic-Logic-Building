#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 4;
    int k = 50;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == i || j == 1 || j == n)
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
