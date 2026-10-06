/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description:PER HOUSE KPLC BILL CALCULATOR
Date: 6TH OCT 2026
*/


#include <stdio.h>

#define HOUSEHOLDS 10

// Function to calculate KPLC energy charge based on units (kWh) consumed
double calculate_kplc_cost(double units) {
    double cost = 0.0;

    if (units <= 30) {
        cost = units * 12.22; // Lifeline Band
    } 
    else if (units <= 100) {
        // First 30 units at Lifeline rate, remaining at Ordinary rate
        cost = (30 * 12.22) + ((units - 30) * 16.30);
    } 
    else {
        // First 30 units at Lifeline, next 70 at Ordinary, excess at High rate
        cost = (30 * 12.22) + (70 * 16.30) + ((units - 100) * 20.97);
    }

    return cost;
}

int main() {
    double units[HOUSEHOLDS];
    double costs[HOUSEHOLDS];
    double total_units = 0.0;
    double total_cost = 0.0;

    printf("====================================================\n");
    printf("   KPLC HOUSEHOLD POWER BILLING SYSTEM (INTERACTIVE)\n");
    printf("====================================================\n");

    // Process household consumption one by one
    for (int i = 0; i < HOUSEHOLDS; i++) {
        printf("\n----------------------------------------------------\n");
        printf(" HOUSEHOLD %d OF %d\n", i + 1, HOUSEHOLDS);
        printf("----------------------------------------------------\n");
        
        printf("Enter units consumed (kWh): ");
        scanf("%lf", &units[i]);

        // Calculate energy cost
        costs[i] = calculate_kplc_cost(units[i]);

        // Immediate output display for current household
        printf("\n>>> RESULT FOR HOUSEHOLD %d:\n", i + 1);
        printf("    Units Consumed : %.2f kWh\n", units[i]);
        printf("    Energy Cost    : KSh %.2f\n", costs[i]);

        // Accumulate totals
        total_units += units[i];
        total_cost += costs[i];
    }

    // Final summary table across all households
    printf("\n========================================================\n");
    printf("                  FINAL SUMMARY REPORT                  \n");
    printf("========================================================\n");
    printf("%-15s | %-18s | %-15s\n", "Household Unit", "Consumption (kWh)", "Energy Cost (KSh)");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < HOUSEHOLDS; i++) {
        printf("Household %-5d | %-18.2f | KSh %-12.2f\n", i + 1, units[i], costs[i]);
    }

    printf("========================================================\n");
    printf("%-15s | %-18.2f | KSh %-12.2f\n", "TOTAL", total_units, total_cost);
    printf("========================================================\n");

    return 0;
}
