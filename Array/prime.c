#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int array[100];
    int i, j, k;
    int prime;
    int sum = 0;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        prime = 1;

        if (array[i] <= 1)
        {
            prime = 0;
        }
        else
        {
            for (j = 2; j < array[i]; j++)
            {

                if (array[i] % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime)
        {
            array[i] = -1;
        }
        else
        {
            sum += arr[i];
            arr[n]
        }
    }
}
