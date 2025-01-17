#include <stdio.h>

int main() {
    int i,j; 
	char ch = 'A'; // Number of rows in the pattern and column

    for (i = 1; i<=5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch); 
        }
    ch++; //Move to next character
        printf("\n"); // Move to the next line
    }

    return 0;
}
