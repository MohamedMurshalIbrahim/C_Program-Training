// C Program Training
// Day 2(07-July) - Session 3(01.30PM to 04.20PM)
// Program 2
// Using do while loop to print the numbers that are not divisible by 3 prompted by the user

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    int num, i = 1; // Initializing variables

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 3\n");
    printf("Title: Using do while loop to print the numbers that are not divisible by 3 prompted by the user\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    // Taking input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using do while loop to print numbers not divisible by 3
    printf("Numbers from 1 to %d that are not divisible by 3:\n", num);
    do {
        if (i % 3 != 0) { // Check if the number is not divisible by 3
            printf("%d ", i);
        }
        i++;
    } while (i <= num);
    
    printf("\n");

    return 0; // Indicating that the program has executed successfully
}