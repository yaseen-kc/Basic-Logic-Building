#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int flag;
    int count;
    printf("Enter the limit:\n");
    scanf("%d", &limit);

    int arr[limit];

    printf("Enter the values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements:\n");

    for (i = 0; i < limit; i++)
    {
        count = 0;
        for (j = 0; j < limit; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
