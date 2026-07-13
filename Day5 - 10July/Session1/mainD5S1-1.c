// C Program Training
// Day 5 (10-July) - Session 1(09.10AM to 10.50AM)
// Program 1
// Working in pass by value in C programming language

#include <stdio.h> // Header file for input and output functions

void passByValue(int num) { // Function to demonstrate pass by value
    num = num + 10; // Modify the value of num
    printf("Inside passByValue function: %d\n", num); // Print the modified value
}

int main() { // main function where the program execution begins

    int number = 5; // Initialize a variable with a value

    // Print program details
    printf("C Program Training\n");
    printf("Day 5 - Session 1\n");
    printf("Title: Working of pass by value in C programming language\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Demonstrate pass by value
    printf("Before calling passByValue function: %d\n", number); // Print the original value
    passByValue(number); // Call the function and pass the variable
    printf("After calling passByValue function: %d\n", number); // Print the value after function call

    return 0; // Return statement indicating successful execution
}