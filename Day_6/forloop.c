#include<stdio.h> //program to print 1-10 numbers
int main(){
/*	int i;
	for(i=0;i<=10;i++)
	{ printf("%d\n",i);
	}
return 0;
}*/
/*int i;
for(i=1;i<=10;i++);
{ i=i*5;
 printf("5*i=%d",i);
}
return 0;
}*/

//write a program to print sum of n natural numbers.
	int n,i,fact=1; //sum=0 is initialisation, int i,n is declaration 
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//sum=sum+i; 
		fact*=i;
	}
    printf("The sum of %d is %d\n ",n,fact); //program for printing factorial
	
	return 0;
}
