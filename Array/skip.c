#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i;

    printf("Enter the limit:\n");
    scanf("%d", &limit);

    int arr[limit];

    printf("Enter the values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < limit; i++)
    {
        if (arr[i] % 5 == 0)
        {
            printf("%d ", arr[i]);
            i = i + 2;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
}
