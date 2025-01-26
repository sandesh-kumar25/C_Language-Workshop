#include<stdio.h> // pointer arithmetic
int main(){
	int arr[5]={10,20,30,40,50};
	int *ptr = arr; //pointer of the first element
	printf("Pointer arithmetic:\n");
	printf("Value at ptr: %d\n", *ptr);
	ptr++;
	printf("Value at ptr++: %d\n",*ptr);
	ptr += 2;
	printf("Value at ptr+=2 is : %d\n",*ptr);
	return 0;
}
