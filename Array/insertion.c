#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array[100];
    int i;
    int n;
    int position;
    int value;
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert\n");
    scanf("%d", &position);

    printf("Enter the value to insert\n");
    scanf("%d", &value);

    for (i = n - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;

    printf("Resultant Array:\n");

    for (i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}