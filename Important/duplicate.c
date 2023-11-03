#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int temp = 0;
    int arr[100];

    printf("Enter the limit:\n");
    scanf("%d", &limit);

    printf("Input elements in the array:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate Elements are:\n");
    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (arr[i] == arr[j])
            {
                temp++;
                break;
            }
        }
    }
    printf("%d ", temp);
}
