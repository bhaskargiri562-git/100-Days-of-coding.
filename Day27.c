Q53: Vertical Diamond / Arrow Pattern
code:
#include <stdio.h>

int main() {
    int rows = 9; // Total number of rows
    
    for (int i = 1; i <= rows; i++) {
        // Calculate the number of stars for the current row
        int stars = (i <= 5) ? (2 * i - 1) : (2 * (rows - i + 1) - 1);
        
        // Print the stars
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

Q54: Centered Diamond Pattern
code:
#include <stdio.h>

int main() {
    int rows = 7; // Total number of rows
    
    for (int i = 1; i <= rows; i++) {
        int spaces, stars;
        
        // Upper half (rows 1 to 4)
        if (i <= 4) {
            spaces = 4 - i;
            stars = 2 * i - 1;
        } 
        // Lower half (rows 5 to 7)
        else {
            spaces = i - 4;
            stars = 2 * (rows - i + 1) - 1;
        }
        
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
