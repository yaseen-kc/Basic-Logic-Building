#include <stdio.h>

int main()
{
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to find the majority element
    int majority = -1;
    int count = 0;

    // Loop through the array to find the majority element
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            majority = arr[i];
            count = 1;
        }
        else if (arr[i] == majority)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify if the majority element appears more than ⌊n / 2⌋ times
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == majority)
        {
            count++;
        }
    }

    // Check if the majority element is found
    if (count > size / 2)
    {
        printf("The majority element is: %d\n", majority);
    }
    else
    {
        printf("No majority element found.\n");
    }

    return 0;
}
