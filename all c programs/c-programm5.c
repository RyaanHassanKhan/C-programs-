#include<stdio.h>
int main()
{
	FILE *p
	p=fopen("file1.txt","r");
	fscanf(p,"%d %s",&n,&s);
	printf("file contents=%d %s",x,s);
	fclose();
}
