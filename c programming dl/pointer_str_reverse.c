#include<stdio.h>
int main()
{
	char str[]="hello";
	char *p=&str[0];
	while( *p != '\0')
	{
		printf("%c", *p);
		p++;
	}
//to print in reverse order
char *q;
 q=&str[0];

while(*p!= '\0')
{
	p++;
}
do
{
	printf("%c",*p);
	p--;
	
}while(p!=q-1);
return 0;
	
}
