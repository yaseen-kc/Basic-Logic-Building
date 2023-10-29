#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int row;

    printf("Rows:");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - 2 * i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}
