// C Program Training
// Day 1(06-July) - Session 3(01.30PM to 03.00PM)
// Program 2
// Find The maximum number among the three numbers entered by the user

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name and three numbers entered by the user
    char name[100];
    int a, b, c;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 3\n");
    printf("Title: Find The maximum number among the three numbers entered by the user\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the name of the person
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    //Taking input for the three numbers entered by the user
    printf("Enter Three Numbers\n");
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);
    printf("Enter Number 3 : ");
    scanf("%d", &c);

    //Finding the maximum number among the three numbers entered by the user
    if (a >= b && a >= c) {
        printf("The maximum number is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The maximum number is %d\n", b);
    } else {
        printf("The maximum number is %d\n", c);
    }

    return 0; //indicating that the program has executed successfully
}