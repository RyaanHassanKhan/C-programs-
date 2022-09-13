//marks of 63 students and finding the topper
#include<stdio.h>
struct student
{
	int roll_no;
	char name[100];
	float marks;

};
int main()
{
	int i,n;
	printf("Enter the number of students in your class_");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the roll no.,name and marks_");
		scanf("%d %s %f", &s[i].roll_no ,&s[i].name ,&s[i].marks);
	}
	printf("Roll No\t Name \t Marks \n");
	for(i=0;i<n;i++)
	printf("%d \t %s \t %.2f \n",s[i].roll_no ,s[i].name ,s[i].marks);
	//to find the topper
	float max=s[0].marks;
	int topper_roll_no = 1;
	for(i=0;i<n ;i++)
	{
		if (s[i].marks> max)
		{
		max= s[i].marks;
		topper_roll_no = i+1;
	   }
	}
	printf(" The topper is Roll no. %d with %.2f marks", topper_roll_no, max);
return 0;
	
}
