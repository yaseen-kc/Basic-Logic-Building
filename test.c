#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];

    // Read values into the array
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the array after skipping two values next to multiples of 5
    printf("Array after skipping two values next to multiples of 5:\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0)
        {
            printf("%d ", arr[i]); // Print the multiple of 5
            i += 2;                // Skip the next two values
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
