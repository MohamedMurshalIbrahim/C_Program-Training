// C Program Training
// Day 4 (09-July) - Session 3(03.10PM to 04.20PM)
// Program 3
// Create Floyd's Triangle with 5 rows using numbers (in the Descending order)

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns
    int num = 1; // Variable to keep track of the current number

    printf("C Program Training\n");
    printf("Day 4 - Session 3\n");
    printf("Title: Create Floyd's Triangle with 5 rows using numbers (in the inverse order)\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print Floyd's Triangle in inverse order
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d  ", j); // Print the current number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}