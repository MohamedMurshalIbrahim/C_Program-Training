// C Program Training
// Day 4 (09-July) - Session 2(01.30PM to 03.00PM)
// Program 3
// Create a 5 * 5 multiplication table

#include <stdio.h> // Header file for input and output functions

int main() { // main function where the program execution begins

    int i, j; // Loop variables for rows and columns

    printf("C Program Training\n");
    printf("Day 4 - Session 2\n");
    printf("Title: Draw a 5 * 5 square using asterisks\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print the square
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", i * 5 + j + 1); // Print numbers from 1 to 25
        }
        printf("\n");
    }

    return 0;
}