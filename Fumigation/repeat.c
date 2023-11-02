#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[100];
    int limit;
    int i, j, k;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit - 1; i++)
    {
        k = 1;
        
        for (j = i + 1; j < limit; j++)
        {
            if (array[i] == 0)
            {
                continue;
            }
            if (array[i] == array[j])
            {
                k++;
                array[j] = 0;
            }
        }

        if (k > 1)
        {
            printf("\n %d = %d", array[i], k);
        }
    }
}
