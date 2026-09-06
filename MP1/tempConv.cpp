#include <iostream>

float FahrenheitToCelsius(float temp);

int main(){

    float temp;
    std::cout << "Input temperature in Fahrenheit(F): ";
    std::cin >> temp;
    std::cout << "Converted to Celsisus (C): " << FahrenheitToCelsius(temp) << std::endl;

return 0;
}

float FahrenheitToCelsius(float temp){
    return (temp - 32) * 5 /9; 
};

