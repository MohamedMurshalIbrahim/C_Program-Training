// C Program Training
// Day 5 (10-July) - Session 3(01.30PM to 03.00PM)
// Program 1
// Fibonacci Series using functions in C program

#include <stdio.h> // Header file for input and output functions

// Recursive function
int fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {

    int num, i;

    printf("C Program Training\n");
    printf("Day 5 - Session 2\n");
    printf("Title: Generate the Fibonacci series using recursion\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input number of terms
    printf("\nEnter the number of terms: ");
    scanf("%d", &num);

    // Check if the number of terms is valid
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");

        for (i = 0; i < num; i++) {
            printf("%d ", fibonacci_recursive(i));
        }

        printf("\n");
    }

    return 0;
}