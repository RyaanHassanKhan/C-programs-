//  reversing an array using pointers
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("No of elements in your array: ");
	scanf("%d",&n);
	
	int a[n];
	int *p=&a[n-1];

	printf("Enter elements");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Your array: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",*p);
		p=p-1;
	}
	
return 0;	
}
