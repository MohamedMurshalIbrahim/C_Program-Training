// C Program Training
// Day 1(06-July) - Session 2(11.10AM to 12.50PM)
// Program 1
// Getting Two Numbers from the User and Performing Arithmetic Operations

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name and age of the person
    char name[] = "Mohamed Murshal Ibrahim T"; //storing the name of the person
    int a, b;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 2\n");
    printf("Title: Getting Two Numbers from the User and Performing Arithmetic Operations\n"); //indicating that the program
    printf("Welcome %s\n", name); //printing the name of the person

    //Taking input for the name of the person
    printf("Enter Two Numbers\n"); //Getting input for two numbers from the user

    printf("Enter A : "); //prompting the user to enter the first number
    scanf("%d", &a); //taking input for the first number

    printf("Enter B : "); //prompting the user to enter the second number
    scanf("%d", &b); //taking input for the second number

    printf("The two numbers are %d and %d\n", a, b); //printing the two numbers

    printf("Arithmetic Operations of a & b\n"); //indicating that arithmetic operations will be performed on the two numbers

    //Calculating the sum of the two numbers
    printf("Addition        = %d\n", a + b); //print the sum of the two numbers

    //Calculating the difference of the two numbers
    printf("Subtraction     = %d\n", a - b); //print the difference of the two numbers

    //Calculating the product of the two numbers
    printf("Multiplication  = %d\n", a * b); //print the product of the two numbers

    //Calculating the quotient of the two numbers
    printf("Division        = %d\n", a / b); //print the quotient of the two numbers

    return 0; //indicating that the program has executed successfully
}