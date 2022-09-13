#include<stdio.h>
int main()
{
	int x;
	char s[10]="hello";
	FILE *p;
	p=fopen("file.txt","w");
	x=5;

	fprintf(p,"%d %s",x,s);
	fclose(p);
}
