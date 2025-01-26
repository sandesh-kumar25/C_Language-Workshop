#include<stdio.h>
int main(){
	int i;
	int array[6]={10,20,30,40,50,60}; //Declaration and Initialisation
	printf("Elements of the array are:\n");
	for(i=0;i<6;i++){
		printf("arr[%d] is = %d\n",i,array[i]);
	}
	return 0;
}
