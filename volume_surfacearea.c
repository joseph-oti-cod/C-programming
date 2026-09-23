/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: volume and surface area
Date: 18TH SEP 2026
Version: 1.9
*/

#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, height;
    double volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate Volume and Surface Area
    volume = PI * radius * radius * height;
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // Output results formatted to 2 decimal places
    printf("\n--- Cylinder Calculations ---\n");
    printf("Volume: %.2lf\n", volume);
    printf("Surface Area: %.2lf\n", surface_area);

    return 0;
}