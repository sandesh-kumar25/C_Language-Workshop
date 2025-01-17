#include<stdio.h>
int main(){
	float a,b,c;
	char operation;
	printf("Enter two number: ");
	scanf("%f%f",&a,&b);
    getchar(); //USE If takes a single input character from standard input.
	// also use fflash(stdin);
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&operation);
	
	switch(operation){
	   case '+':
	   	c=a+b;
	   	printf("Result is %f",c);
	   	break;
	   case '-':
	   	c=a-b;
	   	printf("Result is %f",c);
	   	break;
	   case '*':
	    c=a*b;	
	   	printf("Result is %f",c);
	   	break;
	   case '/':
	   	c=a/b;
	   	printf("Result is %f",c);
	   	break;
	   default:
	        printf("Invalid operation!\n");
		break;
	}
	return 0;
}
