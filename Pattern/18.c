#include <stdio.h>
#include <stdlib.h>
// 342
int main(void)
{

    int i, j;
    int n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // if (i == 0 || j == 0 || i == n - 1 || i == j || j == n - 1 || i + j == n - 1)
            if (i == 0 || j == 0 || i == n - 1 || i == j || j == n - 1 || i + j == n - 1)
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
