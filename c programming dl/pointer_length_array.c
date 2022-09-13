// length of an array using pointers
#include<stdio.h>
int main()
{
	char arr[100];
	printf("Enter your first name");
	scanf("%s",&arr);
	int i;
	char *p = &arr[0];
		while(*p!='\0')
		{
			i++;
			p++;
		}
	printf("The number of letters in your name are : %d",i);
return 0;
}
