#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    // int c = 7, n = 4;
    int k;

    for (i = 1; i <= 4; i++)
    {
        k = i;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d ", k);
                if (j < 4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}