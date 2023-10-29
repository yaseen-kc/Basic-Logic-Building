#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d %d ", j, i);
        }
        printf("\n");
    }
}
