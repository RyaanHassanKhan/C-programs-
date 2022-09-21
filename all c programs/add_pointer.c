// add using pointers
#include<stdio.h>
int main()
{
	int x,y;
	int *p1,*p2;
	printf("Enter two numbers");
	scanf("%d %d",&x,&y);
	p1= &x;
	p2=&y;
	printf("The addition of the numbers is %d", *p1+*p2);
return 0;
	
}
