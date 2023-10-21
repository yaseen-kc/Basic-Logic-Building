//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count = 5;
    int i, j;
    for (i = 1; i <= count; i++)
    {
        for (j = i; j <= count; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i-1; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}