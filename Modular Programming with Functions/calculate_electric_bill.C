
/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: electricity bill calculator
course: computer science
unit :structured programing

*/
#include <stdio.h>

float calculateElectricBill(int units);

int main() {
    int units;
    printf("=== ELECTRIC BILL CALCULATOR ===\n");
    printf("Enter electricity units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    float bill = calculateElectricBill(units);
    printf("Total Electric Bill: KES %.2f\n", bill);
    return 0;
}

float calculateElectricBill(int units) {
    float totalBill = 0.0;
    
    if (units <= 30) {
        totalBill = units * 12.0; 
    } else if (units <= 60) {
        totalBill = (30 * 12.0) + ((units - 30) * 16.0);
    } else {
        totalBill = (30 * 12.0) + (30 * 16.0) + ((units - 60) * 22.0);
    }
    
    return totalBill;
}
