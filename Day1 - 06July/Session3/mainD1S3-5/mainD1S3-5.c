// C Program Training
// Day 1(06-July) - Session 3(01.30PM to 03.00PM)
// Program 4
// Swap two numbers entered by the user without using a temporary variable

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name and two numbers entered by the user
    char name[100];
    int a, b;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 3\n");
    printf("Title: Swap two numbers entered by the user without using a temporary variable\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the name of the person
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    //Taking input for the two numbers entered by the user
    printf("Enter Two Numbers\n");
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);

    //Swapping the two numbers without using a temporary variable
    a = a + b; //Adding both numbers and storing in 'a'
    b = a - b; //Subtracting 'b' from new 'a' to get original 'a'
    a = a - b; //Subtracting new 'b' from new 'a' to get original 'b'

    //Printing the swapped numbers
    printf("After Swapping:\n");
    printf("Number 1 = %d\n", a);
    printf("Number 2 = %d\n", b);

    return 0; //indicating that the program has executed successfully
}