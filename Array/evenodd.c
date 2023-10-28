#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[100];
    int even[100];
    int odd[100];
    int limit;
    int i, j, k;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Even Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
    printf("Odd Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d ", array[i]);
        }
    }
}
