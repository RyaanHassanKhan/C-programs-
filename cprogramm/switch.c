#include<stdio.h>

int main()
 {
 int x;
 printf("\n enter the month number: ");
 scanf("%d",&x);
  
switch (x)
{
	case 1: printf("month is :January");
		break;
    case 2:
    	printf("month is :February");
    	break;
    case 3:
    	printf("month is :march");
    	break;
    case 4:
		printf("month is :April");
		break;
    case 5:
    	printf("month is :may");
    	break;
    case 6:
    	printf("month is :June");
    	break;
    case 7:
    	printf("month is :july");
    	break;
    case 8:
    	printf("month is :august");
    	break;
    case 9:
		printf("month is :september");
		break;
    case 10:
    	printf("month is :october");
    	break;
    case 11:
    	printf("month is :november");
    	break;
	case 12:
	    printf("month is :december");	
	    break;
	    default: printf("the entered value is in correct");
	    }
	    
}
			

