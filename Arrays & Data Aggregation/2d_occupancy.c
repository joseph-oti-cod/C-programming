/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: 2D ocupancy
course: computer science
unit :structured programing

*/
#include <stdio.h>

#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    // 0 = Vacant, 1 = Occupied
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    int vacantCount = 0, occupiedCount = 0;
    
    printf("=== WEEK 6: 2D ARRAY - HOTEL ROOM OCCUPANCY ===\n");
    printf("Enter occupancy status for each room (0 for Vacant, 1 for Occupied):\n");
    
    for (int f = 0; f < FLOORS; f++) {
        printf("\n--- Floor %d ---\n", f + 1);
        for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
            printf("Room %d-%02d: ", f + 1, r + 1);
            scanf("%d", &occupancy[f][r]);
            
            if (occupancy[f][r] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
    }
    
    printf("\n--- Occupancy Report ---\n");
    printf("Total Occupied Rooms: %d\n", occupiedCount);
    printf("Total Vacant Rooms: %d\n", vacantCount);
    
    return 0;
}
