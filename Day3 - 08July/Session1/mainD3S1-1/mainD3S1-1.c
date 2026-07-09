// C Program Training
// Day 3(08-July) - Session 1(01.30PM to 03.00PM)
// Program 1
// Access and Display Integer and String Array Elements by Index

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    int num[5];          // Integer array of size 5
    char arr[5][50];     
    int index;

    printf("C Program Training\n");
    printf("Day 3 - Session 1\n");
    printf("Title: Create and print elements of two arrays after selecting the index\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input integer array
    printf("\nEnter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Input string array
    printf("\nEnter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%s", arr[i]);   
    }

    // Input index
    printf("\nEnter the index (0-4): ");
    scanf("%d", &index);

    // Check if the index is valid
    if (index >= 0 && index < 5) {
        printf("\nAt index %d:\n", index);
        printf("Number : %d\n", num[index]);
        printf("Word   : %s\n", arr[index]);
    } else {
        printf("Invalid index! Please enter a value between 0 and 4.\n");
    }

    return 0;
}