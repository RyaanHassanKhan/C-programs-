// swapping 2 numbers using pointers
#include<stdio.h>
int swap (int *,int *);
int main()
{
	int x,y;
	x=0;
	y=4;
	printf("%d %d \n",x,y);
	swap (&x,&y);
	

}
int swap (int *p, int *q)
{
int temp;
temp = *p;
*p= *q;
*q= temp;
printf ("%d %d", *p, *q);
}

