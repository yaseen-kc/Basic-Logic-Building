#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 9;
    int k = 0;

    for (i = 1; i <= n; i++)
    {
        if (i > 5)
        {
            k--;
        }
        else
        {
            k++;
        }

        for (j = 1; j <= n; j++)
        {
            if (i == j || j == n + 1 - i)
            {
                printf("%d ", k);
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
