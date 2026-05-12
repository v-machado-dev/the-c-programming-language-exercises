#include <stdio.h>

// program the prints a histogram for each character's frequency
// characters are case-insentive and are on the ASCII table

int main(){

    // declaring variables and populating array

    int c, i, j;
    int nchar[128];

    for (i = 0; i < 128; i++){
        nchar[i] = 0;
    }

    while((c = getchar()) != EOF){

        if (c >=' ' && c <= '~'){

             // makes the program case-insensitive by transorming all lowercases into capitalized
             // counts every possible character input (within ASCII)
    
            if(c >= 'a' && c <= 'z'){
                c = c - ('a' - 'A');
                nchar[c]++;
            } 
            else{
                nchar[c]++;
            }    
        }
    } 

    printf("\n");
    
    // printing accordingly
    
    for (i = 0; i < 128; i++){

        if(nchar[i] > 0){
            if(i == ' '){
                printf("SPACE(S):");
                printf("%d", nchar[i]);
                printf("\n"); 
            }
            else{
                printf("%c:", i);
                printf("%d", nchar[i]);
                printf("\n"); 
            }
        }
    }
}