#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int array[100];
    int flag;

    printf("Enter the limit:\n");
    scanf("%d", limit);

    printf("Enter the value:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array);
    }

    for (i = 0; i < limit; i++)
    {
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
    }
}
