/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: convert degrees to celsius
course: computer science
unit :structured programing

*/
#include <stdio.h>

float convertToCelsius(float fahrenheit);

int main() {
    float fahrenheit;
    printf("=== TEMPERATURE CONVERTER ===\n");
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f °C\n", celsius);
    return 0;
}

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
