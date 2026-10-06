/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description:STUDENT MARKS
Date: 6TH OCT 2026
*/



#include <stdio.h>

int main() {
    float mark;
    char choice;
    char grade;

    do {
        // Validation loop: repeats until a valid mark (0 to 100) is entered
        do {
            printf("Enter student mark (0-100): ");
            scanf("%f", &mark);

            if (mark < 0 || mark > 100) {
                printf("Error: Invalid mark! Please enter a mark between 0 and 100.\n");
            }
        } while (mark < 0 || mark > 100);

        // Assign grade based on the grading criteria
        if (mark >= 80) {
            grade = 'A';
        } else if (mark >= 70) {
            grade = 'B';
        } else if (mark >= 60) {
            grade = 'C';
        } else if (mark >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display results
        printf("Mark: %.2f | Grade: %c\n\n", mark, grade);

        // Ask the lecturer if they wish to process another student
        printf("Do you want to enter another mark? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated. Goodbye!\n");
    return 0;
}