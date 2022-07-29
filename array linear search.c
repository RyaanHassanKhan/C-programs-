/* Program in C to search an element in an array using linear search method */
#include <stdio.h>
int main()
{
	int i,n,x[10]={1,5,9,6,2,3,21,56,7,2},flag=0;
	printf("Enter any number");
	scanf("%d",&n);
	for (i=0;1<10;i++)
	{
		if (x[i]==n)
		{
			flag=1;
		}
	}
	if (flag==1)
	{
		printf("The number is found at %d \t",i+1);
	}
	else
	{
		printf("Number not found");
	}
	return 0;
}
