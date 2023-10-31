#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int temp;
    int array[100];
    int i, j;
    int k = 0; // Initialize the count of prime numbers to 0
    int flag;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Enter Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    // Sort the array in ascending order
    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nPrime Numbers: ");
    for (i = 0; i < limit; i++)
    {
        if (array[i] == 1)
        {
            continue; // Skip 1 as it's not prime
        }

        flag = 0;
        for (j = 2; j <= array[i] / 2; j++)
        {
            if (array[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            k++;
            printf("%d ", array[i]); // Print prime number
        }
    }

    printf("\nNumber of Prime Numbers: %d\n", k);

    return 0;
}
