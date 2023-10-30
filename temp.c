#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 4, c = 7;
    char k;

    for (i = 1; i <= n; i++)
    {
        k = 'A';
        for (j = 1; j <= c; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c ", k);
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
                if (j == 4)
                {
                    k--;
                }
            }
        }
        printf("\n");
    }
}
