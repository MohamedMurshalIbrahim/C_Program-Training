// C Program Training
// Day 3 (08-July) - Session 2(03.10PM to 04.20PM)
// Program 1
// Find the factorial of a given number using recursion

#include <stdio.h> // Header file for input and output functions

// Recursive function
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int main() {

    int num, factorial;

    printf("C Program Training\n");
    printf("Day 3 - Session 2\n");
    printf("Title: Find the factorial of a given number using recursion\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input number
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial = factorial_recursive(num);
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}