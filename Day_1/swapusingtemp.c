#include<stdio.h> //with using 3rd variable
int main(){
	int x,y,temp;
	printf("Enter the value of two numbers ");
	scanf("%d%d",&x,&y);
	temp=x; //x=2,y=3
	x=y;
	y=temp;
	printf("The swap value is x=%d,y=%d",x,y);
	return 0;
}
	
	
	
