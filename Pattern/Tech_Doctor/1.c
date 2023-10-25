#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n = 4, c = 8;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
