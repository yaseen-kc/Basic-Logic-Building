#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 3;
    int k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * i; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (k = 1; k <= 2; k++)
        {
            printf("*\n");
        }
    }
}
