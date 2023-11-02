#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row;
    int i, j, k;
    printf("Rows");
    scanf("%d", &row);
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= 1; j++)
        {
            if (i % 2 == 1)
            {
                printf("* * * * *");
                printf("\n");
            }
            else
            {
                printf("* * *");
                printf("\n");
            }
        }
        if (i == 5)
        {
            break;
        }

        for (k = 1; k <= 2; k++)

        {

            printf("*\n");
        }
    }
}
