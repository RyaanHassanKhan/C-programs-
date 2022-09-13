#include<stdio.h>
void swap (int ,int);
int main()
{
	int x,y;
	x=2;
	y=3;
	printf("%d %d \n",x,y);
	swap (x,y);

}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf(" %d %d",x,y);
return ;
}
