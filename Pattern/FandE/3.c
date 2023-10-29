#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row;
    int i, j, k;
    printf("Rows");
    scanf("%d", &row);
    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= 3 * i; j++)
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
