#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter 3 distinct numbers");
	scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
{
   printf("%d is the greatest number",a);
} 
  else if(b>a && b>c)
{
	 printf("%d is the greatest number",b);
}
  else if (c>a && c>b)
{
	printf("%d is the greatest number",c);

}
return 0;
}

