#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, k;
    int row;
    printf("Row:\n");
    scanf("%d", &row);

    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= i * 3; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (k = 1; k <= i; k++)
        {
            printf("*");
            printf("\n");
        }
    }
}
