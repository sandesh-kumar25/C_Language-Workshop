#include<stdio.h> //(WHILE LOOP)
int main(){
	/*int i=1;
	
	while(i<=100)
	{ 
	 printf("%d\n",i);
	 i++;
	}
}*/


//WAP TO PRINT number OF DIGITS
/*int n,count=0;
printf("Enter the value of n: ");
scanf("%d",&n);
 if(n==0){
 	count=1;
 }
 if(n<0){
 	n=-n;
 }
while(n>0){ //OR USE also (n!=0)
	n=n/10;
	count+=1;
}
printf("number of digits=%d",count);
return 0;
} */  // FOR SUM OF entered DIGITS
/*int n,d,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(n>0)
{ d=n%10;
  n=n/10;
  sum=sum+d;
}
printf("The sum is %d",sum);
return 0;
} */
/*
int n,d,sum=0; // for pallindrome program sum-reversed
printf("Enter the value of digit: ");
scanf("%d",&n);
int temp=n;
while(n>0)
{
d=n%10;
sum=sum*10+d;
n=n/10;
}

/*printf("The reversed number is %d",sum);
return 0;
} */

/*if(sum==temp)
{ printf("The number is palindrome");
}
else {
	printf("The number is not a pallindrome");
}
return 0;
}  */
 // PATTERN PROBLEM
int i,j;
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
printf("\n");	
}
return 0;
} 
