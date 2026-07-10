// C Program Training
// Day 4(09-July) - Assessment(Conducted on Day5(10-July) - (09.10AM to 10.50AM))
// Program 1
// Create the pascal's triangle with 5 rows using asterisk symbol

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns
    int rows = 5; // Number of rows for Pascal's triangle

    printf("C Program Training\n");
    printf("Day 4 - Assessment(Conducted on Day5)\n");
    printf("Title: Create the pascal's triangle with 5 rows using asterisk symbol\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print Pascal's triangle
    for (i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print asterisks for the current row
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}