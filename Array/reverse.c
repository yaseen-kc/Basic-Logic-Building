#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int limit;
    int i;
    int array[100];
    printf("Enter the limit");
    scanf("%d", &limit);

    printf("Enter the elements");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = limit - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}