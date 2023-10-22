#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("* ");
        }
        printf("\n");
    }


}
