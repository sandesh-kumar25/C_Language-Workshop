//Make C program to calculate length of string
#include<stdio.h>
/*#include<string.h>
int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%s",&str);
	printf("Length: %zu\n",strlen(str));
	return 0;
} */
int main(){ //calculating length of string without using string library
char string[]= "Sandesh";
int count=0;
while (string[count] !='\0') {
	count++;
}
printf("The length of the string is:%d\n",count);
return 0;
}
