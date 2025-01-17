#include<stdio.h> // prime number program
 int main()
 {
 int n,i,c=0;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(n%i==0)
 c++;
 }
 if(c==2)
 printf("Number is Prime Number");
 else
 printf("Number is not Prime Number");
return 0;
}
