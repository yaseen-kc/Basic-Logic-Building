#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int array[100];
    int small;

    printf("Limit\n");
    scanf("%d", &limit);

    printf("Value:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    small = array[0];

    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < limit; j++)
        {
            if (array[i] < small)
            {
                small = array[i];
            }
        }
    }

    printf("Smallest:%d", small);
}
