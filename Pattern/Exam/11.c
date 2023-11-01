#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 9;
    int k = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 6 - i + k || j == 4 + i + k)
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
