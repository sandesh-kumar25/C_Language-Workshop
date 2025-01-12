// C prgram to swap two numbers with using 3rd variable
#include<stdio.h> //header file
void main(){
	int x,y,z; //let x=10, y=20
	printf("Enter the value of x and y respectively ");
	scanf("%d%d",&x,&y); //&-amperscent symbol gives address {format specifier}
	printf("Before swapping x=%d,y=%d\n",x,y);
	z=x;// assiging work from right to left
	x=y;
	y=z;
	printf("After swap value is x=%d,y=%d",x,y);
	
	
}
