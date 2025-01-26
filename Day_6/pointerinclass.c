#include<stdio.h> //understand the concept of pointer
int main(){
	int x = 5;
	int *ptr = &x; // initialisation
	printf("The value of x is %d\n",x);
	printf("The address of x is %d\n",&x);
	printf("The pointer variable address the memory of %d\n",&ptr);  //also use ptr only
	printf("Value of that address stored in ptr:= %d",*ptr); //dereferncing //*&ptr=&x.
	return 0;
	
}
