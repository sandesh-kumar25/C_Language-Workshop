#include <stdio.h>

int main() {
    int i,j; // Number of rows in the pattern and column

    for (i = 1; i<=5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i); // Print numbers in sequence  //change j to i give another 1,22,333,4444,55555 pattern
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
