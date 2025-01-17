#include<stdio.h> 
#include<conio.h> 
int fact(int); //function declaration
int main() 
{ 
int n,f; 
printf("Enter a Number: "); 
scanf("%d",&n); 
f=fact(n); // function calling
printf("Factorial is = %d",f);
return 0;
}
int fact(int num) // function definition
{ 	if(num==0)
	{
		return 1;   // RECURSIVE CASE
	}
	else {
		return(num)*fact(num-1);
	}
}
