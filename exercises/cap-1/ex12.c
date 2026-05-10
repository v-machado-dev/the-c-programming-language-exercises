#include <stdio.h>
#define OUT 0
#define IN 1

int main(){

    int state = OUT;
    int c;
    while((c = getchar()) != EOF){

        if((c == ' ' || c == '\t') && state == IN){
            c = '\n';
            state = OUT;
            putchar(c);
        
        } else if (state == OUT && (c == ' ' || c == '\t')){
            
            continue;
        
        } else {
            
            state = IN;
            putchar(c);
        }
    }
}