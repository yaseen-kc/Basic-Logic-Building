#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int k = 0;
    int n = 7;
    int c = 7;

    for (i = 1; i <= n; i++)
    {
        if (i <= 4)
        {
            k++;
        }
        else
        {
            k--;
        }
        for (j = 1; j <= c; j++)
        {
            if (j >= 5 - k && j <= 3 + k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
