/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description:PASSWORD AUTHENTICATION SYSTEM
Date: 6TH OCT 2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[50];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}