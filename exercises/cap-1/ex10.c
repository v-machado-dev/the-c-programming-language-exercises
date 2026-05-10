#include <stdio.h>

// Prints input to output and replaces tabs, spaces and \ by \t, \b, \\, respectively

int main(){

    int c;
    while((c = getchar()) != EOF){
    
        if (c == '\t'){
            
            putchar('\\');
            putchar('t');
        
        } else if(c == '\b'){

            putchar('\\');
            putchar('b');

        } else if(c == '\\'){

            putchar('\\');
            putchar('\\');
       
        } else {
            putchar(c);
        }
    }
}