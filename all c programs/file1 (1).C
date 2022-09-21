#include<stdio.h>
int main()
{
	int x;char s[10];
	FILE *p;
	p=fopen("file1.txt","r");
	fscanf(p,"%d%s,&x,&y");
	printf("filecontents=%d,%s",x,s);
	if (p==NULL)
	{
		printf("the file does not exist");
	}
	else
	{
		fscanf(p,"%d%s",&x,&s);
		printf("file contents=%d%s",x,s);
	}
	
}
