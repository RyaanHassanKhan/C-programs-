#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int x,y,z,s;
	printf("enter the integer");
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("the sum="%d",z);
	s=sub(x,y);
	printf("the difference=%d",s);
}
    int add(intx,inty);
    {
    	int z;
    	z=x+y;
    	return(z);
    }
    int sub(intx,inty);
    {
    	int s;
    	s=x-y;
    	return(s);
    }
