//TOWER OF HANOI 
#include <stdio.h> 
void ToH(int n,char source,char destination, char auxillary);
int main(){
	int n;
	printf("Enter number of disks:");
	scanf("%d",&n);
	 ToH(n,'A','C','B');
	 return 0;
} 
void ToH(int n,char source,char destination,char auxillary)
{ 
 if (n==1)
 { 
  //Base Case: Move the only disk directly from source to destination
   printf("Move disk 1 from %c to %c\n",source,destination);
   return;
 }
 //Move n-1 disks from source to aux,using dest. as aux
 ToH(n-1,source,auxillary,destination);
 
 //Move nth disk from source to destination
 printf("Move disk %d from %c to %c\n",n,source,destination);
 ToH(n-1,auxillary,destination,source);
}
