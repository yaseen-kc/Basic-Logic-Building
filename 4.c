#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, i, j, k;
    printf("Limit:");
    scanf("%d", &row);

    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= i * 2; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (k = 1; k <= i; k++)
        {
            printf("*\n");
        }
    }
}
