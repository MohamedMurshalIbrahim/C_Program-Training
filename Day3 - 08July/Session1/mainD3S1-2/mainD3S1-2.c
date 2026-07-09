// C Program Training
// Day 3(08-July) - Session 1(01.30PM to 03.00PM)
// Program 2
// Palindrome check for a given number

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    int num, originalNum, reversedNum = 0, remainder;

    printf("C Program Training\n");
    printf("Day 3 - Session 1\n");
    printf("Title: Check if a number is a palindrome\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input number
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from num
    }
    
    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}