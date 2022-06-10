#include<stdio.h>
int main(){
	char ch;
		int a , b, result;
		printf("enter an operator(+, -, *, *, /):  ");
		scanf(" %c ", &ch);
		printf("enter two operands: \n ");
		scanf("%d %d", &a, &b);
		
		switch(ch){
		    case '+' :
		    	result = a+ b;
		    	break;
		    case '-' :
			    result = a- b;
			    break;
			case '*' :
			    result = a* b;
				break;
			case '/' :
			    result = a / b;
			    break;
        }
        printf("result =%d ", result);
        return 0;
    }

					
  
		  
		  
		  
		

