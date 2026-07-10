// C Program Training
// Day 4 (09-July) - Session 3(03.10PM to 04.20PM)
// Program 1
// Create Floyd's Triangle with 5 rows using numbers

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns
    int num = 1; // Variable to keep track of the current number

    printf("C Program Training\n");
    printf("Day 4 - Session 3\n");
    printf("Title: Create Floyd's Triangle with 5 rows using numbers\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print Floyd's Triangle
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num); // Print the current number
            num++; // Increment the number for the next position
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}