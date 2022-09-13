#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number to be swapped ");
	scanf(" %d %d",&a,&b);
	printf("Numbers before swapping are a=%d and b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are a=%d and b=%d ",a,b);
	
return 0;
}
