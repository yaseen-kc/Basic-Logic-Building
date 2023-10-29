#include <stdio.h>

int main()
{
    int pattern[] = {4,1,1,5};
    int n = sizeof(pattern) / sizeof(pattern[0]);

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < pattern[i]; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
