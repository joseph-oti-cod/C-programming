/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: compound intrest calculator
Date: 19TH SEP 2026
Version: 1.8
*/

#include <stdio.h>
// Required for the pow() function
#include <math.h> 

int main() {
    double principal, rate, time, n;
    double final_amount, interest_earned;

    // 1. Get inputs from the user
    printf("Enter the principal amount ($): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of compounding periods per year (e.g., 12 for monthly): ");
    scanf("%lf", &n);

    // 2. Convert percentage rate to a decimal
    double decimal_rate = rate / 100.0;

    // 3. Apply the formula: A = P * (1 + r/n)^(n*t)
    final_amount = principal * pow((1 + decimal_rate / n), (n * time));
    interest_earned = final_amount - principal;

    // 4. Display the results formatted to 2 decimal places
    printf("\n--- Results ---\n");
    printf("Total Accumulated Amount (A): $%.2f\n", final_amount);
    printf("Compound Interest Earned (CI): $%.2f\n", interest_earned);

    return 0;
}