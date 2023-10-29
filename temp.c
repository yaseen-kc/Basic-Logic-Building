#include <stdio.h>

int main()
{
    int row;

    printf("Rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}
