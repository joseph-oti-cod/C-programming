/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: calculate fare
course: computer science
unit :structured programing

*/
#include <stdio.h>

float calculateFare(float distance);

int main() {
    float distance;
    printf("=== TRANSPORT FARE CALCULATOR ===\n");
    printf("Enter distance in kilometers: ");
    if (scanf("%f", &distance) != 1 || distance < 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    float fare = calculateFare(distance);
    printf("Total Transport Fare: KES %.2f\n", fare);
    return 0;
}

float calculateFare(float distance) {
    float baseFare = 50.0; 
    float ratePerKm = 15.0; 
    
    if (distance <= 0) {
        return 0.0;
    }
    
    return baseFare + (distance * ratePerKm);
}