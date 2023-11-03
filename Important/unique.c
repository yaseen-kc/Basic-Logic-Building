#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int array[100];
    int count;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Unique Elements\n");

    for (i = 0; i < limit; i++)
    {
        count = 0;
        for (j = 0; j < limit; j++)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("%d ", array[i]);
        }
    }
}