#include<stdio.h>
int main(){
	int a;
	printf("Enter your number: ");
	scanf("%d", &a);
	switch(a)
{   case 1: 
        printf("MONDAY");
        break;
    case 2:
    	printf("TUESDAY");
    	break;
    case 3:
	    printf("WEDNESDAY");
	    break;
	 case 4:
	    printf("THURSDAY");	
	    break;
	 case 5:
	    printf("FRIDAY");	
	    break;	
	 case 6:
	    printf("SATURDAY");
	    break;	
	 case 7:
	    printf("SUNDAY");	
	    break;	    
	default:
	    printf("error");
		break;  
}
return 0;		  
}
