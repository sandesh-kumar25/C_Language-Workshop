#include<stdio.h>
int main(){
	int row,column,i,j;
	printf("Enter the rows of matrix:\n");
	scanf("%d",&row);
	printf("Enter the column of matrix:");
	scanf("%d",&column);
	int arr[row][column];
	
	printf("Enter the elements in array:\n");
	for (i=0;i<row;i++)
	{ 
	 for(j=0;j<column;j++)
	 {
	 scanf("%d",&arr[i][j]);
    }
	}
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
		
	}
	
	return 0;
}
