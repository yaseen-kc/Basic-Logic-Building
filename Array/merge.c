#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int temp;

    printf("Limit of first array:\n");
    scanf("%d,&limit");

    int array1[limit];
    int array2[limit];
    int sum[100];

    printf("Input Element to 1st Array");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Input Element to 2nd Array");
    for (j = 0; j < limit; j++)
    {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < limit; i++)
    {
        sum[i] == array1[i];
    }

    for (j = 0; j < limit; j++)
    {
        sum[i] == array2[i];
    }

    for (i = 0; i < sum; i++)
    {
        for (j = i + 1; j < sum; j++)
        {
            if (sum[i] > sum[j])
            {
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    printf("Elements in Decending order");
    for (i = 0; i <; i++)
    {
        printf("%d " sum[i]);
    }
}
