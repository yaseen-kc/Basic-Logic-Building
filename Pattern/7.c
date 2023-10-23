#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        k = 1;
        for (j = 1; j <= 7; i++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d ", k);
                k++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
