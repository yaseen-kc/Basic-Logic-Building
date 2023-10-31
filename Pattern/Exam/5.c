#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j, k, l, m;

    printf("Limit:");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i * 3; j++)
        {
            printf("* ");
            for (j = 1; j <= i * 3; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
        if (i == limit)
        {
            break;
        }
        for (l = 1; l <= i; l++)
        {
            for (m = 1; m <= 1; m++)
            {
                printf("*\n");
            }
        }
    }
}
