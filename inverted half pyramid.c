/* Program in C to print an inverted half pyramid shape */
#include <stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=6;i++)
	{
		for (j=6;j>=i;j--)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
