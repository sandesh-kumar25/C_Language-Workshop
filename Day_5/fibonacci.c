#include<stdio.h>
int fib(int);
int main(){
	int i,n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;	
}
int fib(int x)
{
	if(x==0) 
   return 0; 
   else if (x==1)
   {  
   return 1;
   }
 else 
 {
 	return(fib(x-1)+fib(x-2));
 }
  
}

