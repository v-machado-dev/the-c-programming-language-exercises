#include <stdio.h>

#define MINIMUM 80
#define MAXIMUM 1000

// program that prints all input lines that are longer than 80 characters.

void count(int c, char array[]);

int main(){

    int c, i;
    char array[MAXIMUM];

    for (i = 0; i < MAXIMUM; i++){
        array[i] = 0;
    }

    count(c, array);

    printf("Done!");
}

void count(int c, char array[]){
    
    int count, size;
    count = 0;

    while((c = getchar()) != EOF){
    
        if(c == '\n'){
            size = count;
            count = 0;

            if(size >= MINIMUM && size <= MAXIMUM){

                // turns '\n' char into end of string (null) char
                array[size] = '\0';

                printf("%s\n", array);
                printf("The count is: %d\n", size);
                } 
        } else {
            array[count] = c;
            count++;
        }
    } 
}
    