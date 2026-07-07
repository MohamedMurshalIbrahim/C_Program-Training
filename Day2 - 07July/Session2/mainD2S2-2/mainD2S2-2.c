// C Program Training
// Day 2(07-July) - Session 2(11.10AM to 12.50PM)
// Program 2
// Print first 100 numbers using while loop and print the odd numbers from the numbers

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 2\n");
    printf("Title: Print first 100 numbers using while loop and print the odd numbers from the numbers\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    int i = 1; // Initializing variable for counting

    // Loop to print first 100 numbers using while loop
    printf("First 100 Numbers:\n");
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Resetting i for printing odd numbers
    i = 1;

    // Loop to print odd numbers from the first 100 numbers
    printf("Odd Numbers from the First 100 Numbers:\n");
    while (i <= 100) {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0; // Indicating that the program has executed successfully
}