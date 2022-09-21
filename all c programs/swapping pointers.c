#include<stdio.h>
int swap (int*,int*);
int main()
{
	int x,y;
	x=2;
	y=3;
	printf("%d %d\n",x,y);
	swap (&x,&y);
	
}
int swap (int *p, int *q)
{
int temp;
temp =*p;
*p=*q;
*q=temp;
printf("%d %d",*p,*q );
	
}
