#include <stdio.h>

int main(void)
{
    int array[100];
    int limit;
    int flag;

    printf("Enter the limit:\n");
    scanf("%d", &limit);

    printf("Enter the elements:\n");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] <= 1)
        {
            continue;
        }

        flag = 1;
        for (int j = 2; j <= array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            array[i] = 0;
        }
    }

    printf("Array after removing prime numbers:\n");
    for (int i = 0; i < limit; i++)
    {
        if (array[i] != 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
