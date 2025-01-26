#include<stdio.h> // using pointer accessing array 
int main(){
	int i,arr[5]={10,20,30,40,50};
	int *ptr = arr; //point out the first element
	printf("Access array element using pointer:\n");
	for(i=0;i<5;i++){
		printf("Element %d = %d\n",i,*(ptr+i));
	}
	return 0;
}
