#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row;
    int i, j, k, l;

    printf("Row");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (2 * (i - 1) + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
        for (k = 1; k <= i; k++)
        {
            for (l = 1; l <= i; l++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
