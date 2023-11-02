#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    int n = 5;
    int c = 6;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j <= 7 - i)
            {
                if ((i + j) % 2 == 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
}
