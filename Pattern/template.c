#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, i, j;
    printf("Enter the limit:");
    scanf("%d", &n);+
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n*3; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}