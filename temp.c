#include <stdio.h>
#include <stdlib.h>
// 342
int main(void)
{

    int i, j;
    int n = 7;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // i == 0 || j == 0 || i == n - 1 || i == j || j == n - 1 || i + j == n - 1

            if (i == 1 || j == 1 || i == n || j == n || j == i || j == 8 - i)
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
