#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5];
    int i, j;
    int n = 5;
    int flag;

    printf("Write the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            continue;
        }

        flag = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
