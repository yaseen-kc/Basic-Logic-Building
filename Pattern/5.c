// *
// * *
// * * *       
// * * * *     
// * * * * *
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count = 5;
    int i, j;
    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i; j <= count; j++)
        {
            printf("  ");
        }
        printf("\n");
    }
}