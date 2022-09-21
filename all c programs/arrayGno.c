//greatest number in an array
#include<stdio.h>
int main()
{
	int x[10]={1,5,9,6,2,3,21,56,7,2};
	int i,max=x[0];
	for(i=0;i<=9;i++)
	{
		if (max<=x[i])
		max=x[i];
	}
	printf("The greatest number is %d",max);
	
return 0;
}
