/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: 1D 7days revenue traker
course: computer science
unit :structured programing

*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0, average = 0.0;
    
    printf("=== WEEK 6: 1D ARRAY - 7-DAY REVENUE TRACKER ===\n");
    
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: KES ", i + 1);
        if (scanf("%f", &revenue[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        total += revenue[i];
    }
    
    average = total / 7.0;
    
    printf("\n--- Summary ---\n");
    printf("Total Weekly Income: KES %.2f\n", total);
    printf("Daily Average Income: KES %.2f\n", average);
    
    return 0;
}
