#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row;
    int i, j, k;

    printf("Limit:");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = i; j <= 2 * i; j++)
        {
            printf("X ");
        }
        printf("\n");
        printf("X\n");
    }
}
