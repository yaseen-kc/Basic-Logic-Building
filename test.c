#include <stdio.h>

int main(void)
{
    int i, j;
    int limit;
    int sum = 0;

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

    printf("Sum:%d\n", sum);

    if (sum > 100)
    {
        printf("Even Numbers Deleted:\n");
        int newSize = 0; // Track the size of the modified array

        for (i = 0; i < limit; i++)
        {
            if (array[i] % 2 != 0)
            {
                array[newSize] = array[i];
                newSize++;
            }
        }

        limit = newSize; // Update the array size

        for (i = 0; i < limit; i++)
        {
            printf("%d ", array[i]);
        }
    }

    if (sum < 100)
    {
        printf("Odd Numbers Deleted:\n");
        int newSize = 0; // Track the size of the modified array

        for (i = 0; i < limit; i++)
        {
            if (array[i] % 2 == 0)
            {
                array[newSize] = array[i];
                newSize++;
            }
        }

        limit = newSize; // Update the array size

        for (i = 0; i < limit; i++)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
