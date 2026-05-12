#include <stdio.h>

#define MAX 300
#define MIN 0

// rewrites the temperature conversion program of Section 1.2 to use a function
// for the conversion.

float calculate(float fahr, float celsius, int var, float lower, float upper);

int main(){

    // declares variables, calls function and prints a check message

    float fahr, celsius;
    float lower, upper;
    int var;
  
    calculate(fahr, celsius,var,lower,upper);
   
    printf("Done!\n");
}

float calculate(float fahr, float celsius, int var, float lower, float upper){
    
    lower = MIN;
    upper = MAX;
    var = 20;
    fahr = lower;

    // stablishes a headliner, returns and prints each celsius to fahrenheit each measurement

    printf("Fahrenheit | Celsius\n");

    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%f  %f\n", fahr, celsius);
        fahr = fahr + var;
    }return fahr;
}