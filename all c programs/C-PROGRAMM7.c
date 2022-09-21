#include<stdio.h>
void swap (int ,int);
int main()
{
	int x,y;
	x=0;
	y=4;
	printf("%d %d \n",x,y);
	swap (&x,&y);
	

}
swap (int *p1,int *p2)
{
int temp;
temp = *p1;
*p1= *p2;
*p2= temp;
printf ("%d %d", *p1, *p2);
}
