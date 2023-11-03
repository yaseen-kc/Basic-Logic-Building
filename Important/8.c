#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int row;
    int i, j, k, l;

    printf("Row:\n");
    scanf("%d", row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*\n");
        }
        printf("\n");
        for (k = 1; i < i * 4; i++)
        {
            printf("* ");
        }
    }
}
