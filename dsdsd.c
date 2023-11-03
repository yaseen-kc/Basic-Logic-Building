#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {

        for (j = 1; j <= 11; j++)
        {
            if (j <= (2 * i) - 1 || j >= 12 - (2 * i - 1))
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