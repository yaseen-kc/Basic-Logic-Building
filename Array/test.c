#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int limit;
    int array[100];
    int position;
    int value;

    printf("Enter the array limit:\n");
    scanf("%d", &limit);

    printf("Enter the elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position:\n");
    scanf("%d", &position);

    printf("Enter the value:\n");
    scanf("%d", &value);

    for (i = limit - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;

    for (i = 0; i <= limit; i++)
    {
        printf("%d ", array[i]);
    }
}