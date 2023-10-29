#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 5;
    int k;

    for (i = 1; i <= n; i++)
    {
        k = 5;
        for (j = 1; j <= n; j++)
        {
            printf("%d ", k);
            k--;
        }

        printf("\n");
    }
}
