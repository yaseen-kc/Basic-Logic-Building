#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    // Find prime numbers and calculate the sum
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(arr[i]))
        {
            sum += arr[i];
        }
    }

    printf("Sum of non-prime elements: %d\n", sum);

    return 0;
}
