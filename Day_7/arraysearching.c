#include<stdio.h>
int main(){
	int n,j,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){  //input the elements of the array
		printf("Enter the Elements %d :",i+1);
		scanf("%d",&arr[i]); 
		}
	int b;
	printf("Enter the element to be searched in array:");
	scanf("%d",&b);	
	//perform linear search	
	for (i=0;i<n;i++)
    {
	  	if(b==arr[i])
	  	{ printf("Number is found %d",b);
		  printf("\nEnter the index of number is %d",i);
		  printf("\nPosition of element in array is %d:",++i);
		  break;
	  }
    
	  if (i==n)
	  { printf("Element not found in array");
	  }
    }

return 0;
}
