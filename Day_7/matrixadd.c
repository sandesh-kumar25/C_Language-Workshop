#include<stdio.h>
int main(){
	int row,column,i,j;
	printf("Enter the rows of matrix 1:\n");
	scanf("%d",&row);
	printf("Enter the column of matrix 1:");
	scanf("%d",&column);
	int a[row][column];
	
	printf("Enter the elements in array 1:");
	for (i=0;i<row;i++)
	{ 
	 for(j=0;j<column;j++)
	 {
	 scanf("%d",&a[i][j]);
    }
	}
	int b[row][column];
	printf("Enter the rows of matrix 2:\n");
	scanf("%d",&row);
	printf("Enter the column of matrix 2:");
	scanf("%d",&column);
	
	printf("Enter the elements in array 2:");
	for (i=0;i<row;i++)
	{ 
	 for(j=0;j<column;j++)
	 {
	 scanf("%d",&b[i][j]);
    }
	}
	int c[row][column];
	
	for (i=0;i<row;i++){
		for (j=0;j<column;j++){
			c[i][j]=a[i][j]+b[i][j];
			
		}	
	} 
    printf("The sum of matrix is\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",c[i][j]);
		}
	 printf("\n");	
	}	
	
	return 0;
}
	
	
	
