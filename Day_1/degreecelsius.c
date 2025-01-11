#include<stdio.h>
int main()
{ int a;
  float C;
  printf("Enter the temperature in Farenheit");
  scanf("%d",&a);
  C=(a-32)*5/9;
  printf("The temperature in celsius is %.4f",C);
  return 0;
  
}
