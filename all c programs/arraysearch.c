//search for an element in an array
#include<stdio.h>
int main()
{
	int x[10]={1,5,9,6,2,3,21,56,7,2};
	int i,n,flag=0;
	printf("Enter the number you want to find");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if (x[i]==n)
		{
			printf("Number found at position %d \n",i+1);
			flag=1;
		}
	
	}
      if(flag==0)
      printf("Number not found");
return 0;
}
