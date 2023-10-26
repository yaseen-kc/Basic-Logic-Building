#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i,j;
int c=9,n=5;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=c; j++)
		{
			if(j >= 6-i && j <= 4+i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
	printf("\n");
	}
}