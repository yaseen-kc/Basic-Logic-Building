#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    setbuf(stdout, NULL);

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf("  ");
        }
        for (k = 1; k < 2 * i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (k = 1; k < 2 * (5 - i); k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}