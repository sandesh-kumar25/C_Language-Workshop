#include<stdio.h>
int main(){
	int n,mid,i,key; //targeted value OR key
    printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){  //input the elements of the array
		printf("Enter the Elements %d :",i+1);
		scanf("%d",&arr[i]); 
		}	
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	int left=0,right=n-1;
	while (left<=right)
	{ 
	  mid = (left + right) / 2; // calculating mid
	  if (arr[mid] == key) {
	  	printf("Element found at index %d\n",mid);
	  	break;
	  }
	  else if (arr[mid] < key) {
	  	left = mid + 1; //search the right half
	  }
	  else {
	  	right = mid - 1; //search the left half
	  }
	}
	return 0;
	
}

