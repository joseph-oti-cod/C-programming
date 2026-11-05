/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: Water Bill Calculator
Date: 25TH SEP 2026
*/
#include <stdio.h>

int main() {
    int units;
    double total_bill = 0.0;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        total_bill = units * 20.0;
    } else if (units <= 60) {
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}
