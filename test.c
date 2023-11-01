#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 9;
    int k = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == n + 1 - i)
            {
                printf("%d", k);
                if (k <= 5)
                {
                    k + 1;
                }
                else
                {
                    k - 1;
                }
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
