#include<stdio.h>
void sort (int *, int);
int main()
{
	int i,n,a[100];
	printf("Enter the size of array_");
	scanf("%d",&n);
	
	printf("Enter the elements of array_");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	sort(&a[0],n);
	printf("Sorted array: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		
}
void sort (int *p,int n)
{
	
	int i,j,temp;
	int *q;
	q=p;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(*p > *(p+1))
				{
					temp = *p;
					*p=*(p+1);
					*(p+1)= temp;
				}
				p++;
			}
			
		p=q;
	}
	
	
}

   
