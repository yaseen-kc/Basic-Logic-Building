#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[100];
    int i, j;
    int limit;
    int n = 5;
    int flag;

    printf("Enter the limit:\n");
    scanf("%d", &limit);
    printf("Enter  the elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    

    for (i = 0; i < n; i++)
    {
        if (array[i] == 1)
        {
            continue;
        }

        flag = 0;
        for (j = 2; j < array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
