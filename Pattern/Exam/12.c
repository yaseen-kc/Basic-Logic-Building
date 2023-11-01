#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int n = 5;
    int c = 6;
    int k = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j == 1 && j <= 6 - i)
            {
                printf("%d ", k);
            }
            // else if (/* condition */)
            // {
            //     /* code */
            // }
        }
        printf("\n");
    }
}
