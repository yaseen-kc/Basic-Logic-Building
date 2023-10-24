#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int temp;
    int array[100];

    printf("Enter the limit:\n");
    scanf("%d", &limit);

    printf("Enter the elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

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

    temp = array[1];
    printf("Smallest Element:%d\n", temp);
}
