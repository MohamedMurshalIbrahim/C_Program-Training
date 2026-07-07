// C Program Training
// Day 1(06-July) - Practice
// Program 1
// Find the leap year or not by taking the year as input from the user

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variable to store the year entered by the user
    int year;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Practice 1\n");
    printf("Title: Find the leap year or not by taking the year as input from the user\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the year entered by the user
    printf("Enter Year : ");
    scanf("%d", &year);

    //Checking if the year is a leap year or not
    if (year % 4 == 0) { //If the year is divisible by 4
        if (year % 100 == 0) { //If the year is divisible by 100
            if (year % 400 == 0) { //If the year is divisible by 400
                printf("%d is a Leap Year.\n", year); //It is a leap year
            } else {
                printf("%d is not a Leap Year.\n", year); //It is not a leap year
            }
        } else {
            printf("%d is a Leap Year.\n", year); //It is a leap year
        }
    } else {
        printf("%d is not a Leap Year.\n", year); //It is not a leap year
    }

    return 0; //indicating that the program has executed successfully
}