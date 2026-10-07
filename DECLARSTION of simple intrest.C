/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: simple intrest deffination of functions
Date: 7TH OCT 2026
*/


#include <stdio.h>

// Function Declaration: Returns float
float calculateSimpleInterest(float principal, float rate, float time);

int main() {
    float principal = 1000.0f; // $1,000
    float rate = 5.0f;         // 5% per annum
    float time = 3.0f;         // 3 years

    // Calling the function and storing the returned value
    float interest = calculateSimpleInterest(principal, rate, time);
    
    float totalAmount = principal + interest;

    printf("=== Simple Interest Summary ===\n");
    printf("Principal Amount : $%.2f\n", principal);
    printf("Interest Rate    : %.2f%%\n", rate);
    printf("Time Period      : %.2f years\n", time);
    printf("-------------------------------\n");
    printf("Interest Earned  : $%.2f\n", interest);
    printf("Total Amount     : $%.2f\n", totalAmount);

    return 0;
}

// Function Definition: Returns calculated interest value
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100.0f;
}
