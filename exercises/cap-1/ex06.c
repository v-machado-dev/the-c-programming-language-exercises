#include <stdio.h>

// Verify that : (getchar() != EOF) = 0 or 1

int main(){

    int c;
    c = getchar() != EOF;
    
    printf("The expression's value is: %d\n", c);
    
}