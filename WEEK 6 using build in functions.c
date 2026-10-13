/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: WINDOW DIMENTIONS CALCULATOR USING  PY (FUNCTIONS)
Date: 8TH OCT 2026
*/

#include <stdio.h>
#include <math.h> 

int main() {
    double length, width, diagonal;

    // a) Prompt the user to enter the length and width of the window
    printf("Enter the length of the window: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    // b) Use the built-in function pow() to calculate the square of length and width
    // c) Use the built-in function sqrt() to calculate the diagonal of the window
    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    // d) Display the length, width, and calculated diagonal to two decimal places
    printf("\n--- Window Diagonal Calculation ---\n");
    printf("Length:   %.2f\n", length);
    printf("Width:    %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
