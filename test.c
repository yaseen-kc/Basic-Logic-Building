#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int i, j;
    int isUnique; // Flag to check uniqueness

    printf("Enter the limit: ");
    scanf("%d", &limit);

    int arr[limit];

    printf("Enter the values: ");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements:\n");
    for (i = 0; i < limit; i++)
    {
        isUnique = 1; // Assume arr[i] is unique until proven otherwise

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = 0; // arr[i] is not unique
                break;
            }
        }

        if (isUnique)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
