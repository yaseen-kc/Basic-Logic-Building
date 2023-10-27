#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int limit;
    int position;
    int array[100];

    printf("Enter the limit\n");
    scanf("%d", &limit);

    printf("Enter the elements\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter position to delete\n");
    scanf("%d", &position);

    for (i = position - 1; i <= limit - 1; i++)
    {
        array[i] = array[i + 1];
    }

    for (i = 0; i < limit-1; i++)
    {
        printf("%d ", array[i]);
    }
}
