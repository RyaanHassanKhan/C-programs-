#include<stdio.h>
int sum(int);
int main()
{
    int r,n;
    printf("enter the number ");
    scanf("%d", &n);
    r=sum(n);
    printf("%d is the answer",r);
} 
 int sum(int n)
{
if (n==1)
  return 1; 
else
  return n+sum(n-1);
}
