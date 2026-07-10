// C Program Training
// Day 5 (10-July) - Session 1(09.10AM to 10.50AM)
// Program 1
// Create Pascal's Triangle with 5 rows using asterisk symbol (Right Angle Triangle)

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns
    int rows = 5; // Number of rows for Pascal's triangle

    printf("C Program Training\n");
    printf("Day 5 - Session 1\n");
    printf("Title: Create Pascal's Triangle with 5 rows using asterisk symbol (Right Angle Triangle)\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print Pascal's triangle
    for (i = 1; i <= rows; i++) {
        // Print asterisks for the current row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}