/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: 3d multibranch
course: computer science
unit :structured programing

*/
#include <stdio.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    // 3 branches, 5 floors, 10 rooms per floor (0 = Vacant, 1 = Occupied)
    int hotelSystem[BRANCHES][FLOORS][ROOMS];
    
    printf("=== WEEK 6: 3D ARRAY - MULTI-BRANCH HOTEL MANAGEMENT ===\n");
    
    // Initializing or taking input for branches
    for (int b = 0; b < BRANCHES; b++) {
        printf("\nConfiguring Branch %d:\n", b + 1);
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS; r++) {
                // For simplicity, let's auto-assign or prompt. Here we prompt:
                printf("Branch %d, Floor %d, Room %d (0=Vacant, 1=Occupied): ", b + 1, f + 1, r + 1);
                scanf("%d", &hotelSystem[b][f][r]);
            }
        }
    }
    
    printf("\n--- Multi-Branch Summary Complete ---\n");
    printf("Successfully tracked %d branches with total capacity of %d rooms.\n", BRANCHES, BRANCHES * FLOORS * ROOMS);
    
    return 0;
}
