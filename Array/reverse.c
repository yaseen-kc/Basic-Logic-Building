#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arraySize;
    int value[arraySize];
    int i;
    printf("No of elements to store:\n");
    scanf("%d", &arraySize);

    printf("Values to store:\n");
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &value[i]);
    }

    printf("The Values Stored in array are:\n");
    for (i = 0; i < arraySize; i++)
    {
        printf("%d ", value[i]);
    }
    

    printf("\nThe values store into the array in reverse are:\n");
    for (i = arraySize - 1; i >= 0; i--)
    {
        printf("%d ", value[i]);
    }
}
