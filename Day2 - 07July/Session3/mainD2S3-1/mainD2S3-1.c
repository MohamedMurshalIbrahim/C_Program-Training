// C Program Training
// Day 2(07-July) - Session 3(01.30PM to 04.20PM)
// Program 1
// Infinite loop using for loop

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    int i, j; // Initializing variables

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 3\n");
    printf("Title: Infinite loop using for loop\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    // Infinite loop using for loop
    for (i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d %d\n", i, j); // Printing the values of i and j
        }
    }

    return 0; // Indicating that the program has executed successfully
}