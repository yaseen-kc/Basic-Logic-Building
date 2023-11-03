#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int position;
    int i, j;
    int a[100];

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    printf("Enter the elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete:\n");
    scanf("%d", &position);

    for (i = position - 1; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("Result:");
    for ( i = 0; i <size-1; i++)
    {
        printf("%d ",a[i]);
    }
    
}