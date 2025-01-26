#include<stdio.h> //modifying array
int main(){
	int i,arr[5] = {1,2,3,4,5};
	printf("Actual Array:\n");
	for(i=0;i<5;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	//Changes in element
	printf("Modifying array is:\n");
	for(i=0;i<5;i++){
		arr[i] += 3;
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
