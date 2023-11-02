#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int array[100];

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = limit - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}
