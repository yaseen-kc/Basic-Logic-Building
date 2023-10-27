#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit;
    int array[100];
    int i, j;
    int temp;

    int firstlarge;
    int secondlarge;

    printf("Limit:\n");
    scanf("%d", &limit);

    printf("Enter Elements:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    if (limit % 2 == 0)
    {
        printf("Error");
    }
    else
    {
        firstlarge = array[0];
        secondlarge = array[1];

        if (secondlarge > firstlarge)
        {
            temp = secondlarge;
            secondlarge = firstlarge;
            firstlarge = temp;
        }
    }
    for (i = 2; i < limit; i++)
    {
        if (array[i] > firstlarge)
        {
            secondlarge = firstlarge;
            firstlarge = array[i];
        }
        else if (array[i] > secondlarge && array[i] != firstlarge)
        {
            secondlarge = array[i];
        }
    }
    printf("Second Largest:%d\n", secondlarge);
}