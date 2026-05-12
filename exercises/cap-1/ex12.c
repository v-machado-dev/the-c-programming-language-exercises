#include <stdio.h>

#define IN  1
#define OUT 0

// prints out a new line for every new word

int main() {

    int c, state;
    state = OUT;

    // prints a new line for every blank, tab or new line

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                putchar('\n');
            }
            state = OUT;
        
        // if last c was a letter then print the current one 

        } else {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}