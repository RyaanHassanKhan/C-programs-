#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("please enter two numeric values __ ");
	scanf("%d %d",&a,&b);
	printf("Enter an operator\n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n");
	scanf("%d",&c);
	switch(c)
	{
	
	case(1):
		d=a+b;
		printf("The sum of the values = %d",d);
		break;
	case(2):
		d= a-b;
		printf("The difference of the values = %d",d);
		break;
	case(3):
		d=a*b;
		printf("The product of the values = %d",d);
		break;
	case(4):
		d=a/b;
		printf("The division of the values = %d",d);
		break;
	default:
		printf("invalid operator");
	}
return 0;
		
		
		
}
