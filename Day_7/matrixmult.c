#include <stdio.h>
int main(){
int i,j,k;
int a[2][2] = {{1, 2}, {3, 4}};
int b[2][2] = {{5, 6}, {7, 8}};
int c[2][2] = {0};
printf("Matrix Multiplication:\n");
for (i = 0; i < 2; i++)
{
  for (j = 0; j < 2; j++){
    for (k = 0; k < 2; k++) {
     c[i][j] += a[i][k] * b[k][j];
     }
   printf("%d ", c[i][j]);
}
 printf("\n");
}
 return 0;
}
