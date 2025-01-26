//C Program to create sum of an Array
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("No. of elements in array:");
	scanf("%d",&n);
	int arr [n];
	printf("Enter the elements:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Elements %d:",i+1);
		scanf("%d",&arr[i]); 
		
	}
	printf("The Elements of array are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		sum = sum+arr[i];
	}
	printf("\nSum of elements %d:",sum);
	
	getch();
}
