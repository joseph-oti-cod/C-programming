
/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: simple intrest calculator
Date: 18TH SEP 2026
Version: 1.9
*/
#include <stdio.h> 

int main() {
    float principal, rate, time, simple_interest;

    // Get user input for principal, rate, and time
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Display the result
    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}