// C Program Training
// Day 2(07-July) - Session 3(01.30PM to 04.20PM)
// Program 3
// using functions to find the area of circle, rectangle, and square sequentially

#include <stdio.h> // Header file for input and output functions

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return 3.14159 * radius * radius; // Area = π * r^2
}

// Function to calculate the area of a rectangle
float areaOfRectangle(float length, float width) {
    return length * width; // Area = length * width
}

// Function to calculate the area of a square
float areaOfSquare(float side) {
    return side * side; // Area = side^2
}

int main() { // Main function where the execution of the program begins

    float radius, length, width, side; // Variables for dimensions
    float circleArea, rectangleArea, squareArea; // Variables for areas

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 3\n");
    printf("Title: Using functions to find the area of circle, rectangle, and square sequentially\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circleArea = areaOfCircle(radius); // Calculate area of circle
    printf("Area of Circle: %.2f\n", circleArea);

    // Input for rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    rectangleArea = areaOfRectangle(length, width); // Calculate area of rectangle
    printf("Area of Rectangle: %.2f\n", rectangleArea);

    // Input for square
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    squareArea = areaOfSquare(side); // Calculate area of square
    printf("Area of Square: %.2f\n", squareArea);

    return 0; // Indicating that the program has executed successfully
}