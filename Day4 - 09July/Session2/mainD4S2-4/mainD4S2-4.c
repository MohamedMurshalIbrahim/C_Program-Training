// C Program Training
// Day 4 (09-July) - Session 2(01.30PM to 03.00PM)
// Program 4
// Create Floyd's Triangle with 5 rows using asterisks

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns

    printf("C Program Training\n");
    printf("Day 4 - Session 2\n");
    printf("Title: Create Floyd's Triangle with 5 rows using asterisks\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print Floyd's Triangle
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* "); // Print the asterisk for the current position
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}