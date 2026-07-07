// C Program Training
// Day 1(06-July) - Session 3(01.30PM to 03.00PM)
// Program 3
// Find the area of circle, rectangle, and square in the sequence

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name, choice, radius, length, breadth, and side of the shapes
    char name[100];
    const float PI = 3.14; //Defining the value of PI as a constant
    float length, breadth, side;
    float radius;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 3\n");
    printf("Title: Find the area of circle, rectangle, and square in the sequence\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the name of the person
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    //Taking input to find the area of circle
    printf("Enter Radius of Circle : ");
    scanf("%f", &radius);
    printf("Area of Circle = %f\n\n", PI * radius * radius); //Calculating and printing the area of circle

    //Taking input to find the area of rectangle
    printf("Enter Length of Rectangle : ");
    scanf("%f", &length);
    printf("Enter Breadth of Rectangle : ");
    scanf("%f", &breadth);
    printf("Area of Rectangle = %.2f\n\n", length * breadth); //Calculating and printing the area of rectangle

    //Taking input to find the area of square
    printf("Enter Side of Square : ");
    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side); //Calculating and printing the area of square

    return 0; //indicating that the program has executed successfully
}
    