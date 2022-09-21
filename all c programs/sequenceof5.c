//sequence printing 5 10 15...
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the numbers upto which you wish to display the series");
	scanf("%d",&n);
	for(i=5;i<=n;i=i+5)
	{
	printf(" %d ",i);
}
return 0;
}
