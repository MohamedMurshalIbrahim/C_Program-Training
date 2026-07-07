// C Program Training
// Day 1(06-July) - Practice
// Program 2
// Swap two numbers entered by the user with XOR operator

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name and two numbers entered by the user
    char name[100];
    int a, b;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Practice 2\n");
    printf("Title: Swap two numbers entered by the user with XOR operator\n");
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

    //Swapping the two numbers using XOR operator
    a = a ^ b; //XORing both numbers and storing in 'a'
    b = a ^ b; //XORing new 'a' with 'b' to get original 'a'
    a = a ^ b; //XORing new 'a' with new 'b' to get original 'b'

    //Printing the swapped numbers
    printf("After Swapping:\n");
    printf("Number 1 = %d\n", a);
    printf("Number 2 = %d\n", b);

    return 0; //indicating that the program has executed successfully
}