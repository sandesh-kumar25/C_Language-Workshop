//C Program to create  sum of an Array
#include<stdio.h>
int main()
{
	int n,i;
	printf("No. of elements in array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Elements %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("The reverse of array are:\n");
	for (i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	
	}

	
	return 0;
}
