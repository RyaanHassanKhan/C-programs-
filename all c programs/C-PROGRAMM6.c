#include<stdio.h>
void swap (int ,int);
int main()
{
	int x,y;
	x=0;
	y=4;
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
