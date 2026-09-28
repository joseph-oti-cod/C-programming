/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: Mobile Data Bundle Purchase
Date: 27TH SEP 2026
*/
#include <stdio.h>

int main() {
    int choice;

    printf("Select data bundle:\n");
    printf("1. 250MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected 250MB. Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

