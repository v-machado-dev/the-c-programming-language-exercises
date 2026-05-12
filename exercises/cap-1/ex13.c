#include <stdio.h>

#define IN 1
#define OUT 0

//program that prints a histogram of word length frequencies

int main(){

    // declaring variables and populating array

    int len[100];
    int c, i,j;
    int size = 0;
    int state = IN;

    for (i = 0; i < 100; i++){
        len[i] = 0;
    }

    while((c = getchar()) != EOF){

        // increases the count for inputs's word's lenghts and restarts size

        if((c == ' ' || c == '\n' || c == '\t') && state == IN){   
            len[size]++;
            state = OUT;
            size = 0;
        }

        // ignores extra spaces

        else if((c == ' ' || c == '\n' || c == '\t') && state == OUT){
            continue;
        }

        // if c is not a word separator increase word size

        else{
            state = IN;
            size++;
        }
    }

    // the below operation must be done if after the loop size !=0
    // because it means that there isn't a word separator between
    // said digit and EOF, which breaks the code 

    if (size != 0){
        len[size]++;
        size = 0;
        printf("\n");
    }

    // nested for loops for printing accordingly 

    for (i = 0; i < 100; i++){

        if (len[i] > 0){
            printf(" %d :", i);

            for (j = 0; j < len[i]; j++){        
                  printf(" #");
            }
            printf("\n");
        }
    }
}