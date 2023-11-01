#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int limit;
    int i, j;
    int array[100];
    int count;

    printf("Limit:\n");
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
            continue;
        }

        count = 1;
        for (j = 0; j < limit; j++)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {
                    count++;
                    array[j] = 0;
                }
            }
        }
        printf("Frequency:%d = %d\n", array[i], count);
    }
}
