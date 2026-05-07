#include <stdio.h>

int main(){

    int bool = 0;
    int c;

    while ((c = getchar()) != EOF){

        if(c == ' ' && bool == 1){
            continue;
       
        } else if(c == ' ' && bool == 0){
            bool = 1;
            putchar(c);
        
        } else if(c != ' '){
            putchar(c);
            bool = 0;
        }
    }
}