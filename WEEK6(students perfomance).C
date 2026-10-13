/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: STUDENTS PERFOMANCE SYSTEM(FUNCTIONS)
Date: 7TH OCT 2026
*/

#include <stdio.h>

// i. Function to calculate total marks
float calculateTotal(float m1, float m2, float m3) {
    return m1 + m2 + m3;
}

// ii. Function to calculate average mark  RETURN MARKS
float calculateAverage(float total) {
    return total / 3.0;
}

// iii. Function to display Pass or Fail status 
void displayResult(float average) {
    if (average >= 50.0) {
        printf("Pass/Fail: Passed\n");
    } else {
        printf("Pass/Fail: Failed \n");
    }
}

// iv. Main function to prompt input and display results 
int main() {
    float mark1, mark2, mark3;
    float total, average;

    // Ask user to enter marks for three subjects[span_4](start_span)[span_4](end_span)
    printf("Enter marks for Subject 1: ");
    scanf("%f", &mark1);
    
    printf("Enter marks for Subject 2: ");
    scanf("%f", &mark2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%f", &mark3);

    // Call functions
    total = calculateTotal(mark1, mark2, mark3);
    average = calculateAverage(total);

    // Display total marks, average mark, and pass/fail result
    printf("\n<<<<O_O>>>>>\n");
    printf("\n--- Results ---\n");
    printf("=USIOGOPE NI YAKO=");
    printf("\nTotal marks: %.2f\n", total);
    printf("Average mark: %.2f\n", average);
    displayResult(average);

    return 0;
}
