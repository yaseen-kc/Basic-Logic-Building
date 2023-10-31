#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int array[100];
    int temp; 
    int flag;
    int k = 0;

    //Limit 
    printf("Limit:\n");
    scanf("%d", &limit);

    //Entering Values
    printf("Enter Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    //Sorting Array
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

    //Printing Sorted Array
    printf("Sorted Array:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    //Printing Prime Numbers
    printf("\nPrime Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        //if Array value is 1
        if (array[i] == 1)
        {
            continue;
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
            printf("%d ", array[i]);
        }
    }

    printf("\nNumber of Prime Numbers:\n%d", k);

    return 0;
}
