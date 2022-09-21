//fibonacci series
#include<stdio.h>
int main()
{
	int z,n,i,x=0,y=1;
	printf("enter the number upto which you want to display the fibonacci series");
	scanf("%d",&n);
	printf("fibonacci series: %d  %d",x,y);
	z=x+y;
	
	for (i=3;i<=n;++i)
	{
	printf(" %d ",z);
	x=y;
	y=z;
	z=x+y;
    }
return 0;
}
