// * * * * * 
// * * * * 
// * * * 
// * * 
// *
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n=5;
    int i,j;

    for ( i = 1; i <=n; i++)
    {
        for ( j = i; j <=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}