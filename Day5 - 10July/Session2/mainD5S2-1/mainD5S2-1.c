// C Program Training
// Day 5 (10-July) - Session 2(11.10AM to 12.50PM)
// Program 1
// pass by reference in C programming language

#include <stdio.h> // Header file for input and output functions

void updateValue(int *y){ // Function to demonstrate pass by reference
    printf("Address stored in y: %p\n", (void*)y); // Print the address stored in y
    printf("Value at address y: %d\n", *y); // Print the value at the address pointed to by y

    *y = *y + 10; // Modify the value of y using pointer dereferencing
    
}

int main() { // main function where the program execution begins
    
    int x = 50; // Initialize a variable with a value
    
     // Print program details
    printf("C Program Training\n");
    printf("Day 5 - Session 2\n");
    printf("Title: pass by reference in C programming language\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    printf("value of x = %d\n", x); // 
    printf("Address of x = %p\n", (void *)&x);


    updateValue(&x);

    printf("Updated value of x = %d\n", x);

    return 0;
    
}