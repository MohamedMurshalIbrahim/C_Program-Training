// C Program Training
// Day 2(07-July) - Session 2(11.10AM to 12.50PM)
// Program 1
// Print first 11 whole numbers using for loop and print the even numbers from the whole numbers using if statement

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 2\n");
    printf("Title: Print first 11 whole numbers using for loop and print the even numbers from the whole numbers using if statement\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    // Loop to print first 11 whole numbers
    printf("First 11 Whole Numbers:\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Loop to print even numbers from the first 11 whole numbers
    printf("Even Numbers from the First 11 Whole Numbers:\n");
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) { // Check if the number is even
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0; // Indicating that the program has executed successfully
}