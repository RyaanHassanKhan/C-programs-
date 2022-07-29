/* Program in C to print all integers from 1-20 except 10 */
#include <stdio.h>
int main()
{
	int i;
	for (i=1;i<=20;i++)
	{
		if (i==10)
		continue;
		printf("%d ",i);
	}
	return 0;
}
