// array in pointer
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("No. of elements in the array: ");
	scanf("%d",&n);
	
	int a[n];
	int *p=&a[0];

	printf("Enter the numbers in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	//	p=p+1;
	}

	printf("The array is_ ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",*p);
		p=p+1;
	}
	
return 0; 
}


