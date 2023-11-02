#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int limit = 5;
    int i, j;
    int array[10] = {1, 2, 3, 4, 5};
    int flag;

    for (i = 0; i < limit; i++)
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
}
