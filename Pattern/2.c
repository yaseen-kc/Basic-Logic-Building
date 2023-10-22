#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
