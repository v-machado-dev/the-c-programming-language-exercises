#include <stdio.h>

// Printing Fahrenheit equivalent to Celsius (from 20° to 0°)

int main(){

    int inicio, fim, incr;
    float fahr, celsius;
    
    inicio = 20;
    fim = 0;
    incr = 1;

    printf("Celsius || Fahrenheit\n");
    celsius = inicio;
    while (celsius > fim){
        fahr = (celsius *1.8) + 32.0;
        printf("%f, %f\n", celsius, fahr);
        celsius = celsius - incr;
    }

}