#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three integers");
	scanf("%d %d %d ",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("%d %d %d is equal", &a,&b,&c);	
	}
	else if (a!=b && b!=c && c!=a)
	{
		printf("all numbers are different");
	}
	else if (a>b && a>c)
	{
		printf("%d is the greatest", a);	
	}
	else if (b>c&& b>a)
	{
		printf("%d is the greatest", b);
	}
	else
	{
		printf("%d is the greatest", c);
	}
	return 0;
}}
