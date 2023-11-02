#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("enter");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (i * i) * 2; j++)
        {
            printf("* ");
            if (j % (i * 2) == 0)
                printf("\n");
        }
        if (i == n)
            break;
        for (k = 1; k <= 3; k++)
        {
            printf("* \n");
        }
    }

    return 0;
}