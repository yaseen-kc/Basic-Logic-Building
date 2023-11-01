#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int array[100];
    int count;

    printf("Limit: ");
    scanf("%d", &limit);

    printf("Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        if (array[i] == 0)
        {
            continue; // Skip elements that have been counted
        }

        count = 1;
        for (j = i + 1; j < limit; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                array[j] = 0; // Mark the element as counted
            }
        }
        printf("Frequency of %d = %d\n", array[i], count);
    }

    return 0;
}
