/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: BANK WITHDRAWALS
Date: 6TH OCT 2026
*/


#include <stdio.h>

int main() {
    double balance = 50000.0;
    double withdrawalAmount;

    printf("Welcome to the ATM!\n");
    printf("Initial Account Balance: KSh %.2f\n\n", balance);

    while (1) {
        printf("Enter withdrawal amount (enter 0 to stop): KSh ");
        scanf("%lf", &withdrawalAmount);

        // the stop option for the user
        if (withdrawalAmount == 0) {
            printf("\tTransaction cancelled by user. Goodbye!\n");
            break;
        }

        // Check if the withdrawal amount is valid
        if (withdrawalAmount < 0) {
            printf("Invalid amount entered. Please enter a positive value.\n");
            continue;
        }

        // Check if sufficient balance is available
        if (withdrawalAmount > balance) {
            printf("Insufficient funds! Transaction cancelled.\n");
            printf("Remaining Balance: KSh %.2f\n", balance);
            continue;
        }

        // Deduct from balance and display remaining amount
        balance -= withdrawalAmount;
        printf("Withdrawal successful! Remaining balance: KSh %.2f\n\n", balance);
    }

    return 0;
}
    