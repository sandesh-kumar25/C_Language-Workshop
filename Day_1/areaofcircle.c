#include<stdio.h>
#include<conio.h>
int main(){
	int r;
	float area,peri;
	printf("Enter the value of r\n");
	scanf("%d",&r);
	area=3.14*r*r;
	peri=2*3.14*r;
	printf("The area of circle is %f",area);
	printf("The Perimeter of circle is %f\n",peri);
	getch();
}
