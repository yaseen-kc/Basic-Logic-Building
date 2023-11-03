#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, k, l;
    printf("*\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (k = 1; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (l = 1; l <= i * 3; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
