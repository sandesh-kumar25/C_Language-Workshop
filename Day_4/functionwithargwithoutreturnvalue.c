#include<stdio.h>
#include<conio.h>// function with argument with return value
int sum(int,int); //  int,int are the formal parameter //function declaration
void main(){ //1 step
	int num1,num2,s; // 2 step
	printf("Enter two numbers: "); // 3 step
	scanf("%d %d",&num1,&num2); // 4 step
	s = sum(num1,num2); // 5 step //function calling
	printf("sum = %d",s);
	getch();
}
 int sum(int x,int y) // function definition
 { 
  int z;
  z=x+y;
  return z;
 }
