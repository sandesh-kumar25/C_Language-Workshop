#include <stdio.h>  // CALL BY VALUE
void swap(int,int);  // function declaration
int main()
{
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	swap(a,b); // function calling 
	printf("\n Value of Actual parameter is:%d,%d",a,b);
	return 0;
}
 void swap(int x,int y)   // function defining
 { int t;
   t=x;
   x=y;
   y=t;
   printf("\n Value of Formal Parameter is %d,%d",x,y);
   
 }
