#include<stdio.h> //WAP to check number is positive, negative or zero
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num>0){
		printf("Number is positive");
	}
	else if (num<0){
		printf("Number is negative");
	}
	else {
		printf("Zero");
	}
return 0;	
}
