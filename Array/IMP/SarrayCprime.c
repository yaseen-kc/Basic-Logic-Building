#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int temp;
    int array[100];
    int i, j;
    int k = 1;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Enter Numbers:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted Array:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    for (j = 2; j < array[i]; j++)
    {
        if (array[i] % j == 0)
        {
            k++;
            break;
        }
    }
}
