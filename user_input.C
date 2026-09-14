//Single line comment
//A Program to prompt users to enter their details

/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: a program that prompts user to enter his/her details
Date: 12TH SEP 2026
Version: 1.1
*/
#include <stdio.h>
int main() {
    float height;
    double bankBalance;
    char phoneNumber[20];

    // Prompt user for input
    printf("--- Enter Details ---\n");
    
    printf("Enter your height (in meters/cm): ");
    scanf("%f", &height);

    printf("Enter your bank balance (KES): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    // Output formatted details
    printf("\n====================================\n");
    printf("         USER DETAILS DISPLAY       \n");
    printf("====================================\n");
    printf("Height       : %.2f\n", height);
    printf("Bank Balance : KES %.2lf\n", bankBalance);
    printf("Phone Number : %s\n", phoneNumber);
    printf("====================================\n");

    return 0;
}