// call by reference
#include<stdio.h>
void swap(int*,int*);
int main(){
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n Value of Actual parameter is:%d,%d",a,b);
	return 0;
}
 void swap (int *x,int *y)
 {
 	int t;
 	t = *x;
 	*x = *y;
 	*y = t;
 	printf("formal paramter: %d,%d",*x,*y);
 	
 }
