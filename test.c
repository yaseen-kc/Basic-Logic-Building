#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit, half;
    int array[100];
    int count = 0;
    int flag;

    printf("Enter the size:\n");
    scanf("%d", &limit);

    printf("Enter the values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        if (array[i] != 1)
        {
            flag = 0;
            half = array[i] / 2;

            for (j = 2; j <= half; j++)
            {
                if (array[i] % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                count++;
            }
        }
    }

    printf("Number of prime numbers in the array: %d\n", count);

    return 0;
}
