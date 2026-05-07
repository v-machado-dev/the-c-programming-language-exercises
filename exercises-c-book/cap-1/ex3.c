#include <stdio.h>

int main(){

    int inicio, fim, incr;
    float fahr, celsius;
    
    inicio = 0;
    fim = 20;
    incr = 1;

    printf("Celsius || Fahrenheit\n");
    celsius = inicio;
    while (celsius <= fim){
        fahr = (celsius *1.8) + 32.0;
        printf("%f, %f\n", celsius, fahr);
        celsius = celsius + incr;
    }

}