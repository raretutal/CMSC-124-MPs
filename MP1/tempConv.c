#include <stdio.h>

float FahrenheitToCelsius(float temp);

int main(){
    
    float temp;
    printf("Input temperature in Fahrenheit(F): ");
    scanf("%f", &temp);
    printf("Converted to Celsius (C): %f", FahrenheitToCelsius(temp));

return 0;    
};


float FahrenheitToCelsius(float temp){
    return (temp - 32) * 5 /9; 
};
