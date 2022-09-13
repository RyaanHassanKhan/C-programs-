#include<stdio.h>
int main()
{
	char str[50];
	char *p,*q;
	printf("enter the string");
	scanf("%s",&str);
	p=&str[0];
	q=p;
	while(q 1='\0')
	{
		q++;
	}
	q--;
	while(p<=q)
	{
		if(*p !=*q)
		{printf("not a palindrome");
		flag=0;
		break;
		}
		else
		{
			p++;
			q--;
		}
		if(flag==1)
		printf("it is not a palindrome");
	}
}
