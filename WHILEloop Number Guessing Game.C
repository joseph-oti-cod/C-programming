/*
Author: Joseph Otieno Oduru
Reg Number: BCS-05-0161/2024
Description: NUMBER GUESSING GAME
Date: 6TH OCT 2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int attempts = 0;

    // Seed random number generator
    srand(time(NULL));
    secret_number = (rand() % 20) + 1; // Range 1 to 20 inclusive

    printf("Guess the secret number between 1 and 20!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            break;
        }
    }

    printf("Total attempts: %d\n", attempts);
    return 0;
}