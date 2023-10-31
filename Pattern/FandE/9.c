#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, l;
    int limit;

    printf("Enter the Limit");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (k = 1; k <= i * 2; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (i == limit)
        {
            break;
        }
        for (l = 1; l <= 3; l++)
        {
            printf("*\n");
        }
    }
}
