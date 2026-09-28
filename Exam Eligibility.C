/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: Exam Eligibility
Date: 28TH SEP 2026
*/
#include <stdio.h>

int main() {
    float attendance, average_marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    if (attendance >= 75.0 && average_marks >= 40.0) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
