#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit, sum;
    int array[limit];
    int i;
    printf("Enter the Limit:\n");
    scanf("%d", &limit);
    printf("Enter the elemenets:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        sum = sum + array[i];
    }
    printf("SUM:%d",sum);
}
