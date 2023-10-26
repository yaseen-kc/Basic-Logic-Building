#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, sum, i;
    printf("Enter a number");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    printf("SUM: %d", sum);
}
