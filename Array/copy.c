#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit, sum;
    int array[limit], arrayCopy[limit];
    int i;
    printf("Enter the Limit:\n");
    scanf("%d", &limit);
    printf("Enter the elemenets:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Values in first array:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    for (i = 0; i <= limit - 1; i++)
    {
        arrayCopy[i] = array[i];
    }
    printf("\nValues in second array:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", arrayCopy[i]);
    }
}