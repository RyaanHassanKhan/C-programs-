//1^2 +2^3 -3^2 +4^2 -...
#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("1^2 +");
	for(i=2;i<=n;i++)
	{
		if( i%2!=0)
		printf("- %d^2 +",i);
		else 
		printf(" %d^3 ",i);
	}
	
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
return 0;
}
