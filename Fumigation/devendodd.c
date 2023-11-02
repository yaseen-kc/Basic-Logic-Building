#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int sum = 0;
    int size[100];

    printf("Enter the Limit:\n");
    scanf("%d", &limit);

    int array[limit];

    printf("Enter the values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum:%d", sum);

    if (sum > 100)
    {
        printf("\nEven Number Deleted\n");
        for (i = 0; i < limit; i++)
        {
            if (array[i] % 2 == 0)
            {
                size[1] = array[i];
            }
        }
        for (i = 0; i < limit; i++)
        {
            printf("%d ", size[i]);
        }
    }

    if (sum < 100)
    {
        printf("\nOdd Number Deleted\n");
        for (i = 0; i < limit; i++)
        {
            if (array[i] % 2 != 0)
            {
                size[i] = array[i];
            }
        }
        for (i = 0; i < size; i++)
        {
            printf("%d ", size[i]);
    }
}
