#include <stdio.h>

// Tabs, new-line and spaces counter

int main(){

    int c;
    int nl = 0;
    int tab  = 0;
    int s = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n'){
            nl++;
        
        } else if (c == '\t'){
            tab++;
        
        } else if (c == ' '){
            s++;
        }        
    }
    printf("'tab:'%d 'nl:'%d 's:'%d\n", tab, nl, s);
}

