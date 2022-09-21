#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf("enter the number _");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("the factorial of the number is %d",product);
	
	return 0;
}
