#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 5;
    int k = 0;
    int l = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            printf("%d %d ", k, l);
        }
        for (j = 3; j <= 3; j++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}
